// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 22

// ClampToTableBounds @ 14513b1c0

int __cdecl UE::Color::ACES::ClampToTableBounds(int param_1,int param_2)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_2 + -1 < param_1) {
    param_1 = param_2 + -1;
  }
  return param_1;
}

// CuspToTable @ 14513eea0

TVector2<float> __cdecl UE::Color::ACES::CuspToTable(float param_1,Table3D *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  TVector2<float>_u_0 in_RCX;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong in_R8;
  float fVar9;
  float in_XMM1_Da;
  float fVar10;
  
  iVar8 = 0;
  iVar7 = 0x169;
  fVar9 = FGenericPlatformMath::Fmod(in_XMM1_Da,__real_43b40000);
  if (fVar9 < 0.0) {
    fVar9 = fVar9 + __real_43b40000;
  }
  iVar6 = (int)fVar9 + 1;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  if (0x169 < iVar6) {
    iVar6 = 0x169;
  }
  do {
    pfVar1 = (float *)(in_R8 + 8 + (longlong)iVar6 * 0xc);
    iVar4 = iVar6;
    if (in_XMM1_Da < *pfVar1 || in_XMM1_Da == *pfVar1) {
      iVar4 = iVar8;
      iVar7 = iVar6;
    }
    iVar8 = iVar4;
    iVar6 = (iVar8 + iVar7) / 2;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    if (0x169 < iVar6) {
      iVar6 = 0x169;
    }
  } while (iVar8 + 1 < iVar7);
  if (iVar7 < 1) {
    iVar7 = 1;
  }
  lVar5 = (longlong)iVar7;
  fVar9 = *(float *)(in_R8 + -4 + lVar5 * 0xc);
  fVar2 = *(float *)(in_R8 + -0xc + lVar5 * 0xc);
  fVar3 = *(float *)(in_R8 + -8 + lVar5 * 0xc);
  fVar10 = (in_XMM1_Da - fVar9) / (*(float *)(in_R8 + 8 + lVar5 * 0xc) - fVar9);
  fVar9 = *(float *)(in_R8 + 4 + lVar5 * 0xc);
  *(float *)in_RCX = (*(float *)(in_R8 + lVar5 * 0xc) - fVar2) * fVar10 + fVar2;
  *(float *)((longlong)in_RCX + 4) = (fVar9 - fVar3) * fVar10 + fVar3;
  return (TVector2<float>)in_RCX;
}

// EvaluateGammaFit @ 14513fa00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Color::ACES::EvaluateGammaFit
          (TVector2<float> *param_1,TVector<float> *param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,JMhParams *param_9)

{
  float fVar1;
  ulonglong uVar2;
  float _Y;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector<float>_u_0 local_d0;
  TVector<float>_u_0 local_c0 [15];
  
  fVar1 = __real_3f800000;
  fVar11 = (param_1->field0_0x0)._s_0.X;
  uVar2 = 0;
  fVar10 = __real_3fa66666 - fVar11 / param_5;
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  _Y = __real_3f800000 / param_8;
  fVar11 = fVar10 * (param_6 - fVar11) + fVar11;
  fVar10 = __real_3f800000 / param_3;
  fVar3 = __real_42c80000 / param_4;
  while( true ) {
    fVar9 = (param_1->field0_0x0)._s_0.X;
    fVar6 = (param_2->field0_0x0)._s_0.X;
    fVar4 = (param_5 - fVar9) * __real_3e99999a + fVar9;
    fVar8 = fVar1;
    if (fVar4 < fVar6) {
      fVar8 = fVar6;
      if (param_5 <= fVar6) {
        fVar8 = param_5;
      }
      fVar5 = param_5 - fVar8;
      if (param_5 - fVar8 <= __real_38d1b717) {
        fVar5 = __real_38d1b717;
      }
      dVar7 = log10((double)((param_5 - fVar4) / fVar5));
      dVar7 = pow(dVar7,__real_3ffd1745c0000000);
      fVar8 = (float)(dVar7 + __real_3ff0000000000000);
    }
    fVar12 = (param_1->field0_0x0)._s_0.Y * ___real_3f8425af;
    fVar8 = param_5 * param_7 * fVar8;
    fVar4 = SolveJIntersect(fVar6,(param_2->field0_0x0)._s_0.Y,fVar11,param_5,fVar8);
    fVar5 = SolveJIntersect(fVar9,fVar12,fVar11,param_5,fVar8);
    fVar6 = param_5 - fVar4;
    if (fVar4 < fVar11) {
      fVar6 = fVar4;
    }
    fVar13 = (fVar6 * (fVar4 - fVar11)) / (fVar8 * fVar11);
    fVar6 = powf(fVar4 / fVar5,_Y);
    fVar8 = powf((param_5 - fVar4) / (param_5 - fVar5),fVar10);
    fVar8 = ((param_5 - fVar5) * fVar12 * fVar8) / (((fVar13 * fVar12 + param_5) - fVar9) * fVar12);
    fVar6 = (fVar6 * fVar5) / ((fVar9 / fVar12 - fVar13) * fVar12);
    fVar9 = fVar6;
    if (fVar8 <= fVar6) {
      fVar9 = fVar8;
    }
    fVar6 = __real_3df5c28f -
            (float)((uint)(fVar6 - fVar8) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    local_d0._s_0.Y = (fVar9 - fVar6 * fVar6 * fVar6 * ___real_41392f6b) * fVar12;
    local_d0._s_0.X = local_d0._s_0.Y * fVar13 + fVar4;
    local_d0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    JMh_to_RGB((TVector<float> *)&local_c0[0]._s_0,(TVector<float> *)&local_d0._s_0,param_9);
    if ((((float)local_c0[0]._0_4_ * fVar3 <= fVar1) && ((float)local_c0[0]._4_4_ * fVar3 <= fVar1))
       && ((float)local_c0[0]._8_4_ * fVar3 <= fVar1)) break;
    uVar2 = uVar2 + 1;
    param_2 = param_2 + 1;
    if (2 < uVar2) {
      return true;
    }
  }
  return false;
}

// FindGamutBoundaryIntersection @ 145149720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __cdecl
UE::Color::ACES::FindGamutBoundaryIntersection
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector2<float> *param_2,
          float param_3,float param_4,float param_5,float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = (param_2->field0_0x0)._s_0.Y * ___real_3f8425af;
  fVar5 = (param_2->field0_0x0)._s_0.X;
  fVar1 = SolveJIntersect((param_1->field0_0x0)._s_0.X,(param_1->field0_0x0)._s_0.Y,param_3,param_4,
                          param_5);
  fVar2 = SolveJIntersect(fVar5,fVar7,param_3,param_4,param_5);
  fVar4 = __real_3f800000;
  fVar3 = param_4 - fVar1;
  if (fVar1 < param_3) {
    fVar3 = fVar1;
  }
  fVar8 = (fVar1 - param_3) * fVar3 * (__real_3f800000 / (param_3 * param_5));
  fVar3 = powf((param_4 - fVar1) / (param_4 - fVar2),__real_3f800000 / param_6);
  fVar6 = (fVar3 * (param_4 - fVar2) * fVar7) / (((fVar8 * fVar7 + param_4) - fVar5) * fVar7);
  fVar3 = powf(fVar1 / fVar2,fVar4 / param_7);
  fVar4 = __real_3df5c28f;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  fVar3 = (fVar3 * fVar2) / ((fVar5 / fVar7 - fVar8) * fVar7);
  fVar5 = fVar3;
  if (fVar6 <= fVar3) {
    fVar5 = fVar6;
  }
  fVar4 = fVar4 - (float)((uint)(fVar3 - fVar6) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar7 = (fVar5 - fVar4 * fVar4 * fVar4 * ___real_41392f6b) * fVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar7 * fVar8 + fVar1;
  return __return_storage_ptr__;
}

// GetFocusGain @ 14514d740

float __cdecl UE::Color::ACES::GetFocusGain(float param_1,float param_2,float param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (param_3 - param_2) * __real_3e99999a + param_2;
  if (fVar3 < param_1) {
    if (param_3 <= param_1) {
      param_1 = param_3;
    }
    fVar2 = param_3 - param_1;
    if (param_3 - param_1 <= __real_38d1b717) {
      fVar2 = __real_38d1b717;
    }
    dVar1 = log10((double)((param_3 - fVar3) / fVar2));
    dVar1 = pow(dVar1,__real_3ffd1745c0000000);
    return (float)(dVar1 + __real_3ff0000000000000);
  }
  return __real_3f800000;
}

// GetTransformResources @ 145157ca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Color::ACES::GetTransformResources
          (FRDGBuilder *param_1,float param_2,FRHIShaderResourceView **param_3,
          FRHIShaderResourceView **param_4,FRHIShaderResourceView **param_5)

{
  FString *pFVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  FTextureLookupBase *pFVar5;
  ulong uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  IConsoleManager *pIVar9;
  longlong *plVar10;
  TConsoleVariableData<int> *pTVar11;
  FTextureLookupBase *pFVar12;
  FRHICommandListBase *pFVar13;
  ulonglong uVar14;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  uVar6 = _tls_index;
  uVar14 = (ulonglong)_tls_index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) < ::_TSS0)
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar9 = IConsoleManager::Get();
      plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,L"r.HDR.Aces.Version",1);
      pTVar11 = (TConsoleVariableData<int> *)0x0;
      if (plVar10 != (longlong *)0x0) {
        pTVar11 = (TConsoleVariableData<int> *)(**(code **)(*plVar10 + 0x68))(plVar10);
      }
      CVarAcesVersion = pTVar11;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar11 = CVarAcesVersion;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pTVar11->ShadowedValue[1] < 2) {
    *param_3 = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
    *param_4 = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
    pFVar12 = (FTextureLookupBase *)GBlackTextureWithSRV;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) < ::_TSS1
       ) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        pFVar12 = ::operator_new(0x70);
        if (pFVar12 == (FTextureLookupBase *)0x0) {
          pFVar12 = (FTextureLookupBase *)0x0;
        }
        else {
          ::FString::FString(&local_68,L"ACES_ReachMTable");
          FTextureWithSRV::FTextureWithSRV((FTextureWithSRV *)pFVar12);
          FVar7.Data = local_68.Data.AllocatorInstance.Data;
          pFVar1 = &pFVar12->DebugName;
          pFVar12->_padding_ = (longlong)&___7FTextureLookupBase_ACES_Color_UE__6B_;
          piVar2 = &(pFVar12->DebugName).Data.ArrayMax;
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->DebugName).Data.ArrayNum = local_68.Data.ArrayNum;
          if (local_68.Data.ArrayNum == 0) {
            *piVar2 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,
                       local_68.Data.ArrayNum,piVar2);
            memcpy((pFVar1->Data).AllocatorInstance.Data,FVar7.Data,
                   (longlong)local_68.Data.ArrayNum * 2);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          pFVar12->_padding_ =
               (longlong)&___7__TGlobalResource_VFReachMTable_ACES_Color_UE___00__6B_;
          if ((int)pFVar12->_padding_ != -1) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                               ,0xb9,L"");
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          *(undefined1 *)((longlong)&pFVar12->_padding_ + 5) = 1;
          bVar8 = IsInRenderingThread();
          if (bVar8) {
            pcVar4 = *(code **)(pFVar12->_padding_ + 0x18);
            pFVar13 = FRenderResource::GetImmediateCommandList();
            (*pcVar4)(pFVar12,pFVar13);
          }
          else {
            BeginInitResource((FRenderResource *)pFVar12,(FRenderCommandPipe *)0x0);
          }
        }
        ReachMTable = pFVar12;
        _Init_thread_footer(&::_TSS1);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar6 * 8) + 0x9d4c)
        < ::_TSS2) {
      _Init_thread_header(&::_TSS2);
      if (::_TSS2 == -1) {
        pFVar12 = ::operator_new(0x70);
        if (pFVar12 == (FTextureLookupBase *)0x0) {
          pFVar12 = (FTextureLookupBase *)0x0;
        }
        else {
          ::FString::FString(&local_58,L"ACES_GamutCuspTable");
          FTextureWithSRV::FTextureWithSRV((FTextureWithSRV *)pFVar12);
          FVar7.Data = local_58.Data.AllocatorInstance.Data;
          pFVar1 = &pFVar12->DebugName;
          pFVar12->_padding_ = (longlong)&___7FTextureLookupBase_ACES_Color_UE__6B_;
          piVar2 = &(pFVar12->DebugName).Data.ArrayMax;
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->DebugName).Data.ArrayNum = local_58.Data.ArrayNum;
          if (local_58.Data.ArrayNum == 0) {
            *piVar2 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,
                       local_58.Data.ArrayNum,piVar2);
            memcpy((pFVar1->Data).AllocatorInstance.Data,FVar7.Data,
                   (longlong)local_58.Data.ArrayNum * 2);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          pFVar12->_padding_ =
               (longlong)&___7__TGlobalResource_VFGamutCuspTable_ACES_Color_UE___00__6B_;
          if ((int)pFVar12->_padding_ != -1) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                               ,0xb9,L"");
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          *(undefined1 *)((longlong)&pFVar12->_padding_ + 5) = 1;
          bVar8 = IsInRenderingThread();
          if (bVar8) {
            pcVar4 = *(code **)(pFVar12->_padding_ + 0x18);
            pFVar13 = FRenderResource::GetImmediateCommandList();
            (*pcVar4)(pFVar12,pFVar13);
          }
          else {
            BeginInitResource((FRenderResource *)pFVar12,(FRenderCommandPipe *)0x0);
          }
        }
        GamutCuspTable = pFVar12;
        _Init_thread_footer(&::_TSS2);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) < ::_TSS3
       ) {
      _Init_thread_header(&::_TSS3);
      if (::_TSS3 == -1) {
        pFVar12 = ::operator_new(0x70);
        if (pFVar12 == (FTextureLookupBase *)0x0) {
          pFVar12 = (FTextureLookupBase *)0x0;
        }
        else {
          ::FString::FString(local_48,L"ACES_UpperHullGammaTable");
          FTextureWithSRV::FTextureWithSRV((FTextureWithSRV *)pFVar12);
          FVar7.Data = local_48[0].Data.AllocatorInstance.Data;
          pFVar1 = &pFVar12->DebugName;
          pFVar12->_padding_ = (longlong)&___7FTextureLookupBase_ACES_Color_UE__6B_;
          piVar2 = &(pFVar12->DebugName).Data.ArrayMax;
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->DebugName).Data.ArrayNum = local_48[0].Data.ArrayNum;
          if (local_48[0].Data.ArrayNum == 0) {
            *piVar2 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_48[0].Data.ArrayNum,0,(ForAnyElementType *)pFVar1,
                       local_48[0].Data.ArrayNum,piVar2);
            memcpy((pFVar1->Data).AllocatorInstance.Data,FVar7.Data,
                   (longlong)local_48[0].Data.ArrayNum * 2);
          }
          if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
          }
          pFVar12->_padding_ =
               (longlong)&___7__TGlobalResource_VFUpperHullGammaTable_ACES_Color_UE___00__6B_;
          if ((int)pFVar12->_padding_ != -1) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                               ,0xb9,L"");
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          *(undefined1 *)((longlong)&pFVar12->_padding_ + 5) = 1;
          bVar8 = IsInRenderingThread();
          if (bVar8) {
            pcVar4 = *(code **)(pFVar12->_padding_ + 0x18);
            pFVar13 = FRenderResource::GetImmediateCommandList();
            (*pcVar4)(pFVar12,pFVar13);
          }
          else {
            BeginInitResource((FRenderResource *)pFVar12,(FRenderCommandPipe *)0x0);
          }
        }
        UpperHullGammaTable = pFVar12;
        _Init_thread_footer(&::_TSS3);
      }
    }
    if (__real_322bcc77 <
        (float)((uint)(CachedPeakLuminance - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar6 * 8) +
                  0x9d4c) < ::_TSS4) {
        _Init_thread_header(&::_TSS4);
        if (::_TSS4 == -1) {
          FColorSpace::FColorSpace(&LimitingColorSpace,ACESAP1);
          _Init_thread_footer(&::_TSS4);
        }
      }
      lVar3 = param_1->_padding_;
      if ((*(byte *)(lVar3 + 0x29b) & 0x20) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsImmediate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x17,L"This operation expects the immediate command list.");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (**(code **)(ReachMTable->_padding_ + 0x48))(ReachMTable,lVar3,&LimitingColorSpace,param_2);
      (**(code **)(GamutCuspTable->_padding_ + 0x48))
                (GamutCuspTable,lVar3,&LimitingColorSpace,param_2);
      (**(code **)(UpperHullGammaTable->_padding_ + 0x48))
                (UpperHullGammaTable,lVar3,&LimitingColorSpace,param_2);
      CachedPeakLuminance = param_2;
    }
    pFVar5 = GamutCuspTable;
    *param_3 = (FRHIShaderResourceView *)ReachMTable->_padding_;
    pFVar12 = UpperHullGammaTable;
    *param_4 = (FRHIShaderResourceView *)pFVar5->_padding_;
  }
  *param_5 = (FRHIShaderResourceView *)pFVar12->_padding_;
  return;
}

// HSV_to_RGB @ 1451586a0

TVector<float> * __cdecl
UE::Color::ACES::HSV_to_RGB(TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = (param_1->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.Z;
  fVar1 = FGenericPlatformMath::Fmod((param_1->field0_0x0)._s_0.X * __real_40c00000,__real_40000000)
  ;
  fVar3 = __real_3f800000;
  fVar5 = (param_1->field0_0x0)._s_0.Z;
  fVar1 = fVar1 - __real_3f800000;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  fVar5 = fVar5 - fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar3 = (fVar3 - (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) * fVar6;
  if (__real_3e2aaaab <= fVar2) {
    dVar4 = (double)fVar2;
    fVar1 = fVar6;
    if (__real_3fd5555555555555 <= dVar4) {
      if (__real_3f000000 <= fVar2) {
        fVar2 = fVar6;
        if (dVar4 < __real_3fe5555555555555) {
          fVar1 = fVar3;
          fVar3 = 0.0;
          goto LAB_145158743;
        }
        fVar1 = 0.0;
        if (dVar4 < __real_3feaaaaaaaaaaaab) goto LAB_145158743;
      }
      else {
        fVar6 = 0.0;
      }
      fVar2 = fVar3;
      fVar3 = fVar6;
    }
    else {
      fVar2 = 0.0;
    }
  }
  else {
    fVar2 = 0.0;
    fVar1 = fVar3;
    fVar3 = fVar6;
  }
LAB_145158743:
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3 + fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1 + fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2 + fVar5;
  return __return_storage_ptr__;
}

// HuePositionInUniformTable @ 145158810

int __cdecl UE::Color::ACES::HuePositionInUniformTable(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = FGenericPlatformMath::Fmod(param_1,__real_43b40000);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + __real_43b40000;
  }
  return (int)(fVar1 * __real_3b360b61 * (float)param_2);
}

// InitJMhParams @ 145158860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

JMhParams * __cdecl
UE::Color::ACES::InitJMhParams(JMhParams *__return_storage_ptr__,FColorSpace *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TMatrix<double> *pTVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_2d8 [32];
  float local_2b8;
  float fStack_2b4;
  float local_2b0;
  TMatrix<double> local_2a8;
  TMatrix<double> local_228;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FColorSpace::FColorSpace(&ColorSpaceCAM16,ACESCAM16);
      _Init_thread_footer(&::_TSS0);
    }
  }
  fVar16 = __real_3f4b2ff6;
  dVar18 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_4059000000000000;
  dVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_4059000000000000;
  dVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_4059000000000000;
  auVar19._8_4_ = SUB84(dVar1,0);
  auVar19._0_8_ = dVar1;
  auVar19._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar3 = dVar18 * (param_1->RgbToXYZ).M[1][0] + dVar2 * (param_1->RgbToXYZ).M[0][0] +
          dVar1 * (param_1->RgbToXYZ).M[2][0] + (param_1->RgbToXYZ).M[3][0] * 0.0;
  dVar4 = dVar18 * (param_1->RgbToXYZ).M[1][1] + dVar2 * (param_1->RgbToXYZ).M[0][1] +
          auVar19._8_8_ * (param_1->RgbToXYZ).M[2][1] + (param_1->RgbToXYZ).M[3][1] * 0.0;
  dVar1 = (param_1->RgbToXYZ).M[1][2] * dVar18 + (param_1->RgbToXYZ).M[0][2] * dVar2 +
          (param_1->RgbToXYZ).M[2][2] * dVar1 + (param_1->RgbToXYZ).M[3][2] * 0.0;
  fVar25 = (float)dVar4;
  auVar20._8_4_ = SUB84(dVar1,0);
  auVar20._0_8_ = dVar1;
  auVar20._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  fVar17 = (float)(dVar4 * ColorSpaceCAM16.XYZToRgb.M[1][0] +
                   dVar3 * ColorSpaceCAM16.XYZToRgb.M[0][0] +
                   dVar1 * ColorSpaceCAM16.XYZToRgb.M[2][0] + ColorSpaceCAM16.XYZToRgb.M[3][0] * 0.0
                  );
  local_2b8 = fVar25 / fVar17;
  fVar21 = (float)(dVar4 * ColorSpaceCAM16.XYZToRgb.M[1][1] +
                   dVar3 * ColorSpaceCAM16.XYZToRgb.M[0][1] +
                   auVar20._8_8_ * ColorSpaceCAM16.XYZToRgb.M[2][1] +
                  ColorSpaceCAM16.XYZToRgb.M[3][1] * 0.0);
  fVar22 = (float)(dVar4 * ColorSpaceCAM16.XYZToRgb.M[1][2] +
                   dVar3 * ColorSpaceCAM16.XYZToRgb.M[0][2] +
                   dVar1 * ColorSpaceCAM16.XYZToRgb.M[2][2] + ColorSpaceCAM16.XYZToRgb.M[3][2] * 0.0
                  );
  fVar24 = fVar25 / fVar22;
  fVar23 = fVar25 / fVar21;
  fStack_2b4 = fVar23;
  local_2b0 = fVar24;
  fVar17 = PanlrcForward(local_2b8 * fVar17,__real_3f4b2ff6);
  fVar21 = PanlrcForward(fVar23 * fVar21,fVar16);
  fVar16 = PanlrcForward(fVar24 * fVar22,fVar16);
  (__return_storage_ptr__->XYZ_w).field0_0x0._s_0.X = (float)dVar3;
  (__return_storage_ptr__->XYZ_w).field0_0x0._s_0.Y = fVar25;
  (__return_storage_ptr__->XYZ_w).field0_0x0._s_0.Z = (float)dVar1;
  fVar16 = fVar16 * __real_3d4ccccd;
  fVar25 = __real_41a00000 / fVar25;
  __return_storage_ptr__->F_L = 0.7937006;
  __return_storage_ptr__->A_w_J = 12.947211;
  *(ulonglong *)&(__return_storage_ptr__->D_RGB).field0_0x0 = CONCAT44(fStack_2b4,local_2b8);
  (__return_storage_ptr__->D_RGB).field0_0x0._s_0.Z = local_2b0;
  fVar25 = SQRT(fVar25) + ___real_3fbd70a4;
  __return_storage_ptr__->A_w = fVar16 + fVar21 + fVar17 + fVar17;
  __return_storage_ptr__->z = fVar25;
  FColorSpaceTransform::FColorSpaceTransform
            ((FColorSpaceTransform *)&local_128,param_1,&ColorSpaceCAM16,None);
  local_1a8.M[1][0] = ___xmm_40590000000000000000000000000000;
  local_1a8.M[1][1] = _UNK_150f34e28;
  local_1a8.M[0][0] = ___xmm_00000000000000004059000000000000;
  local_1a8.M[0][1] = _UNK_150f34e18;
  local_1a8.M[2][0] = 0.0;
  local_1a8.M[2][1] = 0.0;
  local_1a8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_1a8.M[3][3] = _UNK_15061cbc8;
  local_1a8.M[0][2] = 0.0;
  local_1a8.M[0][3] = 0.0;
  local_1a8.M[1][2] = 0.0;
  local_1a8.M[1][3] = 0.0;
  local_1a8.M[2][2] = ___xmm_00000000000000004059000000000000;
  local_1a8.M[2][3] = _UNK_150f34e18;
  local_1a8.M[3][0] = 0.0;
  local_1a8.M[3][1] = 0.0;
  VectorMatrixMultiply(&local_228,&local_1a8,&local_128);
  *(ulonglong *)(__return_storage_ptr__->MATRIX_RGB_to_CAM16).M[0] =
       CONCAT44((float)local_228.M[0][1],(float)local_228.M[0][0]);
  *(ulonglong *)((__return_storage_ptr__->MATRIX_RGB_to_CAM16).M[0] + 2) =
       CONCAT44((float)local_228.M[0][3],(float)local_228.M[0][2]);
  (__return_storage_ptr__->MATRIX_RGB_to_CAM16).M[1][0] = (float)local_228.M[1][0];
  (__return_storage_ptr__->MATRIX_RGB_to_CAM16).M[1][1] = (float)local_228.M[1][1];
  (__return_storage_ptr__->MATRIX_RGB_to_CAM16).M[1][2] = (float)local_228.M[1][2];
  (__return_storage_ptr__->MATRIX_RGB_to_CAM16).M[1][3] = (float)local_228.M[1][3];
  (__return_storage_ptr__->MATRIX_RGB_to_CAM16).M[2][0] = (float)local_228.M[2][0];
  (__return_storage_ptr__->MATRIX_RGB_to_CAM16).M[2][1] = (float)local_228.M[2][1];
  (__return_storage_ptr__->MATRIX_RGB_to_CAM16).M[2][2] = (float)local_228.M[2][2];
  (__return_storage_ptr__->MATRIX_RGB_to_CAM16).M[2][3] = (float)local_228.M[2][3];
  *(ulonglong *)(__return_storage_ptr__->MATRIX_RGB_to_CAM16).M[3] =
       CONCAT44((float)local_228.M[3][1],(float)local_228.M[3][0]);
  *(ulonglong *)((__return_storage_ptr__->MATRIX_RGB_to_CAM16).M[3] + 2) =
       CONCAT44((float)local_228.M[3][3],(float)local_228.M[3][2]);
  pTVar15 = UE::Math::TMatrix<double>::Inverse(&local_228,&local_2a8);
  dVar1 = pTVar15->M[1][2];
  dVar2 = pTVar15->M[1][3];
  dVar3 = pTVar15->M[1][0];
  dVar4 = pTVar15->M[1][1];
  dVar18 = pTVar15->M[2][2];
  dVar5 = pTVar15->M[2][3];
  dVar6 = pTVar15->M[2][0];
  dVar7 = pTVar15->M[2][1];
  dVar8 = pTVar15->M[3][2];
  dVar9 = pTVar15->M[3][3];
  dVar10 = pTVar15->M[3][0];
  dVar11 = pTVar15->M[3][1];
  dVar12 = pTVar15->M[0][2];
  dVar13 = pTVar15->M[0][3];
  dVar14 = pTVar15->M[0][1];
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[0][0] = (float)pTVar15->M[0][0];
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[0][1] = (float)dVar14;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[0][2] = (float)dVar12;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[0][3] = (float)dVar13;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[1][0] = (float)dVar3;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[1][1] = (float)dVar4;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[1][2] = (float)dVar1;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[1][3] = (float)dVar2;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[2][0] = (float)dVar6;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[2][1] = (float)dVar7;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[2][2] = (float)dVar18;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[2][3] = (float)dVar5;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[3][0] = (float)dVar10;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[3][1] = (float)dVar11;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[3][2] = (float)dVar8;
  (__return_storage_ptr__->MATRIX_CAM16_to_RGB).M[3][3] = (float)dVar9;
  return __return_storage_ptr__;
}

// InitToneScaleParams @ 145159300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ToneScaleParams * __cdecl
UE::Color::ACES::InitToneScaleParams(ToneScaleParams *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = param_1 * __real_3c23d70a;
  fVar1 = logf(fVar3);
  fVar2 = __real_3f800000;
  fVar5 = fVar1 * ___real_3ca5acc5 + ___real_3dcd10f4;
  fVar6 = (SQRT((fVar3 + __real_3e23d70a) * fVar3) + fVar3) * __real_3f000000;
  fVar4 = (fVar1 * ___real_4326c4e2 + __real_43000000) / fVar6;
  fVar3 = (SQRT((fVar5 + __real_3e23d70a) * fVar5) + fVar5) * __real_3f000000;
  fVar1 = powf(fVar4 / (fVar4 + __real_3f800000),__real_bf933333);
  fVar1 = powf(fVar3 / (fVar1 * fVar6),__real_3f5e9bd4);
  fVar1 = __real_3e3851ec / ((fVar1 * fVar6) / (fVar2 - fVar1));
  fVar2 = powf(fVar4 / (fVar1 + fVar4),__real_3f933333);
  __return_storage_ptr__->n_r = 100.0;
  __return_storage_ptr__->g = 1.15;
  __return_storage_ptr__->t_1 = 0.04;
  __return_storage_ptr__->n = param_1;
  __return_storage_ptr__->m_2 = fVar6 / fVar2;
  __return_storage_ptr__->c_t = fVar5;
  __return_storage_ptr__->s_2 = fVar1 * fVar6;
  __return_storage_ptr__->u_2 = fVar2;
  return __return_storage_ptr__;
}

// JMh_to_RGB @ 14515a970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __cdecl
UE::Color::ACES::JMh_to_RGB
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,JMhParams *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float extraout_XMM0_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float extraout_XMM0_Db;
  float fVar10;
  float fVar11;
  
  fVar10 = (param_1->field0_0x0)._s_0.Y * ___real_3cd3adf9;
  __libm_sse2_sincosf_();
  fVar11 = extraout_XMM0_Db * fVar10;
  fVar10 = extraout_XMM0_Da * fVar10;
  fVar6 = powf((param_1->field0_0x0)._s_0.X * __real_3c23d70a,__real_3fd8f2fc / param_2->z);
  fVar1 = (param_2->D_RGB).field0_0x0._s_0.X;
  fVar6 = fVar6 * param_2->A_w * ___real_43e60000;
  fVar7 = PanlrcInverse(fVar11 * ___real_3ea495a0 + fVar6 * ___real_3a3ad868 +
                        fVar10 * ___real_3e523375,param_2->F_L);
  fVar7 = fVar7 / fVar1;
  fVar1 = (param_2->D_RGB).field0_0x0._s_0.Y;
  fVar8 = PanlrcInverse(((fVar6 - fVar11 * ___real_445ec000) - fVar10 * ___real_43828000) *
                        ___real_3a3ad868,param_2->F_L);
  fVar8 = fVar8 / fVar1;
  fVar1 = (param_2->D_RGB).field0_0x0._s_0.Z;
  fVar9 = PanlrcInverse(((fVar6 - fVar11 * __real_435c0000) - fVar10 * ___real_45c4e000) *
                        ___real_3a3ad868,param_2->F_L);
  fVar9 = fVar9 / fVar1;
  fVar1 = (param_2->MATRIX_CAM16_to_RGB).M[1][1];
  fVar6 = (param_2->MATRIX_CAM16_to_RGB).M[1][2];
  fVar10 = (param_2->MATRIX_CAM16_to_RGB).M[0][1];
  fVar11 = (param_2->MATRIX_CAM16_to_RGB).M[0][2];
  fVar2 = (param_2->MATRIX_CAM16_to_RGB).M[2][1];
  fVar3 = (param_2->MATRIX_CAM16_to_RGB).M[2][2];
  fVar4 = (param_2->MATRIX_CAM16_to_RGB).M[3][1];
  fVar5 = (param_2->MATRIX_CAM16_to_RGB).M[3][2];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar8 * (param_2->MATRIX_CAM16_to_RGB).M[1][0] +
       fVar7 * (param_2->MATRIX_CAM16_to_RGB).M[0][0] +
       fVar9 * (param_2->MATRIX_CAM16_to_RGB).M[2][0] + (param_2->MATRIX_CAM16_to_RGB).M[3][0] * 0.0
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar8 * fVar6 + fVar7 * fVar11 + fVar9 * fVar3 + fVar5 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       fVar8 * fVar1 + fVar7 * fVar10 + fVar9 * fVar2 + fVar4 * 0.0;
  return __return_storage_ptr__;
}

// MakeGamutTable @ 14515b120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

Table3D * __cdecl
UE::Color::ACES::MakeGamutTable(Table3D *__return_storage_ptr__,FColorSpace *param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  JMhParams *pJVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar19;
  ulonglong uVar20;
  JMhParams *pJVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_23b8 [32];
  TVector<float>_u_0 local_2398;
  TVector<float>_u_0 local_2388;
  JMhParams local_2378 [24];
  undefined1 local_1298 [32];
  undefined8 local_1278;
  float local_1270 [1086];
  JMhParams local_178;
  ulonglong local_c8;
  ulonglong uVar18;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_23b8;
  pJVar10 = InitJMhParams(local_2378,param_1);
  local_178.F_L = pJVar10->F_L;
  local_178.z = pJVar10->z;
  local_178.A_w = pJVar10->A_w;
  local_178.A_w_J = pJVar10->A_w_J;
  local_178.XYZ_w.field0_0x0._0_8_ = *(undefined8 *)&(pJVar10->XYZ_w).field0_0x0;
  local_178._24_8_ = *(undefined8 *)((longlong)&(pJVar10->XYZ_w).field0_0x0 + 8);
  local_178.D_RGB.field0_0x0._4_8_ = *(undefined8 *)((longlong)&(pJVar10->D_RGB).field0_0x0 + 4);
  local_178._padding_ = pJVar10->_padding_;
  local_178.MATRIX_RGB_to_CAM16.M[0]._0_8_ = *(undefined8 *)(pJVar10->MATRIX_RGB_to_CAM16).M[0];
  local_178.MATRIX_RGB_to_CAM16.M[0]._8_8_ =
       *(undefined8 *)((pJVar10->MATRIX_RGB_to_CAM16).M[0] + 2);
  local_178.MATRIX_RGB_to_CAM16.M[1]._0_8_ = *(undefined8 *)(pJVar10->MATRIX_RGB_to_CAM16).M[1];
  local_178.MATRIX_RGB_to_CAM16.M[1]._8_8_ =
       *(undefined8 *)((pJVar10->MATRIX_RGB_to_CAM16).M[1] + 2);
  local_178.MATRIX_RGB_to_CAM16.M[2]._0_8_ = *(undefined8 *)(pJVar10->MATRIX_RGB_to_CAM16).M[2];
  local_178.MATRIX_RGB_to_CAM16.M[2]._8_8_ =
       *(undefined8 *)((pJVar10->MATRIX_RGB_to_CAM16).M[2] + 2);
  local_178.MATRIX_RGB_to_CAM16.M[3]._0_8_ = *(undefined8 *)(pJVar10->MATRIX_RGB_to_CAM16).M[3];
  local_178.MATRIX_RGB_to_CAM16.M[3]._8_8_ =
       *(undefined8 *)((pJVar10->MATRIX_RGB_to_CAM16).M[3] + 2);
  local_178.MATRIX_CAM16_to_RGB.M[1]._0_8_ = *(undefined8 *)(pJVar10->MATRIX_CAM16_to_RGB).M[1];
  local_178.MATRIX_CAM16_to_RGB.M[1]._8_8_ =
       *(undefined8 *)((pJVar10->MATRIX_CAM16_to_RGB).M[1] + 2);
  local_178.MATRIX_CAM16_to_RGB.M[0]._0_8_ = *(undefined8 *)(pJVar10->MATRIX_CAM16_to_RGB).M[0];
  local_178.MATRIX_CAM16_to_RGB.M[0]._8_8_ =
       *(undefined8 *)((pJVar10->MATRIX_CAM16_to_RGB).M[0] + 2);
  local_178.MATRIX_CAM16_to_RGB.M[2]._0_8_ = *(undefined8 *)(pJVar10->MATRIX_CAM16_to_RGB).M[2];
  local_178.MATRIX_CAM16_to_RGB.M[2]._8_8_ =
       *(undefined8 *)((pJVar10->MATRIX_CAM16_to_RGB).M[2] + 2);
  local_178.MATRIX_CAM16_to_RGB.M[3]._0_8_ = *(undefined8 *)(pJVar10->MATRIX_CAM16_to_RGB).M[3];
  local_178.MATRIX_CAM16_to_RGB.M[3]._8_8_ =
       *(undefined8 *)((pJVar10->MATRIX_CAM16_to_RGB).M[3] + 2);
  memset(&local_1278,0,0x10f8);
  dVar9 = __real_3feaaaaaaaaaaaab;
  dVar8 = __real_3fe5555555555555;
  dVar7 = __real_3fd5555555555555;
  fVar6 = __real_3b360b61;
  fVar5 = __real_40c00000;
  fVar4 = __real_3f000000;
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_3f800000;
  fVar27 = param_2 * __real_3c23d70a;
  puVar19 = &local_1278;
  uVar11 = 0;
  uVar18 = uVar11;
  do {
    fVar26 = (float)(int)uVar18 * fVar6;
    fVar23 = FGenericPlatformMath::Fmod(fVar26 * fVar5,__real_40000000);
    fVar23 = fVar2 - (float)((uint)(fVar23 - fVar2) & uVar13);
    fVar24 = fVar23;
    if (__real_3e2aaaab <= fVar26) {
      dVar25 = (double)fVar26;
      if (dVar7 <= dVar25) {
        if (fVar4 <= fVar26) {
          fVar26 = fVar2;
          if (dVar8 <= dVar25) {
            fVar24 = 0.0;
            if (dVar9 <= dVar25) goto LAB_14515b2e3;
          }
          else {
            fVar23 = 0.0;
          }
        }
        else {
          fVar26 = fVar23;
          fVar24 = fVar2;
          fVar23 = 0.0;
        }
      }
      else {
        fVar26 = 0.0;
        fVar24 = fVar2;
      }
    }
    else {
      fVar23 = 0.0;
LAB_14515b2e3:
      fVar26 = fVar23;
      fVar23 = fVar2;
    }
    local_2398._s_0.X = fVar23 * fVar27;
    local_2398._s_0.Y = fVar24 * fVar27;
    local_2398._s_0.Z = fVar26 * fVar27;
    RGB_to_JMh((TVector<float> *)&local_2388._s_0,(TVector<float> *)&local_2398._s_0,&local_178);
    uVar16 = (int)uVar18 + 1;
    uVar18 = (ulonglong)uVar16;
    *puVar19 = local_2388._0_8_;
    *(float *)(puVar19 + 1) = local_2388._s_0.Z;
    puVar19 = (undefined8 *)((longlong)puVar19 + 0xc);
    uVar14 = uVar11;
    uVar15 = uVar11;
    uVar20 = uVar11;
    if (0x167 < (int)uVar16) {
      do {
        fVar2 = *(float *)((longlong)local_1270 + uVar11);
        pfVar1 = (float *)((longlong)local_1270 + uVar15);
        uVar18 = uVar14;
        if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
          uVar18 = uVar20;
        }
        if ((!NAN(fVar2) && !NAN(*pfVar1)) && (fVar2 >= *pfVar1 && fVar2 != *pfVar1)) {
          uVar11 = uVar15;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        uVar15 = uVar15 + 0xc;
        uVar20 = uVar18;
      } while ((int)uVar13 < 0x168);
      memset(&local_2378[0].A_w_J,0,0x10e0);
      lVar22 = 0xb4;
      pJVar10 = local_2378;
      do {
        pJVar21 = (JMhParams *)((longlong)&pJVar10->XYZ_w + 8);
        iVar17 = (int)uVar18;
        uVar18 = (ulonglong)(iVar17 + 2);
        fVar2 = local_1270[(longlong)(iVar17 % 0x168) * 3];
        *(undefined8 *)&pJVar10->A_w_J =
             *(undefined8 *)((longlong)&local_1278 + (longlong)(iVar17 % 0x168) * 0xc);
        *(float *)((longlong)&pJVar10->XYZ_w + 4) = fVar2;
        lVar12 = (longlong)((iVar17 + 1) % 0x168);
        uVar3 = *(undefined8 *)((longlong)&local_1278 + lVar12 * 0xc);
        fVar2 = local_1270[lVar12 * 3];
        pJVar21->F_L = (float)(int)uVar3;
        pJVar21->z = (float)(int)((ulonglong)uVar3 >> 0x20);
        *(float *)((longlong)&pJVar10->D_RGB + 4) = fVar2;
        lVar22 = lVar22 + -1;
        pJVar10 = pJVar21;
      } while (lVar22 != 0);
      local_2378[0].F_L = (float)local_1298._0_4_;
      local_2378[0].z = (float)local_1298._4_4_;
      local_1298._12_8_ = local_2378[0]._12_8_;
      local_2378[0].A_w = (float)local_1298._8_4_ - __real_43b40000;
      local_1298._20_4_ = (float)local_2378[0].XYZ_w.field0_0x0._4_4_ + __real_43b40000;
      memcpy(__return_storage_ptr__,local_2378,0x10f8);
      return __return_storage_ptr__;
    }
  } while( true );
}

// MakeReachMTable @ 14515b550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Table1D * __cdecl UE::Color::ACES::MakeReachMTable(Table1D *__return_storage_ptr__,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  JMhParams *pJVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_268 [32];
  TVector<float>_u_0 local_248;
  TVector<float>_u_0 local_238;
  TVector<float>_u_0 local_228;
  TVector<float>_u_0 local_218;
  JMhParams local_208;
  JMhParams local_158;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_268;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FColorSpace::FColorSpace(&ColorSpaceAP1,ACESAP1);
    _Init_thread_footer(&::_TSS0);
  }
  pJVar7 = InitJMhParams(&local_208,&ColorSpaceAP1);
  local_158.F_L = pJVar7->F_L;
  local_158.z = pJVar7->z;
  local_158.A_w = pJVar7->A_w;
  local_158.A_w_J = pJVar7->A_w_J;
  local_158.XYZ_w.field0_0x0._0_8_ = *(undefined8 *)&(pJVar7->XYZ_w).field0_0x0;
  local_158._24_8_ = *(undefined8 *)((longlong)&(pJVar7->XYZ_w).field0_0x0 + 8);
  local_158.D_RGB.field0_0x0._4_8_ = *(undefined8 *)((longlong)&(pJVar7->D_RGB).field0_0x0 + 4);
  local_158._padding_ = pJVar7->_padding_;
  local_158.MATRIX_RGB_to_CAM16.M[0]._0_8_ = *(undefined8 *)(pJVar7->MATRIX_RGB_to_CAM16).M[0];
  local_158.MATRIX_RGB_to_CAM16.M[0]._8_8_ = *(undefined8 *)((pJVar7->MATRIX_RGB_to_CAM16).M[0] + 2)
  ;
  local_158.MATRIX_RGB_to_CAM16.M[1]._0_8_ = *(undefined8 *)(pJVar7->MATRIX_RGB_to_CAM16).M[1];
  local_158.MATRIX_RGB_to_CAM16.M[1]._8_8_ = *(undefined8 *)((pJVar7->MATRIX_RGB_to_CAM16).M[1] + 2)
  ;
  local_158.MATRIX_RGB_to_CAM16.M[2]._0_8_ = *(undefined8 *)(pJVar7->MATRIX_RGB_to_CAM16).M[2];
  local_158.MATRIX_RGB_to_CAM16.M[2]._8_8_ = *(undefined8 *)((pJVar7->MATRIX_RGB_to_CAM16).M[2] + 2)
  ;
  local_158.MATRIX_RGB_to_CAM16.M[3]._0_8_ = *(undefined8 *)(pJVar7->MATRIX_RGB_to_CAM16).M[3];
  local_158.MATRIX_RGB_to_CAM16.M[3]._8_8_ = *(undefined8 *)((pJVar7->MATRIX_RGB_to_CAM16).M[3] + 2)
  ;
  local_158.MATRIX_CAM16_to_RGB.M[1]._0_8_ = *(undefined8 *)(pJVar7->MATRIX_CAM16_to_RGB).M[1];
  local_158.MATRIX_CAM16_to_RGB.M[1]._8_8_ = *(undefined8 *)((pJVar7->MATRIX_CAM16_to_RGB).M[1] + 2)
  ;
  local_158.MATRIX_CAM16_to_RGB.M[0]._0_8_ = *(undefined8 *)(pJVar7->MATRIX_CAM16_to_RGB).M[0];
  local_158.MATRIX_CAM16_to_RGB.M[0]._8_8_ = *(undefined8 *)((pJVar7->MATRIX_CAM16_to_RGB).M[0] + 2)
  ;
  local_158.MATRIX_CAM16_to_RGB.M[2]._0_8_ = *(undefined8 *)(pJVar7->MATRIX_CAM16_to_RGB).M[2];
  local_158.MATRIX_CAM16_to_RGB.M[2]._8_8_ = *(undefined8 *)((pJVar7->MATRIX_CAM16_to_RGB).M[2] + 2)
  ;
  local_158.MATRIX_CAM16_to_RGB.M[3]._0_8_ = *(undefined8 *)(pJVar7->MATRIX_CAM16_to_RGB).M[3];
  local_158.MATRIX_CAM16_to_RGB.M[3]._8_8_ = *(undefined8 *)((pJVar7->MATRIX_CAM16_to_RGB).M[3] + 2)
  ;
  fVar10 = powf((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) * local_158.F_L *
                __real_3c23d70a,__real_3ed70a3d);
  fVar10 = powf(((fVar10 * __real_43c80000) / (fVar10 + __real_41d90a3d)) / local_158.A_w_J,
                local_158.z * __real_3f170a3d);
  fVar11 = (float)copysignf(__real_3f800000,param_1);
  fVar16 = fVar10 * fVar11 * __real_42c80000;
  memset(__return_storage_ptr__,0,0x5a8);
  fVar4 = __real_44a28000;
  fVar11 = __real_42480000;
  fVar10 = __real_3f000000;
  dVar3 = __real_3f847ae147ae147b;
  iVar8 = 0;
  pfVar9 = __return_storage_ptr__->Data;
  do {
    fVar12 = fVar11;
    fVar15 = 0.0;
    while ((((fVar13 = fVar12, fVar13 < fVar4 &&
             (local_248._s_0.X = fVar16, local_248._s_0.Y = fVar13, local_248._s_0.Z = (float)iVar8,
             JMh_to_RGB((TVector<float> *)&local_238._s_0,(TVector<float> *)&local_248._s_0,
                        &local_158), 0.0 <= local_238._s_0.X)) && (0.0 <= local_238._s_0.Y)) &&
           (0.0 <= local_238._s_0.Z))) {
      fVar12 = fVar13 + fVar11;
      fVar15 = fVar13;
    }
    fVar12 = fVar13 - fVar15;
    uVar5 = fVar16;
    uVar6 = (float)iVar8;
    uVar1 = local_228._s_0.X;
    uVar2 = local_228._s_0.Z;
    while (local_228._s_0.Z = (float)uVar6, local_228._s_0.X = (float)uVar5, dVar3 < (double)fVar12)
    {
      fVar12 = (fVar13 + fVar15) * fVar10;
      local_228._s_0.Y = fVar12;
      JMh_to_RGB((TVector<float> *)&local_218._s_0,(TVector<float> *)&local_228._s_0,&local_158);
      fVar14 = fVar12;
      if (((0.0 <= local_218._s_0.X) && (0.0 <= local_218._s_0.Y)) && (0.0 <= local_218._s_0.Z)) {
        fVar14 = fVar13;
        fVar15 = fVar12;
      }
      uVar5 = local_228._s_0.X;
      uVar6 = local_228._s_0.Z;
      fVar13 = fVar14;
      uVar1 = local_228._s_0.X;
      uVar2 = local_228._s_0.Z;
      fVar12 = fVar14 - fVar15;
    }
    *pfVar9 = fVar13;
    iVar8 = iVar8 + 1;
    pfVar9 = pfVar9 + 1;
    local_228._s_0.X = (float)uVar1;
    local_228._s_0.Z = (float)uVar2;
  } while (iVar8 < 0x168);
  return __return_storage_ptr__;
}

// MakeUpperHullGamma @ 14515b8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Table1D * __cdecl
UE::Color::ACES::MakeUpperHullGamma
          (Table1D *__return_storage_ptr__,Table3D *param_1,float param_2,float param_3,
          float param_4,float param_5,float param_6,JMhParams *param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStackY_708 [32];
  TVector2<float>_u_0 local_6b8;
  Table1D *local_6b0;
  float local_6a8;
  undefined1 local_6a4 [1432];
  float local_10c;
  TVector<float>_u_0 local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_708;
  local_6b0 = __return_storage_ptr__;
  memset(local_6a4,0,0x5a4);
  memset(__return_storage_ptr__,0,0x5a8);
  fVar3 = __real_3ecccccd;
  fVar2 = __real_3727c5ac;
  pfVar9 = &local_6a8;
  iVar11 = 0;
  fVar15 = __real_40a00000;
  do {
    fVar13 = __real_43b40000;
    fVar14 = (float)iVar11;
    *pfVar9 = -1.0;
    iVar10 = 0;
    iVar8 = 0x169;
    fVar12 = FGenericPlatformMath::Fmod(fVar14,__real_43b40000);
    if (fVar12 < 0.0) {
      fVar12 = fVar12 + fVar13;
    }
    iVar5 = (int)fVar12 + 1;
    if ((int)fVar12 + 1 < 0) {
      iVar5 = 0;
    }
    if (0x169 < iVar5) {
      iVar5 = 0x169;
    }
    do {
      pfVar1 = &param_1->Data[iVar5].field0_0x0._s_0.Z;
      iVar7 = iVar5;
      if (fVar14 < *pfVar1 || fVar14 == *pfVar1) {
        iVar7 = iVar10;
        iVar8 = iVar5;
      }
      iVar5 = (iVar7 + iVar8) / 2;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      if (0x169 < iVar5) {
        iVar5 = 0x169;
      }
      iVar10 = iVar7;
    } while (iVar7 + 1 < iVar8);
    local_f8._s_0.Z = fVar14;
    local_e4 = fVar14;
    local_d8 = fVar14;
    if (iVar8 < 1) {
      iVar8 = 1;
    }
    lVar6 = (longlong)iVar8;
    fVar13 = (fVar14 - param_1->Data[lVar6 + -1].field0_0x0._s_0.Z) /
             (param_1->Data[lVar6].field0_0x0._s_0.Z - param_1->Data[lVar6 + -1].field0_0x0._s_0.Z);
    local_6b8._s_0.X =
         (param_1->Data[lVar6].field0_0x0._s_0.X - param_1->Data[lVar6 + -1].field0_0x0._s_0.X) *
         fVar13 + param_1->Data[lVar6 + -1].field0_0x0._s_0.X;
    local_6b8._s_0.Y =
         (param_1->Data[lVar6].field0_0x0._s_0.Y - param_1->Data[lVar6 + -1].field0_0x0._s_0.Y) *
         fVar13 + param_1->Data[lVar6 + -1].field0_0x0._s_0.Y;
    fVar13 = param_3 - local_6b8._s_0.X;
    local_f8._s_0.Y = local_6b8._s_0.Y;
    local_e8 = local_6b8._s_0.Y;
    local_dc = local_6b8._s_0.Y;
    local_f8._s_0.X = fVar13 * __real_3c23d70a + local_6b8._s_0.X;
    local_ec = fVar13 * __real_3f000000 + local_6b8._s_0.X;
    local_e0 = fVar13 * __real_3f7d70a4 + local_6b8._s_0.X;
    fVar13 = 0.0;
    fVar12 = fVar3;
    while ((fVar12 < fVar15 &&
           (bVar4 = EvaluateGammaFit((TVector2<float> *)&local_6b8._s_0,
                                     (TVector<float> *)&local_f8._s_0,fVar12,param_2,param_3,param_4
                                     ,param_5,param_6,param_7), !bVar4))) {
      fVar13 = fVar12;
      fVar12 = fVar12 + fVar3;
    }
    fVar14 = fVar12 - fVar13;
    while (fVar2 < fVar14) {
      fVar15 = (fVar12 + fVar13) * __real_3f000000;
      bVar4 = EvaluateGammaFit((TVector2<float> *)&local_6b8._s_0,(TVector<float> *)&local_f8._s_0,
                               fVar15,param_2,param_3,param_4,param_5,param_6,param_7);
      fVar16 = fVar15;
      if (bVar4) {
        *pfVar9 = fVar15;
        fVar16 = fVar13;
        fVar12 = fVar15;
      }
      fVar15 = __real_40a00000;
      fVar13 = fVar16;
      fVar14 = fVar12 - fVar16;
    }
    iVar11 = iVar11 + 1;
    *(float *)((longlong)pfVar9 + (longlong)__return_storage_ptr__ + (4 - (longlong)&local_6a8)) =
         *pfVar9;
    pfVar9 = pfVar9 + 1;
  } while (iVar11 < 0x168);
  local_6b0->Data[0] = local_10c;
  local_6b0->Data[0x169] = local_6a8;
  return local_6b0;
}

// OutsideHull @ 14515bce0

bool __cdecl UE::Color::ACES::OutsideHull(TVector<float> *param_1)

{
  if ((((param_1->field0_0x0)._s_0.X <= __real_3f800000) &&
      ((param_1->field0_0x0)._s_0.Y <= __real_3f800000)) &&
     ((param_1->field0_0x0)._s_0.Z <= __real_3f800000)) {
    return false;
  }
  return true;
}

// PanlrcForward @ 14515bd10

float __cdecl UE::Color::ACES::PanlrcForward(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = powf((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) * param_2 *
               __real_3c23d70a,__real_3ed70a3d);
  fVar2 = (float)copysignf(__real_3f800000,param_1);
  return (fVar2 * __real_43c80000 * fVar1) / (fVar1 + __real_41d90a3d);
}

// PanlrcInverse @ 14515bd90

float __cdecl UE::Color::ACES::PanlrcInverse(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = powf(((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_41d90a3d) /
               (__real_43c80000 - (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff)),
               __real_40186186);
  fVar2 = (float)copysignf(__real_3f800000,param_1);
  return (fVar1 / param_2) * fVar2 * __real_42c80000;
}

// RGB_to_JMh @ 14515c540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __cdecl
UE::Color::ACES::RGB_to_JMh
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,JMhParams *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = (param_1->field0_0x0)._s_0.X;
  fVar10 = (param_1->field0_0x0)._s_0.Y;
  fVar11 = (param_1->field0_0x0)._s_0.Z;
  fVar8 = (param_2->MATRIX_RGB_to_CAM16).M[1][1];
  fVar12 = (param_2->MATRIX_RGB_to_CAM16).M[1][2];
  fVar1 = (param_2->MATRIX_RGB_to_CAM16).M[0][1];
  fVar2 = (param_2->MATRIX_RGB_to_CAM16).M[0][2];
  fVar3 = (param_2->MATRIX_RGB_to_CAM16).M[2][1];
  fVar4 = (param_2->MATRIX_RGB_to_CAM16).M[2][2];
  fVar5 = (param_2->MATRIX_RGB_to_CAM16).M[3][1];
  fVar6 = (param_2->MATRIX_RGB_to_CAM16).M[3][2];
  fVar7 = PanlrcForward((fVar10 * (param_2->MATRIX_RGB_to_CAM16).M[1][0] +
                         fVar9 * (param_2->MATRIX_RGB_to_CAM16).M[0][0] +
                         fVar11 * (param_2->MATRIX_RGB_to_CAM16).M[2][0] +
                        (param_2->MATRIX_RGB_to_CAM16).M[3][0] * 0.0) *
                        (param_2->D_RGB).field0_0x0._s_0.X,param_2->F_L);
  fVar8 = PanlrcForward((fVar10 * fVar8 + fVar9 * fVar1 + fVar11 * fVar3 + fVar5 * 0.0) *
                        (param_2->D_RGB).field0_0x0._s_0.Y,param_2->F_L);
  fVar9 = PanlrcForward((fVar10 * fVar12 + fVar9 * fVar2 + fVar11 * fVar4 + fVar6 * 0.0) *
                        (param_2->D_RGB).field0_0x0._s_0.Z,param_2->F_L);
  fVar12 = (fVar7 - fVar8 * ___real_3f8ba2e9) + fVar9 * ___real_3dba2e8c;
  fVar11 = (fVar8 + fVar7) - (fVar9 + fVar9);
  fVar9 = powf((fVar9 * __real_3d4ccccd + fVar8 + fVar7 + fVar7) / param_2->A_w,
               param_2->z * __real_3f170a3d);
  fVar10 = 0.0;
  fVar9 = fVar9 * __real_42c80000;
  if (fVar9 != 0.0) {
    fVar10 = SQRT(fVar11 * fVar11 * ___real_3c4a4588 + fVar12 * fVar12) * ___real_421acccd;
  }
  fVar8 = FGenericPlatformMath::Atan2(fVar11 * ___real_3de38e39,fVar12);
  fVar11 = __real_43b40000;
  fVar8 = FGenericPlatformMath::Fmod(fVar8 * __real_42652ee0,__real_43b40000);
  if (fVar8 < 0.0) {
    fVar8 = fVar8 + fVar11;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar8;
  return __return_storage_ptr__;
}

// Smin @ 145161d90

float __cdecl UE::Color::ACES::Smin(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_1 - param_2;
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  fVar1 = param_3 - (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 / param_3;
  return param_1 - param_3 * __real_3e2aaaab * fVar1 * fVar1 * fVar1;
}

// SolveJIntersect @ 145161de0

float __cdecl
UE::Color::ACES::SolveJIntersect
          (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = __real_3f800000 / (param_3 * param_5);
  fVar3 = fVar4 * param_2;
  fVar1 = (__real_3f800000 / param_5) * param_2;
  if (param_3 <= param_1) {
    fVar2 = param_2 * param_4 * (__real_3f800000 / param_5) + param_1;
    fVar1 = (float)((uint)(param_2 * param_4 * fVar4 + fVar1 + __real_3f800000) ^
                   __xmm_80000000800000008000000080000000);
    fVar1 = (fVar2 + fVar2) / (SQRT(fVar1 * fVar1 - fVar3 * __real_40800000 * fVar2) - fVar1);
  }
  else {
    fVar1 = __real_3f800000 - fVar1;
    fVar1 = (float)((uint)(param_1 + param_1) ^ __xmm_80000000800000008000000080000000) /
            ((float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000) -
            SQRT(fVar1 * fVar1 - param_1 * __real_c0800000 * fVar3));
  }
  return fVar1;
}

// WrapTo360 @ 145165140

float __cdecl UE::Color::ACES::WrapTo360(float param_1)

{
  float fVar1;
  
  fVar1 = FGenericPlatformMath::Fmod(param_1,__real_43b40000);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + __real_43b40000;
  }
  return fVar1;
}

// Y_to_J @ 145165170

float __cdecl UE::Color::ACES::Y_to_J(float param_1,JMhParams *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = powf((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) * param_2->F_L *
               __real_3c23d70a,__real_3ed70a3d);
  fVar2 = (float)copysignf(__real_3f800000,param_1);
  fVar1 = powf((fVar1 * __real_43c80000) / ((fVar1 + __real_41d90a3d) * param_2->A_w_J),
               param_2->z * __real_3f170a3d);
  return fVar1 * fVar2 * __real_42c80000;
}

