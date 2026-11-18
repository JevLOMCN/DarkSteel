// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FStaticMeshVertexFactories @ 1487120a0

FStaticMeshVertexFactories * __thiscall
FStaticMeshVertexFactories::FStaticMeshVertexFactories
          (FStaticMeshVertexFactories *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FStaticMeshVertexFactories *pFVar3;
  
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,param_1,"FStaticMeshVertexFactories");
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactoryOverrideColorVertexBuffer,param_1,
             "FStaticMeshVertexFactories_Override");
  this->SplineVertexFactory = (FSplineMeshVertexFactory *)0x0;
  this->SplineVertexFactoryOverrideColorVertexBuffer = (FSplineMeshVertexFactory *)0x0;
  if (4 < (int)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFeatureLevel < ERHIFeatureLevel::Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                       ,0x28b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStaticMeshVertexFactories *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FStaticMeshVertexFactories @ 148714800

void __thiscall
FStaticMeshVertexFactories::~FStaticMeshVertexFactories(FStaticMeshVertexFactories *this)

{
  FSplineMeshVertexFactory *pFVar1;
  
  pFVar1 = this->SplineVertexFactory;
  if (pFVar1 != (FSplineMeshVertexFactory *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar1 = this->SplineVertexFactoryOverrideColorVertexBuffer;
  if (pFVar1 != (FSplineMeshVertexFactory *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactoryOverrideColorVertexBuffer);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  return;
}

// operator() @ 148719cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FStaticMeshVertexFactories::InitVertexFactory'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)((longlong)this + 8) + 0xb8),
             *(FVertexFactory **)this,(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (*(FStaticMeshVertexBuffer **)((longlong)this + 8),*(FVertexFactory **)this,
             (FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            (*(FStaticMeshVertexBuffer **)((longlong)this + 8),*(FVertexFactory **)this,
             (FStaticMeshDataType *)&local_e8,-1);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            (*(FStaticMeshVertexBuffer **)((longlong)this + 8),*(FVertexFactory **)this,
             (FStaticMeshDataType *)&local_e8,*(int *)((longlong)this + 0x10));
  if ((*(byte *)((longlong)this + 0x18) & 1) == 0) {
    FColorVertexBuffer::BindColorVertexBuffer
              ((FColorVertexBuffer *)(*(longlong *)((longlong)this + 8) + 0x108),
               *(FVertexFactory **)this,(FStaticMeshDataType *)&local_e8);
  }
  else {
    FColorVertexBuffer::BindDefaultColorVertexBuffer
              (*(FVertexFactory **)this,(FStaticMeshDataType *)&local_e8,
               FColorSizeForComponentOverride);
  }
  local_e8._padding_._6_1_ = *(undefined1 *)((longlong)this + 0x14);
  FLocalVertexFactory::SetData
            (*(FLocalVertexFactory **)this,(FRHICommandListBase *)param_1,&local_e8);
  (**(code **)(**(longlong **)this + 0x18))(*(longlong **)this,param_1);
  return;
}

// InitResources @ 148748510

void __thiscall
FStaticMeshVertexFactories::InitResources
          (FStaticMeshVertexFactories *this,FStaticMeshVertexBuffers *param_1,uint param_2,
          UStaticMesh *param_3)

{
  InitVertexFactory(this,param_1,&this->VertexFactory,param_2,param_3,false);
  BeginInitResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  InitVertexFactory(this,param_1,&this->VertexFactoryOverrideColorVertexBuffer,param_2,param_3,true)
  ;
  BeginInitResource((FRenderResource *)&this->VertexFactoryOverrideColorVertexBuffer,
                    (FRenderCommandPipe *)0x0);
  return;
}

// InitVertexFactory @ 148748d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticMeshVertexFactories::InitVertexFactory
          (FStaticMeshVertexFactories *this,FStaticMeshVertexBuffers *param_1,
          FLocalVertexFactory *param_2,uint param_3,UStaticMesh *param_4,bool param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong *local_60;
  byte local_58;
  FLocalVertexFactory *local_48 [2];
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_4 == (UStaticMesh *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParentMesh != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x43f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = (param_1->StaticMeshVertexBuffer).NumTexCoords;
  lStack_70 = CONCAT71(lStack_70._1_7_,(byte)lStack_70 & 0xfe | param_5);
  uVar4 = uVar1 - 1;
  if ((uint)param_4->LightMapCoordinateIndex < uVar1) {
    uVar4 = param_4->LightMapCoordinateIndex;
  }
  local_48[0] = (FLocalVertexFactory *)0x0;
  local_78 = CONCAT44(param_3,uVar4);
  local_88._0_8_ = param_2;
  local_88._8_8_ = param_1;
  local_20 = FMemory::Malloc(0x28,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FStaticMeshVertexFactories::InitVertexFactory'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_20[1] = local_88._0_8_;
  local_20[2] = local_88._8_8_;
  local_20[3] = local_78;
  local_20[4] = lStack_70;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = (FLocalVertexFactory *)
                  UE::Core::Private::Function::
                  TFunctionRefCaller<`FStaticMeshVertexFactories::InitVertexFactory'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FStaticMeshVertexFactories::InitVertexFactory_::__l2::TSTR_InitStaticMeshVertexFactory1118>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_48);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88._0_8_ = local_48[0];
    local_60 = local_20;
    local_20 = (longlong *)0x0;
    local_78 = local_38;
    lStack_70 = lStack_30;
    local_68 = local_28;
    local_48[0] = (FLocalVertexFactory *)0x0;
    local_58 = 2;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FStaticMeshVertexFactories::InitVertexFactory'::__l2::TSTR_InitStaticMeshVertexFactory1118>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar7 = (ulonglong)local_58;
    if (2 < uVar7) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((FLocalVertexFactory *)local_88._0_8_ != (FLocalVertexFactory *)0x0) {
        plVar6 = &local_78;
        if (local_60 != (longlong *)0x0) {
          plVar6 = local_60;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_88);
    }
  }
  if (local_48[0] != (FLocalVertexFactory *)0x0) {
    plVar6 = &local_38;
    if (local_20 != (longlong *)0x0) {
      plVar6 = local_20;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// ReleaseResources @ 148752be0

void __thiscall FStaticMeshVertexFactories::ReleaseResources(FStaticMeshVertexFactories *this)

{
  BeginReleaseResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  BeginReleaseResource
            ((FRenderResource *)&this->VertexFactoryOverrideColorVertexBuffer,
             (FRenderCommandPipe *)0x0);
  if (this->SplineVertexFactory != (FSplineMeshVertexFactory *)0x0) {
    BeginReleaseResource((FRenderResource *)this->SplineVertexFactory,(FRenderCommandPipe *)0x0);
  }
  if (this->SplineVertexFactoryOverrideColorVertexBuffer != (FSplineMeshVertexFactory *)0x0) {
    BeginReleaseResource
              ((FRenderResource *)this->SplineVertexFactoryOverrideColorVertexBuffer,
               (FRenderCommandPipe *)0x0);
    return;
  }
  return;
}

