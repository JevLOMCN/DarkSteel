// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 148998f40

UClass * __cdecl UMeshPaintVirtualTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshPaintVirtualTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshPaintVirtualTexture",
               &Z_Registration_Info_UClass_UMeshPaintVirtualTexture.InnerSingleton,
               StaticRegisterNativesUMeshPaintVirtualTexture,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMeshPaintVirtualTexture>,
               InternalVTableHelperCtorCaller<UMeshPaintVirtualTexture>,local_res8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshPaintVirtualTexture.InnerSingleton;
}

// UMeshPaintVirtualTexture @ 1489b6990

UMeshPaintVirtualTexture * __thiscall
UMeshPaintVirtualTexture::UMeshPaintVirtualTexture
          (UMeshPaintVirtualTexture *this,FVTableHelper *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->OwningComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UMeshPaintVirtualTexture @ 1489b69e0

UMeshPaintVirtualTexture * __thiscall
UMeshPaintVirtualTexture::UMeshPaintVirtualTexture
          (UMeshPaintVirtualTexture *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 | 4;
  (this->OwningComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UMeshPaintVirtualTexture @ 1489ba620

void __thiscall UMeshPaintVirtualTexture::~UMeshPaintVirtualTexture(UMeshPaintVirtualTexture *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture2D::~UTexture2D((UTexture2D *)this);
  return;
}

// GetPrivateStaticClass @ 1489eb960

UClass * __cdecl UMeshPaintVirtualTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshPaintVirtualTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshPaintVirtualTexture",
               &Z_Registration_Info_UClass_UMeshPaintVirtualTexture.InnerSingleton,
               StaticRegisterNativesUMeshPaintVirtualTexture,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMeshPaintVirtualTexture>,
               InternalVTableHelperCtorCaller<UMeshPaintVirtualTexture>,local_res8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshPaintVirtualTexture.InnerSingleton;
}

// GetVirtualTextureBuildSettings @ 1489f0900

void __thiscall
UMeshPaintVirtualTexture::GetVirtualTextureBuildSettings
          (UMeshPaintVirtualTexture *this,FVirtualTextureBuildSettings *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = MeshPaintVirtualTexture::GetTileSize();
  param_1->TileSize = uVar3;
  pTVar1 = CVarMeshPaintVirtualTextureTileBorderSize.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar4 = 4;
    if (!bVar2) goto LAB_1489f093c;
  }
  lVar4 = 0;
LAB_1489f093c:
  iVar5 = 8;
  if (*(uint *)((longlong)pTVar1->ShadowedValue + lVar4) < 8) {
    iVar5 = *(int *)((longlong)pTVar1->ShadowedValue + lVar4);
  }
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = iVar5;
  }
  param_1->TileBorderSize = iVar6 + 1U & 0xfffffffe;
  return;
}

// IsVirtualTexturedWithSinglePhysicalPool @ 1489fa350

bool __thiscall
UMeshPaintVirtualTexture::IsVirtualTexturedWithSinglePhysicalPool(UMeshPaintVirtualTexture *this)

{
  return true;
}

// StaticRegisterNativesUMeshPaintVirtualTexture @ 148a18780

void __cdecl UMeshPaintVirtualTexture::StaticRegisterNativesUMeshPaintVirtualTexture(void)

{
  return;
}

// UpdateResourceWithParams @ 148a1fda0

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
UMeshPaintVirtualTexture::UpdateResourceWithParams
          (UMeshPaintVirtualTexture *this,EUpdateResourceFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  longlong lVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  UActorComponent *this_02;
  undefined ***pppuVar6;
  ulonglong uVar7;
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
  UTexture2D::UpdateResourceWithParams((UTexture2D *)this,param_1);
  pFVar3 = UTexture::GetResource((UTexture *)this);
  if (pFVar3 != (FTextureResource *)0x0) {
    lVar4 = (**(code **)(pFVar3->_padding_ + 0x98))(pFVar3);
    if (lVar4 != 0) {
      local_60 = (undefined ***)0x0;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`MeshPaintVirtualTexture::AcquireAllocatedVT'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`MeshPaintVirtualTexture::AcquireAllocatedVT'::`5'::<lambda_1>,1,0>
                  ::_vftable_;
      lStack_70 = lVar4;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_MeshPaintVirtualTexture::AcquireAllocatedVT_::__l5::TSTR_AcquireVT223>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`MeshPaintVirtualTexture::AcquireAllocatedVT'::__l5::TSTR_AcquireVT223>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar5);
        uVar7 = (ulonglong)local_28;
        if (2 < uVar7) {
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
                      ::__l2::Destructors)[uVar7] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar6 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar6 = local_30;
            }
            (*(code *)(*pppuVar6)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar7])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar6 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar6 = local_60;
        }
        (*(code *)(*pppuVar6)[2])();
      }
    }
  }
  this_02 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwningComponent).WeakPtr);
  if (this_02 != (UActorComponent *)0x0) {
    UActorComponent::MarkRenderStateDirty(this_02);
  }
  return;
}

