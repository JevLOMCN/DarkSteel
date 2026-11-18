// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 23

// ReallocForCopy<0,TFixedAllocator<17>::ForElementType<D3D11_INPUT_ELEMENT_DESC>_> @ 145964200

void __cdecl
UE::Core::Private::ReallocForCopy<0,TFixedAllocator<17>::ForElementType<D3D11_INPUT_ELEMENT_DESC>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<D3D11_INPUT_ELEMENT_DESC> *param_5,int param_6,int *param_7)

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

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<D3D11_INPUT_ELEMENT_DESC>_> @ 1459642b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<D3D11_INPUT_ELEMENT_DESC>_>
          (ushort param_1,ForElementType<D3D11_INPUT_ELEMENT_DESC> *param_2,int *param_3)

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

// ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D11_SUBRESOURCE_DATA>_> @ 145964320

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D11_SUBRESOURCE_DATA>_>
          (uint param_1,uint param_2,int param_3,ForElementType<D3D11_SUBRESOURCE_DATA> *param_4,
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
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D11_SUBRESOURCE_DATA>
    ::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D11_SUBRESOURCE_DATA>_> @ 145964400

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D11_SUBRESOURCE_DATA>_>
          (uint param_1,uint param_2,ForElementType<D3D11_SUBRESOURCE_DATA> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0xd) {
    iVar2 = 0xc;
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
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D11_SUBRESOURCE_DATA>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<3>,FRHIUniformBuffer_*_[14],unsigned_short,0> @ 1459685e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<3>,FRHIUniformBuffer_*_[14],unsigned_short,0>
          (FD3D11ResourceBinder<3> *param_1,FRHIShader *param_2,ushort *param_3,
          FRHIUniformBuffer *(*param_4) [14],FTracker *param_5)

{
  EShaderFrequency EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRHIUniformBufferLayout *pFVar4;
  FRHISamplerState *pFVar5;
  FD3D11UnorderedAccessView *pFVar6;
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
                (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<3>,class_FRHIUniformBuffer*___ptr64_[14],unsigned_short,0>(FD3D11ResourceBinder<3>&&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FRHIUniformBuffer*___ptr64_(&___ptr64)[14],RHIValidation::FTracker*___ptr64)'
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
                  (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<3>,class_FRHIUniformBuffer*___ptr64_[14],unsigned_short,0>(FD3D11ResourceBinder<3>&&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FRHIUniformBuffer*___ptr64_(&___ptr64)[14],RHIValidation::FTracker*___ptr64)'
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
    EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<3>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_1>_>
              (pFVar22,uVar21,(uint *)param_2->_padding_,&local_b0);
    local_c8.Tracker = &param_5;
    local_c8.Shader = param_2;
    local_c8.Binder = param_1;
    EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<3>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_2>_>
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
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                            ,0x19d,L"");
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
        pFVar5 = *(FRHISamplerState **)(pFVar3 + (ulonglong)(uVar14 >> 8 & 0xffff) * 8);
        if ((pFVar5 == (FRHISamplerState *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FD3D11ResourceBinder<3>::SetSampler(param_1,pFVar5,(uchar)uVar14);
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
        pFVar6 = *(FD3D11UnorderedAccessView **)(pFVar3 + (ulonglong)(ushort)(uVar14 >> 8) * 8);
        if ((pFVar6 == (FD3D11UnorderedAccessView *)0x0) &&
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
          *ppFVar16 = (FRHIUnorderedAccessView *)pFVar6;
        }
        FD3D11DynamicRHI::InternalSetUAVVSPS(param_1->RHI,uVar14 & 0xff,pFVar6);
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

// SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<4>,FRHIUniformBuffer_*_[14],unsigned_short,0> @ 145968ed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<4>,FRHIUniformBuffer_*_[14],unsigned_short,0>
          (FD3D11ResourceBinder<4> *param_1,FRHIShader *param_2,ushort *param_3,
          FRHIUniformBuffer *(*param_4) [14],FTracker *param_5)

{
  EShaderFrequency EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRHIUniformBufferLayout *pFVar4;
  FRHISamplerState *pFVar5;
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
  FRHIUniformBuffer *pFVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
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
    uVar22 = 0x20;
    if (uVar13 != 0) {
      uVar22 = local_e0;
    }
    local_10c = local_10c & local_10c - 1;
    local_130 = uVar22;
    if (((int)param_2->_padding_ <= (int)uVar22) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferIndex < SRT.ResourceTableLayoutHashes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                            ,0x61,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar23 = (longlong)(int)uVar22;
    pFVar19 = (*param_4)[lVar23];
    local_120 = pFVar19;
    local_f8 = lVar23;
    if (pFVar19 == (FRHIUniformBuffer *)0x0) {
      if (((int)uVar22 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar22)) {
        bVar8 = true;
        pFVar15 = ::FString::FString(&local_90,L"<unknown>");
      }
      else {
        if (((int)uVar22 < 0) &&
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
                (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<4>,class_FRHIUniformBuffer*___ptr64_[14],unsigned_short,0>(FD3D11ResourceBinder<4>&&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FRHIUniformBuffer*___ptr64_(&___ptr64)[14],RHIValidation::FTracker*___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      local_128 = lVar23 * 4;
    }
    else {
      local_118 = ~uVar22 >> 0x1f;
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
      local_e8 = &pFVar19->Layout;
      local_128 = lVar23 * 4;
      pFVar4 = local_e8->Reference;
      uVar22 = local_130;
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
          uVar22 = local_118;
          uVar13 = local_130;
          if (pFVar17 == pFVar3) break;
          ::FString::PrintfImpl(&local_d8,L"%s%d");
          iVar20 = local_d8.Data.ArrayNum + -1;
          if (local_d8.Data.ArrayNum == 0) {
            iVar20 = 0;
          }
          ::FString::AppendChars(&local_108,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar20);
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
          if ((uVar22 == 0) &&
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
        uVar22 = local_130;
        Logging::Private::BasicFatalLog
                  (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<4>,class_FRHIUniformBuffer*___ptr64_[14],unsigned_short,0>(FD3D11ResourceBinder<4>&&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FRHIUniformBuffer*___ptr64_(&___ptr64)[14],RHIValidation::FTracker*___ptr64)'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        lVar23 = local_f0;
        local_128 = local_f0;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        local_128 = lVar23;
        pFVar19 = local_120;
      }
    }
    lVar21 = local_128;
    local_b0.Tracker = &param_5;
    local_b0.CurrentTimeForTextureTimes = &local_110;
    local_b0.Shader = param_2;
    local_b0.Binder = param_1;
    EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<4>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_1>_>
              (pFVar19,uVar22,(uint *)param_2->_padding_,&local_b0);
    local_c8.Tracker = &param_5;
    local_c8.Shader = param_2;
    local_c8.Binder = param_1;
    EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<4>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_2>_>
              (pFVar19,uVar22,(uint *)param_2->_padding_,&local_c8);
    lVar23 = param_2->_padding_;
    pFVar3 = (pFVar19->ResourceTable).AllocatorInstance.Data;
    uVar13 = *(uint *)(lVar23 + lVar21);
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
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                            ,0x19d,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = *puVar18;
        puVar18 = puVar18 + 1;
        pFVar19 = local_120;
      } while (uVar14 >> 0x18 == uVar22);
    }
    pFVar3 = (pFVar19->ResourceTable).AllocatorInstance.Data;
    lVar23 = param_2->_padding_;
    uVar13 = *(uint *)(lVar23 + lVar21);
    if (uVar13 != 0) {
      uVar14 = *(uint *)(lVar23 + (ulonglong)uVar13 * 4);
      puVar18 = (uint *)(lVar23 + 4 + (ulonglong)uVar13 * 4);
      do {
        pFVar5 = *(FRHISamplerState **)(pFVar3 + (ulonglong)(uVar14 >> 8 & 0xffff) * 8);
        if ((pFVar5 == (FRHISamplerState *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FD3D11ResourceBinder<4>::SetSampler(param_1,pFVar5,(uchar)uVar14);
        uVar14 = *puVar18;
        puVar18 = puVar18 + 1;
        pFVar19 = local_120;
        lVar21 = local_128;
      } while (uVar14 >> 0x18 == uVar22);
    }
    lVar23 = param_2->_padding_;
    pFVar3 = (pFVar19->ResourceTable).AllocatorInstance.Data;
    uVar13 = *(uint *)(lVar23 + lVar21);
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
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                            ,0x178,L"UAVs are only supported in compute, pixel and vertex shaders.")
        ;
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = *puVar18;
        puVar18 = puVar18 + 1;
      } while (uVar14 >> 0x18 == uVar22);
    }
    if (local_10c == 0) {
      *param_3 = 0;
      return;
    }
  } while( true );
}

// SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<5>,FRHIUniformBuffer_*_[14],unsigned_short,0> @ 1459697e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<5>,FRHIUniformBuffer_*_[14],unsigned_short,0>
          (FD3D11ResourceBinder<5> *param_1,FRHIShader *param_2,ushort *param_3,
          FRHIUniformBuffer *(*param_4) [14],FTracker *param_5)

{
  EShaderFrequency EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRHIUniformBufferLayout *pFVar4;
  FRHISamplerState *pFVar5;
  FD3D11UnorderedAccessView *this;
  FD3D11DynamicRHI *this_00;
  ID3D11DeviceContext *pIVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  ID3D11UnorderedAccessView *pIVar16;
  FRHIUnorderedAccessView **ppFVar17;
  FD3D11ViewableResource *pFVar18;
  FScriptContainerElement *pFVar19;
  FRHIUniformBuffer *pFVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 local_144 [4];
  uint local_140;
  longlong local_138;
  FRHIUniformBuffer *local_130;
  uint local_128;
  int local_124;
  float local_120 [2];
  uint local_118;
  FString local_110;
  longlong local_100;
  longlong local_f8;
  TRefCountPtr<FRHIUniformBufferLayout_const_> *local_f0;
  uint local_e8;
  ID3D11UnorderedAccessView *local_e0;
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
  local_120[0] = (float)(double)FApp::CurrentTime;
  local_118 = (uint)param_2->_padding_ & (uint)*param_3;
  if (local_118 == 0) {
    *param_3 = 0;
    return;
  }
  do {
    uVar13 = -local_118 & local_118;
    local_e8 = 0;
    if (uVar13 != 0) {
      for (; (uVar13 >> local_e8 & 1) == 0; local_e8 = local_e8 + 1) {
      }
    }
    uVar22 = 0x20;
    if (uVar13 != 0) {
      uVar22 = local_e8;
    }
    local_118 = local_118 & local_118 - 1;
    local_140 = uVar22;
    if (((int)param_2->_padding_ <= (int)uVar22) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferIndex < SRT.ResourceTableLayoutHashes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                            ,0x61,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar25 = (longlong)(int)uVar22;
    pFVar20 = (*param_4)[lVar25];
    local_130 = pFVar20;
    local_100 = lVar25;
    if (pFVar20 == (FRHIUniformBuffer *)0x0) {
      if (((int)uVar22 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar22)) {
        bVar8 = true;
        pFVar15 = ::FString::FString(&local_90,L"<unknown>");
      }
      else {
        if (((int)uVar22 < 0) &&
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
                                              Data + lVar25 * 8),&local_80);
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
                (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<5>,class_FRHIUniformBuffer*___ptr64_[14],unsigned_short,0>(FD3D11ResourceBinder<5>&&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FRHIUniformBuffer*___ptr64_(&___ptr64)[14],RHIValidation::FTracker*___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      local_138 = lVar25 * 4;
      pFVar20 = local_130;
    }
    else {
      local_128 = ~uVar22 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar22 < (int)param_2->_padding_) {
        uVar13 = local_128;
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
      local_f0 = &pFVar20->Layout;
      local_138 = lVar25 * 4;
      pFVar4 = local_f0->Reference;
      local_f8 = local_138;
      if (pFVar4->Hash != *(uint *)(local_138 + param_2->_padding_)) {
        local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.Data.ArrayNum = 0;
        local_110.Data.ArrayMax = 0;
        pFVar19 = (pFVar4->Resources).AllocatorInstance.Data;
        iVar2 = (pFVar4->Resources).ArrayNum;
        pFVar3 = pFVar19 + (longlong)iVar2 * 4;
        while( true ) {
          if ((pFVar4->Resources).ArrayNum != iVar2) {
            local_144[0] = 0;
            `TCheckedPointerIterator<FRHIUniformBufferResource_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_144);
          }
          uVar22 = local_128;
          uVar13 = local_140;
          if (pFVar19 == pFVar3) break;
          ::FString::PrintfImpl(&local_d8,L"%s%d");
          iVar23 = local_d8.Data.ArrayNum + -1;
          if (local_d8.Data.ArrayNum == 0) {
            iVar23 = 0;
          }
          ::FString::AppendChars(&local_110,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar23);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          pFVar19 = pFVar19 + 4;
        }
        local_124 = (pFVar4->Resources).ArrayNum;
        local_138 = CONCAT44(local_138._4_4_,pFVar4->ConstantBufferSize);
        uVar14 = 0;
        if ((int)local_140 < (int)param_2->_padding_) {
          uVar14 = local_128;
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
        lVar25 = local_100;
        if (((int)uVar13 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar13)) {
          bVar9 = true;
          pFVar15 = ::FString::FString(&local_70,L"<unknown>");
        }
        else {
          if ((uVar22 == 0) &&
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
                                                AllocatorInstance.Data + lVar25 * 8),local_60);
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
        uVar22 = local_140;
        Logging::Private::BasicFatalLog
                  (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<5>,class_FRHIUniformBuffer*___ptr64_[14],unsigned_short,0>(FD3D11ResourceBinder<5>&&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FRHIUniformBuffer*___ptr64_(&___ptr64)[14],RHIValidation::FTracker*___ptr64)'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        lVar25 = local_f8;
        local_138 = local_f8;
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        local_138 = lVar25;
        pFVar20 = local_130;
      }
    }
    lVar24 = local_138;
    local_b0.Tracker = &param_5;
    local_b0.CurrentTimeForTextureTimes = local_120;
    local_b0.Shader = param_2;
    local_b0.Binder = param_1;
    EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<5>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_1>_>
              (pFVar20,uVar22,(uint *)param_2->_padding_,&local_b0);
    local_c8.Tracker = &param_5;
    local_c8.Shader = param_2;
    local_c8.Binder = param_1;
    EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<5>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_2>_>
              (pFVar20,uVar22,(uint *)param_2->_padding_,&local_c8);
    lVar25 = param_2->_padding_;
    pFVar3 = (pFVar20->ResourceTable).AllocatorInstance.Data;
    uVar13 = *(uint *)(lVar25 + lVar24);
    if (uVar13 != 0) {
      uVar14 = *(uint *)(lVar25 + (ulonglong)uVar13 * 4);
      puVar21 = (uint *)(lVar25 + ((ulonglong)uVar13 + 1) * 4);
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
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                            ,0x19d,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = *puVar21;
        puVar21 = puVar21 + 1;
        pFVar20 = local_130;
        lVar24 = local_138;
      } while (uVar14 >> 0x18 == uVar22);
    }
    uVar22 = local_140;
    pFVar3 = (pFVar20->ResourceTable).AllocatorInstance.Data;
    lVar25 = param_2->_padding_;
    uVar13 = *(uint *)(lVar25 + lVar24);
    if (uVar13 != 0) {
      uVar14 = *(uint *)(lVar25 + (ulonglong)uVar13 * 4);
      puVar21 = (uint *)(lVar25 + 4 + (ulonglong)uVar13 * 4);
      do {
        pFVar5 = *(FRHISamplerState **)(pFVar3 + (ulonglong)(uVar14 >> 8 & 0xffff) * 8);
        if ((pFVar5 == (FRHISamplerState *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FD3D11ResourceBinder<5>::SetSampler(param_1,pFVar5,(uchar)uVar14);
        uVar14 = *puVar21;
        puVar21 = puVar21 + 1;
        pFVar20 = local_130;
        lVar24 = local_138;
      } while (uVar14 >> 0x18 == uVar22);
    }
    lVar25 = param_2->_padding_;
    pFVar3 = (pFVar20->ResourceTable).AllocatorInstance.Data;
    uVar13 = *(uint *)(lVar25 + lVar24);
    if (uVar13 != 0) {
      uVar22 = *(uint *)(lVar25 + (ulonglong)uVar13 * 4);
      puVar21 = (uint *)(lVar25 + ((ulonglong)uVar13 + 1) * 4);
      do {
        this = *(FD3D11UnorderedAccessView **)(pFVar3 + (ulonglong)(uVar22 >> 8 & 0xffff) * 8);
        if ((this == (FD3D11UnorderedAccessView *)0x0) &&
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
              (EVar1 == SF_RayMiss)) ||
             ((EVar1 == SF_RayHitGroup ||
              (pIVar16 = (ID3D11UnorderedAccessView *)0x0, EVar1 == SF_RayCallable)))) {
            pIVar16 = (ID3D11UnorderedAccessView *)&DAT_00000010;
          }
          ppFVar17 = RHIValidation::FTracker::FUAVTracker::operator[]
                               ((FUAVTracker *)
                                (&pIVar16->field_0x0 + (longlong)&param_5->UAVTrackers[0].UAVs),
                                uVar22 & 0xff);
          *ppFVar17 = (FRHIUnorderedAccessView *)this;
        }
        this_00 = param_1->RHI;
        pIVar16 = (ID3D11UnorderedAccessView *)0x0;
        if (this != (FD3D11UnorderedAccessView *)0x0) {
          pFVar18 = FD3D11UnorderedAccessView::GetBaseResource(this);
          FD3D11DynamicRHI::ConditionalClearShaderResource(this_00,pFVar18,true);
          pIVar16 = (this->View).Reference;
        }
        pIVar6 = (this_00->Direct3DDeviceIMContext).Reference;
        local_120[1] = -NAN;
        local_e0 = pIVar16;
        (**(code **)((longlong)*pIVar6 + 0x220))(pIVar6,uVar22 & 0xff,1,&local_e0,local_120 + 1);
        uVar22 = *puVar21;
        puVar21 = puVar21 + 1;
      } while (uVar22 >> 0x18 == local_140);
    }
    if (local_118 == 0) {
      *param_3 = 0;
      return;
    }
  } while( true );
}

// SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<0>,FRHIUniformBuffer_*_[14],unsigned_short,0> @ 14596a110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<0>,FRHIUniformBuffer_*_[14],unsigned_short,0>
          (FD3D11ResourceBinder<0> *param_1,FRHIShader *param_2,ushort *param_3,
          FRHIUniformBuffer *(*param_4) [14],FTracker *param_5)

{
  EShaderFrequency EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRHIUniformBufferLayout *pFVar4;
  FRHISamplerState *pFVar5;
  FD3D11UnorderedAccessView *pFVar6;
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
                (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<0>,class_FRHIUniformBuffer*___ptr64_[14],unsigned_short,0>(FD3D11ResourceBinder<0>&&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FRHIUniformBuffer*___ptr64_(&___ptr64)[14],RHIValidation::FTracker*___ptr64)'
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
                  (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<0>,class_FRHIUniformBuffer*___ptr64_[14],unsigned_short,0>(FD3D11ResourceBinder<0>&&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FRHIUniformBuffer*___ptr64_(&___ptr64)[14],RHIValidation::FTracker*___ptr64)'
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
    EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<0>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_1>_>
              (pFVar22,uVar21,(uint *)param_2->_padding_,&local_b0);
    local_c8.Tracker = &param_5;
    local_c8.Shader = param_2;
    local_c8.Binder = param_1;
    EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<0>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_2>_>
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
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                            ,0x19d,L"");
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
        pFVar5 = *(FRHISamplerState **)(pFVar3 + (ulonglong)(uVar14 >> 8 & 0xffff) * 8);
        if ((pFVar5 == (FRHISamplerState *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FD3D11ResourceBinder<0>::SetSampler(param_1,pFVar5,(uchar)uVar14);
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
        pFVar6 = *(FD3D11UnorderedAccessView **)(pFVar3 + (ulonglong)(ushort)(uVar14 >> 8) * 8);
        if ((pFVar6 == (FD3D11UnorderedAccessView *)0x0) &&
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
          *ppFVar16 = (FRHIUnorderedAccessView *)pFVar6;
        }
        FD3D11DynamicRHI::InternalSetUAVVSPS(param_1->RHI,uVar14 & 0xff,pFVar6);
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

// BeginBreadcrumb @ 145972390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D11::BeginBreadcrumb
          (GFSDK_Aftermath_ContextHandle__ *param_1,FRHIBreadcrumbNode *param_2)

{
  bool bVar1;
  wchar_t *_Str;
  size_t sVar2;
  undefined1 auStack_158 [32];
  int local_138 [2];
  int *local_130;
  undefined1 local_128 [256];
  wchar_t *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  bVar1 = AreMarkersEnabled();
  _Str = local_28;
  if (bVar1) {
    if (param_2 == (FRHIBreadcrumbNode *)0x0) {
      _Str = L"<root>";
    }
    else {
      _Str = (wchar_t *)(**(code **)(param_2->_padding_ + 0x10))(param_2,local_128);
    }
    local_28 = _Str;
    sVar2 = wcslen(_Str);
    local_20 = (int)sVar2 * 2 + 2;
  }
  if ((_Str != (wchar_t *)0x0) &&
     (local_138[0] = GFSDK_Aftermath_SetEventMarker(param_1,_Str,local_20), local_138[0] != 1)) {
    local_130 = local_138;
    `UE::RHICore::Nvidia::Aftermath::D3D11::BeginBreadcrumb'::__l5::<lambda_1>::operator()
              (&local_130);
  }
  return;
}

// CalculateSubresourceOffset @ 145972810

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

// CalculateTexturePlaneSize @ 1459729a0

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

// EndBreadcrumb @ 14597c890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D11::EndBreadcrumb
          (GFSDK_Aftermath_ContextHandle__ *param_1,FRHIBreadcrumbNode *param_2)

{
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_158 [32];
  int local_138 [2];
  int *local_130;
  undefined1 local_128 [256];
  wchar_t *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar1 = param_2->Parent;
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  bVar2 = AreMarkersEnabled();
  _Str = local_28;
  if (bVar2) {
    if (pFVar1 == (FRHIBreadcrumbNode *)0x0) {
      _Str = L"<root>";
    }
    else {
      _Str = (wchar_t *)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,local_128);
    }
    local_28 = _Str;
    sVar3 = wcslen(_Str);
    local_20 = (int)sVar3 * 2 + 2;
  }
  if ((_Str != (wchar_t *)0x0) &&
     (local_138[0] = GFSDK_Aftermath_SetEventMarker(param_1,_Str,local_20), local_138[0] != 1)) {
    local_130 = local_138;
    `UE::RHICore::Nvidia::Aftermath::D3D11::EndBreadcrumb'::__l5::<lambda_1>::operator()(&local_130)
    ;
  }
  return;
}

// FindShaderResourceFormat @ 145980bc0

DXGI_FORMAT_conflict __cdecl
UE::DXGIUtilities::FindShaderResourceFormat(DXGI_FORMAT_conflict param_1,bool param_2)

{
  DXGI_FORMAT_conflict DVar1;
  
  if (param_1 - DXGI_FORMAT_R8G8B8A8_TYPELESS < 0x47) {
    if (param_2) {
      switch(param_1) {
      case DXGI_FORMAT_R8G8B8A8_TYPELESS:
        return DXGI_FORMAT_R8G8B8A8_UNORM_SRGB;
      case DXGI_FORMAT_BC1_TYPELESS:
        return DXGI_FORMAT_BC1_UNORM_SRGB;
      case DXGI_FORMAT_BC2_TYPELESS:
        return DXGI_FORMAT_BC2_UNORM_SRGB;
      case DXGI_FORMAT_BC3_TYPELESS:
        return DXGI_FORMAT_BC3_UNORM_SRGB;
      case DXGI_FORMAT_B8G8R8A8_TYPELESS:
        return DXGI_FORMAT_B8G8R8A8_UNORM_SRGB;
      case DXGI_FORMAT_BC7_TYPELESS:
        return DXGI_FORMAT_BC7_UNORM_SRGB;
      }
    }
    else {
      switch(param_1) {
      case DXGI_FORMAT_R8G8B8A8_TYPELESS:
        return DXGI_FORMAT_R8G8B8A8_UNORM;
      case DXGI_FORMAT_BC1_TYPELESS:
        return DXGI_FORMAT_BC1_UNORM;
      case DXGI_FORMAT_BC2_TYPELESS:
        return DXGI_FORMAT_BC2_UNORM;
      case DXGI_FORMAT_BC3_TYPELESS:
        return DXGI_FORMAT_BC3_UNORM;
      case DXGI_FORMAT_B8G8R8A8_TYPELESS:
        return DXGI_FORMAT_B8G8R8A8_UNORM;
      case DXGI_FORMAT_BC7_TYPELESS:
        return DXGI_FORMAT_BC7_UNORM;
      }
    }
  }
  if (param_1 == DXGI_FORMAT_R32G8X24_TYPELESS) {
    return DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
  }
  if (param_1 == DXGI_FORMAT_R32_TYPELESS) {
    return DXGI_FORMAT_R32_FLOAT;
  }
  if (param_1 != DXGI_FORMAT_R24G8_TYPELESS) {
    DVar1 = DXGI_FORMAT_R16_UNORM;
    if (param_1 != DXGI_FORMAT_R16_TYPELESS) {
      DVar1 = param_1;
    }
    return DVar1;
  }
  return DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
}

// GetPlatformTextureResourceFormat @ 1459827c0

DXGI_FORMAT_conflict __cdecl
UE::DXGIUtilities::GetPlatformTextureResourceFormat
          (EPixelFormat param_1,ETextureCreateFlags param_2)

{
  DXGI_FORMAT_conflict DVar1;
  DXGI_FORMAT_conflict DVar2;
  
  DVar1 = GPixelFormats[param_1].PlatformFormat;
  if ((param_2 >> 0x19 & 1) == 0) {
    if ((param_2 & DepthStencilTargetable) != None) {
      if (DVar1 == DXGI_FORMAT_R32_FLOAT) {
        return DXGI_FORMAT_R32_TYPELESS;
      }
      DVar2 = DXGI_FORMAT_R16_TYPELESS;
      if (DVar1 != DXGI_FORMAT_R16_FLOAT) {
        DVar2 = DVar1;
      }
      return DVar2;
    }
  }
  else {
    if (DVar1 - DXGI_FORMAT_R8G8B8A8_TYPELESS < 0x47) {
      if ((param_2 & SRGB) == None) {
        switch(DVar1) {
        case DXGI_FORMAT_R8G8B8A8_TYPELESS:
          return DXGI_FORMAT_R8G8B8A8_UNORM;
        case DXGI_FORMAT_BC1_TYPELESS:
          return DXGI_FORMAT_BC1_UNORM;
        case DXGI_FORMAT_BC2_TYPELESS:
          return DXGI_FORMAT_BC2_UNORM;
        case DXGI_FORMAT_BC3_TYPELESS:
          return DXGI_FORMAT_BC3_UNORM;
        case DXGI_FORMAT_B8G8R8A8_TYPELESS:
          return DXGI_FORMAT_B8G8R8A8_UNORM;
        case DXGI_FORMAT_B8G8R8X8_TYPELESS:
          return DXGI_FORMAT_B8G8R8X8_UNORM;
        case DXGI_FORMAT_BC7_TYPELESS:
          return DXGI_FORMAT_BC7_UNORM;
        }
      }
      else {
        switch(DVar1) {
        case DXGI_FORMAT_R8G8B8A8_TYPELESS:
          return DXGI_FORMAT_R8G8B8A8_UNORM_SRGB;
        case DXGI_FORMAT_BC1_TYPELESS:
          return DXGI_FORMAT_BC1_UNORM_SRGB;
        case DXGI_FORMAT_BC2_TYPELESS:
          return DXGI_FORMAT_BC2_UNORM_SRGB;
        case DXGI_FORMAT_BC3_TYPELESS:
          return DXGI_FORMAT_BC3_UNORM_SRGB;
        case DXGI_FORMAT_B8G8R8A8_TYPELESS:
          return DXGI_FORMAT_B8G8R8A8_UNORM_SRGB;
        case DXGI_FORMAT_B8G8R8X8_TYPELESS:
          return DXGI_FORMAT_B8G8R8X8_UNORM_SRGB;
        case DXGI_FORMAT_BC7_TYPELESS:
          return DXGI_FORMAT_BC7_UNORM_SRGB;
        }
      }
    }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(DVar1) {
    case DXGI_FORMAT_R32G32B32A32_FLOAT:
      return DXGI_FORMAT_R32G32B32A32_UINT;
    case DXGI_FORMAT_R32G32B32_FLOAT:
      return DXGI_FORMAT_R32G32B32_UINT;
    case DXGI_FORMAT_R16G16B16A16_FLOAT:
      return DXGI_FORMAT_R16G16B16A16_UNORM;
    case DXGI_FORMAT_R32G32_FLOAT:
      return DXGI_FORMAT_R32G32_UINT;
    case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
      return DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
    case DXGI_FORMAT_R10G10B10A2_UNORM:
      return DXGI_FORMAT_R10G10B10A2_UNORM;
    }
  }
  return DVar1;
}

// InitStaticUniformBufferSlots @ 145985670

void __cdecl UE::RHICore::InitStaticUniformBufferSlots(FRHIShaderData *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FShaderParametersMetadata *pFVar9;
  uchar *puVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement local_38 [16];
  
  uVar3 = (param_1->ShaderResourceTable).ResourceTableLayoutHashes.ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(param_1->StaticSlots).ArrayMax;
  if (*piVar1 < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar3,&(param_1->StaticSlots).AllocatorInstance,(param_1->StaticSlots).ArrayNum,
               piVar1);
  }
  pFVar11 = (param_1->ShaderResourceTable).ResourceTableLayoutHashes.AllocatorInstance.Data;
  iVar4 = (param_1->ShaderResourceTable).ResourceTableLayoutHashes.ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar4 * 4;
  while( true ) {
    if ((param_1->ShaderResourceTable).ResourceTableLayoutHashes.ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar2) break;
    pFVar9 = FindUniformBufferStructByLayoutHash(*(uint *)pFVar11);
    if (pFVar9 == (FShaderParametersMetadata *)0x0) {
      pFVar5 = (param_1->StaticSlots).AllocatorInstance.Data;
      local_38[0] = (FScriptContainerElement)0xff;
      if ((pFVar5 <= local_38) && (local_38 < pFVar5 + *piVar1)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = (param_1->StaticSlots).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&(param_1->StaticSlots).AllocatorInstance,piVar1);
      }
      pFVar11 = pFVar11 + 4;
      (param_1->StaticSlots).ArrayNum = iVar8 + 1;
      (param_1->StaticSlots).AllocatorInstance.Data[iVar8] = local_38[0];
    }
    else {
      if ((pFVar9->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x177,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar5 = (param_1->StaticSlots).AllocatorInstance.Data;
      puVar10 = &((pFVar9->Layout).Reference)->StaticSlot;
      if ((pFVar5 <= puVar10) && (puVar10 < pFVar5 + *piVar1)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = (param_1->StaticSlots).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&(param_1->StaticSlots).AllocatorInstance,piVar1);
      }
      (param_1->StaticSlots).ArrayNum = iVar8 + 1;
      pFVar11 = pFVar11 + 4;
      (param_1->StaticSlots).AllocatorInstance.Data[iVar8] = (FScriptContainerElement)*puVar10;
    }
  }
  return;
}

// InitializeDevice @ 1459858b0

GFSDK_Aftermath_ContextHandle__ * __cdecl
UE::RHICore::Nvidia::Aftermath::D3D11::InitializeDevice
          (ID3D11Device *param_1,ID3D11DeviceContext *param_2)

{
  bool bVar1;
  int iVar2;
  ID3D11Device *local_res8 [2];
  ID3D11Device **local_res18;
  GFSDK_Aftermath_ContextHandle__ *local_res20;
  undefined1 local_18 [16];
  
  local_res18 = local_res8;
  local_18._8_8_ = &local_res18;
  local_18._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::RHICore::Nvidia::Aftermath::D3D11::InitializeDevice'::__l2::<lambda_1>,unsigned_int,unsigned_int>
       ::Call;
  local_res8[0] = param_1;
  bVar1 = Aftermath::InitializeDevice((TFunctionRef<unsigned_int___cdecl(unsigned_int)> *)local_18);
  local_res20 = (GFSDK_Aftermath_ContextHandle__ *)0x0;
  if (!bVar1) {
    return (GFSDK_Aftermath_ContextHandle__ *)0x0;
  }
  iVar2 = GFSDK_Aftermath_DX11_CreateContextHandle(param_2,&local_res20);
  local_res18 = (ID3D11Device **)CONCAT44(local_res18._4_4_,iVar2);
  if (iVar2 != 1) {
    local_18._0_8_ = &local_res18;
    bVar1 = `UE::RHICore::Nvidia::Aftermath::D3D11::InitializeDevice'::__l6::<lambda_2>::operator()
                      (local_18);
    if (!bVar1) {
      return (GFSDK_Aftermath_ContextHandle__ *)0x0;
    }
  }
  return local_res20;
}

// UnregisterCommandList @ 14599d920

void __cdecl
UE::RHICore::Nvidia::Aftermath::D3D11::UnregisterCommandList
          (GFSDK_Aftermath_ContextHandle__ *param_1)

{
  bool bVar1;
  int local_res10 [2];
  int *local_res18 [2];
  
  bVar1 = Aftermath::IsEnabled();
  if ((bVar1) && (param_1 != (GFSDK_Aftermath_ContextHandle__ *)0x0)) {
    local_res10[0] = GFSDK_Aftermath_ReleaseContextHandle(param_1);
    if (local_res10[0] != 1) {
      local_res18[0] = local_res10;
      `UE::RHICore::Nvidia::Aftermath::D3D11::UnregisterCommandList'::__l5::<lambda_1>::operator()
                (local_res18);
    }
  }
  return;
}

// UpdateGlobalBufferStats @ 14599de70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UE::RHICore::UpdateGlobalBufferStats(FRHIBufferDesc *param_1,long64 param_2)

{
  EBufferUsageFlags EVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedBufferMemory> FVar4;
  FThreadStats *this;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_VertexBufferMemory> FVar6;
  FThreadSafeStaticStat<FStat_STAT_RTAccelerationStructureMemory> FVar7;
  FThreadSafeStaticStat<FStat_STAT_IndexBufferMemory> *this_00;
  wchar_t *pwVar8;
  FName local_res8;
  FStatMessage local_28;
  
  EVar1 = param_1->Usage;
  local_28.StatData.Pad = (uchar  [8])param_2;
  if ((EVar1 >> 0x16 & 1) == 0) {
    if ((EVar1 >> 0xe & 1) == 0) {
      if ((EVar1 >> 0xf & 1) == 0) {
        if ((EVar1 >> 0xd & 1) == 0) {
          if ((EVar1 & ByteAddressBuffer) == None) {
            if ((char)EVar1 < '\0') {
              if (param_2 == 0) goto LAB_14599e417;
              FVar7 = (FThreadSafeStaticStat<FStat_STAT_RTAccelerationStructureMemory>)
                      StatPtr_STAT_DrawIndirectBufferMemory;
              if (StatPtr_STAT_DrawIndirectBufferMemory ==
                  (FThreadSafeStaticStat<FStat_STAT_DrawIndirectBufferMemory>)0x0) {
                pFVar3 = ::FName::FName(&local_res8,"STAT_DrawIndirectBufferMemory");
                pwVar8 = L"Draw Indirect Buffer Memory";
                this_00 = (FThreadSafeStaticStat<FStat_STAT_IndexBufferMemory> *)
                          &StatPtr_STAT_DrawIndirectBufferMemory;
                goto LAB_14599e3e6;
              }
            }
            else {
              if (param_2 == 0) goto LAB_14599e417;
              if ((EVar1 & StructuredBuffer) == None) {
                FVar7 = (FThreadSafeStaticStat<FStat_STAT_RTAccelerationStructureMemory>)
                        StatPtr_STAT_MiscBufferMemory;
                if (StatPtr_STAT_MiscBufferMemory ==
                    (FThreadSafeStaticStat<FStat_STAT_MiscBufferMemory>)0x0) {
                  pFVar3 = ::FName::FName(&local_res8,"STAT_MiscBufferMemory");
                  pwVar8 = L"Misc Buffer Memory";
                  this_00 = (FThreadSafeStaticStat<FStat_STAT_IndexBufferMemory> *)
                            &StatPtr_STAT_MiscBufferMemory;
                  goto LAB_14599e3e6;
                }
              }
              else {
                FVar7 = (FThreadSafeStaticStat<FStat_STAT_RTAccelerationStructureMemory>)
                        StatPtr_STAT_StructuredBufferMemory;
                if (StatPtr_STAT_StructuredBufferMemory ==
                    (FThreadSafeStaticStat<FStat_STAT_StructuredBufferMemory>)0x0) {
                  pFVar3 = ::FName::FName(&local_res8,"STAT_StructuredBufferMemory");
                  pwVar8 = L"Structured Buffer Memory";
                  this_00 = (FThreadSafeStaticStat<FStat_STAT_IndexBufferMemory> *)
                            &StatPtr_STAT_StructuredBufferMemory;
LAB_14599e3e6:
                  FVar7 = (FThreadSafeStaticStat<FStat_STAT_RTAccelerationStructureMemory>)
                          FThreadSafeStaticStatBase::DoSetup
                                    ((FThreadSafeStaticStatBase *)this_00,*pFVar3,pwVar8,
                                     "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,ST_int64,
                                     false,false,MCR_GPU);
                }
              }
            }
          }
          else {
            if (param_2 == 0) goto LAB_14599e417;
            FVar7 = (FThreadSafeStaticStat<FStat_STAT_RTAccelerationStructureMemory>)
                    StatPtr_STAT_ByteAddressBufferMemory;
            if (StatPtr_STAT_ByteAddressBufferMemory ==
                (FThreadSafeStaticStat<FStat_STAT_ByteAddressBufferMemory>)0x0) {
              pFVar3 = ::FName::FName(&local_res8,"STAT_ByteAddressBufferMemory");
              pwVar8 = L"Byte Address Buffer Memory";
              this_00 = (FThreadSafeStaticStat<FStat_STAT_IndexBufferMemory> *)
                        &StatPtr_STAT_ByteAddressBufferMemory;
              goto LAB_14599e3e6;
            }
          }
        }
        else {
          if (param_2 == 0) goto LAB_14599e417;
          FVar7 = StatPtr_STAT_RTAccelerationStructureMemory;
          if (StatPtr_STAT_RTAccelerationStructureMemory ==
              (FThreadSafeStaticStat<FStat_STAT_RTAccelerationStructureMemory>)0x0) {
            pFVar3 = ::FName::FName(&local_res8,"STAT_RTAccelerationStructureMemory");
            pwVar8 = L"RayTracing Acceleration Structure Memory";
            this_00 = (FThreadSafeStaticStat<FStat_STAT_IndexBufferMemory> *)
                      &StatPtr_STAT_RTAccelerationStructureMemory;
            goto LAB_14599e3e6;
          }
        }
      }
      else {
        if (param_2 == 0) goto LAB_14599e417;
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_RTAccelerationStructureMemory>)
                StatPtr_STAT_IndexBufferMemory;
        if (StatPtr_STAT_IndexBufferMemory ==
            (FThreadSafeStaticStat<FStat_STAT_IndexBufferMemory>)0x0) {
          pFVar3 = ::FName::FName(&local_res8,"STAT_IndexBufferMemory");
          pwVar8 = L"Index Buffer Memory";
          this_00 = &StatPtr_STAT_IndexBufferMemory;
          goto LAB_14599e3e6;
        }
      }
      local_res8 = *(FName *)FVar7;
      FThreadStats::AddMessage<__int64>(local_res8,Add,param_2,false);
      goto LAB_14599e417;
    }
    if (param_2 == 0) goto LAB_14599e417;
    FVar6 = StatPtr_STAT_VertexBufferMemory;
    if (StatPtr_STAT_VertexBufferMemory == (FThreadSafeStaticStat<FStat_STAT_VertexBufferMemory>)0x0
       ) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_VertexBufferMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_VertexBufferMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VertexBufferMemory,*pFVar3,
                         L"Vertex Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,
                         false,ST_int64,false,false,MCR_GPU);
    }
    FVar2 = *(FName *)FVar6;
    if (((FVar2 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_14599e417;
    local_res8 = FVar2;
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_28.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_res8 = FVar2;
    local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this,&local_28);
    FStatsTrace::Add(&local_res8,param_2);
    if (this->ScopeCount == 0) {
      FThreadStats::Flush(this,false,false);
      goto LAB_14599e417;
    }
  }
  else {
    if (param_2 == 0) goto LAB_14599e417;
    FVar4 = StatPtr_STAT_ReservedUncommittedBufferMemory;
    if (StatPtr_STAT_ReservedUncommittedBufferMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedBufferMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_ReservedUncommittedBufferMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedBufferMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReservedUncommittedBufferMemory,
                         *pFVar3,L"Reserved Buffer Memory (Uncommitted)","STATGROUP_RHI",
                         "STATCAT_Advanced",L"RHI",true,false,ST_int64,false,false,MCR_GPU);
    }
    FVar2 = *(FName *)FVar4;
    if (((FVar2 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_14599e417;
    local_res8 = FVar2;
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_28.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_res8 = FVar2;
    local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this,&local_28);
    FStatsTrace::Add(&local_res8,param_2);
    if (this->ScopeCount == 0) {
      FThreadStats::Flush(this,false,false);
      goto LAB_14599e417;
    }
  }
  if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this,false,false);
  }
LAB_14599e417:
  LOCK();
  GRHIGlobals.BufferMemorySize = GRHIGlobals.BufferMemorySize + param_2;
  UNLOCK();
  return;
}

// UpdateGlobalTextureStats @ 14599e440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::RHICore::UpdateGlobalTextureStats
          (ETextureCreateFlags param_1,ETextureDimension param_2,ulong64 param_3,bool param_4,
          bool param_5)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedTextureMemory> FVar5;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FThreadSafeStaticStat<FStat_STAT_RenderTargetMemoryCube> FVar6;
  ulonglong uVar7;
  FThreadSafeStaticStat<FStat_STAT_RenderTargetMemory2D> *this_01;
  uchar auVar8 [8];
  wchar_t *pwVar9;
  FName local_res8;
  FName local_res18;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_40;
  
  auVar8 = (uchar  [8])param_3;
  if (!param_5) {
    auVar8 = (uchar  [8])-param_3;
  }
  if ((param_1 >> 0x25 & 1) != 0) {
    if (auVar8 != (uchar  [8])0x0) {
      FVar5 = StatPtr_STAT_ReservedUncommittedTextureMemory;
      if (StatPtr_STAT_ReservedUncommittedTextureMemory ==
          (FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedTextureMemory>)0x0) {
        pFVar4 = ::FName::FName(&local_res18,"STAT_ReservedUncommittedTextureMemory");
        FVar5 = (FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedTextureMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_ReservedUncommittedTextureMemory,*pFVar4,
                           L"Reserved Texture Memory (Uncommitted)","STATGROUP_RHI",
                           "STATCAT_Advanced",L"RHI",true,false,ST_int64,false,false,MCR_GPU);
      }
      FVar1 = *(FName *)FVar5;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res8 = FVar1;
        this = TlsGetValue(FThreadStats::TlsSlot);
        if (this == (FThreadStats *)0x0) {
          this_00 = FThreadStatsPool::Get();
          this = FThreadStatsPool::GetFromPool(this_00);
        }
        local_40.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        local_res8 = FVar1;
        local_40.StatData.Pad = auVar8;
        local_40.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this,&local_40);
        FStatsTrace::Add(&local_res8,(long64)auVar8);
        if (this->ScopeCount == 0) {
          FThreadStats::Flush(this,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this,false,false);
        }
      }
    }
    goto LAB_14599e934;
  }
  if ((param_1 & (DepthStencilTargetable|ResolveTargetable|RenderTargetable)) == None) {
    if ((param_1 >> 0x11 & 1) == 0) {
      if ((param_2 == Texture2D) || (param_2 == Texture2DArray)) {
LAB_14599e884:
        if (auVar8 == (uchar  [8])0x0) goto LAB_14599e934;
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemoryCube>)
                StatPtr_STAT_TextureMemory2D;
        if (StatPtr_STAT_TextureMemory2D == (FThreadSafeStaticStat<FStat_STAT_TextureMemory2D>)0x0)
        {
          pFVar4 = ::FName::FName(&local_48,"STAT_TextureMemory2D");
          pwVar9 = L"Texture 2D Memory";
          this_01 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemory2D> *)
                    &StatPtr_STAT_TextureMemory2D;
          goto LAB_14599e8f7;
        }
      }
      else if (param_2 == Texture3D) {
        if (auVar8 == (uchar  [8])0x0) goto LAB_14599e934;
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemoryCube>)
                StatPtr_STAT_TextureMemory3D;
        if (StatPtr_STAT_TextureMemory3D == (FThreadSafeStaticStat<FStat_STAT_TextureMemory3D>)0x0)
        {
          pFVar4 = ::FName::FName(&local_50,"STAT_TextureMemory3D");
          pwVar9 = L"Texture 3D Memory";
          this_01 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemory2D> *)
                    &StatPtr_STAT_TextureMemory3D;
          goto LAB_14599e8f7;
        }
      }
      else {
        if ((param_2 != TextureCube) && (param_2 != TextureCubeArray)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreStats.h"
                             ,0x34,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_14599e884;
        }
        if (auVar8 == (uchar  [8])0x0) goto LAB_14599e934;
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemoryCube>)
                StatPtr_STAT_TextureMemoryCube;
        if (StatPtr_STAT_TextureMemoryCube ==
            (FThreadSafeStaticStat<FStat_STAT_TextureMemoryCube>)0x0) {
          pFVar4 = ::FName::FName(&local_58,"STAT_TextureMemoryCube");
          pwVar9 = L"Texture Cube Memory";
          this_01 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemory2D> *)
                    &StatPtr_STAT_TextureMemoryCube;
          goto LAB_14599e8f7;
        }
      }
    }
    else {
      if (auVar8 == (uchar  [8])0x0) goto LAB_14599e934;
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemoryCube>)
              StatPtr_STAT_UAVTextureMemory;
      if (StatPtr_STAT_UAVTextureMemory == (FThreadSafeStaticStat<FStat_STAT_UAVTextureMemory>)0x0)
      {
        pFVar4 = ::FName::FName(&local_60,"STAT_UAVTextureMemory");
        pwVar9 = L"UAV Texture Memory";
        this_01 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemory2D> *)
                  &StatPtr_STAT_UAVTextureMemory;
        goto LAB_14599e8f7;
      }
    }
  }
  else {
    if ((param_2 == Texture2D) || (param_2 == Texture2DArray)) {
LAB_14599e64c:
      if (auVar8 == (uchar  [8])0x0) goto LAB_14599e934;
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemoryCube>)
              StatPtr_STAT_RenderTargetMemory2D;
      if (StatPtr_STAT_RenderTargetMemory2D !=
          (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemory2D>)0x0) goto LAB_14599e906;
      pFVar4 = ::FName::FName(&local_68,"STAT_RenderTargetMemory2D");
      pwVar9 = L"Render Target 2D Memory";
      this_01 = &StatPtr_STAT_RenderTargetMemory2D;
    }
    else {
      if (param_2 != Texture3D) {
        if ((param_2 == TextureCube) || (param_2 == TextureCubeArray)) {
          if (auVar8 == (uchar  [8])0x0) goto LAB_14599e934;
          FVar6 = StatPtr_STAT_RenderTargetMemoryCube;
          if (StatPtr_STAT_RenderTargetMemoryCube ==
              (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemoryCube>)0x0) {
            pFVar4 = ::FName::FName(&local_78,"STAT_RenderTargetMemoryCube");
            pwVar9 = L"Render Target Cube Memory";
            this_01 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemory2D> *)
                      &StatPtr_STAT_RenderTargetMemoryCube;
            goto LAB_14599e8f7;
          }
          goto LAB_14599e906;
        }
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreStats.h"
                           ,0x1a,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_14599e64c;
      }
      if (auVar8 == (uchar  [8])0x0) goto LAB_14599e934;
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemoryCube>)
              StatPtr_STAT_RenderTargetMemory3D;
      if (StatPtr_STAT_RenderTargetMemory3D !=
          (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemory3D>)0x0) goto LAB_14599e906;
      pFVar4 = ::FName::FName(&local_70,"STAT_RenderTargetMemory3D");
      pwVar9 = L"Render Target 3D Memory";
      this_01 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemory2D> *)
                &StatPtr_STAT_RenderTargetMemory3D;
    }
LAB_14599e8f7:
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemoryCube>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this_01,*pFVar4,pwVar9,"STATGROUP_RHI",
                       "STATCAT_Advanced",L"RHI",true,false,ST_int64,false,false,MCR_GPU);
  }
LAB_14599e906:
  local_res8 = *(FName *)FVar6;
  FThreadStats::AddMessage<__int64>(local_res8,Add,(long64)auVar8,false);
LAB_14599e934:
  uVar7 = param_3 + 0x3ff >> 10;
  if (!param_5) {
    uVar7 = -uVar7;
  }
  if (((param_1 &
       (ForceIntoNonStreamingMemoryTracking|UAV|DepthStencilTargetable|ResolveTargetable|
       RenderTargetable)) == None) && ((!param_4 || ((param_1 & Streamable) != None)))) {
    LOCK();
    GRHIGlobals.StreamingTextureMemorySizeInKB = GRHIGlobals.StreamingTextureMemorySizeInKB + uVar7;
    UNLOCK();
    return;
  }
  LOCK();
  GRHIGlobals.NonStreamingTextureMemorySizeInKB =
       GRHIGlobals.NonStreamingTextureMemorySizeInKB + uVar7;
  UNLOCK();
  return;
}

// operator() @ 1504d4c60

bool __thiscall
`UE::RHICore::Nvidia::Aftermath::D3D11::BeginBreadcrumb'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5678798749384572983>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5678798749384572983>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d4cb0

bool __thiscall
`UE::RHICore::Nvidia::Aftermath::D3D11::EndBreadcrumb'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5678798749384572993>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5678798749384572993>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d4d40

bool __thiscall
`UE::RHICore::Nvidia::Aftermath::D3D11::UnregisterCommandList'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5678798749384572972>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5678798749384572972>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d4ef0

bool __thiscall
`UE::RHICore::Nvidia::Aftermath::D3D11::InitializeDevice'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5678798749384572958>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5678798749384572958>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

