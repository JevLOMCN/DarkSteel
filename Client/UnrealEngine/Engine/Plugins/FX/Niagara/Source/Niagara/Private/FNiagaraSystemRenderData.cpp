// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 18

// FNiagaraSystemRenderData @ 1493cdd30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraSystemRenderData * __thiscall
FNiagaraSystemRenderData::FNiagaraSystemRenderData
          (FNiagaraSystemRenderData *this,FNiagaraSystemInstanceController *param_1,
          FNiagaraSystemInstance *param_2,Type param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UNiagaraSystem *pUVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  FNiagaraSystemRenderData *pFVar7;
  
  pTVar1 = &this->RendererDrawOrder;
  *(undefined8 *)&(this->LWCRenderTile).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  piVar2 = &(this->RendererDrawOrder).ArrayMax;
  (this->LWCRenderTile).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (this->EmitterRenderers_GT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterRenderers_GT).ArrayNum = 0;
  (this->EmitterRenderers_GT).ArrayMax = 0;
  (this->EmitterRenderers_RT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterRenderers_RT).ArrayNum = 0;
  (this->EmitterRenderers_RT).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->RendererDrawOrder).ArrayNum = 0;
  *piVar2 = 0;
  this->bRenderingEnabled_GT = true;
  this->bRenderingEnabled_RT = true;
  this->bAnyMotionBlurEnabled = false;
  this->bAnyHeterogeneousVolumesEnabled = false;
  pUVar4 = param_2->System;
  if (pUVar4 == (UNiagaraSystem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("System",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemRenderData.cpp"
                       ,0x19,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FNiagaraSystemRenderData *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->FeatureLevel = param_3;
  _Src = (pUVar4->RendererDrawOrder).AllocatorInstance.Data;
  iVar3 = (pUVar4->RendererDrawOrder).ArrayNum;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FNiagaraSystemRenderData *)(*pcVar5)();
      return pFVar7;
    }
  }
  (this->RendererDrawOrder).ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar2 == 0)) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
    if (iVar3 != 0) {
      memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
    }
  }
  RecacheRenderers(this,param_2,param_1);
  return this;
}

// ~FNiagaraSystemRenderData @ 1493d14a0

void __thiscall FNiagaraSystemRenderData::~FNiagaraSystemRenderData(FNiagaraSystemRenderData *this)

{
  FScriptContainerElement *pFVar1;
  
  if (0 < (this->EmitterRenderers_RT).ArrayNum) {
    Destroy_RenderThread(this);
  }
  pFVar1 = (this->RendererDrawOrder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterRenderers_RT).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterRenderers_GT).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 1493d3a00

void __thiscall
`FNiagaraSystemRenderData::GenerateSetDynamicDataCommands'::__l24::<lambda_1>::operator()
          (void *this,UNiagaraRendererProperties *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> FVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> FVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *local_28;
  longlong *plStack_20;
  
  lVar3 = *(longlong *)this;
  plVar13 = (longlong *)0x0;
  uVar2 = **(uint **)((longlong)this + 8);
  uVar9 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x18)) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + (longlong)(int)uVar2 * 8);
  if ((plVar4 != (longlong *)0x0) &&
     (cVar8 = (**(code **)(param_1->_padding_ + 0x310))(param_1), cVar8 != '\0')) {
    iVar10 = *(int *)(**(longlong **)((longlong)this + 0x10) + 0xd4);
    plStack_20 = plVar13;
    if (((iVar10 != 3) &&
        (((iVar10 != 4 &&
          (iVar10 = *(int *)(**(longlong **)((longlong)this + 0x18) + 0x91c), iVar10 != 3)) &&
         (plStack_20 = (longlong *)0x0, iVar10 != 4)))) &&
       (plStack_20 = (longlong *)
                     (**(code **)(*plVar4 + 0x38))
                               (plVar4,*(undefined8 *)((longlong)this + 0x20),param_1),
       plStack_20 != (longlong *)0x0)) {
      puVar12 = (undefined8 *)**(longlong **)((longlong)this + 0x28);
      puVar1 = puVar12 + (longlong)(int)(*(longlong **)((longlong)this + 0x28))[1] * 3;
      for (; puVar12 != puVar1; puVar12 = puVar12 + 3) {
        if ((UNiagaraRendererProperties *)puVar12[1] == param_1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,*(undefined4 *)(puVar12 + 2),*puVar12);
        }
      }
    }
    FVar5 = *(ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> *)
             ((longlong)this + 0x30);
    FVar11 = *(ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> *)
              ((longlong)FVar5 + 0x80);
    if (*(ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> *)
         ((longlong)FVar5 + 0x80) ==
        (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)0x0) {
      FVar11 = FVar5;
    }
    local_28 = plVar4;
    if ((((ulonglong)FVar11 <= &local_28) &&
        (&local_28 <
         (longlong **)((longlong)*(int *)((longlong)FVar5 + 0x8c) * 0x10 + (longlong)FVar11))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = *(int *)((longlong)FVar5 + 0x88);
    if (iVar10 == *(int *)((longlong)FVar5 + 0x8c)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>_>
                         (0x810,(ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> *)
                                FVar5,(int *)((longlong)FVar5 + 0x8c));
    }
    *(int *)((longlong)FVar5 + 0x88) = iVar10 + 1;
    FVar11 = *(ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> *)
              ((longlong)FVar5 + 0x80);
    if (*(ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> *)
         ((longlong)FVar5 + 0x80) ==
        (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)0x0) {
      FVar11 = FVar5;
    }
    plVar13 = (longlong *)((longlong)FVar11 + (longlong)iVar10 * 0x10);
    *plVar13 = (longlong)local_28;
    plVar13[1] = (longlong)plStack_20;
  }
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  return;
}

// CreateRenderThreadResources @ 1493dcf50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraSystemRenderData::CreateRenderThreadResources
          (FNiagaraSystemRenderData *this,FRHICommandListBase *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->EmitterRenderers_RT).AllocatorInstance.Data;
  iVar2 = (this->EmitterRenderers_RT).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EmitterRenderers_RT).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraRenderer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// DestroyRenderState_Concurrent @ 1493de210

void __thiscall
FNiagaraSystemRenderData::DestroyRenderState_Concurrent(FNiagaraSystemRenderData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->EmitterRenderers_GT).AllocatorInstance.Data;
  iVar2 = (this->EmitterRenderers_GT).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EmitterRenderers_GT).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraRenderer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar3 + 0x20))();
    }
    pFVar3 = pFVar3 + 8;
  }
  (this->EmitterRenderers_GT).ArrayNum = 0;
  if ((this->EmitterRenderers_GT).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->EmitterRenderers_GT).AllocatorInstance,0,
               &(this->EmitterRenderers_GT).ArrayMax);
  }
  return;
}

// Destroy_RenderThread @ 1493de2b0

void __thiscall FNiagaraSystemRenderData::Destroy_RenderThread(FNiagaraSystemRenderData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->EmitterRenderers_RT).AllocatorInstance.Data;
  iVar2 = (this->EmitterRenderers_RT).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EmitterRenderers_RT).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraRenderer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      (**(code **)*plVar3)(plVar3);
    }
    pFVar4 = pFVar4 + 8;
  }
  (this->EmitterRenderers_RT).ArrayNum = 0;
  if ((this->EmitterRenderers_RT).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->EmitterRenderers_RT).AllocatorInstance,0,
               &(this->EmitterRenderers_RT).ArrayMax);
  }
  return;
}

// ExecuteDynamicDataCommands_RenderThread @ 1493e0480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FNiagaraSystemRenderData::ExecuteDynamicDataCommands_RenderThread
          (TArray<FNiagaraSystemRenderData::FSetDynamicDataCommand,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> FVar3;
  undefined1 local_res8 [8];
  
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)0x0) {
    param_1 = (TArray<FNiagaraSystemRenderData::FSetDynamicDataCommand,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  FVar3 = (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)
          ((longlong)iVar2 * 0x10 + (longlong)param_1);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FNiagaraSystemRenderData::FSetDynamicDataCommand_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)param_1 == FVar3) break;
    FNiagaraRenderer::SetDynamicData_RenderThread
              (*(FNiagaraRenderer **)param_1,*(FNiagaraDynamicDataBase **)((longlong)param_1 + 8));
    param_1 = (TArray<FNiagaraSystemRenderData::FSetDynamicDataCommand,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)param_1 + 0x10);
  }
  return;
}

// GatherSimpleLights @ 1493e4100

void __thiscall
FNiagaraSystemRenderData::GatherSimpleLights
          (FNiagaraSystemRenderData *this,FSimpleLightArray *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->EmitterRenderers_RT).AllocatorInstance.Data;
  iVar2 = (this->EmitterRenderers_RT).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EmitterRenderers_RT).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraRenderer_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 0x28) >> 1 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x40))(plVar3,param_1);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// GenerateSetDynamicDataCommands @ 1493e4630

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraSystemRenderData::GenerateSetDynamicDataCommands
          (FNiagaraSystemRenderData *this,
          TArray<FNiagaraSystemRenderData::FSetDynamicDataCommand,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1,FNiagaraSceneProxy *param_2,FNiagaraSystemInstance *param_3,
          TArrayView<FNiagaraSystemRenderData::FMaterialOverride_const_,int> *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> FVar5;
  UNiagaraSystem *this_00;
  TAtomic<FMinimalName> TVar6;
  FScriptContainerElement *pFVar7;
  UNiagaraRendererProperties *pUVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FName FVar13;
  FNiagaraEmitterInstance *pFVar14;
  FName *pFVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> FVar23;
  FNiagaraEmitterHandle *this_01;
  FThreadStats *pFVar24;
  FThreadStatsPool *pFVar25;
  FScriptContainerElement *pFVar26;
  FName FVar27;
  FNameEntryId FVar28;
  longlong lVar29;
  TStatIdData *pTVar30;
  uint uVar31;
  undefined8 *puVar32;
  FNiagaraSystemInstance *local_res20;
  undefined1 local_157;
  FNiagaraCrashReporterScope local_156 [6];
  FName local_150;
  uint local_148;
  FColor_u_0 local_144;
  FColor_u_0 local_140;
  undefined4 local_13c;
  FNiagaraEmitterInstance *local_138;
  FNiagaraEmitterInstance *local_130;
  FName local_128;
  FName *local_120;
  FName local_118;
  uint local_110;
  uint uStack_10c;
  FName local_108;
  longlong local_100;
  longlong lStack_f8;
  FName local_f0;
  FName local_e0;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  FStatMessage local_c0;
  FStatMessage local_b0;
  undefined8 *local_a0;
  int local_98;
  FNiagaraSystemRenderData *local_88;
  undefined4 *local_80;
  FNiagaraEmitterInstance **local_78;
  FNiagaraSystemInstance **local_70;
  FNiagaraSceneProxy *local_68;
  TArrayView<FNiagaraSystemRenderData::FMaterialOverride_const_,int> *local_60;
  TArray<FNiagaraSystemRenderData::FSetDynamicDataCommand,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *local_58;
  
  if (param_3 == (FNiagaraSystemInstance *)0x0) {
    pFVar26 = (this->EmitterRenderers_GT).AllocatorInstance.Data;
    iVar4 = (this->EmitterRenderers_GT).ArrayNum;
    pFVar7 = pFVar26 + (longlong)iVar4 * 8;
    local_res20 = (FNiagaraSystemInstance *)0x0;
    do {
      if ((this->EmitterRenderers_GT).ArrayNum != iVar4) {
        local_157 = 0;
        `TCheckedPointerIterator<FNiagaraRenderer_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_157);
      }
      if (pFVar26 == pFVar7) {
        return;
      }
      lVar29 = *(longlong *)pFVar26;
      if (lVar29 != 0) {
        FVar5 = (param_1->AllocatorInstance).SecondaryData;
        lStack_f8 = 0;
        FVar23 = (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)param_1;
        if (FVar5 != (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)0x0) {
          FVar23 = FVar5;
        }
        local_100 = lVar29;
        if ((ulonglong)FVar23 <= &local_100) {
          FVar23 = (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)param_1;
          if (FVar5 != (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)0x0) {
            FVar23 = FVar5;
          }
          if ((&local_100 < (longlong *)((longlong)param_1->ArrayMax * 0x10 + (longlong)FVar23)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar21 = param_1->ArrayNum;
        if (iVar21 == param_1->ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>_>
                             (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar21 + 1;
        FVar5 = (param_1->AllocatorInstance).SecondaryData;
        FVar23 = (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)param_1;
        if (FVar5 != (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)0x0) {
          FVar23 = FVar5;
        }
        plVar2 = (longlong *)((longlong)FVar23 + (longlong)iVar21 * 0x10);
        *plVar2 = local_100;
        plVar2[1] = lStack_f8;
      }
      pFVar26 = pFVar26 + 8;
    } while( true );
  }
  local_res20 = param_3;
  FNiagaraCrashReporterScope::FNiagaraCrashReporterScope(local_156,param_3);
  this_00 = local_res20->System;
  if (this_00 == (UNiagaraSystem *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("System",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemRenderData.cpp"
                        ,0x98,L"");
    if (bVar17) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar30 = &TStatId::TStatId_NAME_None;
  }
  else {
    TVar6 = ((this_00->StatID_GT).StatIdPtr)->Name;
    if ((TVar6._0_4_ == 0) && (TVar6._4_4_ == 0)) {
      UNiagaraSystem::GenerateStatID(this_00);
    }
    pTVar30 = (this_00->StatID_GT_CNC).StatIdPtr;
  }
  FVar27 = *(FName *)&pTVar30->Name;
  bVar17 = false;
  bVar12 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  bVar16 = false;
  bVar18 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) ||
     (bVar11 = bVar17, bVar10 = bVar12, FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_144.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_144._s_0,(pTVar30->StatDescriptionAnsi).Ptr);
      bVar17 = false;
      bVar12 = true;
      bVar16 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_128.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(pTVar30->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemRenderData.cpp"
                   ,0x9c);
        bVar17 = true;
        bVar12 = true;
        bVar16 = true;
        bVar18 = true;
      }
    }
    bVar11 = bVar17;
    bVar10 = bVar12;
    if (FThreadStats::bPrimaryEnable != false) {
      local_150 = FVar27;
      local_108 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar16 = true;
      goto LAB_1493e48cd;
    }
  }
  bVar12 = bVar18;
  bVar17 = bVar16;
  bVar16 = false;
  local_108 = local_f0;
  FVar27 = local_f0;
LAB_1493e48cd:
  uVar31 = (this->EmitterRenderers_GT).ArrayNum;
  if (uVar31 != 0) {
    if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
    }
    if (param_1->ArrayMax < (int)uVar31) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>_>
                (0x10,8,uVar31,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    uVar31 = 0;
    local_13c = 0;
    local_150.ComparisonIndex.Value = 0;
    local_150.Number = 0;
    while( true ) {
      FVar13 = local_150;
      iVar4 = (local_res20->Emitters).ArrayNum;
      local_148 = uVar31;
      if ((iVar4 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar27 = local_108;
      bVar11 = bVar17;
      bVar10 = bVar12;
      if (iVar4 <= (int)uVar31) break;
      iVar4 = (local_res20->Emitters).ArrayNum;
      pFVar7 = (local_res20->Emitters).AllocatorInstance.Data;
      if ((iVar4 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar22 = 0;
      if ((int)uVar31 < iVar4) {
        uVar22 = ~uVar31 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_130 = *(FNiagaraEmitterInstance **)(pFVar7 + (longlong)FVar13);
      FNiagaraEmitterInstance::GetEmitterStatID(local_130,SUB81(&local_120,0),true);
      pFVar15 = local_120;
      bVar18 = false;
      bVar11 = false;
      local_e0.ComparisonIndex.Value = 0;
      local_e0.Number = 0;
      FVar27 = *local_120;
      FVar28 = FVar27.ComparisonIndex.Value;
      uVar31 = FVar27.Number;
      if ((FVar28.Value == 0) && (uVar31 == 0)) {
LAB_1493e4ac8:
        bVar10 = false;
        FVar27 = local_e0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_140.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_140._s_0,(char *)local_120[2]);
          bVar18 = false;
          bVar11 = true;
          if (-1 < CpuChannel->Enabled) {
            local_118.ComparisonIndex.Value = FVar28.Value;
            local_118.Number = uVar31;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_118,(wchar_t *)pFVar15[1],
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemRenderData.cpp"
                       ,0xae);
            bVar18 = true;
            bVar11 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_1493e4ac8;
        local_110 = FVar28.Value;
        uStack_10c = uVar31;
        local_e0 = FVar27;
        FThreadStats::AddMessage(FVar27,CycleScopeStart);
        bVar10 = true;
      }
      this_01 = FNiagaraEmitterInstance::GetEmitterHandle(local_130);
      bVar19 = FNiagaraEmitterHandle::GetIsEnabled(this_01);
      if (bVar19) {
        local_80 = &local_13c;
        local_78 = &local_130;
        local_70 = &local_res20;
        local_60 = param_4;
        local_138 = local_130;
        local_88 = this;
        local_68 = param_2;
        local_58 = param_1;
        (**(code **)(local_130->_padding_ + 0x78))(local_130,&local_a0);
        puVar32 = local_a0;
        lVar29 = (longlong)local_98;
        if ((local_98 < 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar14 = local_138;
        puVar3 = puVar32 + lVar29;
        for (; puVar32 != puVar3; puVar32 = puVar32 + 1) {
          pUVar8 = (UNiagaraRendererProperties *)*puVar32;
          if (((pUVar8 != (UNiagaraRendererProperties *)0x0) &&
              (cVar20 = (**(code **)(pUVar8->_padding_ + 0x318))(pUVar8), cVar20 != '\0')) &&
             (cVar20 = (**(code **)(pUVar8->_padding_ + 0x2e8))(pUVar8,pFVar14->SimTarget),
             cVar20 != '\0')) {
            `FNiagaraSystemRenderData::GenerateSetDynamicDataCommands'::__l24::<lambda_1>::
            operator()(&local_88,pUVar8);
          }
        }
        if (bVar11) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar18) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (((bVar10) && (FVar27 != (FName)0x0)) &&
           ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))
           )) {
          pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar24 == (FThreadStats *)0x0) {
            pFVar25 = FThreadStatsPool::Get();
            pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
          }
          if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
            local_b0.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
            local_b0.NameAndInfo.Index.Value = FVar27.ComparisonIndex.Value.Value;
            QueryPerformanceCounter(&local_c8);
            local_b0.StatData.Pad[4] = '\0';
            local_b0.StatData.Pad[5] = '\0';
            local_b0.StatData.Pad[6] = '\0';
            local_b0.StatData.Pad[7] = '\0';
            local_b0.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
            local_b0.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
            local_b0.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
            local_b0.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar24,&local_b0);
            piVar1 = &pFVar24->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar24,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar24,false,false);
            }
          }
        }
      }
      else {
        if (bVar11) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar18) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (((bVar10) && (FVar27 != (FName)0x0)) &&
           ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))
           )) {
          pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar24 == (FThreadStats *)0x0) {
            pFVar25 = FThreadStatsPool::Get();
            pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
          }
          if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
            local_c0.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
            local_c0.NameAndInfo.Index.Value = FVar27.ComparisonIndex.Value.Value;
            QueryPerformanceCounter(&local_d0);
            local_c0.StatData.Pad[4] = '\0';
            local_c0.StatData.Pad[5] = '\0';
            local_c0.StatData.Pad[6] = '\0';
            local_c0.StatData.Pad[7] = '\0';
            local_c0.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
            local_c0.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
            local_c0.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
            local_c0.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar24,&local_c0);
            piVar1 = &pFVar24->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar24,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar24,false,false);
            }
          }
        }
      }
      uVar31 = local_148 + 1;
      local_150 = (FName)((longlong)local_150 + 0x10);
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(local_156);
  return;
}

// GetDynamicDataSize @ 1493e7260

uint __thiscall FNiagaraSystemRenderData::GetDynamicDataSize(FNiagaraSystemRenderData *this)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = IsInParallelRenderingThread();
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemRenderData.cpp"
                           ,0x77,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
      }
      lVar8 = 0x20;
      goto LAB_1493e72ca;
    }
  }
  lVar8 = 0x10;
LAB_1493e72ca:
  plVar7 = *(longlong **)((longlong)&(this->LWCRenderTile).field0_0x0 + lVar8);
  uVar5 = 0;
  iVar2 = *(int *)((longlong)&(this->LWCRenderTile).field0_0x0 + lVar8 + 8);
  plVar1 = plVar7 + iVar2;
  while( true ) {
    if (*(int *)((longlong)&(this->LWCRenderTile).field0_0x0 + lVar8 + 8) != iVar2) {
      `TCheckedPointerIterator<FNiagaraRenderer_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (plVar7 == plVar1) break;
    if ((longlong *)*plVar7 != (longlong *)0x0) {
      iVar6 = (**(code **)(*(longlong *)*plVar7 + 0x48))();
      uVar5 = uVar5 + iVar6;
    }
    plVar7 = plVar7 + 1;
  }
  return uVar5;
}

// GetDynamicMeshElements @ 1493e7330

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraSystemRenderData::GetDynamicMeshElements
          (FNiagaraSystemRenderData *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4,FNiagaraSceneProxy *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->RendererDrawOrder).AllocatorInstance.Data;
  iVar2 = (this->RendererDrawOrder).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  do {
    if ((this->RendererDrawOrder).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    uVar3 = *(uint *)pFVar8;
    uVar7 = 0;
    if ((int)uVar3 < (this->EmitterRenderers_RT).ArrayNum) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)
              ((this->EmitterRenderers_RT).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    if (plVar4 != (longlong *)0x0) {
      if (*(char *)((longlong)plVar4 + 0x144) == '\x01') {
        FSceneViewFamily::GetFeatureLevel(param_2);
        bVar6 = FNiagaraUtilities::AllowGPUParticles();
        if (!bVar6) goto LAB_1493e741e;
      }
      (**(code **)(*plVar4 + 0x30))(plVar4,param_1,param_2,param_3,param_4,param_5);
    }
LAB_1493e741e:
    pFVar8 = pFVar8 + 4;
  } while( true );
}

// GetDynamicRayTracingInstances @ 1493e7450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraSystemRenderData::GetDynamicRayTracingInstances
          (FNiagaraSystemRenderData *this,FRayTracingInstanceCollector *param_1,
          FNiagaraSceneProxy *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->EmitterRenderers_RT).AllocatorInstance.Data;
  iVar2 = (this->EmitterRenderers_RT).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EmitterRenderers_RT).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraRenderer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x58))(plVar3,param_1,param_2);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// GetViewRelevance @ 1493ea5d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FNiagaraSystemRenderData::GetViewRelevance
          (FNiagaraSystemRenderData *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1,FNiagaraSceneProxy *param_2)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  FPrimitiveViewRelevance *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  if ((this->bRenderingEnabled_RT != false) && (0 < (this->EmitterRenderers_RT).ArrayNum)) {
    iVar3 = (this->EmitterRenderers_RT).ArrayNum;
    pFVar9 = (this->EmitterRenderers_RT).AllocatorInstance.Data;
    pFVar2 = pFVar9 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->EmitterRenderers_RT).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FNiagaraRenderer_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar2) break;
      plVar4 = *(longlong **)pFVar9;
      if (plVar4 == (longlong *)0x0) {
LAB_1493ea6a7:
        pFVar9 = pFVar9 + 8;
      }
      else {
        puVar6 = (ulonglong *)(**(code **)(*plVar4 + 0x28))(plVar4,local_38,param_1,param_2);
        if (((FPrimitiveViewRelevance *)((longlong)puVar6 + 0xfU) < __return_storage_ptr__) ||
           (&__return_storage_ptr__->field_0xf < puVar6)) {
          uVar5 = puVar6[1];
          __return_storage_ptr__->_padding_ = *puVar6 | __return_storage_ptr__->_padding_;
          *(ulonglong *)&__return_storage_ptr__->field_0x8 =
               uVar5 | *(ulonglong *)&__return_storage_ptr__->field_0x8;
          goto LAB_1493ea6a7;
        }
        lVar8 = 0x10;
        pFVar7 = __return_storage_ptr__;
        do {
          *(byte *)&pFVar7->_padding_ =
               (byte)pFVar7->_padding_ |
               *(byte *)(((longlong)puVar6 - (longlong)__return_storage_ptr__) + (longlong)pFVar7);
          pFVar7 = (FPrimitiveViewRelevance *)((longlong)&pFVar7->_padding_ + 1);
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        pFVar9 = pFVar9 + 8;
      }
    }
  }
  return __return_storage_ptr__;
}

// OnSystemComplete @ 1493f0ec0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemRenderData::OnSystemComplete
          (FNiagaraSystemRenderData *this,FNiagaraSystemInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  UNiagaraSystem *pUVar5;
  FScriptContainerElement *pFVar6;
  FNiagaraEmitterInstance *this_00;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  UNiagaraRendererProperties *pUVar11;
  FScriptContainerElement *pFVar12;
  
  if ((this->EmitterRenderers_GT).ArrayNum != 0) {
    pUVar5 = param_1->System;
    pFVar6 = (param_1->Emitters).AllocatorInstance.Data;
    iVar2 = (param_1->Emitters).ArrayNum;
    if (iVar2 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else if (iVar2 == 0) {
      return;
    }
    pFVar12 = (pUVar5->RendererCompletionOrder).AllocatorInstance.Data;
    iVar3 = (pUVar5->RendererCompletionOrder).ArrayNum;
    if ((iVar3 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar1 = pFVar12 + (longlong)iVar3 * 0xc;
    for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 0xc) {
      if ((-1 < *(int *)(pFVar12 + 8)) &&
         (*(int *)(pFVar12 + 8) < (this->EmitterRenderers_GT).ArrayNum)) {
        iVar3 = *(int *)pFVar12;
        if ((iVar3 < 0) || (iVar2 <= iVar3)) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3308698970678623852>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemRenderData.cpp"
                             ,0x194,"EmitterInstances.IsValidIndex(ExecIdx.EmitterIndex)");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          if ((iVar3 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar4 = *(uint *)(pFVar12 + 8);
          this_00 = *(FNiagaraEmitterInstance **)(pFVar6 + (longlong)iVar3 * 0x10);
          uVar10 = 0;
          if ((int)uVar4 < (this->EmitterRenderers_GT).ArrayNum) {
            uVar10 = ~uVar4 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          plVar7 = *(longlong **)
                    ((this->EmitterRenderers_GT).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
          if ((plVar7 != (longlong *)0x0) &&
             (pUVar11 = FNiagaraEmitterInstance::GetRenderer(this_00,*(int *)(pFVar12 + 4)),
             pUVar11 != (UNiagaraRendererProperties *)0x0)) {
            (**(code **)(*plVar7 + 0x70))(plVar7,pUVar11,this_00);
          }
        }
      }
    }
  }
  return;
}

// PostTickRenderers @ 1493f2030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemRenderData::PostTickRenderers
          (FNiagaraSystemRenderData *this,FNiagaraSystemInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FNiagaraEmitterInstance *this_00;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  UNiagaraRendererProperties *pUVar9;
  FScriptContainerElement *pFVar10;
  
  if (0 < (this->EmitterRenderers_GT).ArrayNum) {
    iVar2 = (param_1->System->RendererPostTickOrder).ArrayNum;
    pFVar10 = (param_1->System->RendererPostTickOrder).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar1 = pFVar10 + (longlong)iVar2 * 0xc;
    for (; pFVar10 != pFVar1; pFVar10 = pFVar10 + 0xc) {
      if ((-1 < (int)*(uint *)(pFVar10 + 8)) &&
         ((int)*(uint *)(pFVar10 + 8) < (this->EmitterRenderers_GT).ArrayNum)) {
        iVar2 = (param_1->Emitters).ArrayNum;
        pFVar4 = (param_1->Emitters).AllocatorInstance.Data;
        if ((iVar2 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(uint *)pFVar10;
        uVar8 = 0;
        if ((int)uVar3 < iVar2) {
          uVar8 = ~uVar3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = *(FNiagaraEmitterInstance **)(pFVar4 + (longlong)(int)uVar3 * 0x10);
        if ((this_00->ExecutionState != Complete) && (this_00->ExecutionState != Disabled)) {
          uVar3 = *(uint *)(pFVar10 + 8);
          uVar8 = 0;
          if ((int)uVar3 < (this->EmitterRenderers_GT).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar5 = *(longlong **)
                    ((this->EmitterRenderers_GT).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
          if (plVar5 != (longlong *)0x0) {
            pUVar9 = FNiagaraEmitterInstance::GetRenderer(this_00,*(uint *)(pFVar10 + 4));
            (**(code **)(*plVar5 + 0x68))(plVar5,pUVar9,this_00);
          }
        }
      }
    }
  }
  return;
}

// RecacheRenderers @ 1493f3bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemRenderData::RecacheRenderers
          (FNiagaraSystemRenderData *this,FNiagaraSystemInstance *param_1,
          FNiagaraSystemInstanceController *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FNiagaraEmitterHandle *this_00;
  FTaskBase *this_01;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  FScriptContainerElement *pFVar10;
  TSharedRef<FNiagaraEmitterInstance,1> *pTVar11;
  FTaskBase *pFVar12;
  ulonglong uVar13;
  TSharedRef<FNiagaraEmitterInstance,1> *pTVar14;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [8];
  FNiagaraSystemRenderData *local_120;
  ForAnyElementType local_118;
  undefined8 local_110;
  FTaskBase *local_108;
  <lambda_1> local_f8;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  undefined1 local_a8 [40];
  code **local_80;
  byte local_78;
  code *local_68 [2];
  undefined **local_58;
  FTaskBase *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar10 = (this->EmitterRenderers_GT).AllocatorInstance.Data;
  iVar2 = (this->EmitterRenderers_GT).ArrayNum;
  pFVar4 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EmitterRenderers_GT).ArrayNum != iVar2) {
      local_128[0] = 0;
      `TCheckedPointerIterator<FNiagaraRenderer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_128);
    }
    if (pFVar10 == pFVar4) break;
    if (*(longlong **)pFVar10 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar10 + 0x20))();
    }
    pFVar10 = pFVar10 + 8;
  }
  piVar1 = &(this->EmitterRenderers_GT).ArrayMax;
  pFVar12 = (FTaskBase *)0x0;
  (this->EmitterRenderers_GT).ArrayNum = 0;
  if ((this->EmitterRenderers_GT).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->EmitterRenderers_GT).AllocatorInstance,0,piVar1);
  }
  uVar3 = (this->RendererDrawOrder).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (*piVar1 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&(this->EmitterRenderers_GT).AllocatorInstance,
               (this->EmitterRenderers_GT).ArrayNum,piVar1);
  }
  this->bAnyMotionBlurEnabled = false;
  this->bAnyHeterogeneousVolumesEnabled = false;
  iVar2 = (param_1->Emitters).ArrayNum;
  pTVar11 = (TSharedRef<FNiagaraEmitterInstance,1> *)(param_1->Emitters).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar14 = pTVar11 + iVar2;
  for (; pTVar11 != pTVar14; pTVar11 = pTVar11 + 1) {
    this_00 = FNiagaraEmitterInstance::GetEmitterHandle(pTVar11->Object);
    bVar6 = FNiagaraEmitterHandle::GetIsEnabled(this_00);
    if (bVar6) {
      local_f8.EmitterInst = pTVar11;
      local_f8.__this = this;
      local_f8.Controller = param_2;
      FNiagaraEmitterInstance::
      ForEachEnabledRenderer<_FNiagaraSystemRenderData::RecacheRenderers_::__l6::<lambda_1>_>
                (pTVar11->Object,&local_f8);
    }
  }
  iVar2 = (this->EmitterRenderers_GT).ArrayNum;
  if (((iVar2 != 0) && (iVar2 != (this->RendererDrawOrder).ArrayNum)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(EmitterRenderers_GT.Num() == 0) || (EmitterRenderers_GT.Num() == RendererDrawOrder.Num())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemRenderData.cpp"
                         ,0x141,L"EmitterRenderers Num %d does not match System DrawOrder %d"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::TaskEventBaseAllocator);
  if (this_01 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_01,1,true);
    this_01->_padding_ = (longlong)&___7FTaskEventBase_Private_Tasks_UE__6B_;
    TaskTrace::Created((ulong64)this_01->TraceId,0xd8);
    UE::Tasks::Private::FTaskBase::Init
              (this_01,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemRenderData.cpp(324)"
               ,Default,TaskEvent,None);
    pFVar12 = this_01;
  }
  if (pFVar12 != (FTaskBase *)0x0) {
    LOCK();
    pFVar12->RefCount = (atomic<unsigned_int>)((int)pFVar12->RefCount + 1);
    UNLOCK();
  }
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::`2'::<lambda_2>,1,0>
              ::_vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_2>,void>
                ::Call;
  local_50 = pFVar12;
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::RecacheRenderers_::__l2::TSTR_SignalFence326>_>
            (&UE::RenderCommandPipe::NiagaraDynamicData,
             (TUniqueFunction<void___cdecl(void)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar8 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar8 = local_40;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  iVar2 = (this->EmitterRenderers_GT).ArrayNum;
  pFVar4 = (this->EmitterRenderers_GT).AllocatorInstance.Data;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = CONCAT44(local_110._4_4_,iVar2);
  local_120 = this;
  if (iVar2 == 0) {
    local_110 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,&local_118,iVar2,(int *)((longlong)&local_110 + 4));
    memcpy(local_118.Data,pFVar4,(longlong)iVar2 << 3);
  }
  local_d8[0] = (code *)0x0;
  local_108 = pFVar12;
  local_b0 = FMemory::Malloc(0x28,8);
  *local_b0 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::`2'::<lambda_3>,1,1>
                       ::_vftable_;
  local_b0[1] = (code *)local_120;
  local_b0[2] = (code *)0x0;
  local_b0[2] = (code *)local_118.Data;
  local_118.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(local_b0 + 3) = (undefined4)local_110;
  *(undefined4 *)((longlong)local_b0 + 0x1c) = local_110._4_4_;
  local_110 = 0;
  local_b0[4] = (code *)0x0;
  local_b0[4] = (code *)local_108;
  if (local_b0 + 1 != (code **)0x0) {
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_3>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  local_108 = (FTaskBase *)0x0;
  this_02 = FRenderCommandList::GetInstanceTLS();
  if (this_02 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::RecacheRenderers_::__l2::TSTR_NiagaraRecacheRenderers333>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
  }
  else {
    this_03 = FRenderCommandList::GetRenderThread(this_02);
    local_a8._0_8_ = local_d8[0];
    local_80 = local_b0;
    local_b0 = (code **)0x0;
    local_a8._16_8_ = local_c8[0];
    local_a8._24_8_ = local_c8[1];
    local_a8._32_8_ = local_c8[2];
    local_d8[0] = (code *)0x0;
    local_78 = 2;
    pFVar7 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_NiagaraRecacheRenderers333>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_a8,pFVar7);
    uVar13 = (ulonglong)local_78;
    if ((2 < uVar13) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_a8._0_8_ != (code *)0x0) {
        ppcVar9 = (code **)(local_a8 + 0x10);
        if (local_80 != (code **)0x0) {
          ppcVar9 = local_80;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_a8);
    }
  }
  if (local_d8[0] != (code *)0x0) {
    ppcVar9 = local_d8 + 2;
    if (local_b0 != (code **)0x0) {
      ppcVar9 = local_b0;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  if (local_108 != (FTaskBase *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)local_108)(local_108,1);
    }
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  return;
}

// ReleaseRenderThreadResources @ 1493f5290

void __thiscall
FNiagaraSystemRenderData::ReleaseRenderThreadResources(FNiagaraSystemRenderData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->EmitterRenderers_RT).AllocatorInstance.Data;
  iVar2 = (this->EmitterRenderers_RT).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EmitterRenderers_RT).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraRenderer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar3 + 0x18))();
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// SetRenderingEnabled_GT @ 1493fa130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraSystemRenderData::SetRenderingEnabled_GT(FNiagaraSystemRenderData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  FNiagaraSystemRenderData *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemRenderData.cpp"
                       ,0x174,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bRenderingEnabled_GT != param_1) {
    this->bRenderingEnabled_GT = param_1;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::`12'::<lambda_1>,1,0>
                ::_vftable_;
    local_20 = (undefined ***)0x0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::<lambda_1>,void>
                  ::Call;
    local_30 = this;
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::SetRenderingEnabled_GT_::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>
              (&UE::RenderCommandPipe::NiagaraDynamicData,
               (TUniqueFunction<void___cdecl(void)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar3 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar3 = local_20;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  return;
}

