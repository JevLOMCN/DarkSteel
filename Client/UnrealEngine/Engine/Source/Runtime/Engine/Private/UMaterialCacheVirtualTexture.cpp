// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// StaticClass @ 147e8e8e0

UClass * __cdecl UMaterialCacheVirtualTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialCacheVirtualTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialCacheVirtualTexture",
               &Z_Registration_Info_UClass_UMaterialCacheVirtualTexture.InnerSingleton,
               StaticRegisterNativesUMaterialCacheVirtualTexture,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialCacheVirtualTexture>,
               InternalVTableHelperCtorCaller<UMaterialCacheVirtualTexture>,local_res8,
               UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialCacheVirtualTexture.InnerSingleton;
}

// UMaterialCacheVirtualTexture @ 147ea7500

UMaterialCacheVirtualTexture * __thiscall
UMaterialCacheVirtualTexture::UMaterialCacheVirtualTexture
          (UMaterialCacheVirtualTexture *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->OwningComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MaterialStackProvider).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Tag).field0_0x0.DebugPtr = (UMaterialCacheVirtualTextureTag *)0x0;
  this->RTVirtualTextureStalePtr = (IAllocatedVirtualTexture *)0x0;
  this->RTDestructionBaton = (FMaterialCacheVirtualBaton *)0x0;
  (this->TileCount).field0_0x0._s_0.X = 8;
  (this->TileCount).field0_0x0._s_0.Y = 8;
  return this;
}

// UMaterialCacheVirtualTexture @ 147ea7580

UMaterialCacheVirtualTexture * __thiscall
UMaterialCacheVirtualTexture::UMaterialCacheVirtualTexture
          (UMaterialCacheVirtualTexture *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xfb;
  (this->OwningComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MaterialStackProvider).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Tag).field0_0x0.DebugPtr = (UMaterialCacheVirtualTextureTag *)0x0;
  this->RTVirtualTextureStalePtr = (IAllocatedVirtualTexture *)0x0;
  this->RTDestructionBaton = (FMaterialCacheVirtualBaton *)0x0;
  (this->TileCount).field0_0x0._s_0.X = 8;
  (this->TileCount).field0_0x0._s_0.Y = 8;
  return this;
}

// ~UMaterialCacheVirtualTexture @ 147ea97f0

void __thiscall
UMaterialCacheVirtualTexture::~UMaterialCacheVirtualTexture(UMaterialCacheVirtualTexture *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// operator() @ 147eaac90

void __thiscall
`UMaterialCacheVirtualTexture::CreateRenderProxy'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  atomic<unsigned_char> *paVar10;
  int iVar11;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar1 = *(uint *)(*(longlong *)this + 0x28);
  if (3 < uVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UVCoordinateIndex <= 3 && UVCoordinateIndex < 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\MaterialCache\\MaterialCacheVirtualTextureDescriptor.h"
                       ,0x24,
                       L"Out of bounds coordinate index, consider expanding bit-width of UVCoordinateIndex"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (plVar2 != (longlong *)0x0) {
    lVar7 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if (lVar7 == 0) {
      pcVar8 = "VirtualResource";
      iVar11 = 0x2d;
      paVar10 = &bGEnsureHasExecuted<7682444951958847533>;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x90);
      if (lVar7 != 0) {
        uVar3 = 0x1f;
        bVar5 = *(uint *)(lVar7 + 0x10) != 0;
        if (bVar5) {
          for (; *(uint *)(lVar7 + 0x10) >> uVar3 == 0; uVar3 = uVar3 - 1) {
          }
        }
        uVar6 = 0;
        if (bVar5) {
          uVar6 = uVar3;
        }
        uVar9 = CONCAT44(((*(uint *)(lVar7 + 0x74) & 0x3f | uVar1 << 6) << 0xc |
                         *(int *)(lVar7 + 0x5c) * *(int *)(lVar7 + 0x54) & 0xfffU) << 0xc |
                         *(int *)(lVar7 + 0x58) * *(int *)(lVar7 + 0x50) & 0xfffU,
                         ((uVar6 & 0xf | *(int *)(lVar7 + 0x70) << 4) << 0xc |
                         *(uint *)(lVar7 + 0x80) & 0xfff) << 0xc) |
                (ulonglong)(*(uint *)(lVar7 + 0x7c) & 0xfff);
        goto LAB_147eaadba;
      }
      pcVar8 = "Allocation";
      iVar11 = 0x33;
      paVar10 = &bGEnsureHasExecuted<7682444951958847539>;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar10,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\MaterialCache\\MaterialCacheVirtualTextureDescriptor.h"
                       ,iVar11,pcVar8);
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar9 = 0;
LAB_147eaadba:
  *(ulonglong *)(*(longlong *)this + 0x20) = uVar9;
  return;
}

// operator() @ 147eaade0

void __thiscall
`UMaterialCacheVirtualTexture::CreateSceneProxy'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  IRendererModule *pIVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x90);
  if (lVar1 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8773315492082352312>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MaterialCache\\MaterialCacheVirtualTexture.cpp"
                       ,0xb8,"AllocatedVT");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pIVar4 = GetRendererModule();
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x138))(pIVar4);
    (**(code **)(*plVar5 + 0x18))
              (plVar5,*(undefined8 *)((longlong)this + 0xf0),*(undefined4 *)((longlong)this + 0xf8),
               (longlong)this + 0x10,lVar1);
  }
  return;
}

// operator() @ 147eab440

void __thiscall
`UMaterialCacheVirtualTexture::Unregister'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  IRendererModule *pIVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x90);
  if (lVar1 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8773315492082352419>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MaterialCache\\MaterialCacheVirtualTexture.cpp"
                       ,0x123,"AllocatedVT");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pIVar4 = GetRendererModule();
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x138))(pIVar4);
    (**(code **)(*plVar5 + 0x20))
              (plVar5,*(undefined8 *)((longlong)this + 0x20),*(undefined4 *)((longlong)this + 0x28),
               (longlong)this + 0x10,lVar1);
    if (*(longlong *)(*(longlong *)this + 0x178) != 0) {
      pIVar4 = GetRendererModule();
      (**(code **)((longlong)*pIVar4 + 0x178))(pIVar4,*(undefined8 *)(*(longlong *)this + 0x178));
      ::operator_delete(*(void **)(*(longlong *)this + 0x178),0x30);
    }
  }
  return;
}

// operator() @ 147eab520

void __thiscall
`UMaterialCacheVirtualTexture::UpdateResourceWithParams'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  IRendererModule *pIVar5;
  longlong *plVar6;
  IAllocatedVirtualTexture *pIVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)0x0;
  if (*(longlong *)(*(longlong *)this + 0x170) != 0) {
    pIVar5 = GetRendererModule();
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x138))(pIVar5);
    (**(code **)(*plVar6 + 0x20))
              (plVar6,*(undefined8 *)((longlong)this + 0x20),*(undefined4 *)((longlong)this + 0x28),
               (longlong)this + 8,*(undefined8 *)(*(longlong *)this + 0x170));
    *(undefined8 *)(*(longlong *)this + 0x170) = 0;
  }
  if (*(longlong *)(*(longlong *)this + 0x178) != 0) {
    pIVar5 = GetRendererModule();
    (**(code **)((longlong)*pIVar5 + 0x178))(pIVar5,*(undefined8 *)(*(longlong *)this + 0x178));
    ::operator_delete(*(void **)(*(longlong *)this + 0x178),0x30);
  }
  pIVar7 = FVirtualTexture2DResource::AcquireAllocatedVT
                     (*(FVirtualTexture2DResource **)((longlong)this + 0x18));
  if (pIVar7 == (IAllocatedVirtualTexture *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8773315492082352503>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MaterialCache\\MaterialCacheVirtualTexture.cpp"
                       ,0x177,"AllocatedVT");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    *(IAllocatedVirtualTexture **)(*(longlong *)this + 0x170) = pIVar7;
    puVar8 = ::operator_new(0x30);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[5] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar9 = puVar8;
    }
    *(undefined8 **)(*(longlong *)this + 0x178) = puVar9;
    **(longlong **)(*(longlong *)this + 0x178) = *(longlong *)this;
    *(undefined8 *)(*(longlong *)(*(longlong *)this + 0x178) + 8) =
         *(undefined8 *)((longlong)this + 0x20);
    *(IAllocatedVirtualTexture **)(*(longlong *)(*(longlong *)this + 0x178) + 0x10) = pIVar7;
    *(undefined4 *)(*(longlong *)(*(longlong *)this + 0x178) + 0x18) =
         *(undefined4 *)((longlong)this + 0x28);
    uVar2 = *(undefined8 *)((longlong)this + 0x10);
    lVar1 = *(longlong *)(*(longlong *)this + 0x178);
    *(undefined8 *)(lVar1 + 0x1c) = *(undefined8 *)((longlong)this + 8);
    *(undefined8 *)(lVar1 + 0x24) = uVar2;
    pIVar5 = GetRendererModule();
    pcVar3 = *(code **)((longlong)*pIVar5 + 0x170);
    uVar2 = *(undefined8 *)(*(longlong *)this + 0x178);
    if (((pIVar7->Description).NumTextureLayers == '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InLayerIndex < Description.NumTextureLayers",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VirtualTexturing.h"
                           ,0x1a1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*pcVar3)(pIVar5,(pIVar7->Description).ProducerHandle,
              ``UMaterialCacheVirtualTexture::UpdateResourceWithParams'::__l2::<lambda_1>::
              operator()'::__l2::<lambda_1>::<lambda_invoker_cdecl>,uVar2);
  }
  return;
}

// CreateRenderProxy @ 147eb6970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMaterialCacheVirtualTextureRenderProxy * __thiscall
UMaterialCacheVirtualTexture::CreateRenderProxy(UMaterialCacheVirtualTexture *this,uint param_1)

{
  TUniquePtr<FMaterialCacheStackProviderRenderProxy,TDefaultDelete<FMaterialCacheStackProviderRenderProxy>_>
  *pTVar1;
  UMaterialCacheVirtualTextureTag *pUVar2;
  FMaterialCacheStackProviderRenderProxy *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  FTextureResource *pFVar9;
  longlong lVar10;
  FMaterialCacheVirtualTextureRenderProxy *pFVar11;
  UObject *pUVar12;
  FMaterialCacheStackProviderRenderProxy *pFVar13;
  FMaterialCacheStackProviderRenderProxy FVar14;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar15;
  FMaterialCacheVirtualTextureRenderProxy *pFVar16;
  undefined ***pppuVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  code *local_98 [2];
  undefined **local_88;
  FMaterialCacheVirtualTextureRenderProxy *pFStack_80;
  longlong local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FMaterialCacheVirtualTextureRenderProxy *pFStack_50;
  longlong local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar9 = UTexture::GetResource((UTexture *)this);
  if ((pFVar9 == (FTextureResource *)0x0) ||
     (lVar10 = (**(code **)(pFVar9->_padding_ + 0x98))(pFVar9), lVar10 == 0)) {
    return (FMaterialCacheVirtualTextureRenderProxy *)0x0;
  }
  pFVar11 = ::operator_new(0x30);
  pFVar16 = (FMaterialCacheVirtualTextureRenderProxy *)0x0;
  if (pFVar11 != (FMaterialCacheVirtualTextureRenderProxy *)0x0) {
    *(undefined8 *)&(pFVar11->TagGuid).D = 0;
    *(undefined8 *)&pFVar11->UVCoordinateIndex = 0;
    pFVar11->PrimitiveCID = 0;
    (pFVar11->TagGuid).A = 0;
    (pFVar11->TagGuid).B = 0;
    (pFVar11->TagGuid).C = 0;
    (pFVar11->StackProviderRenderProxy).Ptr = (FMaterialCacheStackProviderRenderProxy *)0x0;
    (pFVar11->TextureDescriptor).field0_0x0 = (TIntVector2<unsigned_int>_u_0)0x0;
    pFVar16 = pFVar11;
  }
  pUVar12 = FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr);
  (pFVar16->PrimitiveCID).PrimIDValue = *(uint *)&pUVar12[0x14].field_0x24;
  pFVar16->UVCoordinateIndex = param_1;
  pUVar2 = (this->Tag).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialCacheVirtualTextureTag *)0x0) {
    uVar5 = (pUVar2->Guid).B;
    uVar6 = (pUVar2->Guid).C;
    uVar7 = (pUVar2->Guid).D;
    (pFVar16->TagGuid).A = (pUVar2->Guid).A;
    (pFVar16->TagGuid).B = uVar5;
    (pFVar16->TagGuid).C = uVar6;
    (pFVar16->TagGuid).D = uVar7;
  }
  pUVar12 = FWeakObjectPtr::Get(&(this->MaterialStackProvider).WeakPtr);
  if (pUVar12 != (UObject *)0x0) {
    pFVar13 = (FMaterialCacheStackProviderRenderProxy *)
              (**(code **)(*(longlong *)pUVar12 + 0x2b0))(pUVar12);
    pTVar1 = &pFVar16->StackProviderRenderProxy;
    if (pTVar1 == (TUniquePtr<FMaterialCacheStackProviderRenderProxy,TDefaultDelete<FMaterialCacheStackProviderRenderProxy>_>
                   *)local_a8) {
      if (pFVar13 == (FMaterialCacheStackProviderRenderProxy *)0x0) goto LAB_147eb6a7f;
      FVar14 = *pFVar13;
    }
    else {
      pFVar3 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar13;
      if (pFVar3 == (FMaterialCacheStackProviderRenderProxy *)0x0) goto LAB_147eb6a7f;
      FVar14 = *pFVar3;
      pFVar13 = pFVar3;
    }
    (**(code **)FVar14)(pFVar13,1);
  }
LAB_147eb6a7f:
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMaterialCacheVirtualTexture::CreateRenderProxy'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMaterialCacheVirtualTexture::CreateRenderProxy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_80 = pFVar16;
  local_78 = lVar10;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UMaterialCacheVirtualTexture::CreateRenderProxy_::__l2::TSTR_GetBackbufferFormatCmd218>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    pFStack_50 = pFStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar15 = (FRenderCommandTag *)
              TRenderCommandTag<`UMaterialCacheVirtualTexture::CreateRenderProxy'::__l2::TSTR_GetBackbufferFormatCmd218>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar15);
    uVar18 = (ulonglong)local_38;
    if ((2 < uVar18) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pFVar16 = (FMaterialCacheVirtualTextureRenderProxy *)(*pcVar4)();
      return pFVar16;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar18] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar17 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar17 = local_40;
        }
        (*(code *)(*pppuVar17)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar18])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar17 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar17 = local_70;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  return pFVar16;
}

// CreateResource @ 147eb6bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FTextureResource * __thiscall
UMaterialCacheVirtualTexture::CreateResource(UMaterialCacheVirtualTexture *this)

{
  int *piVar1;
  undefined4 uVar2;
  UMaterialCacheVirtualTextureTag *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FTextureResource *pFVar9;
  UObject *pUVar10;
  UActorComponent *pUVar11;
  FSceneInterface *pFVar12;
  FVirtualTexture2DResource *this_00;
  ulonglong uVar13;
  FMaterialCacheTagLayout *pFVar14;
  longlong *plVar15;
  ForElementType<FMaterialCacheLayer> FVar16;
  FVirtualTexture2DResource *pFVar17;
  ulonglong uVar18;
  FVirtualTexture2DResource *pFVar19;
  undefined1 auStackY_178 [32];
  TIntPoint<int>_u_0_s_0 local_138;
  FVirtualTextureBuildSettings local_130;
  int local_128;
  ulonglong local_120;
  FName local_118;
  FMaterialCacheTagLayout local_110;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar17 = (FVirtualTexture2DResource *)0x0;
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MaterialCache\\MaterialCacheVirtualTexture.cpp"
                         ,0x1ba,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FTextureResource *)(*pcVar5)();
    return pFVar9;
  }
  pUVar10 = FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr);
  if (pUVar10 == (UObject *)0x0) {
    if (1 < (byte)LogEngine._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
      return (FTextureResource *)0x0;
    }
  }
  else {
    pUVar11 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr);
    pFVar12 = UActorComponent::GetScene(pUVar11);
    if (pFVar12 != (FSceneInterface *)0x0) {
      local_130.TileSize = 0;
      local_130.TileBorderSize = 0;
      FVirtualTextureBuildSettings::Init(&local_130);
      (**(code **)(this->_padding_ + 0x350))(this,&local_130);
      this_00 = ::operator_new(0x1a8);
      pFVar19 = pFVar17;
      if (this_00 != (FVirtualTexture2DResource *)0x0) {
        pUVar3 = (this->Tag).field0_0x0.DebugPtr;
        local_138 = (this->TileCount).field0_0x0._s_0;
        if (pUVar3 != (UMaterialCacheVirtualTextureTag *)0x0) {
          iVar7 = local_138.X;
          local_138.Y = local_138.Y * (pUVar3->TileCountMultiplier).field0_0x0._s_0.Y;
          local_138.X = iVar7 * (pUVar3->TileCountMultiplier).field0_0x0._s_0.X;
        }
        uVar18 = 1;
        if (1 < local_138.X) {
          uVar18 = (ulonglong)local_138 & 0xffffffff;
        }
        uVar13 = 1;
        if (1 < local_138.Y) {
          uVar13 = (ulonglong)local_138 >> 0x20;
        }
        local_120 = uVar13 << 0x20 | uVar18;
        pFVar14 = GetRuntimeLayout(this,&local_110);
        pUVar10 = FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr);
        uVar2 = *(undefined4 *)&pUVar10[0x14].field_0x24;
        pUVar11 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr);
        pFVar12 = UActorComponent::GetScene(pUVar11);
        iVar8 = local_130.TileBorderSize;
        local_128 = local_130.TileSize;
        FVirtualTexture2DResource::FVirtualTexture2DResource(this_00);
        this_00[1]._padding_ = (longlong)pFVar12;
        this_00->_padding_ = (longlong)&___7FMaterialCacheVirtualTextureResource__6B_;
        *(undefined4 *)&this_00[1]._padding_ = uVar2;
        lVar4 = *(longlong *)&(pFVar14->Guid).C;
        this_00[1]._padding_ = *(longlong *)&pFVar14->Guid;
        this_00[1]._padding_ = lVar4;
        this_00[2]._padding_ = 0;
        FVar16 = (pFVar14->Layers).AllocatorInstance.SecondaryData;
        iVar7 = (pFVar14->Layers).ArrayNum;
        if (FVar16 == (ForElementType<FMaterialCacheLayer>)0x0) {
          FVar16 = (ForElementType<FMaterialCacheLayer>)&pFVar14->Layers;
        }
        *(int *)&this_00[2]._padding_ = iVar7;
        piVar1 = (int *)((longlong)&this_00[2]._padding_ + 4);
        if (iVar7 == 0) {
          *piVar1 = 8;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
                    (0x18,8,iVar7,0,(ForElementType<FMaterialCacheLayer> *)&this_00[1]._padding_,
                     iVar7,piVar1);
          plVar15 = (longlong *)this_00[2]._padding_;
          if ((longlong *)this_00[2]._padding_ == (longlong *)0x0) {
            plVar15 = &this_00[1]._padding_;
          }
          ConstructItems<FMaterialCacheLayer,FMaterialCacheLayer,int>
                    (plVar15,(FMaterialCacheLayer *)FVar16,iVar7);
        }
        this_00[2]._padding_ = local_120;
        *(int *)&this_00[2]._padding_ = local_128;
        *(int *)((longlong)&this_00[2]._padding_ + 4) = iVar8;
        this_00[2].TextureName.ComparisonIndex.Value = 0;
        this_00[2].TextureName.Number = 1;
        ::FName::FName(&local_118,L"MaterialCacheVirtualTexture");
        pFVar17 = (FVirtualTexture2DResource *)&DAT_00000001;
        iVar7 = (int)uVar13;
        if ((int)uVar13 < (int)uVar18) {
          iVar7 = (int)uVar18;
        }
        this_00->TextureName = local_118;
        this_00->bSinglePhysicalSpace = true;
        iVar8 = 1;
        if (iVar7 != 0) {
          iVar8 = iVar7;
        }
        uVar18 = (ulonglong)(iVar8 - 1) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        this_00[2].TextureName.ComparisonIndex.Value = (uint)lVar4;
        pFVar19 = this_00;
      }
      if (pFVar17 == (FVirtualTexture2DResource *)0x0) {
        return (FTextureResource *)pFVar19;
      }
      FVar16 = (ForElementType<FMaterialCacheLayer>)&local_110.Layers;
      if (local_110.Layers.AllocatorInstance.SecondaryData !=
          (ForElementType<FMaterialCacheLayer>)0x0) {
        FVar16 = local_110.Layers.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMaterialCacheLayer,int>
                ((FMaterialCacheLayer *)FVar16,local_110.Layers.ArrayNum);
      if (local_110.Layers.AllocatorInstance.SecondaryData ==
          (ForElementType<FMaterialCacheLayer>)0x0) {
        return (FTextureResource *)pFVar19;
      }
      FMemory::Free((void *)local_110.Layers.AllocatorInstance.SecondaryData);
      return (FTextureResource *)pFVar19;
    }
  }
  return (FTextureResource *)0x0;
}

// CreateSceneProxy @ 147eb6f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMaterialCacheVirtualTexture::CreateSceneProxy(UMaterialCacheVirtualTexture *this)

{
  undefined4 uVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  code *pcVar4;
  UActorComponent *this_00;
  UObject *pUVar5;
  code **ppcVar6;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar7;
  ForElementType<FMaterialCacheLayer> FVar8;
  ulonglong uVar9;
  undefined1 auStack_298 [32];
  code *local_278 [2];
  code *local_268 [3];
  code **local_250;
  undefined1 local_248 [40];
  code **local_220;
  byte local_218;
  UMaterialCacheVirtualTexture *local_208;
  code *local_200;
  FMaterialCacheTagLayout local_1f8;
  FSceneInterface *local_118;
  undefined4 local_110;
  FMaterialCacheTagLayout local_108;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_298;
  pFVar3 = UTexture::GetResource((UTexture *)this);
  if ((((pFVar3 != (FTextureResource *)0x0) &&
       (pcVar4 = (code *)(**(code **)(pFVar3->_padding_ + 0x98))(pFVar3), pcVar4 != (code *)0x0)) &&
      (this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr),
      this_00 != (UActorComponent *)0x0)) &&
     (local_118 = UActorComponent::GetScene(this_00), local_118 != (FSceneInterface *)0x0)) {
    pUVar5 = FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr);
    uVar1 = *(undefined4 *)&pUVar5[0x14].field_0x24;
    GetRuntimeLayout(this,&local_108);
    local_208 = this;
    local_200 = pcVar4;
    FMaterialCacheTagLayout::FMaterialCacheTagLayout(&local_1f8,&local_108);
    local_278[0] = (code *)0x0;
    local_110 = uVar1;
    ppcVar6 = FMemory::Malloc(0x108,8);
    *ppcVar6 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`UMaterialCacheVirtualTexture::CreateSceneProxy'::`2'::<lambda_1>,1,1>
                        ::_vftable_;
    ppcVar6[1] = (code *)local_208;
    ppcVar6[2] = local_200;
    local_250 = ppcVar6;
    FMaterialCacheTagLayout::FMaterialCacheTagLayout
              ((FMaterialCacheTagLayout *)(ppcVar6 + 3),&local_1f8);
    ppcVar6[0x1f] = (code *)local_118;
    *(undefined4 *)(ppcVar6 + 0x20) = local_110;
    if (ppcVar6 + 1 != (code **)0x0) {
      local_278[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UMaterialCacheVirtualTexture::CreateSceneProxy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialCacheVirtualTexture::CreateSceneProxy_::__l2::TSTR_AcquireVT180>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_278);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_248._0_8_ = local_278[0];
      local_220 = local_250;
      local_250 = (code **)0x0;
      local_248._16_8_ = local_268[0];
      local_248._24_8_ = local_268[1];
      local_248._32_8_ = local_268[2];
      local_278[0] = (code *)0x0;
      local_218 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`UMaterialCacheVirtualTexture::CreateSceneProxy'::__l2::TSTR_AcquireVT180>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_248,pFVar7);
      uVar9 = (ulonglong)local_218;
      if ((2 < uVar9) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_248._0_8_ != (code *)0x0) {
          ppcVar6 = (code **)(local_248 + 0x10);
          if (local_220 != (code **)0x0) {
            ppcVar6 = local_220;
          }
          (**(code **)(*ppcVar6 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_248);
      }
    }
    if (local_278[0] != (code *)0x0) {
      ppcVar6 = local_278 + 2;
      if (local_250 != (code **)0x0) {
        ppcVar6 = local_250;
      }
      (**(code **)(*ppcVar6 + 0x10))();
    }
    FVar8 = (ForElementType<FMaterialCacheLayer>)&local_1f8.Layers;
    if (local_1f8.Layers.AllocatorInstance.SecondaryData != (ForElementType<FMaterialCacheLayer>)0x0
       ) {
      FVar8 = local_1f8.Layers.AllocatorInstance.SecondaryData;
    }
    DestructItems<FMaterialCacheLayer,int>((FMaterialCacheLayer *)FVar8,local_1f8.Layers.ArrayNum);
    if (local_1f8.Layers.AllocatorInstance.SecondaryData != (ForElementType<FMaterialCacheLayer>)0x0
       ) {
      FMemory::Free((void *)local_1f8.Layers.AllocatorInstance.SecondaryData);
    }
    FVar8 = (ForElementType<FMaterialCacheLayer>)&local_108.Layers;
    if (local_108.Layers.AllocatorInstance.SecondaryData != (ForElementType<FMaterialCacheLayer>)0x0
       ) {
      FVar8 = local_108.Layers.AllocatorInstance.SecondaryData;
    }
    DestructItems<FMaterialCacheLayer,int>((FMaterialCacheLayer *)FVar8,local_108.Layers.ArrayNum);
    if (local_108.Layers.AllocatorInstance.SecondaryData != (ForElementType<FMaterialCacheLayer>)0x0
       ) {
      FMemory::Free((void *)local_108.Layers.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Flush @ 147ebc800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMaterialCacheVirtualTexture::Flush(UMaterialCacheVirtualTexture *this)

{
  code *pcVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar3 = UTexture::GetResource((UTexture *)this);
  if (pFVar3 != (FTextureResource *)0x0) {
    lStack_70 = (**(code **)(pFVar3->_padding_ + 0x98))(pFVar3);
    if (lStack_70 != 0) {
      local_60 = (undefined ***)0x0;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMaterialCacheVirtualTexture::Flush'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMaterialCacheVirtualTexture::Flush'::`2'::<lambda_1>,1,0>
                  ::_vftable_;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UMaterialCacheVirtualTexture::Flush_::__l2::TSTR_MaterialCacheFlush255>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        lStack_40 = lStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`UMaterialCacheVirtualTexture::Flush'::__l2::TSTR_MaterialCacheFlush255>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar4);
        uVar6 = (ulonglong)local_28;
        if (2 < uVar6) {
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
                      ::__l2::Destructors)[uVar6] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar5 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar5 = local_30;
            }
            (*(code *)(*pppuVar5)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar5 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar5 = local_60;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
  }
  return;
}

// GetMaterialType @ 147ec1b70

EMaterialValueType __thiscall
UMaterialCacheVirtualTexture::GetMaterialType(UMaterialCacheVirtualTexture *this)

{
  return MCT_TextureVirtual;
}

// GetPrivateStaticClass @ 147ec4770

UClass * __cdecl UMaterialCacheVirtualTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialCacheVirtualTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialCacheVirtualTexture",
               &Z_Registration_Info_UClass_UMaterialCacheVirtualTexture.InnerSingleton,
               StaticRegisterNativesUMaterialCacheVirtualTexture,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialCacheVirtualTexture>,
               InternalVTableHelperCtorCaller<UMaterialCacheVirtualTexture>,local_res8,
               UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialCacheVirtualTexture.InnerSingleton;
}

// GetRuntimeLayout @ 147ec5340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMaterialCacheTagLayout * __thiscall
UMaterialCacheVirtualTexture::GetRuntimeLayout
          (UMaterialCacheVirtualTexture *this,FMaterialCacheTagLayout *__return_storage_ptr__)

{
  TArray<FMaterialCacheLayer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int iVar2;
  UMaterialCacheVirtualTextureTag *pUVar3;
  FMaterialCacheLayer *pFVar4;
  ForElementType<FMaterialCacheLayer> FVar5;
  undefined1 auStackY_158 [32];
  TArray<EMaterialCacheAttribute,TSizedDefaultAllocator<32>_> local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [24];
  uchar auStack_e0 [8];
  uchar local_d8 [8];
  uchar auStack_d0 [8];
  uchar local_c8 [8];
  uchar auStack_c0 [8];
  uchar local_b8 [8];
  uchar auStack_b0 [8];
  uchar local_a8 [8];
  uchar auStack_a0 [8];
  uchar local_98 [8];
  uchar auStack_90 [8];
  uchar local_88 [8];
  uchar auStack_80 [8];
  uchar local_78 [8];
  uchar auStack_70 [8];
  uchar local_68 [8];
  uchar auStack_60 [8];
  uchar local_58 [8];
  uchar auStack_50 [8];
  uchar local_48 [8];
  uchar auStack_40 [8];
  ForElementType<FMaterialCacheLayer> local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  (__return_storage_ptr__->Guid).A = 0;
  (__return_storage_ptr__->Guid).B = 0;
  (__return_storage_ptr__->Guid).C = 0;
  (__return_storage_ptr__->Guid).D = 0;
  (__return_storage_ptr__->Layers).AllocatorInstance.SecondaryData =
       (ForElementType<FMaterialCacheLayer>)0x0;
  (__return_storage_ptr__->Layers).ArrayNum = 0;
  (__return_storage_ptr__->Layers).ArrayMax = 8;
  pUVar3 = (this->Tag).field0_0x0.DebugPtr;
  if (pUVar3 != (UMaterialCacheVirtualTextureTag *)0x0) {
    local_108._0_4_ = (pUVar3->Guid).A;
    local_108._4_4_ = (pUVar3->Guid).B;
    uStack_100._0_4_ = (pUVar3->Guid).C;
    uStack_100._4_4_ = (pUVar3->Guid).D;
    local_38 = (ForElementType<FMaterialCacheLayer>)0x0;
    local_30 = 0;
    local_2c = 8;
    DestructItems<FMaterialCacheLayer,int>((FMaterialCacheLayer *)local_f8,0);
    iVar2 = (pUVar3->RuntimeLayers).ArrayNum;
    pFVar4 = (FMaterialCacheLayer *)(pUVar3->RuntimeLayers).AllocatorInstance.Data;
    local_30 = iVar2;
    if ((iVar2 == 0) && (local_2c == 0)) {
      local_2c = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
                (0x18,8,iVar2,local_2c,(ForElementType<FMaterialCacheLayer> *)local_f8,iVar2,
                 &local_2c);
      FVar5 = (ForElementType<FMaterialCacheLayer>)local_f8;
      if (local_38 != (ForElementType<FMaterialCacheLayer>)0x0) {
        FVar5 = local_38;
      }
      ConstructItems<FMaterialCacheLayer,FMaterialCacheLayer,int>((void *)FVar5,pFVar4,iVar2);
    }
    pTVar1 = &__return_storage_ptr__->Layers;
    (__return_storage_ptr__->Guid).A = (undefined4)local_108;
    (__return_storage_ptr__->Guid).B = local_108._4_4_;
    (__return_storage_ptr__->Guid).C = (undefined4)uStack_100;
    (__return_storage_ptr__->Guid).D = uStack_100._4_4_;
    if (pTVar1 != (TArray<FMaterialCacheLayer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                   *)local_f8) {
      FVar5 = (__return_storage_ptr__->Layers).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<FMaterialCacheLayer>)0x0) {
        FVar5 = (ForElementType<FMaterialCacheLayer>)pTVar1;
      }
      DestructItems<FMaterialCacheLayer,int>
                ((FMaterialCacheLayer *)FVar5,(__return_storage_ptr__->Layers).ArrayNum);
      if (local_38 == (ForElementType<FMaterialCacheLayer>)0x0) {
        *(undefined8 *)(pTVar1->AllocatorInstance).InlineData = local_f8._0_8_;
        *(undefined8 *)((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 8) =
             local_f8._8_8_;
        *(undefined8 *)((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x10) =
             local_f8._16_8_;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x18) =
             auStack_e0;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x20) =
             local_d8;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x28) =
             auStack_d0;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x30) =
             local_c8;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x38) =
             auStack_c0;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x40) =
             local_b8;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x48) =
             auStack_b0;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x50) =
             local_a8;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x58) =
             auStack_a0;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x60) =
             local_98;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x68) =
             auStack_90;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x70) =
             local_88;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x78) =
             auStack_80;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x80) =
             local_78;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x88) =
             auStack_70;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x90) =
             local_68;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0x98) =
             auStack_60;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0xa0) =
             local_58;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0xa8) =
             auStack_50;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0xb0) =
             local_48;
        *(uchar (*) [8])((__return_storage_ptr__->Layers).AllocatorInstance.InlineData + 0xb8) =
             auStack_40;
      }
      FVar5 = (__return_storage_ptr__->Layers).AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      (__return_storage_ptr__->Layers).AllocatorInstance.SecondaryData = local_38;
      (__return_storage_ptr__->Layers).ArrayNum = local_30;
      local_38 = (ForElementType<FMaterialCacheLayer>)0x0;
      (__return_storage_ptr__->Layers).ArrayMax = local_2c;
      local_2c = 8;
      local_30 = 0;
    }
    FVar5 = (ForElementType<FMaterialCacheLayer>)local_f8;
    if (local_38 != (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar5 = local_38;
    }
    DestructItems<FMaterialCacheLayer,int>((FMaterialCacheLayer *)FVar5,local_30);
    if (local_38 != (ForElementType<FMaterialCacheLayer>)0x0) {
      FMemory::Free((void *)local_38);
    }
  }
  if ((__return_storage_ptr__->Layers).ArrayNum == 0) {
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 6;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,6,0,&local_118.AllocatorInstance,6,&local_118.ArrayMax);
    *(undefined4 *)local_118.AllocatorInstance.Data = DefaultMaterialCacheAttributes._0_4_;
    *(undefined2 *)(local_118.AllocatorInstance.Data + 4) = DefaultMaterialCacheAttributes._4_2_;
    PackMaterialCacheAttributeLayers<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              (&local_118,&__return_storage_ptr__->Layers);
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetRuntimeTileCount @ 147ec56e0

TIntPoint<int> __thiscall
UMaterialCacheVirtualTexture::GetRuntimeTileCount(UMaterialCacheVirtualTexture *this)

{
  UMaterialCacheVirtualTextureTag *pUVar1;
  int iVar2;
  TIntPoint<int>_u_0 in_RDX;
  TIntPoint<int>_u_0_s_0 local_res8;
  
  pUVar1 = (this->Tag).field0_0x0.DebugPtr;
  local_res8 = (this->TileCount).field0_0x0._s_0;
  if (pUVar1 != (UMaterialCacheVirtualTextureTag *)0x0) {
    iVar2 = local_res8.X;
    local_res8.Y = local_res8.Y * (pUVar1->TileCountMultiplier).field0_0x0._s_0.Y;
    local_res8.X = iVar2 * (pUVar1->TileCountMultiplier).field0_0x0._s_0.X;
  }
  iVar2 = 1;
  if (1 < local_res8.X) {
    iVar2 = local_res8.X;
  }
  *(int *)in_RDX = iVar2;
  iVar2 = 1;
  if (1 < local_res8.Y) {
    iVar2 = local_res8.Y;
  }
  *(int *)((longlong)in_RDX + 4) = iVar2;
  return (TIntPoint<int>)in_RDX;
}

// GetScene @ 147ec5f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneInterface * __thiscall
UMaterialCacheVirtualTexture::GetScene(UMaterialCacheVirtualTexture *this)

{
  UActorComponent *this_00;
  FSceneInterface *pFVar1;
  
  this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr);
  if (this_00 == (UActorComponent *)0x0) {
    return (FSceneInterface *)0x0;
  }
  pFVar1 = UActorComponent::GetScene(this_00);
  return pFVar1;
}

// GetSurfaceArraySize @ 147ec6b90

uint __thiscall
UMaterialCacheVirtualTexture::GetSurfaceArraySize(UMaterialCacheVirtualTexture *this)

{
  return 1;
}

// GetSurfaceDepth @ 147ec6ba0

float __thiscall UMaterialCacheVirtualTexture::GetSurfaceDepth(UMaterialCacheVirtualTexture *this)

{
  return __real_3f800000;
}

// GetSurfaceHeight @ 147ec6bb0

float __thiscall UMaterialCacheVirtualTexture::GetSurfaceHeight(UMaterialCacheVirtualTexture *this)

{
  UMaterialCacheVirtualTextureTag *pUVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  pUVar1 = (this->Tag).field0_0x0.DebugPtr;
  iVar2 = (this->TileCount).field0_0x0._s_0.Y;
  if (pUVar1 != (UMaterialCacheVirtualTextureTag *)0x0) {
    iVar2 = iVar2 * (pUVar1->TileCountMultiplier).field0_0x0._s_0.Y;
  }
  uVar3 = GetMaterialCacheTileWidth();
  iVar4 = 1;
  if (1 < iVar2) {
    iVar4 = iVar2;
  }
  return (float)(uVar3 * iVar4);
}

// GetSurfaceWidth @ 147ec6c20

float __thiscall UMaterialCacheVirtualTexture::GetSurfaceWidth(UMaterialCacheVirtualTexture *this)

{
  UMaterialCacheVirtualTextureTag *pUVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  pUVar1 = (this->Tag).field0_0x0.DebugPtr;
  iVar4 = (this->TileCount).field0_0x0._s_0.X;
  if (pUVar1 != (UMaterialCacheVirtualTextureTag *)0x0) {
    iVar4 = iVar4 * (pUVar1->TileCountMultiplier).field0_0x0._s_0.X;
  }
  uVar2 = GetMaterialCacheTileWidth();
  iVar3 = 1;
  if (1 < iVar4) {
    iVar3 = iVar4;
  }
  return (float)(uVar2 * iVar3);
}

// GetTextureClass @ 147ec6cd0

ETextureClass __thiscall
UMaterialCacheVirtualTexture::GetTextureClass(UMaterialCacheVirtualTexture *this)

{
  return TwoD;
}

// GetVirtualTexture2DResource @ 147ec8950

FVirtualTexture2DResource * __thiscall
UMaterialCacheVirtualTexture::GetVirtualTexture2DResource(UMaterialCacheVirtualTexture *this)

{
  FTextureResource *pFVar1;
  FVirtualTexture2DResource *pFVar2;
  
  pFVar1 = UTexture::GetResource((UTexture *)this);
  if (pFVar1 == (FTextureResource *)0x0) {
    return (FVirtualTexture2DResource *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147ec896d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FVirtualTexture2DResource *)(**(code **)(pFVar1->_padding_ + 0x98))(pFVar1);
  return pFVar2;
}

// GetVirtualTextureBuildSettings @ 147ec8980

void __thiscall
UMaterialCacheVirtualTexture::GetVirtualTextureBuildSettings
          (UMaterialCacheVirtualTexture *this,FVirtualTextureBuildSettings *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = GetMaterialCacheTileWidth();
  uVar3 = (ulonglong)_tls_index;
  param_1->TileSize = uVar1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      iVar2 = (**(code **)(*(longlong *)CVarMaterialCacheTileBorderWidth._padding_ + 200))();
      Width = FVirtualTextureBuildSettings::ClampAndAlignTileBorderSize(iVar2);
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->TileBorderSize = Width;
  return;
}

// IsCurrentlyVirtualTextured @ 147ecd550

bool __thiscall
UMaterialCacheVirtualTexture::IsCurrentlyVirtualTextured(UMaterialCacheVirtualTexture *this)

{
  return true;
}

// StaticRegisterNativesUMaterialCacheVirtualTexture @ 147edf190

void __cdecl UMaterialCacheVirtualTexture::StaticRegisterNativesUMaterialCacheVirtualTexture(void)

{
  return;
}

// Unregister @ 147ee4cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMaterialCacheVirtualTexture::Unregister(UMaterialCacheVirtualTexture *this)

{
  UMaterialCacheVirtualTextureTag *pUVar1;
  code *pcVar2;
  bool bVar3;
  UActorComponent *this_00;
  FSceneInterface *pFVar4;
  FTextureResource *pFVar5;
  UObject *pUVar6;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar7;
  code **ppcVar8;
  ulonglong uVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  UMaterialCacheVirtualTexture *local_c8;
  code *pcStack_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  FSceneInterface *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr);
  if ((((this_00 != (UActorComponent *)0x0) &&
       (pFVar4 = UActorComponent::GetScene(this_00), pFVar4 != (FSceneInterface *)0x0)) &&
      (pFVar5 = UTexture::GetResource((UTexture *)this), pFVar5 != (FTextureResource *)0x0)) &&
     (pcStack_c0 = (code *)(**(code **)(pFVar5->_padding_ + 0x98))(pFVar5),
     pcStack_c0 != (code *)0x0)) {
    pUVar6 = FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr);
    pUVar1 = (this->Tag).field0_0x0.DebugPtr;
    uStack_a0 = *(undefined4 *)&pUVar6[0x14].field_0x24;
    if (pUVar1 == (UMaterialCacheVirtualTextureTag *)0x0) {
      local_d8._0_4_ = 0;
      local_d8._4_4_ = 0;
      uStack_d0._0_4_ = 0;
      uStack_d0._4_4_ = 0;
    }
    else {
      local_d8._0_4_ = (pUVar1->Guid).A;
      local_d8._4_4_ = (pUVar1->Guid).B;
      uStack_d0._0_4_ = (pUVar1->Guid).C;
      uStack_d0._4_4_ = (pUVar1->Guid).D;
    }
    local_98[0] = (code *)0x0;
    local_c8 = this;
    local_b8 = (uint)local_d8;
    uStack_b4 = local_d8._4_4_;
    uStack_b0 = (uint)uStack_d0;
    uStack_ac = uStack_d0._4_4_;
    local_a8 = pFVar4;
    local_70 = FMemory::Malloc(0x38,8);
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UMaterialCacheVirtualTexture::Unregister'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_70[1] = (code *)local_c8;
    local_70[2] = pcStack_c0;
    local_70[3] = local_d8;
    local_70[4] = uStack_d0;
    local_70[5] = (code *)local_a8;
    local_70[6] = (code *)CONCAT44(uStack_9c,uStack_a0);
    if (local_70 + 1 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMaterialCacheVirtualTexture::Unregister'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialCacheVirtualTexture::Unregister_::__l2::TSTR_ReleaseVT288>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_68._16_8_ = local_88[0];
      local_68._24_8_ = local_88[1];
      local_68._32_8_ = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`UMaterialCacheVirtualTexture::Unregister'::__l2::TSTR_ReleaseVT288>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar7);
      uVar9 = (ulonglong)local_38;
      if ((2 < uVar9) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          ppcVar8 = (code **)(local_68 + 0x10);
          if (local_40 != (code **)0x0) {
            ppcVar8 = local_40;
          }
          (**(code **)(*ppcVar8 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar8 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar8 = local_70;
      }
      (**(code **)(*ppcVar8 + 0x10))();
    }
  }
  return;
}

// UpdateResourceWithParams @ 147ee5850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMaterialCacheVirtualTexture::UpdateResourceWithParams
          (UMaterialCacheVirtualTexture *this,EUpdateResourceFlags param_1)

{
  UMaterialCacheVirtualTextureTag *pUVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  code *pcVar4;
  UActorComponent *this_00;
  UObject *pUVar5;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ulonglong uVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  UMaterialCacheVirtualTexture *local_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  FSceneInterface *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  UTexture::UpdateResourceWithParams((UTexture *)this,param_1);
  pFVar3 = UTexture::GetResource((UTexture *)this);
  if ((((pFVar3 != (FTextureResource *)0x0) &&
       (pcVar4 = (code *)(**(code **)(pFVar3->_padding_ + 0x98))(pFVar3), pcVar4 != (code *)0x0)) &&
      (this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr),
      this_00 != (UActorComponent *)0x0)) &&
     (local_b8 = UActorComponent::GetScene(this_00), local_b8 != (FSceneInterface *)0x0)) {
    pUVar1 = (this->Tag).field0_0x0.DebugPtr;
    if (pUVar1 == (UMaterialCacheVirtualTextureTag *)0x0) {
      local_e8._0_4_ = 0;
      local_e8._4_4_ = 0;
      uStack_e0._0_4_ = 0;
      uStack_e0._4_4_ = 0;
    }
    else {
      local_e8._0_4_ = (pUVar1->Guid).A;
      local_e8._4_4_ = (pUVar1->Guid).B;
      uStack_e0._0_4_ = (pUVar1->Guid).C;
      uStack_e0._4_4_ = (pUVar1->Guid).D;
    }
    pUVar5 = FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr);
    uStack_b0 = *(undefined4 *)&pUVar5[0x14].field_0x24;
    pcStack_d0 = local_e8;
    pcStack_c8 = uStack_e0;
    local_a8[0] = (code *)0x0;
    local_d8 = this;
    pcStack_c0 = pcVar4;
    local_80 = FMemory::Malloc(0x38,8);
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UMaterialCacheVirtualTexture::UpdateResourceWithParams'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_80[1] = (code *)local_d8;
    local_80[2] = pcStack_d0;
    local_80[3] = pcStack_c8;
    local_80[4] = pcStack_c0;
    local_80[5] = (code *)local_b8;
    local_80[6] = (code *)CONCAT44(uStack_ac,uStack_b0);
    if (local_80 + 1 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMaterialCacheVirtualTexture::UpdateResourceWithParams'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialCacheVirtualTexture::UpdateResourceWithParams_::__l2::TSTR_AcquireVT356>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UMaterialCacheVirtualTexture::UpdateResourceWithParams'::__l2::TSTR_AcquireVT356>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar6);
      uVar8 = (ulonglong)local_48;
      if ((2 < uVar8) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar7 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar7 = local_50;
          }
          (**(code **)(*ppcVar7 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar7 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar7 = local_80;
      }
      (**(code **)(*ppcVar7 + 0x10))();
    }
    CreateSceneProxy(this);
  }
  return;
}

