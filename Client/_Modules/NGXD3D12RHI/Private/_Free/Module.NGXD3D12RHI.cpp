// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXD3D12RHI
// Functions: 14

// `dynamic_initializer_for_'LogDLSSNGXD3D12RHI'' @ 1413fe0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDLSSNGXD3D12RHI__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDLSSNGXD3D12RHI,L"LogDLSSNGXD3D12RHI",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDLSSNGXD3D12RHI__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNGXD3D12RHI'' @ 1413fe120

void __cdecl _dynamic_initializer_for__ModuleRegistrantNGXD3D12RHI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NGXD3D12RHI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NGXD3D12RHI",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNGXD3D12RHIModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14de15e50

void * __thiscall
FNGXD3D12RHIModule::_scalar_deleting_destructor_(FNGXD3D12RHIModule *this,uint param_1)

{
  *this = (FNGXD3D12RHIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// GetCommonEvalParams<NVSDK_NGX_D3D12_DLSSD_Eval_Params> @ 14de15e90

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

NVSDK_NGX_D3D12_DLSSD_Eval_Params * __cdecl
GetCommonEvalParams<NVSDK_NGX_D3D12_DLSSD_Eval_Params>
          (NVSDK_NGX_D3D12_DLSSD_Eval_Params *__return_storage_ptr__,ID3D12DynamicRHI *param_1,
          FRHICommandList *param_2,FRHIDLSSArguments *param_3)

{
  int iVar1;
  FRHITexture *pFVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  ID3D12Resource *pIVar6;
  ID3D12Resource *pIVar7;
  uint uVar8;
  
  __return_storage_ptr__->pInDiffuseAlbedo = (ID3D12Resource *)0x0;
  __return_storage_ptr__->pInSpecularAlbedo = (ID3D12Resource *)0x0;
  __return_storage_ptr__->pInNormals = (ID3D12Resource *)0x0;
  __return_storage_ptr__->pInRoughness = (ID3D12Resource *)0x0;
  __return_storage_ptr__->pInColor = (ID3D12Resource *)0x0;
  __return_storage_ptr__->pInAlpha = (ID3D12Resource *)0x0;
  __return_storage_ptr__->pInOutput = (ID3D12Resource *)0x0;
  __return_storage_ptr__->pInOutputAlpha = (ID3D12Resource *)0x0;
  __return_storage_ptr__->pInDepth = (ID3D12Resource *)0x0;
  __return_storage_ptr__->pInMotionVectors = (ID3D12Resource *)0x0;
  __return_storage_ptr__->InJitterOffsetX = 0.0;
  __return_storage_ptr__->InJitterOffsetY = 0.0;
  __return_storage_ptr__->InReset = 0;
  __return_storage_ptr__->InMVScaleX = 0.0;
  *(undefined8 *)&__return_storage_ptr__->InMVScaleY = 0;
  __return_storage_ptr__->pInTransparencyMask = (ID3D12Resource *)0x0;
  __return_storage_ptr__->pInExposureTexture = (ID3D12Resource *)0x0;
  __return_storage_ptr__->pInBiasCurrentColorMask = (ID3D12Resource *)0x0;
  (__return_storage_ptr__->InAlphaSubrectBase).X = 0;
  (__return_storage_ptr__->InAlphaSubrectBase).Y = 0;
  (__return_storage_ptr__->InOutputAlphaSubrectBase).X = 0;
  (__return_storage_ptr__->InOutputAlphaSubrectBase).Y = 0;
  (__return_storage_ptr__->InDiffuseAlbedoSubrectBase).X = 0;
  (__return_storage_ptr__->InDiffuseAlbedoSubrectBase).Y = 0;
  (__return_storage_ptr__->InSpecularAlbedoSubrectBase).X = 0;
  (__return_storage_ptr__->InSpecularAlbedoSubrectBase).Y = 0;
  (__return_storage_ptr__->InNormalsSubrectBase).X = 0;
  (__return_storage_ptr__->InNormalsSubrectBase).Y = 0;
  (__return_storage_ptr__->InRoughnessSubrectBase).X = 0;
  (__return_storage_ptr__->InRoughnessSubrectBase).Y = 0;
  (__return_storage_ptr__->InDepthSubrectBase).X = 0;
  (__return_storage_ptr__->InDepthSubrectBase).Y = 0;
  (__return_storage_ptr__->InMVSubrectBase).X = 0;
  (__return_storage_ptr__->InMVSubrectBase).Y = 0;
  (__return_storage_ptr__->InTranslucencySubrectBase).X = 0;
  (__return_storage_ptr__->InTranslucencySubrectBase).Y = 0;
  (__return_storage_ptr__->InBiasCurrentColorSubrectBase).X = 0;
  (__return_storage_ptr__->InBiasCurrentColorSubrectBase).Y = 0;
  memset(&__return_storage_ptr__->pInReflectedAlbedo,0,0x288);
  pIVar7 = (ID3D12Resource *)0x0;
  uVar8 = *(uint *)&(param_3->SrcRect).field0_0x0;
  uVar5 = *(uint *)((longlong)&(param_3->SrcRect).field0_0x0 + 4);
  pFVar2 = param_3->InputDepth;
  (__return_storage_ptr__->InOutputSubrectBase).X = *(uint *)&(param_3->DestRect).field0_0x0;
  (__return_storage_ptr__->InOutputSubrectBase).Y =
       *(uint *)((longlong)&(param_3->DestRect).field0_0x0 + 4);
  iVar1 = *(int *)((longlong)&(param_3->SrcRect).field0_0x0 + 8);
  (__return_storage_ptr__->InColorSubrectBase).X = uVar8;
  (__return_storage_ptr__->InRenderSubrectDimensions).Width = iVar1 - uVar8;
  iVar1 = *(int *)((longlong)&(param_3->SrcRect).field0_0x0 + 0xc);
  (__return_storage_ptr__->InColorSubrectBase).Y = uVar5;
  (__return_storage_ptr__->InRenderSubrectDimensions).Height = iVar1 - uVar5;
  pIVar6 = pIVar7;
  if (pFVar2 != (FRHITexture *)0x0) {
    lVar3 = *(longlong *)param_1;
    uVar4 = (**(code **)(lVar3 + 0x528))(param_1,pFVar2);
    (**(code **)(lVar3 + 0x598))(param_1,param_2,uVar4,pFVar2);
    pIVar6 = (ID3D12Resource *)(**(code **)(*(longlong *)param_1 + 0x518))(param_1,pFVar2);
  }
  pFVar2 = param_3->InputMotionVectors;
  uVar8 = *(uint *)((longlong)&(param_3->SrcRect).field0_0x0 + 4);
  __return_storage_ptr__->pInDepth = pIVar6;
  uVar5 = *(uint *)&(param_3->SrcRect).field0_0x0;
  (__return_storage_ptr__->InDepthSubrectBase).X = uVar5;
  (__return_storage_ptr__->InDepthSubrectBase).Y = uVar8;
  pIVar6 = pIVar7;
  if (pFVar2 != (FRHITexture *)0x0) {
    lVar3 = *(longlong *)param_1;
    uVar4 = (**(code **)(lVar3 + 0x528))(param_1,pFVar2);
    (**(code **)(lVar3 + 0x598))(param_1,param_2,uVar4,pFVar2);
    pIVar6 = (ID3D12Resource *)(**(code **)(*(longlong *)param_1 + 0x518))(param_1,pFVar2);
    uVar8 = *(uint *)((longlong)&(param_3->SrcRect).field0_0x0 + 4);
    uVar5 = *(uint *)&(param_3->SrcRect).field0_0x0;
  }
  __return_storage_ptr__->pInMotionVectors = pIVar6;
  (__return_storage_ptr__->InMVSubrectBase).X = 0;
  (__return_storage_ptr__->InMVSubrectBase).Y = 0;
  pIVar6 = pIVar7;
  if ((param_3->bUseBiasCurrentColorMask != false) &&
     (pFVar2 = param_3->InputBiasCurrentColorMask, pFVar2 != (FRHITexture *)0x0)) {
    lVar3 = *(longlong *)param_1;
    uVar4 = (**(code **)(lVar3 + 0x528))(param_1,pFVar2);
    (**(code **)(lVar3 + 0x598))(param_1,param_2,uVar4,pFVar2);
    pIVar6 = (ID3D12Resource *)(**(code **)(*(longlong *)param_1 + 0x518))(param_1,pFVar2);
    uVar8 = *(uint *)((longlong)&(param_3->SrcRect).field0_0x0 + 4);
    uVar5 = *(uint *)&(param_3->SrcRect).field0_0x0;
  }
  __return_storage_ptr__->pInBiasCurrentColorMask = pIVar6;
  (__return_storage_ptr__->InBiasCurrentColorSubrectBase).X = uVar5;
  (__return_storage_ptr__->InBiasCurrentColorSubrectBase).Y = uVar8;
  if ((param_3->bUseAutoExposure == false) &&
     (pFVar2 = param_3->InputExposure, pFVar2 != (FRHITexture *)0x0)) {
    lVar3 = *(longlong *)param_1;
    uVar4 = (**(code **)(lVar3 + 0x528))(param_1,pFVar2);
    (**(code **)(lVar3 + 0x598))(param_1,param_2,uVar4,pFVar2);
    pIVar7 = (ID3D12Resource *)(**(code **)(*(longlong *)param_1 + 0x518))(param_1,pFVar2);
  }
  __return_storage_ptr__->InPreExposure = param_3->PreExposure;
  __return_storage_ptr__->InJitterOffsetX = (param_3->JitterOffset).field0_0x0._s_0.X;
  __return_storage_ptr__->InJitterOffsetY = (param_3->JitterOffset).field0_0x0._s_0.Y;
  __return_storage_ptr__->InMVScaleX = (param_3->MotionVectorScale).field0_0x0._s_0.X;
  __return_storage_ptr__->InMVScaleY = (param_3->MotionVectorScale).field0_0x0._s_0.Y;
  __return_storage_ptr__->InReset = (uint)param_3->bReset;
  __return_storage_ptr__->InFrameTimeDeltaInMsec = param_3->DeltaTimeMS;
  __return_storage_ptr__->pInExposureTexture = pIVar7;
  return __return_storage_ptr__;
}

// GetCommonEvalParams<NVSDK_NGX_D3D12_DLSS_Eval_Params> @ 14de16110

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

NVSDK_NGX_D3D12_DLSS_Eval_Params * __cdecl
GetCommonEvalParams<NVSDK_NGX_D3D12_DLSS_Eval_Params>
          (NVSDK_NGX_D3D12_DLSS_Eval_Params *__return_storage_ptr__,ID3D12DynamicRHI *param_1,
          FRHICommandList *param_2,FRHIDLSSArguments *param_3)

{
  int iVar1;
  FRHITexture *pFVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  ID3D12Resource *pIVar6;
  ID3D12Resource *pIVar7;
  uint uVar8;
  
  memset(__return_storage_ptr__,0,0x168);
  pIVar7 = (ID3D12Resource *)0x0;
  uVar8 = *(uint *)&(param_3->SrcRect).field0_0x0;
  uVar5 = *(uint *)((longlong)&(param_3->SrcRect).field0_0x0 + 4);
  pFVar2 = param_3->InputDepth;
  (__return_storage_ptr__->InOutputSubrectBase).X = *(uint *)&(param_3->DestRect).field0_0x0;
  (__return_storage_ptr__->InOutputSubrectBase).Y =
       *(uint *)((longlong)&(param_3->DestRect).field0_0x0 + 4);
  iVar1 = *(int *)((longlong)&(param_3->SrcRect).field0_0x0 + 8);
  (__return_storage_ptr__->InColorSubrectBase).X = uVar8;
  (__return_storage_ptr__->InRenderSubrectDimensions).Width = iVar1 - uVar8;
  iVar1 = *(int *)((longlong)&(param_3->SrcRect).field0_0x0 + 0xc);
  (__return_storage_ptr__->InColorSubrectBase).Y = uVar5;
  (__return_storage_ptr__->InRenderSubrectDimensions).Height = iVar1 - uVar5;
  pIVar6 = pIVar7;
  if (pFVar2 != (FRHITexture *)0x0) {
    lVar3 = *(longlong *)param_1;
    uVar4 = (**(code **)(lVar3 + 0x528))(param_1,pFVar2);
    (**(code **)(lVar3 + 0x598))(param_1,param_2,uVar4,pFVar2);
    pIVar6 = (ID3D12Resource *)(**(code **)(*(longlong *)param_1 + 0x518))(param_1,pFVar2);
  }
  pFVar2 = param_3->InputMotionVectors;
  uVar8 = *(uint *)((longlong)&(param_3->SrcRect).field0_0x0 + 4);
  __return_storage_ptr__->pInDepth = pIVar6;
  uVar5 = *(uint *)&(param_3->SrcRect).field0_0x0;
  (__return_storage_ptr__->InDepthSubrectBase).X = uVar5;
  (__return_storage_ptr__->InDepthSubrectBase).Y = uVar8;
  pIVar6 = pIVar7;
  if (pFVar2 != (FRHITexture *)0x0) {
    lVar3 = *(longlong *)param_1;
    uVar4 = (**(code **)(lVar3 + 0x528))(param_1,pFVar2);
    (**(code **)(lVar3 + 0x598))(param_1,param_2,uVar4,pFVar2);
    pIVar6 = (ID3D12Resource *)(**(code **)(*(longlong *)param_1 + 0x518))(param_1,pFVar2);
    uVar8 = *(uint *)((longlong)&(param_3->SrcRect).field0_0x0 + 4);
    uVar5 = *(uint *)&(param_3->SrcRect).field0_0x0;
  }
  __return_storage_ptr__->pInMotionVectors = pIVar6;
  (__return_storage_ptr__->InMVSubrectBase).X = 0;
  (__return_storage_ptr__->InMVSubrectBase).Y = 0;
  pIVar6 = pIVar7;
  if ((param_3->bUseBiasCurrentColorMask != false) &&
     (pFVar2 = param_3->InputBiasCurrentColorMask, pFVar2 != (FRHITexture *)0x0)) {
    lVar3 = *(longlong *)param_1;
    uVar4 = (**(code **)(lVar3 + 0x528))(param_1,pFVar2);
    (**(code **)(lVar3 + 0x598))(param_1,param_2,uVar4,pFVar2);
    pIVar6 = (ID3D12Resource *)(**(code **)(*(longlong *)param_1 + 0x518))(param_1,pFVar2);
    uVar8 = *(uint *)((longlong)&(param_3->SrcRect).field0_0x0 + 4);
    uVar5 = *(uint *)&(param_3->SrcRect).field0_0x0;
  }
  __return_storage_ptr__->pInBiasCurrentColorMask = pIVar6;
  (__return_storage_ptr__->InBiasCurrentColorSubrectBase).X = uVar5;
  (__return_storage_ptr__->InBiasCurrentColorSubrectBase).Y = uVar8;
  if ((param_3->bUseAutoExposure == false) &&
     (pFVar2 = param_3->InputExposure, pFVar2 != (FRHITexture *)0x0)) {
    lVar3 = *(longlong *)param_1;
    uVar4 = (**(code **)(lVar3 + 0x528))(param_1,pFVar2);
    (**(code **)(lVar3 + 0x598))(param_1,param_2,uVar4,pFVar2);
    pIVar7 = (ID3D12Resource *)(**(code **)(*(longlong *)param_1 + 0x518))(param_1,pFVar2);
  }
  __return_storage_ptr__->InPreExposure = param_3->PreExposure;
  __return_storage_ptr__->InJitterOffsetX = (param_3->JitterOffset).field0_0x0._s_0.X;
  __return_storage_ptr__->InJitterOffsetY = (param_3->JitterOffset).field0_0x0._s_0.Y;
  __return_storage_ptr__->InMVScaleX = (param_3->MotionVectorScale).field0_0x0._s_0.X;
  __return_storage_ptr__->InMVScaleY = (param_3->MotionVectorScale).field0_0x0._s_0.Y;
  __return_storage_ptr__->InReset = (uint)param_3->bReset;
  __return_storage_ptr__->InFrameTimeDeltaInMsec = param_3->DeltaTimeMS;
  __return_storage_ptr__->pInExposureTexture = pIVar7;
  return __return_storage_ptr__;
}

// MakeShared<FD3D12NGXDLSSFeature,1,NVSDK_NGX_Handle_*_&,NVSDK_NGX_Parameter_*_&,FDLSSFeatureDesc,unsigned_int_&> @ 14de16330

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

TSharedRef<FD3D12NGXDLSSFeature,1> * __cdecl
MakeShared<FD3D12NGXDLSSFeature,1,NVSDK_NGX_Handle_*_&,NVSDK_NGX_Parameter_*_&,FDLSSFeatureDesc,unsigned_int_&>
          (TSharedRef<FD3D12NGXDLSSFeature,1> *__return_storage_ptr__,NVSDK_NGX_Handle **param_1,
          NVSDK_NGX_Parameter **param_2,FDLSSFeatureDesc *param_3,uint *param_4)

{
  atomic<int> aVar1;
  NVSDK_NGX_Parameter *pNVar2;
  NVSDK_NGX_Handle *pNVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FD3D12NGXDLSSFeature,1> *pTVar8;
  
  pTVar7 = operator_new(0x70);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FD3D12NGXDLSSFeature *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFD3D12NGXDLSSFeature___00_SharedPointerInternals__6B_
    ;
    pNVar2 = *param_2;
    pNVar3 = *param_1;
    aVar1 = (atomic<int>)*param_4;
    pTVar7[1]._padding_ = (longlong)&___7NGXDLSSFeature__6B_;
    *(TIntPoint<int>_u_0 *)&pTVar7[1].SharedReferenceCount =
         (param_3->SrcRect).field0_0x0._s_0.Min.field0_0x0;
    pTVar7[2]._padding_ = (longlong)(param_3->SrcRect).field0_0x0._s_0.Max.field0_0x0;
    *(TIntPoint<int>_u_0 *)&pTVar7[2].SharedReferenceCount =
         (param_3->DestRect).field0_0x0._s_0.Min.field0_0x0;
    pTVar7[3]._padding_ = (longlong)(param_3->DestRect).field0_0x0._s_0.Max.field0_0x0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)param_3->DLSSPreset;
    pTVar7[3].WeakReferenceCount = (atomic<int>)param_3->DLSSRRPreset;
    *(int *)&pTVar7[4]._padding_ = param_3->PerfQuality;
    *(bool *)((longlong)&pTVar7[4]._padding_ + 4) = param_3->bHighResolutionMotionVectors;
    *(bool *)((longlong)&pTVar7[4]._padding_ + 5) = param_3->bUseAutoExposure;
    *(bool *)((longlong)&pTVar7[4]._padding_ + 6) = param_3->bEnableAlphaUpscaling;
    *(bool *)((longlong)&pTVar7[4]._padding_ + 7) = param_3->bReleaseMemoryOnDelete;
    pTVar7[4].SharedReferenceCount = (atomic<int>)param_3->GPUNode;
    pTVar7[4].WeakReferenceCount = (atomic<int>)param_3->GPUVisibility;
    *(ENGXDLSSDenoiserMode *)&pTVar7[5]._padding_ = param_3->DenoiserMode;
    *(NVSDK_NGX_Handle **)&pTVar7[5].SharedReferenceCount = pNVar3;
    pTVar7[6]._padding_ = (longlong)pNVar2;
    pTVar7[6].SharedReferenceCount = aVar1;
    *(undefined1 *)&pTVar7[6].WeakReferenceCount = 0;
    if (GIsRunningRHIInSeparateThread_InternalUseOnly != false) {
      bVar6 = IsInRHIThread();
      if (!bVar6) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Public\\NGXRHI.h"
                           ,0x12f,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TSharedRef<FD3D12NGXDLSSFeature,1> *)(*pcVar5)();
          return pTVar8;
        }
      }
    }
    lVar4._0_4_ = pTVar7[5].SharedReferenceCount;
    lVar4._4_4_ = pTVar7[5].WeakReferenceCount;
    if (lVar4 == 0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Feature",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Public\\NGXRHI.h"
                         ,0x130,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<FD3D12NGXDLSSFeature,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    if (pTVar7[6]._padding_ == 0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Parameter",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Public\\NGXRHI.h"
                         ,0x131,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<FD3D12NGXDLSSFeature,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pTVar7[1]._padding_ = (longlong)&___7FD3D12NGXDLSSFeature__6B_;
    __return_storage_ptr__->Object = (FD3D12NGXDLSSFeature *)(pTVar7 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    if ((FD3D12NGXDLSSFeature *)(pTVar7 + 1) == (FD3D12NGXDLSSFeature *)0x0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<FD3D12NGXDLSSFeature,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 14de16d30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FD3D12NGXDLSSFeature,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FD3D12NGXDLSSFeature,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de16d70

void * __thiscall
FD3D12NGXDLSSFeature::_scalar_deleting_destructor_(FD3D12NGXDLSSFeature *this,uint param_1)

{
  ~FD3D12NGXDLSSFeature(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de16db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FNGXD3D12RHI::_scalar_deleting_destructor_(FNGXD3D12RHI *this,uint param_1)

{
  bool bVar1;
  NVSDK_NGX_Result NVar2;
  ID3D12Device *pIVar3;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  this->_padding_ = (longlong)&___7FNGXD3D12RHI__6B_;
  if (4 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXD3D12RHI::~FNGXD3D12RHI",0x1b,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (NGXRHI::bNGXInitialized != false) {
    NGXRHI::ReleaseAllocatedFeatures((NGXRHI *)this);
    if ((NVSDK_NGX_Parameter *)this->_padding_ != (NVSDK_NGX_Parameter *)0x0) {
      NVar2 = NVSDK_NGX_D3D12_DestroyParameters((NVSDK_NGX_Parameter *)this->_padding_);
      if (4 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
        GetNGXResultAsString(NVar2);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
      }
    }
    bVar1 = NGXRHI::IsSafeToShutdownNGX((NGXRHI *)this);
    if (bVar1) {
      pIVar3 = (ID3D12Device *)(**(code **)(*(longlong *)this->D3D12RHI + 0x4e0))(this->D3D12RHI,0);
      NVar2 = NVSDK_NGX_D3D12_Shutdown1(pIVar3);
      if (4 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
        GetNGXResultAsString(NVar2);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
      }
    }
    NGXRHI::bNGXInitialized = false;
  }
  if (4 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXD3D12RHI::~FNGXD3D12RHI",0x1b,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  NGXRHI::~NGXRHI((NGXRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// NGX_D3D12_EVALUATE_DLSSD_EXT @ 14de18820

NVSDK_NGX_Result __cdecl
NGX_D3D12_EVALUATE_DLSSD_EXT
          (ID3D12GraphicsCommandList *param_1,NVSDK_NGX_Handle *param_2,NVSDK_NGX_Parameter *param_3
          ,NVSDK_NGX_D3D12_DLSSD_Eval_Params *param_4)

{
  NVSDK_NGX_Result NVar1;
  float fVar2;
  float fVar3;
  
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"Color",param_4->pInColor);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"Output",param_4->pInOutput);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"Depth",param_4->pInDepth);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"MotionVectors",param_4->pInMotionVectors);
  NVSDK_NGX_Parameter_SetF(param_3,"Jitter.Offset.X",param_4->InJitterOffsetX);
  NVSDK_NGX_Parameter_SetF(param_3,"Jitter.Offset.Y",param_4->InJitterOffsetY);
  NVSDK_NGX_Parameter_SetI(param_3,"Reset",param_4->InReset);
  fVar3 = __real_3f800000;
  fVar2 = param_4->InMVScaleX;
  if (param_4->InMVScaleX == 0.0) {
    fVar2 = __real_3f800000;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"MV.Scale.X",fVar2);
  fVar2 = param_4->InMVScaleY;
  if (param_4->InMVScaleY == 0.0) {
    fVar2 = fVar3;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"MV.Scale.Y",fVar2);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"TransparencyMask",param_4->pInTransparencyMask);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"ExposureTexture",param_4->pInExposureTexture);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSS.Input.Bias.Current.Color.Mask",param_4->pInBiasCurrentColorMask);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Albedo",(param_4->GBufferSurface).pInAttrib[0]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Roughness",(param_4->GBufferSurface).pInAttrib[1]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Metallic",(param_4->GBufferSurface).pInAttrib[2]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Specular",(param_4->GBufferSurface).pInAttrib[3]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Subsurface",(param_4->GBufferSurface).pInAttrib[4]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Normals",(param_4->GBufferSurface).pInAttrib[5]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.ShadingModelId",(param_4->GBufferSurface).pInAttrib[6]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.MaterialId",(param_4->GBufferSurface).pInAttrib[7]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.8",(param_4->GBufferSurface).pInAttrib[8]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.9",(param_4->GBufferSurface).pInAttrib[9]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.11",(param_4->GBufferSurface).pInAttrib[0xb]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.12",(param_4->GBufferSurface).pInAttrib[0xc]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.13",(param_4->GBufferSurface).pInAttrib[0xd]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.14",(param_4->GBufferSurface).pInAttrib[0xe]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.15",(param_4->GBufferSurface).pInAttrib[0xf]);
  NVSDK_NGX_Parameter_SetUI(param_3,"TonemapperType",param_4->InToneMapperType);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"MotionVectors3D",param_4->pInMotionVectors3D);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"IsParticleMask",param_4->pInIsParticleMask);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"AnimatedTextureMask",param_4->pInAnimatedTextureMask);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"DepthHighRes",param_4->pInDepthHighRes);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"Position.ViewSpace",param_4->pInPositionViewSpace);
  NVSDK_NGX_Parameter_SetF(param_3,"FrameTimeDeltaInMsec",param_4->InFrameTimeDeltaInMsec);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"RayTracingHitDistance",param_4->pInRayTracingHitDistance);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.SpecularMvec",param_4->pInMotionVectorsReflections);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Color.Subrect.Base.X",(param_4->InColorSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Color.Subrect.Base.Y",(param_4->InColorSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Depth.Subrect.Base.X",(param_4->InDepthSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Depth.Subrect.Base.Y",(param_4->InDepthSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Input.MV.Subrect.Base.X",(param_4->InMVSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Input.MV.Subrect.Base.Y",(param_4->InMVSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Translucency.Subrect.Base.X",(param_4->InTranslucencySubrectBase).X
            );
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Translucency.Subrect.Base.Y",(param_4->InTranslucencySubrectBase).Y
            );
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Bias.Current.Color.Subrect.Base.X",
             (param_4->InBiasCurrentColorSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Bias.Current.Color.Subrect.Base.Y",
             (param_4->InBiasCurrentColorSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Output.Subrect.Base.X",(param_4->InOutputSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Output.Subrect.Base.Y",(param_4->InOutputSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Render.Subrect.Dimensions.Width",
             (param_4->InRenderSubrectDimensions).Width);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Render.Subrect.Dimensions.Height",
             (param_4->InRenderSubrectDimensions).Height);
  fVar2 = param_4->InPreExposure;
  if (param_4->InPreExposure == 0.0) {
    fVar2 = fVar3;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"DLSS.Pre.Exposure",fVar2);
  if (param_4->InExposureScale != 0.0) {
    fVar3 = param_4->InExposureScale;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"DLSS.Exposure.Scale",fVar3);
  NVSDK_NGX_Parameter_SetI(param_3,"DLSS.Indicator.Invert.X.Axis",param_4->InIndicatorInvertXAxis);
  NVSDK_NGX_Parameter_SetI(param_3,"DLSS.Indicator.Invert.Y.Axis",param_4->InIndicatorInvertYAxis);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Emissive",(param_4->GBufferSurface).pInAttrib[0xc]);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"DLSS.Input.DiffuseAlbedo",param_4->pInDiffuseAlbedo)
  ;
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSS.Input.SpecularAlbedo",param_4->pInSpecularAlbedo);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.DiffuseAlbedo.Subrect.Base.X",
             (param_4->InDiffuseAlbedoSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.DiffuseAlbedo.Subrect.Base.Y",
             (param_4->InDiffuseAlbedoSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.SpecularAlbedo.Subrect.Base.X",
             (param_4->InSpecularAlbedoSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.SpecularAlbedo.Subrect.Base.Y",
             (param_4->InSpecularAlbedoSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Normals.Subrect.Base.X",(param_4->InNormalsSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Normals.Subrect.Base.Y",(param_4->InNormalsSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Roughness.Subrect.Base.X",(param_4->InRoughnessSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Roughness.Subrect.Base.Y",(param_4->InRoughnessSubrectBase).Y);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"GBuffer.Normals",param_4->pInNormals);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"GBuffer.Roughness",param_4->pInRoughness);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"DLSSD.Alpha",param_4->pInAlpha);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"DLSSD.OutputAlpha",param_4->pInOutputAlpha);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"DLSSD.ReflectedAlbedo",param_4->pInReflectedAlbedo);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.ColorBeforeParticles",param_4->pInColorBeforeParticles);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.ColorAfterParticles",param_4->pInColorAfterParticles);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.ColorBeforeTransparency",param_4->pInColorBeforeTransparency);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.ColorAfterTransparency",param_4->pInColorAfterTransparency);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"DLSSD.ColorBeforeFog",param_4->pInColorBeforeFog);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"DLSSD.ColorAfterFog",param_4->pInColorAfterFog);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide",
             param_4->pInScreenSpaceSubsurfaceScatteringGuide);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering",
             param_4->pInColorBeforeScreenSpaceSubsurfaceScattering);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering",
             param_4->pInColorAfterScreenSpaceSubsurfaceScattering);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.ScreenSpaceRefractionGuide",param_4->pInScreenSpaceRefractionGuide);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.ColorBeforeScreenSpaceRefraction",
             param_4->pInColorBeforeScreenSpaceRefraction);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.ColorAfterScreenSpaceRefraction",
             param_4->pInColorAfterScreenSpaceRefraction);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.DepthOfFieldGuide",param_4->pInDepthOfFieldGuide);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.ColorBeforeDepthOfField",param_4->pInColorBeforeDepthOfField);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.ColorAfterDepthOfField",param_4->pInColorAfterDepthOfField);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.DiffuseHitDistance",param_4->pInDiffuseHitDistance);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.SpecularHitDistance",param_4->pInSpecularHitDistance);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.DiffuseRayDirection",param_4->pInDiffuseRayDirection);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.SpecularRayDirection",param_4->pInSpecularRayDirection);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.DiffuseRayDirectionHitDistance",
             param_4->pInDiffuseRayDirectionHitDistance);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSSD.SpecularRayDirectionHitDistance",
             param_4->pInSpecularRayDirectionHitDistance);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSSD.Alpha.Subrect.Base.X",(param_4->InAlphaSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSSD.Alpha.Subrect.Base.Y",(param_4->InAlphaSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.OutputAlpha.Subrect.Base.X",(param_4->InOutputAlphaSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.OutputAlpha.Subrect.Base.Y",(param_4->InOutputAlphaSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ReflectedAlbedo.Subrect.Base.X",
             (param_4->InReflectedAlbedoSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ReflectedAlbedo.Subrect.Base.Y",
             (param_4->InReflectedAlbedoSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterParticles.Subrect.Base.X",
             (param_4->InColorAfterParticlesSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterParticles.Subrect.Base.Y",
             (param_4->InColorAfterParticlesSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeParticles.Subrect.Base.X",
             (param_4->InColorBeforeParticlesSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeParticles.Subrect.Base.Y",
             (param_4->InColorBeforeParticlesSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeTransparency.Subrect.Base.X",
             (param_4->InColorBeforeTransparencySubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeTransparency.Subrect.Base.Y",
             (param_4->InColorBeforeTransparencySubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterTransparency.Subrect.Base.X",
             (param_4->InColorAfterTransparencySubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterTransparency.Subrect.Base.Y",
             (param_4->InColorAfterTransparencySubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterFog.Subrect.Base.X",(param_4->InColorAfterFogSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterFog.Subrect.Base.Y",(param_4->InColorAfterFogSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeFog.Subrect.Base.X",(param_4->InColorBeforeFogSubrectBase).X)
  ;
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeFog.Subrect.Base.Y",(param_4->InColorBeforeFogSubrectBase).Y)
  ;
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide.Subrect.Base.X",
             (param_4->InScreenSpaceSubsurfaceScatteringGuideSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide.Subrect.Base.Y",
             (param_4->InScreenSpaceSubsurfaceScatteringGuideSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering.Subrect.Base.X",
             (param_4->InColorBeforeScreenSpaceSubsurfaceScatteringSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering.Subrect.Base.Y",
             (param_4->InColorBeforeScreenSpaceSubsurfaceScatteringSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering.Subrect.Base.X",
             (param_4->InColorAfterScreenSpaceSubsurfaceScatteringSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering.Subrect.Base.Y",
             (param_4->InColorAfterScreenSpaceSubsurfaceScatteringSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ScreenSpaceRefractionGuide.Subrect.Base.X",
             (param_4->InScreenSpaceRefractionGuideSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ScreenSpaceRefractionGuide.Subrect.Base.Y",
             (param_4->InScreenSpaceRefractionGuideSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeScreenSpaceRefraction.Subrect.Base.X",
             (param_4->InColorBeforeScreenSpaceRefractionSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeScreenSpaceRefraction.Subrect.Base.Y",
             (param_4->InColorBeforeScreenSpaceRefractionSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterScreenSpaceRefraction.Subrect.Base.X",
             (param_4->InColorAfterScreenSpaceRefractionSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterScreenSpaceRefraction.Subrect.Base.Y",
             (param_4->InColorAfterScreenSpaceRefractionSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.DepthOfFieldGuide.Subrect.Base.X",
             (param_4->InDepthOfFieldGuideSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.DepthOfFieldGuide.Subrect.Base.Y",
             (param_4->InDepthOfFieldGuideSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeDepthOfField.Subrect.Base.X",
             (param_4->InColorBeforeDepthOfFieldSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorBeforeDepthOfField.Subrect.Base.Y",
             (param_4->InColorBeforeDepthOfFieldSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterDepthOfField.Subrect.Base.X",
             (param_4->InColorAfterDepthOfFieldSubtectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.ColorAfterDepthOfField.Subrect.Base.Y",
             (param_4->InColorAfterDepthOfFieldSubtectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.DiffuseHitDistance.Subrect.Base.X",
             (param_4->InDiffuseHitDistanceSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.DiffuseHitDistance.Subrect.Base.Y",
             (param_4->InDiffuseHitDistanceSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.SpecularHitDistance.Subrect.Base.X",
             (param_4->InSpecularHitDistanceSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.SpecularHitDistance.Subrect.Base.Y",
             (param_4->InSpecularHitDistanceSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.DiffuseRayDirection.Subrect.Base.X",
             (param_4->InDiffuseRayDirectionSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.DiffuseRayDirection.Subrect.Base.Y",
             (param_4->InDiffuseRayDirectionSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.SpecularRayDirection.Subrect.Base.X",
             (param_4->InSpecularRayDirectionSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.SpecularRayDirection.Subrect.Base.Y",
             (param_4->InSpecularRayDirectionSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.DiffuseRayDirectionHitDistance.Subrect.Base.X",
             (param_4->InDiffuseRayDirectionHitDistanceSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.DiffuseRayDirectionHitDistance.Subrect.Base.Y",
             (param_4->InDiffuseRayDirectionHitDistanceSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.SpecularRayDirectionHitDistance.Subrect.Base.X",
             (param_4->InSpecularRayDirectionHitDistanceSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSSD.SpecularRayDirectionHitDistance.Subrect.Base.Y",
             (param_4->InSpecularRayDirectionHitDistanceSubrectBase).Y);
  NVSDK_NGX_Parameter_SetVoidPointer(param_3,"WorldToViewMatrix",param_4->pInWorldToViewMatrix);
  NVSDK_NGX_Parameter_SetVoidPointer(param_3,"ViewToClipMatrix",param_4->pInViewToClipMatrix);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSS.TransparencyLayer",param_4->pInTransparencyLayer);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSS.TransparencyLayerOpacity",param_4->pInTransparencyLayerOpacity);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSS.TransparencyLayerMvecs",param_4->pInTransparencyLayerMvecs);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"DLSS.DisocclusionMask",param_4->pInDisocclusionMask)
  ;
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.TransparencyLayer.Subrect.Base.X",
             (param_4->InTransparencyLayerSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.TransparencyLayer.Subrect.Base.Y",
             (param_4->InTransparencyLayerSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.TransparencyLayerOpacity.Subrect.Base.X",
             (param_4->InTransparencyLayerOpacitySubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.TransparencyLayerOpacity.Subrect.Base.Y",
             (param_4->InTransparencyLayerOpacitySubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.TransparencyLayerMvecs.Subrect.Base.X",
             (param_4->InTransparencyLayerMvecsSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.TransparencyLayerMvecs.Subrect.Base.Y",
             (param_4->InTransparencyLayerMvecsSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.DisocclusionMask.Subrect.Base.X",
             (param_4->InDisocclusionMaskSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.DisocclusionMask.Subrect.Base.Y",
             (param_4->InDisocclusionMaskSubrectBase).Y);
  NVar1 = NVSDK_NGX_D3D12_EvaluateFeature_C
                    (param_1,param_2,param_3,(_func___cdecl_void_float_bool_ptr *)0x0);
  return NVar1;
}

// NGX_D3D12_EVALUATE_DLSS_EXT @ 14de195a0

NVSDK_NGX_Result __cdecl
NGX_D3D12_EVALUATE_DLSS_EXT
          (ID3D12GraphicsCommandList *param_1,NVSDK_NGX_Handle *param_2,NVSDK_NGX_Parameter *param_3
          ,NVSDK_NGX_D3D12_DLSS_Eval_Params *param_4)

{
  NVSDK_NGX_Result NVar1;
  float fVar2;
  float fVar3;
  
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"Color",(param_4->Feature).pInColor);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"Output",(param_4->Feature).pInOutput);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"Depth",param_4->pInDepth);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"MotionVectors",param_4->pInMotionVectors);
  NVSDK_NGX_Parameter_SetF(param_3,"Jitter.Offset.X",param_4->InJitterOffsetX);
  NVSDK_NGX_Parameter_SetF(param_3,"Jitter.Offset.Y",param_4->InJitterOffsetY);
  NVSDK_NGX_Parameter_SetF(param_3,"Sharpness",(param_4->Feature).InSharpness);
  NVSDK_NGX_Parameter_SetI(param_3,"Reset",param_4->InReset);
  fVar3 = __real_3f800000;
  fVar2 = param_4->InMVScaleX;
  if (param_4->InMVScaleX == 0.0) {
    fVar2 = __real_3f800000;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"MV.Scale.X",fVar2);
  fVar2 = param_4->InMVScaleY;
  if (param_4->InMVScaleY == 0.0) {
    fVar2 = fVar3;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"MV.Scale.Y",fVar2);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"TransparencyMask",param_4->pInTransparencyMask);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"ExposureTexture",param_4->pInExposureTexture);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"DLSS.Input.Bias.Current.Color.Mask",param_4->pInBiasCurrentColorMask);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Albedo",(param_4->GBufferSurface).pInAttrib[0]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Roughness",(param_4->GBufferSurface).pInAttrib[1]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Metallic",(param_4->GBufferSurface).pInAttrib[2]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Specular",(param_4->GBufferSurface).pInAttrib[3]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Subsurface",(param_4->GBufferSurface).pInAttrib[4]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Normals",(param_4->GBufferSurface).pInAttrib[5]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.ShadingModelId",(param_4->GBufferSurface).pInAttrib[6]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.MaterialId",(param_4->GBufferSurface).pInAttrib[7]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.8",(param_4->GBufferSurface).pInAttrib[8]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.9",(param_4->GBufferSurface).pInAttrib[9]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.10",(param_4->GBufferSurface).pInAttrib[10]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.11",(param_4->GBufferSurface).pInAttrib[0xb]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.12",(param_4->GBufferSurface).pInAttrib[0xc]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.13",(param_4->GBufferSurface).pInAttrib[0xd]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.14",(param_4->GBufferSurface).pInAttrib[0xe]);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"GBuffer.Attrib.15",(param_4->GBufferSurface).pInAttrib[0xf]);
  NVSDK_NGX_Parameter_SetUI(param_3,"TonemapperType",param_4->InToneMapperType);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"MotionVectors3D",param_4->pInMotionVectors3D);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"IsParticleMask",param_4->pInIsParticleMask);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"AnimatedTextureMask",param_4->pInAnimatedTextureMask);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"DepthHighRes",param_4->pInDepthHighRes);
  NVSDK_NGX_Parameter_SetD3d12Resource(param_3,"Position.ViewSpace",param_4->pInPositionViewSpace);
  NVSDK_NGX_Parameter_SetF(param_3,"FrameTimeDeltaInMsec",param_4->InFrameTimeDeltaInMsec);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"RayTracingHitDistance",param_4->pInRayTracingHitDistance);
  NVSDK_NGX_Parameter_SetD3d12Resource
            (param_3,"MotionVectorsReflection",param_4->pInMotionVectorsReflections);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Color.Subrect.Base.X",(param_4->InColorSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Color.Subrect.Base.Y",(param_4->InColorSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Depth.Subrect.Base.X",(param_4->InDepthSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Depth.Subrect.Base.Y",(param_4->InDepthSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Input.MV.Subrect.Base.X",(param_4->InMVSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Input.MV.Subrect.Base.Y",(param_4->InMVSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Translucency.Subrect.Base.X",(param_4->InTranslucencySubrectBase).X
            );
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Translucency.Subrect.Base.Y",(param_4->InTranslucencySubrectBase).Y
            );
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Bias.Current.Color.Subrect.Base.X",
             (param_4->InBiasCurrentColorSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Input.Bias.Current.Color.Subrect.Base.Y",
             (param_4->InBiasCurrentColorSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Output.Subrect.Base.X",(param_4->InOutputSubrectBase).X);
  NVSDK_NGX_Parameter_SetUI(param_3,"DLSS.Output.Subrect.Base.Y",(param_4->InOutputSubrectBase).Y);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Render.Subrect.Dimensions.Width",
             (param_4->InRenderSubrectDimensions).Width);
  NVSDK_NGX_Parameter_SetUI
            (param_3,"DLSS.Render.Subrect.Dimensions.Height",
             (param_4->InRenderSubrectDimensions).Height);
  fVar2 = param_4->InPreExposure;
  if (param_4->InPreExposure == 0.0) {
    fVar2 = fVar3;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"DLSS.Pre.Exposure",fVar2);
  if (param_4->InExposureScale != 0.0) {
    fVar3 = param_4->InExposureScale;
  }
  NVSDK_NGX_Parameter_SetF(param_3,"DLSS.Exposure.Scale",fVar3);
  NVSDK_NGX_Parameter_SetI(param_3,"DLSS.Indicator.Invert.X.Axis",param_4->InIndicatorInvertXAxis);
  NVSDK_NGX_Parameter_SetI(param_3,"DLSS.Indicator.Invert.Y.Axis",param_4->InIndicatorInvertYAxis);
  NVar1 = NVSDK_NGX_D3D12_EvaluateFeature_C
                    (param_1,param_2,param_3,(_func___cdecl_void_float_bool_ptr *)0x0);
  return NVar1;
}

// IMPLEMENT_MODULE_NGXD3D12RHI @ 14de19ac0

void __cdecl IMPLEMENT_MODULE_NGXD3D12RHI(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15045ef10

void __cdecl
```FNGXD3D12RHI::ExecuteDLSS'::__l2::Desc::operator()'::__l7::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015045ef17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'LogDLSSNGXD3D12RHI'' @ 15045ef30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDLSSNGXD3D12RHI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
  return;
}

