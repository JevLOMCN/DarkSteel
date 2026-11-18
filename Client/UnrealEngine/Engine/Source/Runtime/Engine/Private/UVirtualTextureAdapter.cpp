// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 148997ab0

UClass * __cdecl UVirtualTextureAdapter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVirtualTextureAdapter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VirtualTextureAdapter",
               &Z_Registration_Info_UClass_UVirtualTextureAdapter.InnerSingleton,
               StaticRegisterNativesUVirtualTextureAdapter,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVirtualTextureAdapter>,
               InternalVTableHelperCtorCaller<UVirtualTextureAdapter>,local_res8,
               UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVirtualTextureAdapter.InnerSingleton;
}

// UVirtualTextureAdapter @ 1489b70b0

UVirtualTextureAdapter * __thiscall
UVirtualTextureAdapter::UVirtualTextureAdapter(UVirtualTextureAdapter *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->bUseDefaultTileSizes = true;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->OverrideWithTextureFormat).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  this->TileSize = 0;
  this->TileBorderSize = 0;
  return this;
}

// UVirtualTextureAdapter @ 1489b7120

UVirtualTextureAdapter * __thiscall
UVirtualTextureAdapter::UVirtualTextureAdapter
          (UVirtualTextureAdapter *this,FObjectInitializer *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->bUseDefaultTileSizes = true;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->OverrideWithTextureFormat).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  this->TileSize = 0;
  this->TileBorderSize = 0;
  return this;
}

// ~UVirtualTextureAdapter @ 1489ba9f0

void __thiscall UVirtualTextureAdapter::~UVirtualTextureAdapter(UVirtualTextureAdapter *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// CreateResource @ 1489d4910

FTextureResource * __thiscall UVirtualTextureAdapter::CreateResource(UVirtualTextureAdapter *this)

{
  TObjectPtr<UTexture> *this_00;
  ulonglong uVar1;
  UTexture2D *pUVar2;
  longlong lVar3;
  bool bVar4;
  EPixelFormat EVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  UTexture *pUVar8;
  FVirtualTextureAdapterRenderResource *this_01;
  FVirtualTextureAdapterRenderResource *pFVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FVirtualTextureBuildSettings local_res8;
  
  this_00 = &this->Texture;
  if ((this_00->field0_0x0).DebugPtr == (UTexture *)0x0) {
    return (FTextureResource *)0x0;
  }
  pUVar7 = Z_Construct_UClass_UTexture2D_NoRegister();
  bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
  if ((!bVar4) || (pUVar8 = (this_00->field0_0x0).DebugPtr, pUVar8 == (UTexture *)0x0)) {
    if ((this_00->field0_0x0).DebugPtr == (UTexture *)0x0) {
      return (FTextureResource *)0x0;
    }
    pUVar7 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
    if (!bVar4) {
      return (FTextureResource *)0x0;
    }
    pUVar8 = (this_00->field0_0x0).DebugPtr;
    if (pUVar8 == (UTexture *)0x0) {
      return (FTextureResource *)0x0;
    }
  }
  if (pUVar8->VirtualTextureStreaming != '\0') {
    return (FTextureResource *)0x0;
  }
  pFVar9 = (FVirtualTextureAdapterRenderResource *)0x0;
  local_res8.TileSize = 0;
  local_res8.TileBorderSize = 0;
  FVirtualTextureBuildSettings::Init(&local_res8);
  if (this->bUseDefaultTileSizes == false) {
    uVar11 = 0x400;
    if ((uint)this->TileSize < 0x400) {
      uVar11 = this->TileSize;
    }
    uVar10 = 0x10;
    if (0x10 < uVar11) {
      uVar10 = uVar11;
    }
    uVar11 = 1;
    if (uVar10 != 0) {
      uVar11 = uVar10;
    }
    uVar1 = (ulonglong)(uVar11 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar3 & 0x1f);
    uVar11 = 8;
    if ((uint)this->TileBorderSize < 8) {
      uVar11 = this->TileBorderSize;
    }
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = uVar11;
    }
    uVar11 = uVar10 + 1 & 0xfffffffe;
  }
  else {
    iVar12 = local_res8.TileSize;
    uVar11 = local_res8.TileBorderSize;
  }
  pUVar2 = (this->OverrideWithTextureFormat).field0_0x0.DebugPtr;
  if (pUVar2 == (UTexture2D *)0x0) {
    EVar5 = PF_Unknown;
  }
  else {
    EVar5 = UTexture2D::GetPixelFormat(pUVar2,0);
  }
  pUVar2 = (this->OverrideWithTextureFormat).field0_0x0.DebugPtr;
  if (pUVar2 == (UTexture2D *)0x0) {
    uVar6 = false;
  }
  else {
    uVar6 = (**(code **)(pUVar2->_padding_ + 0x3d8))();
  }
  this_01 = ::operator_new(200);
  if (this_01 != (FVirtualTextureAdapterRenderResource *)0x0) {
    pFVar9 = FVirtualTextureAdapterRenderResource::FVirtualTextureAdapterRenderResource
                       (this_01,this,(this->Texture).field0_0x0.DebugPtr,iVar12,uVar11,EVar5,
                        (bool)uVar6);
  }
  return (FTextureResource *)pFVar9;
}

// Flush @ 1489e33e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UVirtualTextureAdapter::Flush(UVirtualTextureAdapter *this,TBox2<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  FTextureResource *local_a8;
  TVector2<float>_u_0 TStack_a0;
  TVector2<float>_u_0 TStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = UTexture::GetResource((UTexture *)this);
  if (local_a8 != (FTextureResource *)0x0) {
    TStack_a0 = (param_1->Min).field0_0x0;
    TStack_98 = (param_1->Max).field0_0x0;
    uStack_90 = *(undefined4 *)&param_1->bIsValid;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x28,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UVirtualTextureAdapter::Flush'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[1] = (code *)local_a8;
    *(TVector2<float>_u_0 *)(local_60 + 2) = TStack_a0;
    *(TVector2<float>_u_0 *)(local_60 + 3) = TStack_98;
    local_60[4] = (code *)CONCAT44(uStack_8c,uStack_90);
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UVirtualTextureAdapter::Flush'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UVirtualTextureAdapter::Flush_::__l2::TSTR_VirtualTextureAdapterFlush578>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`UVirtualTextureAdapter::Flush'::__l2::TSTR_VirtualTextureAdapterFlush578>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
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
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  return;
}

// GetMaterialType @ 1489ea4a0

EMaterialValueType __thiscall UVirtualTextureAdapter::GetMaterialType(UVirtualTextureAdapter *this)

{
  return MCT_TextureVirtual;
}

// GetPrivateStaticClass @ 1489ebf40

UClass * __cdecl UVirtualTextureAdapter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVirtualTextureAdapter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VirtualTextureAdapter",
               &Z_Registration_Info_UClass_UVirtualTextureAdapter.InnerSingleton,
               StaticRegisterNativesUVirtualTextureAdapter,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVirtualTextureAdapter>,
               InternalVTableHelperCtorCaller<UVirtualTextureAdapter>,local_res8,
               UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVirtualTextureAdapter.InnerSingleton;
}

// GetSurfaceArraySize @ 1489edf30

uint __thiscall UVirtualTextureAdapter::GetSurfaceArraySize(UVirtualTextureAdapter *this)

{
  return 0;
}

// GetSurfaceDepth @ 1489edf50

float __thiscall UVirtualTextureAdapter::GetSurfaceDepth(UVirtualTextureAdapter *this)

{
  return 0.0;
}

// GetSurfaceHeight @ 1489edf90

float __thiscall UVirtualTextureAdapter::GetSurfaceHeight(UVirtualTextureAdapter *this)

{
  UTexture *pUVar1;
  float fVar2;
  
  pUVar1 = (this->Texture).field0_0x0.DebugPtr;
  if (pUVar1 != (UTexture *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489edf9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x370))();
    return fVar2;
  }
  return 0.0;
}

// GetSurfaceWidth @ 1489edfe0

float __thiscall UVirtualTextureAdapter::GetSurfaceWidth(UVirtualTextureAdapter *this)

{
  UTexture *pUVar1;
  float fVar2;
  
  pUVar1 = (this->Texture).field0_0x0.DebugPtr;
  if (pUVar1 != (UTexture *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489edfef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x368))();
    return fVar2;
  }
  return 0.0;
}

// GetTextureClass @ 1489ee160

ETextureClass __thiscall UVirtualTextureAdapter::GetTextureClass(UVirtualTextureAdapter *this)

{
  return TwoD;
}

// IsCurrentlyVirtualTextured @ 1489f8a30

bool __thiscall UVirtualTextureAdapter::IsCurrentlyVirtualTextured(UVirtualTextureAdapter *this)

{
  return true;
}

// StaticRegisterNativesUVirtualTextureAdapter @ 148a18890

void __cdecl UVirtualTextureAdapter::StaticRegisterNativesUVirtualTextureAdapter(void)

{
  return;
}

