// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FPrecomputedVolumetricLightmap @ 14834b3a0

FPrecomputedVolumetricLightmap * __thiscall
FPrecomputedVolumetricLightmap::FPrecomputedVolumetricLightmap(FPrecomputedVolumetricLightmap *this)

{
  this->Data = (FPrecomputedVolumetricLightmapData *)0x0;
  this->bAddedToScene = false;
  (this->SourceRegistry).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WorldOriginOffset).field0_0x0._s_0.X = 0.0;
  (this->WorldOriginOffset).field0_0x0._s_0.Y = 0.0;
  (this->WorldOriginOffset).field0_0x0._s_0.Z = 0.0;
  return this;
}

// ~FPrecomputedVolumetricLightmap @ 14834d6e0

void __thiscall
FPrecomputedVolumetricLightmap::~FPrecomputedVolumetricLightmap
          (FPrecomputedVolumetricLightmap *this)

{
  return;
}

// operator() @ 148350ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FPrecomputedVolumetricLightmap::AddToScene'::__l18::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  plVar2 = *(longlong **)this;
  lVar3 = *(longlong *)((longlong)this + 0x10);
  *plVar2 = lVar1;
  if (lVar1 != 0) {
    *(char *)(lVar1 + 0x1c) = (char)*(undefined4 *)(lVar3 + 8);
    *(undefined1 *)(*plVar2 + 0x98) = 0;
    lVar1 = *plVar2;
    *(undefined1 *)(lVar1 + 0xe0) = 0;
    *(undefined1 *)(lVar1 + 0x118) = 0;
    *(undefined1 *)(lVar1 + 0x150) = 0;
    *(undefined1 *)(lVar1 + 0x188) = 0;
    *(undefined1 *)(lVar1 + 0x1c0) = 0;
    *(undefined1 *)(lVar1 + 0x1f8) = 0;
    *(undefined1 *)(lVar1 + 0x230) = 0;
    *(undefined1 *)(lVar1 + 0x268) = 0;
    *(undefined1 *)(lVar1 + 0x2a0) = 0;
    if (2 < *(int *)(lVar3 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x000148350d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*plVar2 + 0x18))();
      return;
    }
  }
  return;
}

// AddToScene @ 148355bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPrecomputedVolumetricLightmap::AddToScene
          (FPrecomputedVolumetricLightmap *this,FSceneInterface *param_1,
          UMapBuildDataRegistry *param_2,FPrecomputedVolumetricLightmapData *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  UMapBuildDataRegistry *local_b8 [2];
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (FReadOnlyCVARCache::bAllowStaticLighting) {
    if (GShaderCompilingManager != (FShaderCompilingManager *)0x0) {
      FShaderCompilingManager::ProcessAsyncResults(GShaderCompilingManager,true,true);
    }
    if (this->bAddedToScene != false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bAddedToScene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                         ,0x2da,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_3 != (FPrecomputedVolumetricLightmapData *)0x0) &&
       (param_1 != (FSceneInterface *)0x0)) {
      this->bAddedToScene = true;
      local_b8[0] = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_2 != (UMapBuildDataRegistry *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&(this->SourceRegistry).WeakPtr,(FObjectPtr)local_b8);
      local_a8[0] = (code *)0x0;
      local_80 = FMemory::Malloc(0x20,8);
      *local_80 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FPrecomputedVolumetricLightmap::AddToScene'::`18'::<lambda_1>,1,1>
                           ::_vftable_;
      local_80[1] = (code *)this;
      local_80[2] = (code *)param_3;
      local_80[3] = (code *)param_1;
      if (local_80 + 1 != (code **)0x0) {
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FPrecomputedVolumetricLightmap::AddToScene'::__l18::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FPrecomputedVolumetricLightmap::AddToScene_::__l18::TSTR_SetVolumeDataCommand739>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_78._0_8_ = local_a8[0];
        local_50 = local_80;
        local_80 = (code **)0x0;
        local_78._16_8_ = local_98[0];
        local_78._24_8_ = local_98[1];
        local_78._32_8_ = local_98[2];
        local_a8[0] = (code *)0x0;
        local_48 = 2;
        pFVar3 = (FRenderCommandTag *)
                 TRenderCommandTag<`FPrecomputedVolumetricLightmap::AddToScene'::__l18::TSTR_SetVolumeDataCommand739>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar3);
        uVar5 = (ulonglong)local_48;
        if (2 < uVar5) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar5] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_78._0_8_ != (code *)0x0) {
            ppcVar4 = (code **)(local_78 + 0x10);
            if (local_50 != (code **)0x0) {
              ppcVar4 = local_50;
            }
            (**(code **)(*ppcVar4 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar5])(local_78);
        }
      }
      if (local_a8[0] != (code *)0x0) {
        ppcVar4 = local_a8 + 2;
        if (local_80 != (code **)0x0) {
          ppcVar4 = local_80;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      (**(code **)(param_1->_padding_ + 0x200))(param_1,this,param_4);
    }
  }
  return;
}

// AddToScene @ 148355e20

void __thiscall
FPrecomputedVolumetricLightmap::AddToScene
          (FPrecomputedVolumetricLightmap *this,FSceneInterface *param_1,
          UMapBuildDataRegistry *param_2,FGuid *param_3,bool param_4)

{
  FPrecomputedVolumetricLightmapData *pFVar1;
  FGuid local_18;
  
  if ((FReadOnlyCVARCache::bAllowStaticLighting) && (param_2 != (UMapBuildDataRegistry *)0x0)) {
    local_18.A = param_3->A;
    local_18.B = param_3->B;
    local_18.C = param_3->C;
    local_18.D = param_3->D;
    pFVar1 = UMapBuildDataRegistry::GetLevelPrecomputedVolumetricLightmapBuildData
                       (param_2,&local_18);
    if ((pFVar1 != (FPrecomputedVolumetricLightmapData *)0x0) && (param_1 != (FSceneInterface *)0x0)
       ) {
      AddToScene(this,param_1,param_2,pFVar1,param_4);
    }
  }
  return;
}

// ApplyWorldOffset @ 1483589a0

void __thiscall
FPrecomputedVolumetricLightmap::ApplyWorldOffset
          (FPrecomputedVolumetricLightmap *this,TVector<double> *param_1)

{
  (this->WorldOriginOffset).field0_0x0._s_0.X =
       (param_1->field0_0x0)._s_0.X + (this->WorldOriginOffset).field0_0x0._s_0.X;
  (this->WorldOriginOffset).field0_0x0._s_0.Y =
       (param_1->field0_0x0)._s_0.Y + (this->WorldOriginOffset).field0_0x0._s_0.Y;
  (this->WorldOriginOffset).field0_0x0._s_0.Z =
       (param_1->field0_0x0)._s_0.Z + (this->WorldOriginOffset).field0_0x0._s_0.Z;
  return;
}

// RemoveFromScene @ 14839fe50

void __thiscall
FPrecomputedVolumetricLightmap::RemoveFromScene
          (FPrecomputedVolumetricLightmap *this,FSceneInterface *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  FUObjectItem *pFVar5;
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  undefined8 local_28 [2];
  
  if (FReadOnlyCVARCache::bAllowStaticLighting) {
    if (this->bAddedToScene != false) {
      this->bAddedToScene = false;
      bVar3 = FWeakObjectPtr::IsValid(&(this->SourceRegistry).WeakPtr);
      if (((!bVar3) && (param_1 != (FSceneInterface *)0x0)) &&
         (lVar4 = (**(code **)(param_1->_padding_ + 0x410))(param_1), lVar4 != 0)) {
        lVar4 = (**(code **)(param_1->_padding_ + 0x410))(param_1);
        if ((lVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Test",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                               ,0x760,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
          lVar4 = (**(code **)(param_1->_padding_ + 0x410))(param_1);
          pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar4 + 0xc));
          if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
            `FPrecomputedVolumetricLightmap::RemoveFromScene'::__l8::<lambda_1>::operator()
                      (local_res18);
          }
        }
      }
      bVar3 = FWeakObjectPtr::IsValid(&(this->SourceRegistry).WeakPtr);
      if (bVar3) {
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_28[0] = 0;
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_28);
        (this->SourceRegistry).WeakPtr = local_res20;
        if (param_1 != (FSceneInterface *)0x0) {
          (**(code **)(param_1->_padding_ + 0x208))(param_1,this);
        }
      }
    }
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->WorldOriginOffset).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->WorldOriginOffset).field0_0x0._s_0.Y = (double)uVar2;
    (this->WorldOriginOffset).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// SetData @ 1483a8840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPrecomputedVolumetricLightmap::SetData
          (FPrecomputedVolumetricLightmap *this,FRHICommandListBase *param_1,
          FPrecomputedVolumetricLightmapData *param_2,FSceneInterface *param_3)

{
  FPrecomputedVolumetricLightmapData *pFVar1;
  
  this->Data = param_2;
  if (param_2 != (FPrecomputedVolumetricLightmapData *)0x0) {
    *(char *)((longlong)&param_2->_padding_ + 4) = (char)param_3->FeatureLevel;
    (this->Data->IndirectionTexture).bNeedsCPUAccess = false;
    pFVar1 = this->Data;
    (pFVar1->BrickData).field_0x30 = 0;
    (pFVar1->BrickData).field_0x68 = 0;
    (pFVar1->BrickData).field_0xa0 = 0;
    (pFVar1->BrickData).field_0xd8 = 0;
    (pFVar1->BrickData).field_0x110 = 0;
    (pFVar1->BrickData).field_0x148 = 0;
    (pFVar1->BrickData).field_0x180 = 0;
    (pFVar1->BrickData).field_0x1b8 = 0;
    (pFVar1->BrickData).field_0x1f0 = 0;
    if (2 < (int)param_3->FeatureLevel) {
                    /* WARNING: Could not recover jumptable at 0x0001483a88a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->Data->_padding_ + 0x18))();
      return;
    }
  }
  return;
}

// operator() @ 15052a3c0

bool __thiscall
`FPrecomputedVolumetricLightmap::RemoveFromScene'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_191228561246387460>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_191228561246387460>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

