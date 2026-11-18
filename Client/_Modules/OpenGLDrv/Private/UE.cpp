// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 23

// DereferenceIfNecessary<FOpenGLProgramBinaryCache,FOpenGLProgramBinaryCache_*_&> @ 145bd80d0

FOpenGLProgramBinaryCache * __cdecl
UE::Core::Private::DereferenceIfNecessary<FOpenGLProgramBinaryCache,FOpenGLProgramBinaryCache_*_&>
          (FOpenGLProgramBinaryCache **param_1)

{
  return *param_1;
}

// ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FOpenGLVertexElement>_> @ 145bdcce0

void __cdecl
UE::Core::Private::ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FOpenGLVertexElement>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FOpenGLVertexElement> *param_5,int param_6,int *param_7)

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

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>_> @ 145bdcd90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>_>
          (ushort param_1,
          ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams> *param_2,int *param_3)

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
    ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>_> @ 145bdce60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>_>
          (ushort param_1,ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo> *param_2,
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
    if (uVar1 < 8) {
      iVar8 = 7;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 8) {
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
    TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FOpenGLVertexElement>_> @ 145bdcf30

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FOpenGLVertexElement>_>
          (ushort param_1,ForElementType<FOpenGLVertexElement> *param_2,int *param_3)

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

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>_> @ 145bdcfa0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>_>
          (uint param_1,uint param_2,
          ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams> *param_3,int param_4,
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
    ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0> @ 145bde2e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>
          (FOpenGLResourceBinder *param_1,FRHIShader *param_2,ushort *param_3,
          FRHIUniformBuffer *(*param_4) [14],FTracker *param_5)

{
  EShaderFrequency EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRHIUniformBufferLayout *pFVar4;
  FOpenGLSamplerState *pFVar5;
  FRHIUnorderedAccessView *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  FRHIUnorderedAccessView **ppFVar16;
  FScriptContainerElement *pFVar17;
  uint *puVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  FRHIUniformBuffer *pFVar22;
  longlong lVar23;
  undefined1 local_134 [4];
  uint local_130;
  longlong local_128;
  FRHIUniformBuffer *local_120;
  uint local_118;
  int local_114;
  float local_110;
  uint local_10c;
  FString local_108;
  longlong local_f8;
  longlong local_f0;
  TRefCountPtr<FRHIUniformBufferLayout_const_> *local_e8;
  uint local_e0;
  FString local_d8;
  <lambda_2> local_c8;
  <lambda_1> local_b0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  bVar12 = false;
  bVar9 = false;
  bVar11 = false;
  bVar8 = false;
  local_110 = (float)(double)FApp::CurrentTime;
  local_10c = (uint)param_2->_padding_ & (uint)*param_3;
  if (local_10c == 0) {
    *param_3 = 0;
    return;
  }
  do {
    uVar13 = -local_10c & local_10c;
    local_e0 = 0;
    if (uVar13 != 0) {
      for (; (uVar13 >> local_e0 & 1) == 0; local_e0 = local_e0 + 1) {
      }
    }
    uVar21 = 0x20;
    if (uVar13 != 0) {
      uVar21 = local_e0;
    }
    local_10c = local_10c & local_10c - 1;
    local_130 = uVar21;
    if (((int)param_2->_padding_ <= (int)uVar21) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferIndex < SRT.ResourceTableLayoutHashes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                            ,0x61,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar23 = (longlong)(int)uVar21;
    pFVar22 = (*param_4)[lVar23];
    local_120 = pFVar22;
    local_f8 = lVar23;
    if (pFVar22 == (FRHIUniformBuffer *)0x0) {
      if (((int)uVar21 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar21)) {
        bVar8 = true;
        pFVar15 = ::FString::FString(&local_90,L"<unknown>");
      }
      else {
        if (((int)uVar21 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar11 = true;
        pFVar15 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.AllocatorInstance.
                                              Data + lVar23 * 8),&local_80);
      }
      pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
      if ((bVar8) &&
         (bVar8 = false, local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if ((bVar11) &&
         (bVar11 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      Logging::Private::BasicFatalLog
                (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,class_FRHIUniformBuffer*___ptr64_[14],unsigned_short,0>(FOpenGLResourceBinder&&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FRHIUniformBuffer*___ptr64_(&___ptr64)[14],RHIValidation::FTracker*___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      local_128 = lVar23 * 4;
    }
    else {
      local_118 = ~uVar21 >> 0x1f;
      uVar13 = 0;
      if ((int)local_130 < (int)param_2->_padding_) {
        uVar13 = local_118;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_128 = lVar23 * 4;
      local_e8 = &pFVar22->Layout;
      pFVar4 = local_e8->Reference;
      pFVar22 = local_120;
      uVar21 = local_130;
      local_f0 = local_128;
      if (pFVar4->Hash != *(uint *)(local_128 + param_2->_padding_)) {
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        pFVar17 = (pFVar4->Resources).AllocatorInstance.Data;
        iVar2 = (pFVar4->Resources).ArrayNum;
        pFVar3 = pFVar17 + (longlong)iVar2 * 4;
        while( true ) {
          if ((pFVar4->Resources).ArrayNum != iVar2) {
            local_134[0] = 0;
            `TCheckedPointerIterator<FRHIUniformBufferResource_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_134);
          }
          uVar21 = local_118;
          uVar13 = local_130;
          if (pFVar17 == pFVar3) break;
          ::FString::PrintfImpl(&local_d8,L"%s%d");
          iVar19 = local_d8.Data.ArrayNum + -1;
          if (local_d8.Data.ArrayNum == 0) {
            iVar19 = 0;
          }
          ::FString::AppendChars(&local_108,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar19);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          pFVar17 = pFVar17 + 4;
        }
        local_114 = (pFVar4->Resources).ArrayNum;
        local_128 = CONCAT44(local_128._4_4_,pFVar4->ConstantBufferSize);
        uVar14 = 0;
        if ((int)local_130 < (int)param_2->_padding_) {
          uVar14 = local_118;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar23 = local_f8;
        if (((int)uVar13 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar13)) {
          bVar9 = true;
          pFVar15 = ::FString::FString(&local_70,L"<unknown>");
        }
        else {
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar12 = true;
          pFVar15 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.
                                                AllocatorInstance.Data + lVar23 * 8),local_60);
        }
        pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
        (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar15->Data).ArrayNum = 0;
        (pFVar15->Data).ArrayMax = 0;
        if ((bVar9) &&
           (bVar9 = false, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if ((bVar12) &&
           (bVar12 = false,
           local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        uVar21 = local_130;
        Logging::Private::BasicFatalLog
                  (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,class_FRHIUniformBuffer*___ptr64_[14],unsigned_short,0>(FOpenGLResourceBinder&&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FRHIUniformBuffer*___ptr64_(&___ptr64)[14],RHIValidation::FTracker*___ptr64)'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        lVar23 = local_f0;
        local_128 = local_f0;
        pFVar22 = local_120;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
          pFVar22 = local_120;
          local_128 = lVar23;
        }
      }
    }
    lVar20 = local_128;
    local_b0.Tracker = &param_5;
    local_b0.CurrentTimeForTextureTimes = &local_110;
    local_b0.Shader = param_2;
    local_b0.Binder = param_1;
    EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_1>_>
              (pFVar22,uVar21,(uint *)param_2->_padding_,&local_b0);
    local_c8.Tracker = &param_5;
    local_c8.Shader = param_2;
    local_c8.Binder = param_1;
    EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_2>_>
              (pFVar22,uVar21,(uint *)param_2->_padding_,&local_c8);
    lVar23 = param_2->_padding_;
    pFVar3 = (pFVar22->ResourceTable).AllocatorInstance.Data;
    uVar13 = *(uint *)(lVar23 + lVar20);
    if (uVar13 != 0) {
      uVar14 = *(uint *)(lVar23 + (ulonglong)uVar13 * 4);
      puVar18 = (uint *)(lVar23 + ((ulonglong)uVar13 + 1) * 4);
      do {
        if ((*(longlong *)(pFVar3 + (ulonglong)(uVar14 >> 8 & 0xffff) * 8) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLCommands.cpp"
                            ,0x465,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = *puVar18;
        puVar18 = puVar18 + 1;
      } while (uVar14 >> 0x18 == uVar21);
    }
    lVar23 = param_2->_padding_;
    pFVar3 = (pFVar22->ResourceTable).AllocatorInstance.Data;
    uVar13 = *(uint *)(lVar23 + lVar20);
    if (uVar13 != 0) {
      uVar14 = *(uint *)(lVar23 + (ulonglong)uVar13 * 4);
      puVar18 = (uint *)(lVar23 + ((ulonglong)uVar13 + 1) * 4);
      do {
        pFVar5 = *(FOpenGLSamplerState **)(pFVar3 + (ulonglong)(uVar14 >> 8 & 0xffff) * 8);
        if ((pFVar5 == (FOpenGLSamplerState *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FOpenGLDynamicRHI::InternalSetSamplerStates
                  (param_1->RHI,(uVar14 & 0xff) + param_1->FirstTextureUnit,pFVar5);
        uVar14 = *puVar18;
        puVar18 = puVar18 + 1;
        lVar20 = local_128;
      } while (uVar14 >> 0x18 == uVar21);
    }
    lVar23 = param_2->_padding_;
    uVar13 = *(uint *)(lVar23 + lVar20);
    pFVar3 = (local_120->ResourceTable).AllocatorInstance.Data;
    if (uVar13 != 0) {
      uVar14 = *(uint *)(lVar23 + (ulonglong)uVar13 * 4);
      puVar18 = (uint *)(lVar23 + ((ulonglong)uVar13 + 1) * 4);
      do {
        pFVar6 = *(FRHIUnorderedAccessView **)(pFVar3 + (ulonglong)(ushort)(uVar14 >> 8) * 8);
        if ((pFVar6 == (FRHIUnorderedAccessView *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (param_5 != (FTracker *)0x0) {
          EVar1 = param_2->Frequency;
          if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
              (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
            lVar23 = 0x10;
          }
          else {
            lVar23 = 0;
          }
          ppFVar16 = RHIValidation::FTracker::FUAVTracker::operator[]
                               ((FUAVTracker *)
                                ((longlong)&param_5->UAVTrackers[0].UAVs.AllocatorInstance.Data +
                                lVar23),uVar14 & 0xff);
          *ppFVar16 = pFVar6;
        }
        FOpenGLResourceBinder::SetUAV(param_1,pFVar6,(uchar)uVar14);
        uVar14 = *puVar18;
        puVar18 = puVar18 + 1;
      } while (uVar14 >> 0x18 == uVar21);
    }
    if (local_10c == 0) {
      *param_3 = 0;
      return;
    }
  } while( true );
}

// operator<< @ 145beaec0

FArchive * __cdecl UE::OpenGL::operator<<(FArchive *param_1,FBinaryCacheFileHeader *param_2)

{
  uint *puVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Version);
    }
  }
  else {
    param_2->Version = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if (param_2->Version == 6) goto LAB_145beaf59;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsLoading() || Header.IsValidVersion()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                       ,0x85,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (param_2->Version != 6) {
    return param_1;
  }
LAB_145beaf59:
  ::operator<<(param_1,&param_2->BinaryCacheGuid);
  ::operator<<(param_1,&param_2->bCacheUsesCompressedBinaries);
  puVar1 = &param_2->ProgramCount;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->ValidSize;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      return param_1;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  *puVar1 = *puVar2;
  **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  return param_1;
}

// AreBinaryProgramsCompressed @ 145bf2110

bool __cdecl UE::OpenGL::AreBinaryProgramsCompressed(void)

{
  int iVar1;
  IConsoleManager *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar2 = IConsoleManager::Get();
      StoreCompressedBinariesCVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar2 + 0xc0))
                     (pIVar2,L"r.OpenGL.StoreCompressedProgramBinaries",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar1 = (**(code **)(*(longlong *)StoreCompressedBinariesCVar + 200))();
  return iVar1 != 0;
}

// CalculateSubresourceOffset @ 145bf4b10

ulong64 __cdecl
UE::RHITextureUtils::CalculateSubresourceOffset
          (FRHITextureDesc *param_1,int param_2,int param_3,int param_4,ulong64 *param_5,
          ulong64 *param_6)

{
  EPixelFormat EVar1;
  bool bVar2;
  ulong64 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar7;
  ulong64 uVar8;
  longlong lVar9;
  ulong64 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulong64 uVar6;
  
  uVar6 = 0;
  if ((param_1->Dimension == TextureCube) || (bVar2 = false, param_1->Dimension == TextureCubeArray)
     ) {
    bVar2 = true;
  }
  lVar9 = 1;
  if (bVar2) {
    lVar9 = 6;
  }
  lVar9 = lVar9 * param_3 + (longlong)param_2;
  uVar3 = uVar6;
  if (lVar9 != 0) {
    uVar3 = CalculateTexturePlaneSize(param_1);
  }
  uVar3 = uVar3 * lVar9;
  uVar10 = uVar6;
  if (param_4 < 0) {
    return uVar3;
  }
  do {
    EVar1 = param_1->Format;
    bVar4 = (byte)uVar6;
    uVar7 = (uint)(param_1->Extent).field0_0x0._s_0.X >> (bVar4 & 0x1f);
    uVar5 = 1;
    if (1 < uVar7) {
      uVar5 = uVar7;
    }
    uVar11 = (uint)(param_1->Extent).field0_0x0._s_0.Y >> (bVar4 & 0x1f);
    uVar7 = 1;
    if (1 < uVar11) {
      uVar7 = uVar11;
    }
    uVar11 = (uint)(param_1->Depth >> (bVar4 & 0x1f));
    uVar13 = (ulonglong)((GPixelFormats[EVar1].BlockSizeY - 1U) + uVar7) /
             (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeY;
    uVar7 = 1;
    if (1 < uVar11) {
      uVar7 = uVar11;
    }
    uVar7 = ((GPixelFormats[EVar1].BlockSizeZ - 1U) + uVar7) / (uint)GPixelFormats[EVar1].BlockSizeZ
    ;
    iVar14 = (int)(CONCAT44(0 >> (bVar4 & 0x1f),(uVar5 - 1) + GPixelFormats[EVar1].BlockSizeX) /
                  (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeX);
    if (iVar14 == 0) {
      iVar14 = 1;
    }
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    if ((int)uVar13 == 0) {
      uVar13 = 1;
    }
    uVar12 = (ulonglong)(uint)(iVar14 * GPixelFormats[EVar1].BlockBytes);
    uVar8 = uVar7 * uVar13 * uVar12;
    if ((int)uVar6 == param_4) {
      *param_6 = uVar8;
      *param_5 = uVar12;
    }
    else {
      uVar10 = uVar10 + uVar8;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulong64)uVar5;
  } while ((int)uVar5 <= param_4);
  return uVar3 + uVar10;
}

// CalculateTexturePlaneSize @ 145bf4ca0

ulong64 __cdecl UE::RHITextureUtils::CalculateTexturePlaneSize(FRHITextureDesc *param_1)

{
  EPixelFormat EVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulong64 uVar10;
  
  uVar6 = 0;
  if (param_1->NumMips != 0) {
    EVar1 = param_1->Format;
    uVar10 = uVar6;
    do {
      bVar3 = (byte)uVar10;
      uVar4 = (uint)(param_1->Extent).field0_0x0._s_0.X >> (bVar3 & 0x1f);
      uVar9 = 1;
      if (1 < uVar4) {
        uVar9 = uVar4;
      }
      uVar5 = (uint)(param_1->Extent).field0_0x0._s_0.Y >> (bVar3 & 0x1f);
      uVar4 = 1;
      if (1 < uVar5) {
        uVar4 = uVar5;
      }
      uVar2 = CONCAT44(0 >> (bVar3 & 0x1f),(uVar4 - 1) + GPixelFormats[EVar1].BlockSizeY) /
              (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeY;
      uVar5 = (uint)(param_1->Depth >> (bVar3 & 0x1f));
      uVar4 = 1;
      if (1 < uVar5) {
        uVar4 = uVar5;
      }
      uVar4 = ((uVar4 - 1) + GPixelFormats[EVar1].BlockSizeZ) /
              (uint)GPixelFormats[EVar1].BlockSizeZ;
      iVar8 = (int)(CONCAT44(0 >> (bVar3 & 0x1f),(uVar9 - 1) + GPixelFormats[EVar1].BlockSizeX) /
                   (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeX);
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      uVar7 = uVar2 & 0xffffffff;
      if ((int)uVar2 == 0) {
        uVar7 = 1;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulong64)uVar9;
      uVar6 = uVar6 + (ulonglong)(uint)(iVar8 * GPixelFormats[EVar1].BlockBytes) * (ulonglong)uVar4
                      * uVar7;
    } while (uVar9 < param_1->NumMips);
  }
  return uVar6;
}

// CanMemoryMapGLProgramCache @ 145bf51d0

bool __cdecl UE::OpenGL::CanMemoryMapGLProgramCache(void)

{
  return GMemoryMapGLProgramCache;
}

// CompressProgramBinary @ 145bf8660

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::OpenGL::CompressProgramBinary
          (TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  uchar *puVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  FNameEntryId FVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStackX_24;
  
  pTVar7 = CVarStoreCompressedBinaries.Ref;
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    lVar12 = 4;
    if (!bVar8) goto LAB_145bf869b;
  }
  lVar12 = 0;
LAB_145bf869b:
  if (*(int *)((longlong)pTVar7->ShadowedValue + lVar12) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsStoringCompressedBinaryPrograms()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBinaryProgramUtils.cpp"
                       ,0x49,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar1 = &param_2->ArrayNum;
  if (param_2->ArrayNum != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProgramBinaryOUT.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBinaryProgramUtils.cpp"
                       ,0x4a,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar11 = param_1->ArrayNum;
  FVar9 = FNameEntryId::FromValidEName((EName)local_res10);
  uStackX_24 = 0;
  local_res20 = *(uint *)CONCAT44(extraout_var,FVar9.Value);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = local_res20;
  local_res8[0] = FCompression::CompressMemoryBound(FVar5,iVar11,COMPRESS_NoFlags,0);
  piVar2 = &param_2->ArrayMax;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,local_res8[0] + 4,&param_2->AllocatorInstance,piVar1,piVar2);
  iVar11 = param_1->ArrayNum;
  puVar3 = param_1->DataPtr;
  pFVar13 = (param_2->AllocatorInstance).Data;
  FVar9 = FNameEntryId::FromValidEName((EName)local_res18);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar9.Value);
  bVar8 = FCompression::CompressMemory
                    (FVar6,pFVar13 + 4,local_res8,puVar3,iVar11,COMPRESS_NoFlags,0);
  if (bVar8) {
    iVar11 = *piVar1;
    uVar14 = local_res8[0] + 4;
    if (iVar11 < (int)uVar14) {
      iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,uVar14 - iVar11,&param_2->AllocatorInstance,piVar1,piVar2);
      memset((param_2->AllocatorInstance).Data + iVar10,0,(longlong)(int)(uVar14 - iVar11));
    }
    else {
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      if ((int)uVar14 < iVar11) {
        uVar15 = iVar11 - uVar14;
        if ((int)(uVar15 | uVar14) < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar15 != 0) {
          pFVar13 = (param_2->AllocatorInstance).Data + (int)uVar14;
          iVar11 = (*piVar1 - uVar15) - uVar14;
          if (iVar11 != 0) {
            memmove(pFVar13,pFVar13 + (int)uVar15,(longlong)iVar11);
          }
          *piVar1 = *piVar1 - uVar15;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&param_2->AllocatorInstance,*piVar1,piVar2);
        }
      }
    }
    iVar11 = *piVar1;
    if (*piVar2 != iVar11) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar11,&param_2->AllocatorInstance,iVar11,piVar2);
    }
    *(int *)(param_2->AllocatorInstance).Data = param_1->ArrayNum;
  }
  else {
    if (4 < (byte)LogRHI._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_2,param_1->ArrayNum + 4,Default);
    *(undefined4 *)(param_2->AllocatorInstance).Data = 0xffffffff;
    memcpy((param_2->AllocatorInstance).Data + 4,param_1->DataPtr,(longlong)param_1->ArrayNum);
  }
  return;
}

// CreateGLProgramFromBinary @ 145bf93a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::OpenGL::CreateGLProgramFromBinary(uint *param_1,TArrayView<unsigned_char_const_,int> *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_OpenGLCreateProgramFromBinaryTime> FVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  longlong lVar12;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  lVar12 = 0;
  FVar8 = StatPtr_STAT_OpenGLCreateProgramFromBinaryTime;
  if (StatPtr_STAT_OpenGLCreateProgramFromBinaryTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLCreateProgramFromBinaryTime>)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_OpenGLCreateProgramFromBinaryTime");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_OpenGLCreateProgramFromBinaryTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLCreateProgramFromBinaryTime,
                       *pFVar7,L"Program create from binary time","STATGROUP_OpenGLRHI",
                       "STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar10.Value;
        local_res18.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0x5a4);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      goto LAB_145bf94fc;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_145bf94fc:
  pTVar5 = CVarStoreCompressedBinaries.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      lVar12 = 4;
    }
  }
  if (*(int *)((longlong)pTVar5->ShadowedValue + lVar12) == 0) {
    bVar6 = CreateGLProgramFromUncompressedBinary(param_1,param_2);
  }
  else {
    bVar6 = CreateGLProgramFromCompressedBinary(param_1,param_2);
  }
  if (bVar6 != false) {
    SetNewProgramStats(*param_1);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_38.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_38);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return bVar6;
}

// CreateGLProgramFromCompressedBinary @ 145bf9640

/* WARNING: Removing unreachable block (ram,0x000145bf9ae5) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __cdecl
UE::OpenGL::CreateGLProgramFromCompressedBinary
          (uint *param_1,TArrayView<unsigned_char_const_,int> *param_2)

{
  int iVar1;
  int *piVar2;
  uchar *puVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  bool bVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  FNameEntryId FVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_bool___cdecl_UE::OpenGL::CreateGLProgramFromCompressedBinary(unsigned_int_&,TArrayView<unsigned_char_const_,int>_const_&)_::_3_::FStat_STAT_DecompressProgramBinary>
  FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  undefined4 extraout_var;
  FThreadSafeStaticStat<_bool___cdecl_UE::OpenGL::CreateGLProgramFromCompressedBinary(unsigned_int_&,TArrayView<unsigned_char_const_,int>_const_&)_::_6_::FStat_STAT_CreateProgramFromBinary>
  FVar17;
  FColor_u_0 FVar18;
  FName FVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  FColor_u_0 local_res10 [2];
  FColor_u_0 local_res18;
  uint uStackX_1c;
  undefined1 local_res20 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f8;
  uint local_e8;
  uint uStack_e4;
  FColor_u_0 local_e0;
  uint local_dc;
  uint local_d8;
  undefined4 uStack_d4;
  FName local_d0;
  FName local_c8;
  FName local_b8;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  FStatMessage local_88;
  TArrayView<unsigned_char_const_,int> local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  uVar22 = (ulonglong)_tls_index;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar22 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_DecompressProgramBinary =
         (FThreadSafeStaticStat<_bool___cdecl_UE::OpenGL::CreateGLProgramFromCompressedBinary(unsigned_int_&,TArrayView<unsigned_char_const_,int>_const_&)_::_3_::FStat_STAT_DecompressProgramBinary>
          )0x0;
    pFVar13 = ::FName::FName(&local_68,"STAT_DecompressProgramBinary");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecompressProgramBinary,*pFVar13,
               L"STAT_DecompressProgramBinary","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_DecompressProgramBinary;
  if (StatPtr_STAT_DecompressProgramBinary ==
      (FThreadSafeStaticStat<_bool___cdecl_UE::OpenGL::CreateGLProgramFromCompressedBinary(unsigned_int_&,TArrayView<unsigned_char_const_,int>_const_&)_::_3_::FStat_STAT_DecompressProgramBinary>
       )0x0) {
    pFVar13 = ::FName::FName(&local_60,"STAT_DecompressProgramBinary");
    FVar14 = (FThreadSafeStaticStat<_bool___cdecl_UE::OpenGL::CreateGLProgramFromCompressedBinary(unsigned_int_&,TArrayView<unsigned_char_const_,int>_const_&)_::_3_::FStat_STAT_DecompressProgramBinary>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecompressProgramBinary,
                          *pFVar13,L"STAT_DecompressProgramBinary","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar14;
  bVar11 = false;
  bVar7 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar18.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar20 = FVar19.Number;
  if ((FVar18.Bits == 0) && (uVar20 == 0)) {
LAB_145bf9833:
    bVar6 = false;
    FVar19 = local_c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar11 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.Bits = FVar18.Bits;
        local_dc = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_e0._s_0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0x596);
        bVar11 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bf9833;
    local_res18.Bits = FVar18.Bits;
    uStackX_1c = uVar20;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar6 = true;
  }
  if ((uint)param_2->ArrayNum < 5) {
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7848324208202350620>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBinaryProgramUtils.cpp"
                       ,0x1c,
                       "CompressedProgramBinary.Num() > sizeof(FCompressedProgramBinaryHeader)");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
LAB_145bf9878:
    bVar9 = false;
  }
  else {
    piVar2 = (int *)param_2->DataPtr;
    iVar1 = *piVar2;
    if (iVar1 != -1) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,&local_f8.AllocatorInstance,&local_f8.ArrayNum,&local_f8.ArrayMax);
      FVar8.Data = local_f8.AllocatorInstance.Data;
      if (*piVar2 != 0) {
        iVar1 = param_2->ArrayNum;
        puVar3 = param_2->DataPtr;
        lVar21 = (longlong)local_f8.ArrayNum;
        FVar12 = FNameEntryId::FromValidEName((EName)local_res20);
        local_d8 = *(uint *)CONCAT44(extraout_var,FVar12.Value);
        uStack_d4 = 0;
        FVar5.Number = 0;
        FVar5.ComparisonIndex.Value = local_d8;
        bVar9 = FCompression::UncompressMemory
                          (FVar5,FVar8.Data,lVar21,puVar3 + 4,(longlong)iVar1 + -4,COMPRESS_NoFlags,
                           0);
        if (bVar9) {
          bVar9 = true;
          goto LAB_145bf987b;
        }
      }
      goto LAB_145bf9878;
    }
    uVar20 = param_2->ArrayNum - 4;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_f8,uVar20,Default)
    ;
    memcpy(local_f8.AllocatorInstance.Data,param_2->DataPtr + 4,(ulonglong)uVar20);
    bVar9 = true;
  }
LAB_145bf987b:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_98.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&local_98);
      piVar2 = &pFVar15->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (!bVar9) {
    bVar11 = false;
    goto LAB_145bf9d3b;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar22 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    StatPtr_STAT_CreateProgramFromBinary =
         (FThreadSafeStaticStat<_bool___cdecl_UE::OpenGL::CreateGLProgramFromCompressedBinary(unsigned_int_&,TArrayView<unsigned_char_const_,int>_const_&)_::_6_::FStat_STAT_CreateProgramFromBinary>
          )0x0;
    pFVar13 = ::FName::FName(&local_58,"STAT_CreateProgramFromBinary");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateProgramFromBinary,*pFVar13,
               L"STAT_CreateProgramFromBinary","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS1);
  }
  FVar17 = StatPtr_STAT_CreateProgramFromBinary;
  if (StatPtr_STAT_CreateProgramFromBinary ==
      (FThreadSafeStaticStat<_bool___cdecl_UE::OpenGL::CreateGLProgramFromCompressedBinary(unsigned_int_&,TArrayView<unsigned_char_const_,int>_const_&)_::_6_::FStat_STAT_CreateProgramFromBinary>
       )0x0) {
    pFVar13 = ::FName::FName(local_50,"STAT_CreateProgramFromBinary");
    FVar17 = (FThreadSafeStaticStat<_bool___cdecl_UE::OpenGL::CreateGLProgramFromCompressedBinary(unsigned_int_&,TArrayView<unsigned_char_const_,int>_const_&)_::_6_::FStat_STAT_CreateProgramFromBinary>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateProgramFromBinary,
                          *pFVar13,L"STAT_CreateProgramFromBinary","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar17;
  bVar7 = false;
  bVar6 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar12 = FVar19.ComparisonIndex.Value;
  uVar20 = FVar19.Number;
  if ((FVar12.Value == 0) && (uVar20 == 0)) {
LAB_145bf9c1f:
    bVar9 = false;
    FVar19 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar12.Value;
        local_d0.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0x59c);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bf9c1f;
    local_e8 = FVar12.Value;
    uStack_e4 = uVar20;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar9 = true;
  }
  iVar1 = local_f8.ArrayNum;
  local_78.DataPtr = (uchar *)local_f8.AllocatorInstance.Data;
  if ((local_f8.ArrayNum < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_78.ArrayNum = iVar1;
  bVar11 = CreateGLProgramFromUncompressedBinary(param_1,&local_78);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_88.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&local_88);
      piVar2 = &pFVar15->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
LAB_145bf9d3b:
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return bVar11;
}

// CreateGLProgramFromUncompressedBinary @ 145bf9d70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::OpenGL::CreateGLProgramFromUncompressedBinary
          (uint *param_1,TArrayView<unsigned_char_const_,int> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  HGLRC pHVar6;
  
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar5 = (*glCreateProgram)();
  iVar1 = param_2->ArrayNum;
  if (iVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BinarySize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x583,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  (*glProgramBinary)(uVar5,*(uint *)param_2->DataPtr,(uint *)((longlong)param_2->DataPtr + 4),
                     iVar1 + -4);
  *param_1 = uVar5;
  bVar3 = VerifyLinkedProgram(uVar5);
  return bVar3;
}

// GetCompressedProgramBinaryFromGLProgram @ 145c01da0

bool __cdecl
UE::OpenGL::GetCompressedProgramBinaryFromGLProgram
          (uint param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar3 = GetUncompressedProgramBinaryFromGLProgram(param_1,&local_28);
  if (bVar3) {
    iVar2 = local_28.ArrayNum;
    local_18.DataPtr = (uchar *)local_28.AllocatorInstance.Data;
    if (local_28.ArrayNum < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    local_18.ArrayNum = iVar2;
    CompressProgramBinary(&local_18,param_2);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetProgramBinaryFromGLProgram @ 145c04250

FOpenGLProgramBinary * __cdecl
UE::OpenGL::GetProgramBinaryFromGLProgram(FOpenGLProgramBinary *__return_storage_ptr__,uint param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  FOpenGLProgramBinary *pFVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  TArrayView<unsigned_char_const_,int> local_18;
  
  pTVar2 = CVarStoreCompressedBinaries.Ref;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    lVar5 = 4;
    if (!bVar4) goto LAB_145c04296;
  }
  lVar5 = 0;
LAB_145c04296:
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) == 0) {
    GetUncompressedProgramBinaryFromGLProgram(param_1,&local_28);
  }
  else {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    bVar4 = GetUncompressedProgramBinaryFromGLProgram(param_1,&local_38);
    if (bVar4) {
      iVar3 = local_38.ArrayNum;
      local_18.DataPtr = (uchar *)local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FOpenGLProgramBinary *)(*pcVar1)();
          return pFVar6;
        }
      }
      local_18.ArrayNum = iVar3;
      CompressProgramBinary(&local_18,&local_28);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  FOpenGLProgramBinary::FOpenGLProgramBinary(__return_storage_ptr__,&local_28);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUncompressedProgramBinaryFromGLProgram @ 145c048c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::OpenGL::GetUncompressedProgramBinaryFromGLProgram
          (uint param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  HGLRC pHVar5;
  int local_res10 [2];
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (param_2->ArrayNum != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProgramBinaryOUT.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBinaryProgramUtils.cpp"
                       ,0x38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_res10[0] = -1;
  (*glGetProgramiv)(param_1,0x8741,local_res10);
  if (0 < local_res10[0]) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_2,local_res10[0] + 4,Default);
    pFVar1 = (param_2->AllocatorInstance).Data;
    (*glGetProgramBinary)(param_1,local_res10[0],local_res10,(uint *)pFVar1,pFVar1 + 4);
    return true;
  }
  return false;
}

// IsBinaryCacheValid @ 145c0a6f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::OpenGL::IsBinaryCacheValid
          (FString *param_1,FGuid *param_2,bool param_3,FBinaryCacheFileHeader *param_4)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IFileManager *pIVar5;
  FArchive *this;
  longlong lVar6;
  wchar_t *pwVar7;
  FString local_58;
  FBinaryCacheFileHeader local_48;
  
  pIVar5 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  this = (FArchive *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,pwVar7,0);
  if (this == (FArchive *)0x0) {
    if ((2 < (byte)LogRHI._0_1_) && (param_3)) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  else {
    local_48.Version = 0xffffffff;
    local_48.BinaryCacheGuid.A = 0;
    local_48.BinaryCacheGuid.B = 0;
    local_48.BinaryCacheGuid.C = 0;
    local_48.BinaryCacheGuid.D = 0;
    local_48.ProgramCount = 0;
    local_48.ValidSize = 0;
    lVar6 = (**(code **)(*(longlong *)this + 0x30))(this);
    if (0 < lVar6) {
      puVar1 = (uint *)**(undefined8 **)&this->field_0x8;
      if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar1 + 1) {
        if ((this->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this + 0x188))(this,&local_48,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this,&local_48.Version);
        }
      }
      else {
        local_48.Version = *puVar1;
        **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
      }
      if ((this->field_0x28 & 1) == 0) {
        if (local_48.Version != 6) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ar.IsLoading() || Header.IsValidVersion()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                             ,0x85,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          goto LAB_145c0a7f5;
        }
      }
      else {
LAB_145c0a7f5:
        if (local_48.Version != 6) goto LAB_145c0a8a5;
      }
      ::operator<<(this,&local_48.BinaryCacheGuid);
      ::operator<<(this,&local_48.bCacheUsesCompressedBinaries);
      puVar1 = (uint *)**(undefined8 **)&this->field_0x8;
      if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar1 + 1) {
        if ((this->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this + 0x188))(this,&local_48.ProgramCount,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this,&local_48.ProgramCount);
        }
      }
      else {
        local_48.ProgramCount = *puVar1;
        **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
      }
      puVar1 = (uint *)**(undefined8 **)&this->field_0x8;
      if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar1 + 1) {
        if ((this->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this + 0x188))(this,&local_48.ValidSize,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this,&local_48.ValidSize);
        }
      }
      else {
        local_48.ValidSize = *puVar1;
        **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
      }
    }
LAB_145c0a8a5:
    (**(code **)(*(longlong *)this + 0x210))(this);
    if (local_48.Version == 6) {
      bVar3 = AreBinaryProgramsCompressed();
      if ((bVar3 == local_48.bCacheUsesCompressedBinaries) &&
         (((param_2 == (FGuid *)0x0 ||
           (((local_48.BinaryCacheGuid.D == param_2->D && local_48.BinaryCacheGuid.C == param_2->C)
            && local_48.BinaryCacheGuid.B == param_2->B) && local_48.BinaryCacheGuid.A == param_2->A
           )) && (local_48.ProgramCount != 0)))) {
        if (param_4 != (FBinaryCacheFileHeader *)0x0) {
          param_4->Version = local_48.Version;
          (param_4->BinaryCacheGuid).A = local_48.BinaryCacheGuid.A;
          (param_4->BinaryCacheGuid).B = local_48.BinaryCacheGuid.B;
          (param_4->BinaryCacheGuid).C = local_48.BinaryCacheGuid.C;
          *(ulonglong *)&(param_4->BinaryCacheGuid).D =
               CONCAT44(local_48._20_4_,local_48.BinaryCacheGuid.D);
          param_4->ProgramCount = local_48.ProgramCount;
          param_4->ValidSize = local_48.ValidSize;
        }
        bVar3 = true;
        goto LAB_145c0a99c;
      }
    }
    if ((2 < (byte)LogRHI._0_1_) && (param_3)) {
      FBinaryCacheFileHeader::ToString(&local_48,&local_58);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar3 = false;
  if (this == (FArchive *)0x0) {
    return false;
  }
LAB_145c0a99c:
  (*(code *)**(undefined8 **)this)(this,1);
  return bVar3;
}

// IsStoringCompressedBinaryPrograms @ 145c0aef0

bool __cdecl UE::OpenGL::IsStoringCompressedBinaryPrograms(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarStoreCompressedBinaries.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

// OnGLProgramLoadedFromBinaryCache @ 145c0e1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::OpenGL::OnGLProgramLoadedFromBinaryCache
          (FOpenGLProgramKey *param_1,TUniqueObj<FOpenGLProgramBinary> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FOpenGLBinaryCacheStats *lpCriticalSection;
  FProgramUseTimes *pFVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_void___cdecl_UE::OpenGL::OnGLProgramLoadedFromBinaryCache(FOpenGLProgramKey_const_&,TUniqueObj<FOpenGLProgramBinary>_&&)_::_2_::FStat_STAT_OpenGLOnGLProgramLoadedFromBinaryCache>
  FVar10;
  FGLProgramCache *pFVar11;
  FOpenGLLinkedProgram *pFVar12;
  TDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *this;
  FOpenGLProgramBinary *pFVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20 [2];
  FName local_a8;
  FName local_a0;
  LARGE_INTEGER local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  TArrayView<unsigned_char_const_,int> local_70;
  FString local_60;
  FString local_50 [2];
  
  bVar5 = FOpenGLBinaryCacheStats::IsEnabled();
  if (bVar5) {
    lpCriticalSection = FOpenGLBinaryCacheStats::Get();
    if (lpCriticalSection == (FOpenGLBinaryCacheStats *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar7 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
    pFVar8 = TMapBase<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>_>
             ::FindOrAddImpl<FOpenGLProgramKey_const_&>
                       ((TMapBase<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>_>
                         *)&lpCriticalSection->KeyToTimes,uVar7,param_1);
    if ((pFVar8->UsedTime == 0.0) && (pFVar8->CompileTime == 0.0)) {
      QueryPerformanceCounter(&local_90);
      dVar2 = (double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      if (pFVar8->StartTime == 0.0) {
        pFVar8->StartTime = dVar2;
        lpCriticalSection->PreloadedBinaries = lpCriticalSection->PreloadedBinaries + 1;
      }
      pFVar8->CompileTime = dVar2;
      lpCriticalSection->CombinedCompileTime =
           (dVar2 - pFVar8->StartTime) + lpCriticalSection->CombinedCompileTime;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OpenGLOnGLProgramLoadedFromBinaryCache ==
        (FThreadSafeStaticStat<_void___cdecl_UE::OpenGL::OnGLProgramLoadedFromBinaryCache(FOpenGLProgramKey_const_&,TUniqueObj<FOpenGLProgramBinary>_&&)_::_2_::FStat_STAT_OpenGLOnGLProgramLoadedFromBinaryCache>
         )0x0) {
      pFVar9 = ::FName::FName(&local_88,"STAT_OpenGLOnGLProgramLoadedFromBinaryCache");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLOnGLProgramLoadedFromBinaryCache,
                 *pFVar9,L"STAT_OpenGLOnGLProgramLoadedFromBinaryCache","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_OpenGLOnGLProgramLoadedFromBinaryCache;
  if (StatPtr_STAT_OpenGLOnGLProgramLoadedFromBinaryCache ==
      (FThreadSafeStaticStat<_void___cdecl_UE::OpenGL::OnGLProgramLoadedFromBinaryCache(FOpenGLProgramKey_const_&,TUniqueObj<FOpenGLProgramBinary>_&&)_::_2_::FStat_STAT_OpenGLOnGLProgramLoadedFromBinaryCache>
       )0x0) {
    pFVar9 = ::FName::FName(&local_80,"STAT_OpenGLOnGLProgramLoadedFromBinaryCache");
    FVar10 = (FThreadSafeStaticStat<_void___cdecl_UE::OpenGL::OnGLProgramLoadedFromBinaryCache(FOpenGLProgramKey_const_&,TUniqueObj<FOpenGLProgramBinary>_&&)_::_2_::FStat_STAT_OpenGLOnGLProgramLoadedFromBinaryCache>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_OpenGLOnGLProgramLoadedFromBinaryCache,*pFVar9,
                          L"STAT_OpenGLOnGLProgramLoadedFromBinaryCache","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar5 = false;
  bVar4 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar7 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar7 == 0)) {
LAB_145c0e40a:
    bVar3 = false;
    FVar15 = local_a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar14.Value;
        local_a8.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0xd51);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145c0e40a;
    local_res18 = FVar14.Value;
    uStackX_1c = uVar7;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar3 = true;
  }
  pFVar11 = GetOpenGLProgramsCache();
  pFVar12 = FGLProgramCache::Find(pFVar11,param_1,false);
  bVar6 = FGLProgramCache::IsUsingLRU();
  if (bVar6) {
    if (pFVar12 != (FOpenGLLinkedProgram *)0x0) {
      pFVar11 = GetOpenGLProgramsCache();
      bVar6 = FGLProgramCache::IsEvicted(pFVar11,param_1);
      if (bVar6) {
        if (((((pFVar12->LRUInfo).CachedProgramBinary.Obj.Ptr)->DataView).ArrayNum != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bProgramExists || FoundProgram->LRUInfo.CachedProgramBinary->GetDataView().IsEmpty()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                               ,0xd5c,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else if (pFVar12 != (FOpenGLLinkedProgram *)0x0) {
        pFVar13 = (pFVar12->LRUInfo).CachedProgramBinary.Obj.Ptr;
        (pFVar12->LRUInfo).CachedProgramBinary.Obj.Ptr = (param_2->Obj).Ptr;
        (param_2->Obj).Ptr = pFVar13;
        goto LAB_145c0e68c;
      }
    }
    pFVar11 = GetOpenGLProgramsCache();
    bVar6 = FGLProgramCache::IsUsingLRU();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsUsingLRU()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                           ,0x769,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FGLProgramCacheLRU::AddOrReplaceEvicted(&pFVar11->ProgramCacheLRU,param_1,param_2);
  }
  else if (pFVar12 == (FOpenGLLinkedProgram *)0x0) {
    pFVar13 = (param_2->Obj).Ptr;
    local_res18 = 0;
    local_70.DataPtr = (pFVar13->DataView).DataPtr;
    local_70.ArrayNum = (pFVar13->DataView).ArrayNum;
    local_70._12_4_ = *(undefined4 *)&(pFVar13->DataView).field_0xc;
    bVar6 = CreateGLProgramFromBinary(&local_res18,&local_70);
    if (!bVar6) {
      if (4 < (byte)LogRHI._0_1_) {
        FOpenGLProgramKey::ToString(param_1,&local_60);
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
      this = RHIGetPanicDelegate();
      pFVar9 = ::FName::FName(&local_78,"FailedBinaryProgramCreateLoadRequest");
      TDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound(this,pFVar9)
      ;
      FOpenGLProgramKey::ToString(param_1,local_50);
      Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
      }
    }
    pFVar12 = ::operator_new(0x2a8);
    if (pFVar12 == (FOpenGLLinkedProgram *)0x0) {
      pFVar12 = (FOpenGLLinkedProgram *)0x0;
    }
    else {
      FOpenGLLinkedProgramBase::FOpenGLLinkedProgramBase
                ((FOpenGLLinkedProgramBase *)pFVar12,param_1,local_res18);
      (pFVar12->Config).TypeIndex = '\0';
      (pFVar12->LRUInfo).LRUNode.Index = -1;
      pFVar13 = ::operator_new(0x20);
      if (pFVar13 == (FOpenGLProgramBinary *)0x0) {
        (pFVar12->LRUInfo).CachedProgramBinary.Obj.Ptr = (FOpenGLProgramBinary *)0x0;
        (pFVar12->LRUInfo).LastTouchedFrame = 0;
      }
      else {
        (pFVar13->OwnedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar13->OwnedData).ArrayNum = 0;
        (pFVar13->OwnedData).ArrayMax = 0;
        (pFVar13->DataView).DataPtr = (uchar *)0x0;
        (pFVar13->DataView).ArrayNum = 0;
        (pFVar12->LRUInfo).CachedProgramBinary.Obj.Ptr = pFVar13;
        (pFVar12->LRUInfo).LastTouchedFrame = 0;
      }
    }
    pFVar11 = GetOpenGLProgramsCache();
    FGLProgramCache::Add(pFVar11,param_1,pFVar12);
  }
LAB_145c0e68c:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// UncompressCompressedBinaryProgram @ 145c33ac0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __cdecl
UE::OpenGL::UncompressCompressedBinaryProgram
          (TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  undefined1 uVar9;
  FNameEntryId FVar10;
  undefined4 extraout_var;
  uint uVar11;
  undefined1 local_res8 [8];
  
  if ((uint)param_1->ArrayNum < 5) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7848324208202350620>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBinaryProgramUtils.cpp"
                       ,0x1c,
                       "CompressedProgramBinary.Num() > sizeof(FCompressedProgramBinaryHeader)");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
  }
  else {
    piVar3 = (int *)param_1->DataPtr;
    iVar1 = *piVar3;
    if (iVar1 == -1) {
      uVar11 = param_1->ArrayNum - 4;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_2,uVar11,Default)
      ;
      memcpy((param_2->AllocatorInstance).Data,param_1->DataPtr + 4,(ulonglong)uVar11);
      return true;
    }
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
    if (*piVar3 != 0) {
      puVar4 = param_1->DataPtr;
      pFVar5 = (param_2->AllocatorInstance).Data;
      iVar1 = param_1->ArrayNum;
      iVar2 = param_2->ArrayNum;
      FVar10 = FNameEntryId::FromValidEName((EName)local_res8);
      FVar7.Number = 0;
      FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
      bVar8 = FCompression::UncompressMemory
                        (FVar7,pFVar5,(longlong)iVar2,puVar4 + 4,(longlong)iVar1 + -4,
                         COMPRESS_NoFlags,0);
      return bVar8;
    }
  }
  return false;
}

