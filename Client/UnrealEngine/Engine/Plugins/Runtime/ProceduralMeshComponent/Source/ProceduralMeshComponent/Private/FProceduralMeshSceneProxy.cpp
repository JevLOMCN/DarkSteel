// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 12

// FProceduralMeshSceneProxy @ 14d2649c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FProceduralMeshSceneProxy * __thiscall
FProceduralMeshSceneProxy::FProceduralMeshSceneProxy
          (FProceduralMeshSceneProxy *this,UProceduralMeshComponent *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  TArray<FProcMeshProxySection_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  Type TVar7;
  longlong lVar8;
  FScriptContainerElement *_Src;
  bool bVar9;
  EShaderPlatform EVar10;
  int iVar11;
  uint uVar12;
  UBodySetup *pUVar13;
  FProceduralMeshSceneProxy *pFVar14;
  code *pcVar15;
  UMaterial *pUVar16;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar17;
  code **ppcVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  undefined1 auStackY_168 [32];
  uint local_128;
  longlong local_120;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> local_108;
  undefined8 local_f8;
  code *local_f0;
  FProceduralMeshSceneProxy *local_e8;
  longlong local_e0;
  int *local_d8;
  TArray<FProcMeshProxySection_*,TSizedDefaultAllocator<32>_> *local_d0;
  longlong local_c8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_f8 = 0;
  local_e8 = this;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  pTVar4 = &this->Sections;
  this->_padding_ = (longlong)&___7FProceduralMeshSceneProxy__6B_;
  piVar1 = &(this->Sections).ArrayNum;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Sections).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  local_d8 = piVar1;
  local_d0 = pTVar4;
  pUVar13 = (UBodySetup *)(**(code **)(param_1->_padding_ + 0x800))(param_1);
  this->BodySetup = pUVar13;
  pcVar15 = *(code **)(param_1->_padding_ + 0xaa8);
  EVar10 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  (*pcVar15)(param_1,&this->MaterialRelevance,EVar10);
  iVar6 = (param_1->ProcMeshSections).ArrayNum;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,iVar6,&pTVar4->AllocatorInstance,piVar1,piVar2);
  local_c8 = (longlong)iVar6;
  memset((pTVar4->AllocatorInstance).Data + (longlong)iVar11 * 8,0,(longlong)iVar6 * 8);
  local_128 = 0;
  if (0 < iVar6) {
    local_120 = 0;
    local_e0 = 0;
    do {
      lVar21 = local_e0;
      uVar20 = 0;
      if ((int)local_128 < (param_1->ProcMeshSections).ArrayNum) {
        uVar20 = ~local_128 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar15 = (code *)swi(3);
        pFVar14 = (FProceduralMeshSceneProxy *)(*pcVar15)();
        return pFVar14;
      }
      pFVar22 = (param_1->ProcMeshSections).AllocatorInstance.Data + lVar21;
      if ((0 < *(int *)(pFVar22 + 0x18)) && (0 < *(int *)(pFVar22 + 8))) {
        pcVar15 = ::operator_new(0x4d8);
        if (pcVar15 == (code *)0x0) {
          local_f0 = (code *)0x0;
        }
        else {
          TVar7 = *(Type *)(this->_padding_ + 8);
          *(longlong *)pcVar15 = 0;
          local_f0 = pcVar15;
          FStaticMeshVertexBuffer::FStaticMeshVertexBuffer((FStaticMeshVertexBuffer *)(pcVar15 + 8))
          ;
          FPositionVertexBuffer::FPositionVertexBuffer((FPositionVertexBuffer *)(pcVar15 + 0xc0));
          FColorVertexBuffer::FColorVertexBuffer((FColorVertexBuffer *)(pcVar15 + 0x110));
          FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32
                    ((FDynamicMeshIndexBuffer32 *)(pcVar15 + 0x160));
          FLocalVertexFactory::FLocalVertexFactory
                    ((FLocalVertexFactory *)(pcVar15 + 0x1a0),TVar7,"FProcMeshProxySection");
          pcVar15[0x3d0] = (code)0x1;
          FRenderResource::FRenderResource((FRenderResource *)(pcVar15 + 0x3d8));
          *(longlong *)(pcVar15 + 0x430) = -1;
          *(longlong *)(pcVar15 + 0x438) = 0;
          ((FRenderResource *)(pcVar15 + 0x3d8))->_padding_ =
               (longlong)&___7FRayTracingGeometry__6B_;
          *(longlong *)(pcVar15 + 0x3f8) = -1;
          *(undefined ***)(pcVar15 + 0x410) = &___7__TResourceArray_E_0A___6B_;
          *(longlong *)(pcVar15 + 0x400) = -1;
          *(longlong *)(pcVar15 + 0x408) = -1;
          *(longlong *)(pcVar15 + 0x418) = 0;
          *(longlong *)(pcVar15 + 0x420) = 0;
          pcVar15[0x428] = (code)0x0;
          *(undefined4 *)(pcVar15 + 0x440) = 0;
          FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
                    ((FRayTracingGeometryInitializer *)(pcVar15 + 0x448));
          *(undefined4 *)(pcVar15 + 0x4b8) = 0xffffffff;
          pcVar15[0x4bc] = (code)0xff;
          *(longlong *)(pcVar15 + 0x4c0) = 0;
          *(undefined4 *)(pcVar15 + 0x4c8) = 0;
          *(undefined8 *)(pcVar15 + 0x4cc) = 0xffffffffffffffff;
        }
        uVar20 = 0;
        iVar6 = *(int *)(pFVar22 + 8);
        local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.ArrayNum = 0;
        local_108.ArrayMax = 0;
        TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_108,iVar6,Default);
        if (0 < iVar6) {
          lVar23 = 0;
          lVar21 = 0;
          do {
            uVar12 = 0;
            if ((int)uVar20 < *(int *)(pFVar22 + 8)) {
              uVar12 = ~uVar20 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar15 = (code *)swi(3);
              pFVar14 = (FProceduralMeshSceneProxy *)(*pcVar15)();
              return pFVar14;
            }
            lVar8 = *(longlong *)pFVar22;
            uVar12 = 0;
            if ((int)uVar20 < local_108.ArrayNum) {
              uVar12 = ~uVar20 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar15 = (code *)swi(3);
              pFVar14 = (FProceduralMeshSceneProxy *)(*pcVar15)();
              return pFVar14;
            }
            ConvertProcMeshToDynMeshVertex
                      ((FDynamicMeshVertex *)(local_108.AllocatorInstance.Data + lVar23),
                       (FProcMeshVertex *)(lVar8 + lVar21));
            uVar20 = uVar20 + 1;
            lVar21 = lVar21 + 0x98;
            lVar23 = lVar23 + 0x58;
          } while ((int)uVar20 < iVar6);
        }
        pcVar15 = local_f0;
        pFVar5 = (FScriptContainerElement *)(local_f0 + 0x188);
        if (pFVar5 != pFVar22 + 0x10) {
          iVar6 = *(int *)(pFVar22 + 0x18);
          pcVar3 = local_f0 + 0x194;
          _Src = *(FScriptContainerElement **)&pFVar22[0x10].field_0x0;
          *(int *)(local_f0 + 400) = iVar6;
          if ((iVar6 == 0) && (*(int *)pcVar3 == 0)) {
            *(int *)pcVar3 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar6,*(int *)pcVar3,(ForAnyElementType *)pFVar5,iVar6,(int *)pcVar3);
            if (iVar6 != 0) {
              memcpy(*(FScriptContainerElement **)&pFVar5->field_0x0,_Src,(longlong)iVar6 << 2);
            }
          }
        }
        FStaticMeshVertexBuffers::InitFromDynamicVertex
                  ((FStaticMeshVertexBuffers *)(pcVar15 + 8),(FRHICommandListBase *)0x0,
                   (FRenderCommandPipe *)0x0,(FLocalVertexFactory *)(pcVar15 + 0x1a0),&local_108,4,0
                  );
        BeginInitResource((FRenderResource *)(pcVar15 + 0xc0),(FRenderCommandPipe *)0x0);
        BeginInitResource((FRenderResource *)(pcVar15 + 8),(FRenderCommandPipe *)0x0);
        BeginInitResource((FRenderResource *)(pcVar15 + 0x110),(FRenderCommandPipe *)0x0);
        BeginInitResource((FRenderResource *)(pcVar15 + 0x160),(FRenderCommandPipe *)0x0);
        BeginInitResource((FRenderResource *)(pcVar15 + 0x1a0),(FRenderCommandPipe *)0x0);
        lVar21 = (**(code **)(param_1->_padding_ + 0x690))(param_1,local_128);
        *(longlong *)pcVar15 = lVar21;
        if (lVar21 == 0) {
          pUVar16 = UMaterial::GetDefaultMaterial(MD_Surface);
          *(UMaterial **)pcVar15 = pUVar16;
        }
        *(FScriptContainerElement *)(pcVar15 + 0x3d0) = pFVar22[0x59];
        uVar20 = 0;
        if ((int)local_128 < *local_d8) {
          uVar20 = ~local_128 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar15 = (code *)swi(3);
          pFVar14 = (FProceduralMeshSceneProxy *)(*pcVar15)();
          return pFVar14;
        }
        *(code **)((local_d0->AllocatorInstance).Data + local_120 * 8) = pcVar15;
        bVar9 = IsRayTracingEnabled();
        this = local_e8;
        if (bVar9) {
          pcVar3 = (code *)param_1->_padding_;
          local_b8[0] = (code *)0x0;
          local_90 = (code **)0x0;
          local_90 = FMemory::Malloc(0x20,8);
          this = local_e8;
          *local_90 = (code *)&
                              ___7__TFunction_OwnedObject_V<lambda_1>__P____0FProceduralMeshSceneProxy__QEAA_PEAVUProceduralMeshComponent___Z__00_00_Function_Private_Core_UE__6B_
          ;
          local_90[1] = (code *)local_e8;
          local_90[2] = pcVar3;
          local_90[3] = pcVar15;
          if (local_90 + 1 != (code **)0x0) {
            local_b8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
                          ::Call;
          }
          this_00 = FRenderCommandList::GetInstanceTLS();
          if (this_00 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy_::__l15::TSTR_InitProceduralMeshRayTracingGeometry159>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
          }
          else {
            this_01 = FRenderCommandList::GetRenderThread(this_00);
            local_88._0_8_ = local_b8[0];
            local_60 = local_90;
            local_90 = (code **)0x0;
            local_88._16_8_ = local_a8[0];
            local_88._24_8_ = local_a8[1];
            local_88._32_8_ = local_a8[2];
            local_b8[0] = (code *)0x0;
            local_58 = 2;
            pFVar17 = (FRenderCommandTag *)
                      TRenderCommandTag<`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::TSTR_InitProceduralMeshRayTracingGeometry159>
                      ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_88,pFVar17);
            uVar19 = (ulonglong)local_58;
            if ((2 < uVar19) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar9)) {
              pcVar15 = (code *)swi(3);
              pFVar14 = (FProceduralMeshSceneProxy *)(*pcVar15)();
              return pFVar14;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar19] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_88._0_8_ != (code *)0x0) {
                ppcVar18 = (code **)(local_88 + 0x10);
                if (local_60 != (code **)0x0) {
                  ppcVar18 = local_60;
                }
                (**(code **)(*ppcVar18 + 0x10))();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar19])(local_88);
            }
          }
          if (local_b8[0] != (code *)0x0) {
            ppcVar18 = local_b8 + 2;
            if (local_90 != (code **)0x0) {
              ppcVar18 = local_90;
            }
            (**(code **)(*ppcVar18 + 0x10))();
          }
        }
        if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
      }
      local_128 = local_128 + 1;
      local_e0 = local_e0 + 0x60;
      local_120 = local_120 + 1;
    } while (local_120 < local_c8);
  }
  return this;
}

// ~FProceduralMeshSceneProxy @ 14d265650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FProceduralMeshSceneProxy::~FProceduralMeshSceneProxy(FProceduralMeshSceneProxy *this)

{
  void *pvVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  this->_padding_ = (longlong)&___7FProceduralMeshSceneProxy__6B_;
  pFVar3 = (this->Sections).AllocatorInstance.Data;
  local_res18 = (this->Sections).ArrayNum;
  uVar2 = (ulonglong)(int)local_res18;
  pFVar4 = pFVar3 + uVar2 * 8;
  local_res20 = pFVar4;
  while( true ) {
    if ((this->Sections).ArrayNum != (int)uVar2) {
      `TCheckedPointerIterator<FProcMeshProxySection_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar3 == pFVar4) break;
    pvVar1 = *(void **)pFVar3;
    if (pvVar1 != (void *)0x0) {
      (**(code **)(*(longlong *)((longlong)pvVar1 + 0xc0) + 0x20))((longlong)pvVar1 + 0xc0);
      (**(code **)(*(longlong *)((longlong)pvVar1 + 8) + 0x20))((longlong)pvVar1 + 8);
      (**(code **)(*(longlong *)((longlong)pvVar1 + 0x110) + 0x20))((longlong)pvVar1 + 0x110);
      (**(code **)(*(longlong *)((longlong)pvVar1 + 0x160) + 0x20))((longlong)pvVar1 + 0x160);
      (**(code **)(*(longlong *)((longlong)pvVar1 + 0x1a0) + 0x20))((longlong)pvVar1 + 0x1a0);
      (**(code **)(*(longlong *)((longlong)pvVar1 + 0x3d8) + 0x20))((longlong)pvVar1 + 0x3d8);
      FRayTracingGeometry::~FRayTracingGeometry((FRayTracingGeometry *)((longlong)pvVar1 + 0x3d8));
      FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)((longlong)pvVar1 + 0x1a0));
      FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32
                ((FDynamicMeshIndexBuffer32 *)((longlong)pvVar1 + 0x160));
      FColorVertexBuffer::~FColorVertexBuffer((FColorVertexBuffer *)((longlong)pvVar1 + 0x110));
      FPositionVertexBuffer::~FPositionVertexBuffer
                ((FPositionVertexBuffer *)((longlong)pvVar1 + 0xc0));
      FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer
                ((FStaticMeshVertexBuffer *)((longlong)pvVar1 + 8));
      ::operator_delete(pvVar1,0x4d8);
      pFVar4 = local_res20;
    }
    uVar2 = (ulonglong)local_res18;
    pFVar3 = pFVar3 + 8;
  }
  pFVar4 = (this->Sections).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 14d265bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FScriptContainerElement *pFVar1;
  FRHIBuffer *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FRHIBuffer *this_00;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStackY_198 [32];
  FRayTracingGeometrySegment local_148;
  FRayTracingGeometryInitializer local_120;
  FRHIBuffer *local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined4 local_94;
  ERayTracingGeometryInitializerType local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  FResourceArrayUploadInterface *local_78;
  uint local_70 [6];
  FRHIRayTracingGeometry *local_58;
  FDebugName local_50;
  FName local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_94 = 0x10000;
  local_a8 = (FRHIBuffer *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = Rendering;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78 = (FResourceArrayUploadInterface *)0x0;
  local_58 = (FRHIRayTracingGeometry *)0x0;
  local_70[0] = 0xffffffff;
  local_70[1] = 0xffffffff;
  local_70[2] = 0xffffffff;
  local_70[3] = 0xffffffff;
  local_70[4] = 0xffffffff;
  local_70[5] = 0xffffffff;
  FDebugName::FDebugName(&local_50);
  local_44.ComparisonIndex.Value = 0;
  local_44.Number = 0;
  FDebugName::operator=(&local_50,*(FName *)((longlong)this + 8));
  this_00 = local_a8;
  pFVar2 = *(FRHIBuffer **)(*(longlong *)((longlong)this + 0x10) + 0x180);
  if (local_a8 != pFVar2) {
    local_a8 = pFVar2;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  iVar7 = *(int *)(*(longlong *)((longlong)this + 0x10) + 400);
  local_a0 = local_a0 & 0xffffffff;
  local_94 = CONCAT22(local_94._2_2_,1);
  local_98 = iVar7 / 3 + (iVar7 >> 0x1f) +
             (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f);
  local_148.VertexBuffer.Reference = (FRHIBuffer *)0x0;
  local_148.VertexBufferElementType = VET_Float3;
  local_148.VertexBufferOffset = 0;
  local_148.VertexBufferStride = 0xc;
  local_148.FirstPrimitive = 0;
  local_148.bForceOpaque = false;
  local_148.bAllowDuplicateAnyHitShaderInvocation = true;
  local_148.bEnabled = true;
  pFVar2 = *(FRHIBuffer **)(*(longlong *)((longlong)this + 0x10) + 0xe0);
  if (pFVar2 != (FRHIBuffer *)0x0) {
    local_148.VertexBuffer.Reference = pFVar2;
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  local_148.MaxVertices = *(uint *)(*(longlong *)((longlong)this + 0x10) + 0x104);
  local_148.NumPrimitives = local_98;
  if (((local_88.Data <= &local_148) &&
      (&local_148 < (FRayTracingGeometrySegment *)(local_88.Data + (longlong)local_80._4_4_ * 0x28))
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (int)local_80;
  if ((int)local_80 == local_80._4_4_) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_88,(int *)((longlong)&local_80 + 4));
  }
  local_80 = CONCAT44(local_80._4_4_,iVar7 + 1);
  pFVar1 = local_88.Data + (longlong)iVar7 * 0x28;
  *(undefined8 *)&pFVar1->field_0x0 = 0;
  *(FRHIBuffer **)&pFVar1->field_0x0 = local_148.VertexBuffer.Reference;
  if (local_148.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_148.VertexBuffer.Reference);
  }
  *(EVertexElementType *)(pFVar1 + 8) = local_148.VertexBufferElementType;
  *(uint *)(pFVar1 + 0xc) = local_148.VertexBufferOffset;
  *(uint *)(pFVar1 + 0x10) = local_148.VertexBufferStride;
  *(uint *)(pFVar1 + 0x14) = local_148.MaxVertices;
  *(uint *)(pFVar1 + 0x18) = local_148.FirstPrimitive;
  *(uint *)(pFVar1 + 0x1c) = local_148.NumPrimitives;
  pFVar1[0x20] = (FScriptContainerElement)local_148.bForceOpaque;
  pFVar1[0x21] = (FScriptContainerElement)local_148.bAllowDuplicateAnyHitShaderInvocation;
  pFVar1[0x22] = (FScriptContainerElement)local_148.bEnabled;
  lVar3 = *(longlong *)((longlong)this + 0x10);
  local_120.IndexBuffer.Reference = local_a8;
  if (local_a8 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_a8);
  }
  FVar5.Data = local_88.Data;
  iVar7 = (int)local_80;
  local_120.IndexBufferOffset = (uint)local_a0;
  local_120.GeometryType = local_a0._4_4_;
  local_120.TotalPrimitiveCount = local_98;
  local_120.bFastBuild = (bool)(undefined1)local_94;
  local_120.bAllowUpdate = (bool)local_94._1_1_;
  local_120.bAllowCompaction = (bool)local_94._2_1_;
  local_120.bTemplate = (bool)local_94._3_1_;
  local_120.Type = local_90;
  local_120.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.Segments.ArrayNum = (int)local_80;
  if ((int)local_80 == 0) {
    local_120.Segments.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(int)local_80,0,&local_120.Segments.AllocatorInstance,(int)local_80,
               &local_120.Segments.ArrayMax);
    ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
              (local_120.Segments.AllocatorInstance.Data,(FRayTracingGeometrySegment *)FVar5.Data,
               iVar7);
  }
  local_120.OfflineData = local_78;
  local_120.SourceGeometry = local_58;
  local_120.DebugName.Number = local_50.Number;
  local_120.OfflineDataHeader.Reserved[0] = local_70[0];
  local_120.OfflineDataHeader.Reserved[1] = local_70[1];
  local_120.OfflineDataHeader.Reserved[2] = local_70[2];
  local_120.OfflineDataHeader.Reserved[3] = local_70[3];
  local_120.OwnerName = local_44;
  local_120.OfflineDataHeader.Reserved[4] = local_70[4];
  local_120.OfflineDataHeader.Reserved[5] = local_70[5];
  local_120.DebugName.Name = local_50.Name;
  FRayTracingGeometry::SetInitializer((FRayTracingGeometry *)(lVar3 + 0x3d8),&local_120);
  plVar8 = (longlong *)(*(longlong *)((longlong)this + 0x10) + 0x3d8);
  (**(code **)(*plVar8 + 0x18))(plVar8,param_1);
  if (local_148.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_148.VertexBuffer.Reference);
  }
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)local_88.Data,(int)local_80);
  if ((FRayTracingGeometrySegment *)local_88.Data != (FRayTracingGeometrySegment *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_a8 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8);
  }
  return;
}

// CanBeOccluded @ 14d26a6e0

bool __thiscall FProceduralMeshSceneProxy::CanBeOccluded(FProceduralMeshSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// GetDynamicMeshElements @ 14d2713f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall
FProceduralMeshSceneProxy::GetDynamicMeshElements
          (FProceduralMeshSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  FName FVar1;
  UMaterial *pUVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar3;
  UBodySetup *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FColoredMaterialRenderProxy *pFVar10;
  FMeshElementCollector *pFVar11;
  FSceneViewFamily *pFVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  bool bVar15;
  TEnumAsByte<ECollisionTraceFlag> TVar16;
  FNameEntryId FVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_ProcMesh_GetMeshElements> FVar22;
  FColoredMaterialRenderProxy *pFVar23;
  undefined4 extraout_var_00;
  FMaterialRenderProxy *pFVar24;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar25;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar26;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar27;
  float *pfVar28;
  undefined7 extraout_var;
  FLinearColor *this_00;
  FPrimitiveDrawInterface *pFVar29;
  ulonglong uVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  uint uVar33;
  FMaterialRenderProxy *pFVar34;
  ForElementType<FMeshBatchElement> FVar35;
  ForElementType<FMeshBatchElement> FVar36;
  byte bVar37;
  undefined1 auStackY_648 [32];
  byte local_5e7;
  undefined1 local_5e6 [2];
  uint local_5e4;
  FName local_5d8;
  FColoredMaterialRenderProxy *local_5d0;
  FColor_u_0 local_5c8;
  uint local_5c4;
  FColor_u_0 local_5c0;
  FColoredMaterialRenderProxy *local_5b8;
  FMeshElementCollector *local_5b0;
  FName local_5a8;
  FNameEntryId local_5a0;
  uint uStack_59c;
  undefined8 *local_598;
  FScriptContainerElement *local_590;
  FSceneViewFamily *local_588;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_580;
  FName local_578;
  FLinearColor_u_0 local_568;
  undefined1 local_558 [8];
  FScriptContainerElement *local_550;
  FName local_548;
  FLinearColor_u_0 local_540;
  FLinearColor local_530;
  TTransform<double> local_518;
  undefined1 local_4b8 [664];
  float local_220 [114];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_648;
  pFVar34 = (FMaterialRenderProxy *)0x0;
  local_5b0 = param_4;
  FVar22 = StatPtr_STAT_ProcMesh_GetMeshElements;
  local_5e4 = param_3;
  local_588 = param_2;
  local_580 = param_1;
  if (StatPtr_STAT_ProcMesh_GetMeshElements ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_GetMeshElements>)0x0) {
    pFVar21 = ::FName::FName(&local_548,"STAT_ProcMesh_GetMeshElements");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_ProcMesh_GetMeshElements>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_GetMeshElements,*pFVar21
                        ,L"Get ProcMesh Elements","STATGROUP_ProceduralMesh","STATCAT_Advanced",
                        L"ProceduralMesh",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar22;
  bVar6 = false;
  bVar7 = false;
  local_578.ComparisonIndex.Value = 0;
  local_578.Number = 0;
  bVar14 = false;
  bVar15 = false;
  if ((FVar1.ComparisonIndex.Value.Value != 0) || (FVar1.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_5c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_5c8._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_5a8.ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
        local_5a8.Number = FVar1.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_5a8,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshComponent.cpp"
                   ,0x137);
        bVar6 = true;
        bVar7 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_5d8 = FVar1;
      FThreadStats::AddMessage(FVar1,CycleScopeStart);
      bVar14 = true;
      goto LAB_14d27157e;
    }
  }
  bVar7 = bVar15;
  bVar6 = bVar14;
  bVar14 = false;
  local_5d8 = local_578;
LAB_14d27157e:
  bVar15 = AllowDebugViewmodes();
  if ((bVar15) && ((local_588->EngineShowFlags).Wireframe != 0)) {
    bVar37 = 1;
    local_5e7 = 1;
    pFVar23 = ::operator_new(0xe0);
    if (pFVar23 == (FColoredMaterialRenderProxy *)0x0) {
      local_5b8 = (FColoredMaterialRenderProxy *)0x0;
      FMeshElementCollector::RegisterOneFrameMaterialProxy(param_4,(FMaterialRenderProxy *)0x0);
    }
    else {
      FVar17 = FNameEntryId::FromValidEName((EName)local_558);
      uStack_59c = 0;
      local_5a0.Value = *(uint *)CONCAT44(extraout_var_00,FVar17.Value);
      local_540._0_8_ = ___xmm_3f8000003f8000003f00000000000000;
      local_540._8_8_ = _UNK_152242e48;
      pUVar2 = (GEngine->WireframeMaterial).field0_0x0.DebugPtr;
      pFVar24 = pFVar34;
      if (pUVar2 != (UMaterial *)0x0) {
        pFVar24 = (FMaterialRenderProxy *)(**(code **)(pUVar2->_padding_ + 0x310))();
      }
      FVar1.Number = uStack_59c;
      FVar1.ComparisonIndex.Value = local_5a0.Value;
      local_5b8 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                            (pFVar23,pFVar24,(FLinearColor *)&local_540._s_0,FVar1);
      FMeshElementCollector::RegisterOneFrameMaterialProxy
                (param_4,(FMaterialRenderProxy *)local_5b8);
    }
  }
  else {
    bVar37 = 0;
    local_5b8 = (FColoredMaterialRenderProxy *)0x0;
    local_5e7 = 0;
  }
  uVar9 = _UNK_150689648;
  uVar8 = ___xmm_3f800000000000000000000000000000;
  local_5c4 = (this->Sections).ArrayNum;
  uVar30 = (ulonglong)(int)local_5c4;
  pFVar32 = (this->Sections).AllocatorInstance.Data;
  local_550 = pFVar32 + uVar30 * 8;
  do {
    pFVar13 = local_550;
    local_590 = pFVar32;
    if ((this->Sections).ArrayNum != (int)uVar30) {
      local_5e6[0] = 0;
      `TCheckedPointerIterator<FProcMeshProxySection_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_5e6);
    }
    pFVar12 = local_588;
    if (pFVar32 == pFVar13) {
      uVar18 = local_5e4;
      if (0 < param_1->ArrayNum) {
        do {
          uVar33 = (uint)pFVar34;
          if ((uVar18 >> (uVar33 & 0x1f) & 1) != 0) {
            if ((((pFVar12->EngineShowFlags).Collision != 0) &&
                ((this->_padding_ & 0x20000000) != 0)) &&
               (TVar16 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)this->BodySetup),
               *(char *)CONCAT71(extraout_var,TVar16.Value) != '\x03')) {
              UE::Math::TTransform<double>::SetFromMatrix
                        (&local_518,(TMatrix<double> *)&this->_padding_);
              bVar37 = *(byte *)((longlong)&this->_padding_ + 2);
              pUVar4 = this->BodySetup;
              if ((((char)bVar37 < '\0') || ((bVar37 & 0x10) != 0)) ||
                 (((bVar37 & 3) == 3 || ((bVar37 & 0x60) != 0)))) {
                bVar15 = true;
              }
              else {
                bVar15 = false;
              }
              local_568._s_0.R = FLinearColor::sRGBToLinearTable[0x9d];
              local_568._s_0.G = FLinearColor::sRGBToLinearTable[0x95];
              local_568._s_0.B = FLinearColor::sRGBToLinearTable[0xdf];
              local_568._s_0.A = 1.0;
              this_00 = GetSelectionColor(&local_530,(FLinearColor *)&local_568._s_0,
                                          (this->_padding_ & 0x600) != 0,
                                          (bool)(*(byte *)((longlong)&this->_padding_ + 1) >> 4 & 1)
                                          ,true);
              FLinearColor::ToFColorSRGB(this_00);
              FKAggregateGeom::GetAggGeom
                        (&pUVar4->AggGeom,&local_518,(FColor)local_5c0._s_0,
                         (FMaterialRenderProxy *)0x0,false,false,bVar15,uVar33,param_4);
              param_1 = local_580;
            }
            lVar31 = this->_padding_;
            pFVar29 = FMeshElementCollector::GetPDI(param_4,uVar33);
            FPrimitiveSceneProxy::RenderBounds
                      ((FPrimitiveSceneProxy *)this,pFVar29,&pFVar12->EngineShowFlags,
                       (TBoxSphereBounds<double,double> *)&this->_padding_,(lVar31 & 0x600) != 0);
            uVar18 = local_5e4;
          }
          pFVar34 = (FMaterialRenderProxy *)(ulonglong)(uVar33 + 1);
        } while ((int)(uVar33 + 1) < param_1->ArrayNum);
      }
      FVar1 = local_5d8;
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar14) {
        FThreadStats::AddMessage(FVar1,CycleScopeEnd);
      }
      return;
    }
    local_598 = *(undefined8 **)pFVar32;
    if ((local_598 != (undefined8 *)0x0) && (*(char *)(local_598 + 0x7a) != '\0')) {
      pFVar23 = local_5b8;
      if (bVar37 == 0) {
        pFVar23 = (FColoredMaterialRenderProxy *)(**(code **)(*(longlong *)*local_598 + 0x310))();
      }
      iVar19 = param_1->ArrayNum;
      pFVar24 = pFVar34;
      uVar18 = local_5e4;
      local_5d0 = pFVar23;
      if (0 < iVar19) {
        do {
          uVar33 = (uint)pFVar24;
          if ((uVar18 >> (uVar33 & 0x1f) & 1) != 0) {
            uVar18 = 0;
            if ((int)uVar33 < iVar19) {
              uVar18 = ~uVar33 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar19 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                     ::Add(&param_4->MeshBatchStorage,1);
            uVar18 = iVar19 / 0x49;
            uVar20 = 0;
            if ((int)uVar18 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
              uVar20 = ~uVar18 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar36 = (ForElementType<FMeshBatchElement>)
                     ((ulonglong)(uint)(iVar19 % 0x49) * 0xe0 +
                     (longlong)
                     (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar18]);
            if ((*(int *)((longlong)FVar36 + 0xa0) < 1) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar35 = FVar36;
            if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98) !=
                (ForElementType<FMeshBatchElement>)0x0) {
              FVar35 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98);
            }
            *(undefined8 **)((longlong)FVar35 + 0x18) = local_598 + 0x2c;
            *(uint *)((longlong)FVar36 + 0xd4) = *(uint *)((longlong)FVar36 + 0xd4) & 0xffffffbf;
            *(uint *)((longlong)FVar36 + 0xd4) =
                 *(uint *)((longlong)FVar36 + 0xd4) | (uint)local_5e7 << 6;
            *(undefined8 **)((longlong)FVar36 + 0xa8) = local_598 + 0x34;
            *(FColoredMaterialRenderProxy **)((longlong)FVar36 + 0xb0) = pFVar23;
            paVar3 = &local_5b0->OneFrameResources->Next;
            aVar25 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                      )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
            *(undefined8 *)((longlong)aVar25 + 8) = 0;
            local_5d0 = (FColoredMaterialRenderProxy *)((longlong)aVar25 + 0x10);
            *(undefined ***)aVar25 =
                 &
                 ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
            ;
            TVar26.Next = *paVar3;
            do {
              *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                *)((longlong)aVar25 + 8) = TVar26.Next;
              LOCK();
              aVar27 = *paVar3;
              bVar15 = TVar26.Next == aVar27;
              if (bVar15) {
                *paVar3 = aVar25;
                aVar27 = TVar26.Next;
              }
              UNLOCK();
              TVar26.Next = aVar27;
            } while (!bVar15);
            FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
                      ((FDynamicPrimitiveUniformBuffer *)local_5d0);
            lVar31 = 9;
            local_4b8._368_8_ = uVar8;
            local_4b8._376_8_ = uVar9;
            pfVar28 = &(((FPrimitiveUniformShaderParametersBuilder *)local_4b8)->Parameters).
                       CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
            local_4b8._448_8_ = uVar8;
            local_4b8._456_8_ = uVar9;
            do {
              ((TVector4<float>_u_0_s_0 *)(pfVar28 + -2))->X = 0.0;
              ((TVector4<float>_u_0_s_0 *)(pfVar28 + -2))->Y = 0.0;
              *pfVar28 = 0.0;
              pfVar28[1] = 1.0;
              pfVar28 = pfVar28 + 4;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            FPrimitiveSceneProxy::BuildUniformShaderParameters
                      ((FPrimitiveSceneProxy *)this,
                       (FPrimitiveUniformShaderParametersBuilder *)local_4b8);
            pFVar11 = local_5b0;
            if ((local_5b0->RHICmdList == (FRHICommandList *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RHICmdList",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                    ,0x46,L""), bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar10 = local_5d0;
            FDynamicPrimitiveUniformBuffer::Set
                      ((FDynamicPrimitiveUniformBuffer *)local_5d0,
                       (FRHICommandListBase *)pFVar11->RHICmdList,
                       (FPrimitiveUniformShaderParametersBuilder *)local_4b8);
            param_4 = local_5b0;
            *(undefined4 *)((longlong)FVar35 + 0x58) = 0;
            *(longlong **)((longlong)FVar35 + 8) = &pFVar10->_padding_;
            iVar19 = *(int *)(local_598 + 0x32);
            *(undefined4 *)((longlong)FVar35 + 0x68) = 0;
            *(int *)((longlong)FVar35 + 0x5c) =
                 iVar19 / 3 + (iVar19 >> 0x1f) +
                 (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) & 0xffffffffU) >> 0x1f);
            *(int *)((longlong)FVar35 + 0x6c) = *(int *)((longlong)local_598 + 0x104) + -1;
            *(uint *)((longlong)FVar36 + 0xd4) =
                 ((byte)this->_padding_ & 1 ^ *(uint *)((longlong)FVar36 + 0xd4) & 0xfffffffe) &
                 0xffffc07f;
            FMeshElementCollector::AddMesh(local_5b0,uVar33,(FMeshBatch *)FVar36);
            param_1 = local_580;
            uVar18 = local_5e4;
          }
          iVar19 = param_1->ArrayNum;
          pFVar32 = local_590;
          pFVar24 = (FMaterialRenderProxy *)(ulonglong)(uVar33 + 1);
        } while ((int)(uVar33 + 1) < iVar19);
      }
    }
    pFVar32 = pFVar32 + 8;
    uVar30 = (ulonglong)local_5c4;
    bVar37 = local_5e7;
  } while( true );
}

// GetDynamicRayTracingInstances @ 14d271b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FProceduralMeshSceneProxy::GetDynamicRayTracingInstances
          (FProceduralMeshSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FSceneView *pFVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  int iVar12;
  undefined8 *puVar13;
  float *pfVar14;
  FRayTracingInstance *pFVar15;
  longlong lVar16;
  longlong lVar17;
  ForElementType<FMeshBatchElement> FVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStackY_6f8 [32];
  longlong local_690;
  FRayTracingInstance local_688;
  uint local_618;
  FRayTracingInstance local_610;
  FMeshBatch local_5a0;
  undefined1 local_4b8 [664];
  float local_220 [114];
  ulonglong local_58;
  
  pTVar10 = CVarRayTracingProceduralMesh.Ref;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pTVar10->ShadowedValue[1] != 0) {
    pFVar3 = (param_1->Views).AllocatorInstance.Data;
    iVar1 = (param_1->Views).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar2 = param_1->VisibilityMap;
    local_618 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> local_618 & 1) == 0; local_618 = local_618 + 1) {
      }
    }
    uVar19 = 0x20;
    if (uVar2 != 0) {
      uVar19 = local_618;
    }
    if ((((int)uVar19 < 0) || (iVar1 <= (int)uVar19)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Views.IsValidIndex(FirstActiveViewIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshComponent.cpp"
                            ,0x1b7,
                            L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar20 = 0;
    if ((int)uVar19 < iVar1) {
      uVar20 = ~uVar19 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar9 = _UNK_150689648;
    uVar8 = ___xmm_3f800000000000000000000000000000;
    uVar20 = 0;
    pFVar4 = *(FSceneView **)(pFVar3 + (longlong)(int)uVar19 * 8);
    if (0 < (this->Sections).ArrayNum) {
      local_690 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar20 < (this->Sections).ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar5 = *(undefined8 **)((this->Sections).AllocatorInstance.Data + local_690);
        if ((puVar5 != (undefined8 *)0x0) && (*(char *)(puVar5 + 0x7a) != '\0')) {
          (**(code **)(*(longlong *)*puVar5 + 0x310))();
          bVar11 = FRayTracingGeometry::IsValid((FRayTracingGeometry *)(puVar5 + 0x7b));
          if (bVar11) {
            if ((puVar5[0x89] == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Section->RayTracingGeometry.Initializer.IndexBuffer.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshComponent.cpp"
                                    ,0x1c4,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_688.bApplyLocalBoundsTransform = false;
            local_688.bThinGeometry = false;
            local_688.InstanceLayer = NearField;
            local_688.bInstanceMaskAndFlagsDirty = true;
            local_688.NumTransforms = 0;
            local_688.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_688.Materials.ArrayNum = 0;
            local_688.Materials.ArrayMax = 0;
            local_688.MaterialsView.DataPtr = (FMeshBatch *)0x0;
            local_688.MaterialsView.ArrayNum = 0;
            local_688.PrimitiveInstanceIndices.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_688.PrimitiveInstanceIndices.ArrayNum = 0;
            local_688.PrimitiveInstanceIndices.ArrayMax = 0;
            local_688.PrimitiveInstanceIndicesView.DataPtr = (uint *)0x0;
            local_688.PrimitiveInstanceIndicesView.ArrayNum = 0;
            local_688.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_688.InstanceTransforms.ArrayNum = 0;
            local_688.InstanceTransforms.ArrayMax = 0;
            local_688.InstanceTransformsView.DataPtr = (TMatrix<double> *)0x0;
            local_688.InstanceTransformsView.ArrayNum = 0;
            local_688.Geometry = (FRayTracingGeometry *)(puVar5 + 0x7b);
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1080,&local_688.InstanceTransforms.AllocatorInstance,
                                &local_688.InstanceTransforms.ArrayMax);
            lVar17 = this->_padding_;
            local_688.InstanceTransforms.ArrayNum = iVar12 + 1;
            lVar16 = (longlong)iVar12 * 0x80;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16) =
                 this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 8) = lVar17
            ;
            lVar17 = this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x10) =
                 this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x10 + 8) =
                 lVar17;
            lVar17 = this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x20) =
                 this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x20 + 8) =
                 lVar17;
            lVar17 = this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x30) =
                 this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x30 + 8) =
                 lVar17;
            lVar17 = this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x40) =
                 this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x40 + 8) =
                 lVar17;
            lVar17 = this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x50) =
                 this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x50 + 8) =
                 lVar17;
            lVar17 = this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x60) =
                 this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x60 + 8) =
                 lVar17;
            lVar17 = this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x70) =
                 this->_padding_;
            *(longlong *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar16 + 0x70 + 8) =
                 lVar17;
            FMeshBatch::FMeshBatch(&local_5a0);
            local_5a0.VertexFactory = (FVertexFactory *)(puVar5 + 0x34);
            local_5a0.SegmentIndex = 0;
            local_5a0.MaterialRenderProxy =
                 (FMaterialRenderProxy *)(**(code **)(*(longlong *)*puVar5 + 0x310))();
            local_5a0._212_4_ = (byte)this->_padding_ & 1 | local_5a0._212_4_ & 0xffffc07e;
            bVar11 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,pFVar4);
            local_5a0._212_4_ = (uint)bVar11 << 0x17 | local_5a0._212_4_ & 0xff7fffff;
            if ((local_5a0.Elements.ArrayNum < 1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar18 = (ForElementType<FMeshBatchElement>)&local_5a0;
            if (local_5a0.Elements.AllocatorInstance.SecondaryData !=
                (ForElementType<FMeshBatchElement>)0x0) {
              FVar18 = local_5a0.Elements.AllocatorInstance.SecondaryData;
            }
            *(FIndexBuffer **)((longlong)FVar18 + 0x18) = (FIndexBuffer *)(puVar5 + 0x2c);
            plVar6 = (longlong *)param_1->_padding_;
            puVar13 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
            puVar13[1] = 0;
            *puVar13 = &
                       ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
            ;
            lVar17 = *plVar6;
            do {
              puVar13[1] = lVar17;
              LOCK();
              lVar16 = *plVar6;
              bVar11 = lVar17 == lVar16;
              if (bVar11) {
                *plVar6 = (longlong)puVar13;
                lVar16 = lVar17;
              }
              UNLOCK();
              lVar17 = lVar16;
            } while (!bVar11);
            FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
                      ((FDynamicPrimitiveUniformBuffer *)(puVar13 + 2));
            lVar17 = 9;
            local_4b8._368_8_ = uVar8;
            local_4b8._376_8_ = uVar9;
            pfVar14 = &(((FPrimitiveUniformShaderParametersBuilder *)local_4b8)->Parameters).
                       CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
            local_4b8._448_8_ = uVar8;
            local_4b8._456_8_ = uVar9;
            uVar19 = 0;
            do {
              ((TVector4<float>_u_0_s_0 *)(pfVar14 + -2))->X = 0.0;
              ((TVector4<float>_u_0_s_0 *)(pfVar14 + -2))->Y = 0.0;
              *pfVar14 = 0.0;
              pfVar14[1] = 1.0;
              pfVar14 = pfVar14 + 4;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            FPrimitiveSceneProxy::BuildUniformShaderParameters
                      ((FPrimitiveSceneProxy *)this,
                       (FPrimitiveUniformShaderParametersBuilder *)local_4b8);
            if ((param_1->_padding_ == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RHICmdList",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                    ,0x46,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FDynamicPrimitiveUniformBuffer::Set
                      ((FDynamicPrimitiveUniformBuffer *)(puVar13 + 2),
                       (FRHICommandListBase *)param_1->_padding_,
                       (FPrimitiveUniformShaderParametersBuilder *)local_4b8);
            *(uint *)((longlong)FVar18 + 0x58) = 0;
            *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar18 + 8) =
                 (TUniformBuffer<FPrimitiveUniformShaderParameters> *)(puVar13 + 3);
            iVar12 = *(int *)(puVar5 + 0x32);
            *(uint *)((longlong)FVar18 + 0x68) = 0;
            *(int *)((longlong)FVar18 + 0x5c) =
                 iVar12 / 3 + (iVar12 >> 0x1f) +
                 (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >> 0x1f);
            *(uint *)((longlong)FVar18 + 0x6c) = *(int *)((longlong)puVar5 + 0x104) - 1;
            if (((local_688.Materials.AllocatorInstance.Data <= &local_5a0) &&
                (&local_5a0 <
                 (FMeshBatch *)
                 (local_688.Materials.AllocatorInstance.Data +
                 (longlong)local_688.Materials.ArrayMax * 0xe0))) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar12 = local_688.Materials.ArrayNum;
            if (local_688.Materials.ArrayNum == local_688.Materials.ArrayMax) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x8e0,&local_688.Materials.AllocatorInstance,
                                  &local_688.Materials.ArrayMax);
            }
            local_688.Materials.ArrayNum = iVar12 + 1;
            FMeshBatch::FMeshBatch
                      ((FMeshBatch *)
                       (local_688.Materials.AllocatorInstance.Data + (longlong)iVar12 * 0xe0),
                       &local_5a0);
            if (0 < iVar1) {
              do {
                if ((uVar2 >> (uVar19 & 0x1f) & 1) != 0) {
                  pFVar15 = FRayTracingInstance::FRayTracingInstance(&local_610,&local_688);
                  FRayTracingInstanceCollector::AddRayTracingInstance(param_1,uVar19,pFVar15);
                }
                uVar19 = uVar19 + 1;
              } while ((int)uVar19 < iVar1);
            }
            FVar18 = (ForElementType<FMeshBatchElement>)&local_5a0;
            if (local_5a0.Elements.AllocatorInstance.SecondaryData !=
                (ForElementType<FMeshBatchElement>)0x0) {
              FVar18 = local_5a0.Elements.AllocatorInstance.SecondaryData;
            }
            DestructItems<FMeshBatchElement,int>
                      ((FMeshBatchElement *)FVar18,local_5a0.Elements.ArrayNum);
            if (local_5a0.Elements.AllocatorInstance.SecondaryData !=
                (ForElementType<FMeshBatchElement>)0x0) {
              FMemory::Free((void *)local_5a0.Elements.AllocatorInstance.SecondaryData);
            }
            if (local_688.InstanceTransforms.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_688.InstanceTransforms.AllocatorInstance.Data);
            }
            if (local_688.PrimitiveInstanceIndices.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_688.PrimitiveInstanceIndices.AllocatorInstance.Data);
            }
            DestructItems<FMeshBatch,int>
                      ((FMeshBatch *)local_688.Materials.AllocatorInstance.Data,
                       local_688.Materials.ArrayNum);
            if ((FMeshBatch *)local_688.Materials.AllocatorInstance.Data != (FMeshBatch *)0x0) {
              FMemory::Free(local_688.Materials.AllocatorInstance.Data);
            }
          }
        }
        uVar20 = uVar20 + 1;
        local_690 = local_690 + 8;
      } while ((int)uVar20 < (this->Sections).ArrayNum);
    }
  }
  return;
}

// GetMemoryFootprint @ 14d272340

uint __thiscall FProceduralMeshSceneProxy::GetMemoryFootprint(FProceduralMeshSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x2a0;
}

// GetTypeHash @ 14d274250

ulong64 __thiscall FProceduralMeshSceneProxy::GetTypeHash(FProceduralMeshSceneProxy *this)

{
  return 0x155359690;
}

// GetViewRelevance @ 14d274270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FProceduralMeshSceneProxy::GetViewRelevance
          (FProceduralMeshSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar4 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 2;
  bVar4 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 3 | 2;
  uVar5 = ((uint)*(byte *)((longlong)&this->_padding_ + 3) << 4 ^
          *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5;
  uVar6 = 0;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    uVar6 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6 | uVar5 & 0xffffdfff;
  bVar4 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 5;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 ^
       ((uint)*(byte *)((longlong)&this->_padding_ + 7) << 0xe ^
       *(uint *)&__return_storage_ptr__->field_0x8) & 0x4000;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  cVar2 = (char)this->_padding_;
  if (((((cVar2 == '\x02') || (cVar2 == '\x01')) || ((this->_padding_ & 0x1000000000000) != 0)) ||
      ((bVar3 = *(byte *)((longlong)&this->_padding_ + 2), (char)bVar3 < '\0' ||
       (uVar6 = 0, (bVar3 & 0x72) != 0)))) &&
     ((uVar6 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar6 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar6;
  return __return_storage_ptr__;
}

// HasRayTracingRepresentation @ 14d274390

bool __thiscall
FProceduralMeshSceneProxy::HasRayTracingRepresentation(FProceduralMeshSceneProxy *this)

{
  return true;
}

// IsRayTracingRelevant @ 14d2747c0

bool __thiscall FProceduralMeshSceneProxy::IsRayTracingRelevant(FProceduralMeshSceneProxy *this)

{
  return true;
}

// UpdateSection_RenderThread @ 14d27d090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FProceduralMeshSceneProxy::UpdateSection_RenderThread
          (FProceduralMeshSceneProxy *this,FRHICommandListBase *param_1,
          FProcMeshSectionUpdateData *param_2)

{
  longlong lVar1;
  FRHIBuffer *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FRHIBuffer *this_00;
  ForAnyElementType FVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ProcMesh_UpdateSectionRT> FVar17;
  void *pvVar18;
  longlong lVar19;
  FName FVar20;
  uint uVar21;
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStackY_328 [32];
  FRayTracingGeometrySegment local_2c0;
  FColor_u_0 local_298 [2];
  FName local_290;
  FName local_288;
  FRHICommandListBase *local_280;
  FName local_278;
  undefined8 local_268;
  float local_260;
  TVector<float>_u_0 local_258;
  undefined8 local_248;
  float local_240;
  ulonglong local_23c;
  float local_234;
  TVector<float>_u_0 local_228;
  TVector<float>_u_0 local_218;
  FRayTracingGeometryInitializer local_208;
  TVector<float>_u_0 local_198;
  TVector2<float> local_18c;
  TVector2<float> local_184;
  TVector2<float> local_17c;
  TVector2<float> local_174 [5];
  undefined8 local_14c;
  undefined4 local_144;
  FName local_138 [2];
  FRHIBuffer *local_128;
  undefined8 local_120;
  uint local_118;
  undefined4 local_114;
  ERayTracingGeometryInitializerType local_110;
  ForAnyElementType local_108;
  undefined8 local_100;
  FResourceArrayUploadInterface *local_f8;
  uint local_f0 [6];
  FRHIRayTracingGeometry *local_d8;
  FDebugName local_d0;
  FName local_c4;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  FVar17 = StatPtr_STAT_ProcMesh_UpdateSectionRT;
  local_280 = param_1;
  if (StatPtr_STAT_ProcMesh_UpdateSectionRT ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_UpdateSectionRT>)0x0) {
    pFVar16 = ::FName::FName(local_138,"STAT_ProcMesh_UpdateSectionRT");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ProcMesh_UpdateSectionRT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_UpdateSectionRT,*pFVar16
                        ,L"UpdateSection RT","STATGROUP_ProceduralMesh","STATCAT_Advanced",
                        L"ProceduralMesh",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar17;
  bVar5 = false;
  bVar7 = false;
  local_278.ComparisonIndex.Value = 0;
  local_278.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_298[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_298[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_290.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_290.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_290,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshComponent.cpp"
                   ,0xd2);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_288 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar6 = true;
      goto LAB_14d27d202;
    }
  }
  bVar6 = false;
  local_288 = local_278;
  FVar20 = local_278;
LAB_14d27d202:
  if (param_2 != (FProcMeshSectionUpdateData *)0x0) {
    iVar15 = param_2->TargetSection;
    if (iVar15 < (this->Sections).ArrayNum) {
      if ((iVar15 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)((this->Sections).AllocatorInstance.Data + (longlong)iVar15 * 8) != 0) {
        uVar21 = param_2->TargetSection;
        uVar14 = 0;
        if ((int)uVar21 < (this->Sections).ArrayNum) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar11 = _UNK_15104007c;
        fVar10 = _UNK_151040078;
        fVar9 = _UNK_151040074;
        fVar8 = ___xmm_3c0102043c0102043c0102043c010204;
        lVar1 = *(longlong *)((this->Sections).AllocatorInstance.Data + (longlong)(int)uVar21 * 8);
        uVar21 = 0;
        iVar15 = (param_2->NewVertexBuffer).ArrayNum;
        if (0 < iVar15) {
          do {
            uVar14 = 0;
            if ((int)uVar21 < (param_2->NewVertexBuffer).ArrayNum) {
              uVar14 = ~uVar21 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_14c = 0;
            ConvertProcMeshToDynMeshVertex
                      ((FDynamicMeshVertex *)&local_198._s_0,
                       (FProcMeshVertex *)
                       ((param_2->NewVertexBuffer).AllocatorInstance.Data + (ulonglong)uVar21 * 0x98
                       ));
            auVar22 = pmovsxbd(in_XMM1,local_14c._4_4_);
            lVar19 = *(longlong *)(lVar1 + 0xf8);
            uVar14 = uVar21 * *(int *)(lVar1 + 0x100);
            auVar23 = pmovsxbd(auVar22,(undefined4)local_14c);
            fVar26 = (float)auVar22._0_4_ * fVar8;
            fVar27 = (float)auVar22._4_4_ * fVar9;
            local_248 = CONCAT44(fVar27,fVar26);
            local_240 = (float)auVar22._8_4_ * fVar10;
            fVar28 = (float)auVar22._12_4_ * fVar11;
            *(undefined8 *)((ulonglong)uVar14 + lVar19) = local_198._0_8_;
            *(float *)((ulonglong)uVar14 + 8 + lVar19) = local_198._s_0.Z;
            fVar24 = (float)auVar23._0_4_ * fVar8;
            fVar25 = (float)auVar23._4_4_ * fVar9;
            local_260 = (float)auVar23._8_4_ * fVar10;
            local_268 = CONCAT44(fVar25,fVar24);
            local_23c = CONCAT44(fVar25,fVar24);
            local_258._s_0.X = (fVar27 * local_260 - local_240 * fVar25) * fVar28;
            in_XMM1._8_8_ = 0;
            in_XMM1._0_8_ = local_23c;
            local_258._s_0.Y = (local_240 * fVar24 - fVar26 * local_260) * fVar28;
            local_258._s_0.Z = (fVar26 * fVar25 - fVar27 * fVar24) * fVar28;
            local_234 = local_260;
            local_228._0_8_ = local_248;
            local_228._s_0.Z = local_240;
            local_218._0_8_ = local_23c;
            local_218._s_0.Z = local_260;
            FStaticMeshVertexBuffer::SetVertexTangents
                      ((FStaticMeshVertexBuffer *)(lVar1 + 8),uVar21,
                       (TVector<float> *)&local_218._s_0,(TVector<float> *)&local_258._s_0,
                       (TVector<float> *)&local_228._s_0);
            FStaticMeshVertexBuffer::SetVertexUV
                      ((FStaticMeshVertexBuffer *)(lVar1 + 8),uVar21,0,&local_18c,false);
            FStaticMeshVertexBuffer::SetVertexUV
                      ((FStaticMeshVertexBuffer *)(lVar1 + 8),uVar21,1,&local_184,false);
            FStaticMeshVertexBuffer::SetVertexUV
                      ((FStaticMeshVertexBuffer *)(lVar1 + 8),uVar21,2,&local_17c,false);
            FStaticMeshVertexBuffer::SetVertexUV
                      ((FStaticMeshVertexBuffer *)(lVar1 + 8),uVar21,3,local_174,false);
            uVar14 = uVar21 * *(int *)(lVar1 + 0x150);
            uVar21 = uVar21 + 1;
            *(undefined4 *)((ulonglong)uVar14 + *(longlong *)(lVar1 + 0x148)) = local_144;
            FVar20 = local_288;
            param_1 = local_280;
          } while ((int)uVar21 < iVar15);
        }
        pvVar18 = FRHICommandListBase::LockBuffer
                            (param_1,*(FRHIBuffer **)(lVar1 + 0xe0),0,
                             *(int *)(lVar1 + 0x100) * *(int *)(lVar1 + 0x104),RLM_WriteOnly);
        memcpy(pvVar18,*(void **)(lVar1 + 0xf8),
               (ulonglong)(uint)(*(int *)(lVar1 + 0x100) * *(int *)(lVar1 + 0x104)));
        FRHICommandListBase::UnlockBuffer(param_1,*(FRHIBuffer **)(lVar1 + 0xe0));
        pvVar18 = FRHICommandListBase::LockBuffer
                            (param_1,*(FRHIBuffer **)(lVar1 + 0x130),0,
                             *(int *)(lVar1 + 0x154) * *(int *)(lVar1 + 0x150),RLM_WriteOnly);
        memcpy(pvVar18,*(void **)(lVar1 + 0x148),
               (ulonglong)(uint)(*(int *)(lVar1 + 0x154) * *(int *)(lVar1 + 0x150)));
        FRHICommandListBase::UnlockBuffer(param_1,*(FRHIBuffer **)(lVar1 + 0x130));
        uVar21 = FStaticMeshVertexBuffer::GetTangentSize((FStaticMeshVertexBuffer *)(lVar1 + 8));
        pvVar18 = FRHICommandListBase::LockBuffer
                            (param_1,*(FRHIBuffer **)(lVar1 + 0x48),0,uVar21,RLM_WriteOnly);
        iVar15 = FStaticMeshVertexBuffer::GetTangentSize((FStaticMeshVertexBuffer *)(lVar1 + 8));
        memcpy(pvVar18,*(void **)(lVar1 + 0x98),(longlong)iVar15);
        FRHICommandListBase::UnlockBuffer(param_1,*(FRHIBuffer **)(lVar1 + 0x48));
        uVar21 = FStaticMeshVertexBuffer::GetTexCoordSize((FStaticMeshVertexBuffer *)(lVar1 + 8));
        pvVar18 = FRHICommandListBase::LockBuffer
                            (param_1,*(FRHIBuffer **)(lVar1 + 0x70),0,uVar21,RLM_WriteOnly);
        iVar15 = FStaticMeshVertexBuffer::GetTexCoordSize((FStaticMeshVertexBuffer *)(lVar1 + 8));
        memcpy(pvVar18,*(void **)(lVar1 + 0xa0),(longlong)iVar15);
        FRHICommandListBase::UnlockBuffer(param_1,*(FRHIBuffer **)(lVar1 + 0x70));
        bVar13 = IsRayTracingEnabled();
        if (bVar13) {
          (**(code **)(*(longlong *)(lVar1 + 0x3d8) + 0x20))(lVar1 + 0x3d8);
          local_114 = 0x10000;
          local_128 = (FRHIBuffer *)0x0;
          local_120 = 0;
          local_118 = 0;
          local_110 = Rendering;
          local_108.Data = (FScriptContainerElement *)0x0;
          local_100 = 0;
          local_f8 = (FResourceArrayUploadInterface *)0x0;
          local_d8 = (FRHIRayTracingGeometry *)0x0;
          local_f0[0] = 0xffffffff;
          local_f0[1] = 0xffffffff;
          local_f0[2] = 0xffffffff;
          local_f0[3] = 0xffffffff;
          local_f0[4] = 0xffffffff;
          local_f0[5] = 0xffffffff;
          FDebugName::FDebugName(&local_d0);
          this_00 = local_128;
          pFVar2 = *(FRHIBuffer **)(lVar1 + 0x180);
          local_c4.ComparisonIndex.Value = 0;
          local_c4.Number = 0;
          if (local_128 != pFVar2) {
            local_128 = pFVar2;
            if (pFVar2 != (FRHIBuffer *)0x0) {
              FRHIResource::AddRef((FRHIResource *)pFVar2);
            }
            if (this_00 != (FRHIBuffer *)0x0) {
              FRHIResource::Release((FRHIResource *)this_00);
            }
          }
          pFVar2 = *(FRHIBuffer **)(lVar1 + 0xe0);
          iVar15 = *(int *)(lVar1 + 400);
          local_120 = local_120 & 0xffffffff;
          local_114 = CONCAT22(local_114._2_2_,1);
          local_118 = iVar15 / 3 + (iVar15 >> 0x1f) +
                      (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU) >>
                           0x1f);
          local_2c0.VertexBuffer.Reference = (FRHIBuffer *)0x0;
          local_2c0.VertexBufferElementType = VET_Float3;
          local_2c0.VertexBufferOffset = 0;
          local_2c0.VertexBufferStride = 0xc;
          local_2c0.FirstPrimitive = 0;
          local_2c0.bForceOpaque = false;
          local_2c0.bAllowDuplicateAnyHitShaderInvocation = true;
          local_2c0.bEnabled = true;
          if (pFVar2 != (FRHIBuffer *)0x0) {
            local_2c0.VertexBuffer.Reference = pFVar2;
            FRHIResource::AddRef((FRHIResource *)pFVar2);
          }
          local_2c0.MaxVertices = *(uint *)(lVar1 + 0x104);
          local_2c0.NumPrimitives = local_118;
          if (((local_108.Data <= &local_2c0) &&
              (&local_2c0 <
               (FRayTracingGeometrySegment *)(local_108.Data + (longlong)local_100._4_4_ * 0x28)))
             && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar15 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&local_108,(int *)((longlong)&local_100 + 4));
          }
          FVar12.Data = local_108.Data;
          lVar19 = (longlong)iVar15;
          local_100 = CONCAT44(local_100._4_4_,iVar15 + 1);
          *(undefined8 *)&local_108.Data[lVar19 * 0x28].field_0x0 = 0;
          *(FRHIBuffer **)&local_108.Data[lVar19 * 0x28].field_0x0 =
               local_2c0.VertexBuffer.Reference;
          if (local_2c0.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_2c0.VertexBuffer.Reference);
          }
          *(EVertexElementType *)(FVar12.Data + lVar19 * 0x28 + 8) =
               local_2c0.VertexBufferElementType;
          *(uint *)(FVar12.Data + lVar19 * 0x28 + 0xc) = local_2c0.VertexBufferOffset;
          *(uint *)(FVar12.Data + lVar19 * 0x28 + 0x10) = local_2c0.VertexBufferStride;
          *(uint *)(FVar12.Data + lVar19 * 0x28 + 0x14) = local_2c0.MaxVertices;
          *(uint *)(FVar12.Data + lVar19 * 0x28 + 0x18) = local_2c0.FirstPrimitive;
          *(uint *)(FVar12.Data + lVar19 * 0x28 + 0x1c) = local_2c0.NumPrimitives;
          FVar12.Data[lVar19 * 0x28 + 0x20] = (FScriptContainerElement)local_2c0.bForceOpaque;
          FVar12.Data[lVar19 * 0x28 + 0x21] =
               (FScriptContainerElement)local_2c0.bAllowDuplicateAnyHitShaderInvocation;
          FVar12.Data[lVar19 * 0x28 + 0x22] = (FScriptContainerElement)local_2c0.bEnabled;
          local_208.IndexBuffer.Reference = local_128;
          if (local_128 != (FRHIBuffer *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_128);
          }
          FVar12.Data = local_108.Data;
          iVar15 = (int)local_100;
          local_208.IndexBufferOffset = (uint)local_120;
          local_208.GeometryType = local_120._4_4_;
          local_208.TotalPrimitiveCount = local_118;
          local_208.bFastBuild = (bool)(undefined1)local_114;
          local_208.bAllowUpdate = (bool)local_114._1_1_;
          local_208.bAllowCompaction = (bool)local_114._2_1_;
          local_208.bTemplate = (bool)local_114._3_1_;
          local_208.Type = local_110;
          local_208.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_208.Segments.ArrayNum = (int)local_100;
          if ((int)local_100 == 0) {
            local_208.Segments.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,(int)local_100,0,&local_208.Segments.AllocatorInstance,(int)local_100,
                       &local_208.Segments.ArrayMax);
            ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                      (local_208.Segments.AllocatorInstance.Data,
                       (FRayTracingGeometrySegment *)FVar12.Data,iVar15);
          }
          local_208.OfflineData = local_f8;
          local_208.SourceGeometry = local_d8;
          local_208.DebugName.Number = local_d0.Number;
          local_208.OfflineDataHeader.Reserved[0] = local_f0[0];
          local_208.OfflineDataHeader.Reserved[1] = local_f0[1];
          local_208.OfflineDataHeader.Reserved[2] = local_f0[2];
          local_208.OfflineDataHeader.Reserved[3] = local_f0[3];
          local_208.OwnerName = local_c4;
          local_208.OfflineDataHeader.Reserved[4] = local_f0[4];
          local_208.OfflineDataHeader.Reserved[5] = local_f0[5];
          local_208.DebugName.Name = local_d0.Name;
          FRayTracingGeometry::SetInitializer((FRayTracingGeometry *)(lVar1 + 0x3d8),&local_208);
          (**(code **)(*(longlong *)(lVar1 + 0x3d8) + 0x18))(lVar1 + 0x3d8,local_280);
          if (local_2c0.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
            FRHIResource::Release((FRHIResource *)local_2c0.VertexBuffer.Reference);
          }
          DestructItems<FRayTracingGeometrySegment,int>
                    ((FRayTracingGeometrySegment *)local_108.Data,(int)local_100);
          if ((FRayTracingGeometrySegment *)local_108.Data != (FRayTracingGeometrySegment *)0x0) {
            FMemory::Free(local_108.Data);
          }
          if (local_128 != (FRHIBuffer *)0x0) {
            FRHIResource::Release((FRHIResource *)local_128);
          }
        }
      }
    }
    pFVar3 = (param_2->NewVertexBuffer).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(param_2,0x18);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

