// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 9

// StaticClass @ 14ac039c0

UClass * __cdecl UMutableTextureMipDataProviderFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMutableTextureMipDataProviderFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"MutableTextureMipDataProviderFactory",
               &Z_Registration_Info_UClass_UMutableTextureMipDataProviderFactory.InnerSingleton,
               StaticRegisterNativesUMutableTextureMipDataProviderFactory,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMutableTextureMipDataProviderFactory>,
               InternalVTableHelperCtorCaller<UMutableTextureMipDataProviderFactory>,local_res8,
               UTextureMipDataProviderFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMutableTextureMipDataProviderFactory.InnerSingleton;
}

// UMutableTextureMipDataProviderFactory @ 14ac0c090

UMutableTextureMipDataProviderFactory * __thiscall
UMutableTextureMipDataProviderFactory::UMutableTextureMipDataProviderFactory
          (UMutableTextureMipDataProviderFactory *this,FVTableHelper *param_1)

{
  UTextureMipDataProviderFactory::UTextureMipDataProviderFactory
            ((UTextureMipDataProviderFactory *)this,param_1);
  this->_padding_ = (longlong)&___7UMutableTextureMipDataProviderFactory__6B_;
  (this->CustomizableObjectInstance).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->ImageRef).ImageID.WeakRegistry.Object =
       (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
        *)0x0;
  (this->ImageRef).ImageID.WeakRegistry.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ImageRef).SurfaceId = 0;
  (this->ImageRef).LOD = '\0';
  (this->ImageRef).Component = '\0';
  (this->ImageRef).Image = '\0';
  (this->ImageRef).BaseMip = '\0';
  (this->ImageRef).ConstantImagesNeededToGenerate.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImageRef).ConstantImagesNeededToGenerate.ArrayNum = 0;
  (this->ImageRef).ConstantImagesNeededToGenerate.ArrayMax = 0;
  (this->UpdateContext).Object = (FMutableUpdateImageContext *)0x0;
  (this->UpdateContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ImageRef).ImageID.Id = 0xffffffff;
  return this;
}

// UMutableTextureMipDataProviderFactory @ 14ac0c0e0

UMutableTextureMipDataProviderFactory * __thiscall
UMutableTextureMipDataProviderFactory::UMutableTextureMipDataProviderFactory
          (UMutableTextureMipDataProviderFactory *this,FObjectInitializer *param_1)

{
  UTextureMipDataProviderFactory::UTextureMipDataProviderFactory
            ((UTextureMipDataProviderFactory *)this,param_1);
  this->_padding_ = (longlong)&___7UMutableTextureMipDataProviderFactory__6B_;
  (this->CustomizableObjectInstance).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->ImageRef).ImageID.WeakRegistry.Object =
       (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
        *)0x0;
  (this->ImageRef).ImageID.WeakRegistry.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ImageRef).SurfaceId = 0;
  (this->ImageRef).LOD = '\0';
  (this->ImageRef).Component = '\0';
  (this->ImageRef).Image = '\0';
  (this->ImageRef).BaseMip = '\0';
  (this->ImageRef).ConstantImagesNeededToGenerate.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImageRef).ConstantImagesNeededToGenerate.ArrayNum = 0;
  (this->ImageRef).ConstantImagesNeededToGenerate.ArrayMax = 0;
  (this->UpdateContext).Object = (FMutableUpdateImageContext *)0x0;
  (this->UpdateContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ImageRef).ImageID.Id = 0xffffffff;
  return this;
}

// ~UMutableTextureMipDataProviderFactory @ 14ac0d0a0

void __thiscall
UMutableTextureMipDataProviderFactory::~UMutableTextureMipDataProviderFactory
          (UMutableTextureMipDataProviderFactory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMutableTextureMipDataProviderFactory__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UpdateContext).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->ImageRef).ConstantImagesNeededToGenerate.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
  FHandle::~FHandle(&(this->ImageRef).ImageID);
  UTextureMipDataProviderFactory::~UTextureMipDataProviderFactory
            ((UTextureMipDataProviderFactory *)this);
  return;
}

// AllocateMipDataProvider @ 14ac15400

FTextureMipDataProvider * __thiscall
UMutableTextureMipDataProviderFactory::AllocateMipDataProvider
          (UMutableTextureMipDataProviderFactory *this,UTexture *param_1)

{
  FStreamableRenderResourceState *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  TObjectPtr<UCustomizableObjectInstance>_u_0 TVar4;
  FScriptContainerElement *_Src;
  longlong lVar5;
  FMutableUpdateImageContext *pFVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FTextureMipDataProvider *pFVar10;
  
  if (((((this->ImageRef).ImageID.Id == 0xffffffff) ||
       ((this->ImageRef).ImageID.WeakRegistry.Object ==
        (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
         *)0x0)) ||
      (pTVar3 = (this->ImageRef).ImageID.WeakRegistry.WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ImageRef.ImageID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Internal\\MuCO\\CustomizableObjectMipDataProvider.h"
                       ,0x9f,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FTextureMipDataProvider *)(*pcVar7)();
      return pFVar10;
    }
  }
  pFVar10 = ::operator_new(0x88);
  if (pFVar10 == (FTextureMipDataProvider *)0x0) {
    pFVar10 = (FTextureMipDataProvider *)0x0;
  }
  else {
    TVar4 = (this->CustomizableObjectInstance).field0_0x0;
    FTextureMipDataProvider::FTextureMipDataProvider(pFVar10,param_1,Init,Async);
    *(TObjectPtr<UCustomizableObjectInstance>_u_0 *)(pFVar10 + 1) = TVar4;
    pFVar10->_padding_ = (longlong)&___7FMutableTextureMipDataProvider__6B_;
    *(undefined4 *)&pFVar10[1].ResourceState.field0_0x0 = 0xffffffff;
    pFVar10[1].CurrentFirstLODIdx = 0;
    pFVar10[1].PendingFirstLODIdx = 0;
    pFVar10[1].NextTickState = Init;
    pFVar10[1].NextTickThread = Async;
    TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
    FHandle::operator=((FHandle *)&pFVar10[1].ResourceState,&(this->ImageRef).ImageID);
    pFVar1 = &pFVar10[2].ResourceState;
    *(uint *)&pFVar10[2]._padding_ = (this->ImageRef).SurfaceId;
    *(uchar *)((longlong)&pFVar10[2]._padding_ + 4) = (this->ImageRef).LOD;
    *(uchar *)((longlong)&pFVar10[2]._padding_ + 5) = (this->ImageRef).Component;
    *(uchar *)((longlong)&pFVar10[2]._padding_ + 6) = (this->ImageRef).Image;
    *(uchar *)((longlong)&pFVar10[2]._padding_ + 7) = (this->ImageRef).BaseMip;
    (pFVar1->field0_0x0).Data = 0;
    iVar2 = (this->ImageRef).ConstantImagesNeededToGenerate.ArrayNum;
    _Src = (this->ImageRef).ConstantImagesNeededToGenerate.AllocatorInstance.Data;
    pFVar10[2].CurrentFirstLODIdx = iVar2;
    if (iVar2 == 0) {
      pFVar10[2].PendingFirstLODIdx = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,0,(ForAnyElementType *)pFVar1,iVar2,&pFVar10[2].PendingFirstLODIdx);
      memcpy((void *)pFVar1->field0_0x0,_Src,(longlong)iVar2 << 2);
    }
    pFVar10[2].NextTickState = Init;
    pFVar10[2].NextTickThread = Async;
    pFVar10[3]._padding_ = 0;
    *(undefined1 *)&pFVar10[3].ResourceState.field0_0x0 = 0;
    pFVar10[3].CurrentFirstLODIdx = 0;
    pFVar10[3].PendingFirstLODIdx = 0;
    pFVar10[3].NextTickState = Init;
    pFVar10[3].NextTickThread = Async;
    pFVar10[4]._padding_ = 0;
    if (((*(int *)&pFVar10[1].ResourceState.field0_0x0 == -1) ||
        (lVar5._0_4_ = pFVar10[1].CurrentFirstLODIdx, lVar5._4_4_ = pFVar10[1].PendingFirstLODIdx,
        lVar5 == 0)) ||
       ((*(longlong *)&pFVar10[1].NextTickState == 0 ||
        (*(int *)(*(longlong *)&pFVar10[1].NextTickState + 8) < 1)))) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImageRef.ImageID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                         ,0x2d,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FTextureMipDataProvider *)(*pcVar7)();
        return pFVar10;
      }
    }
  }
  pTVar3 = (this->UpdateContext).SharedReferenceCount.ReferenceController;
  pFVar6 = (this->UpdateContext).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (TReferenceControllerBase<1> *)pFVar10[3]._padding_;
  *(FMutableUpdateImageContext **)&pFVar10[2].NextTickState = pFVar6;
  pFVar10[3]._padding_ = (longlong)pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return pFVar10;
}

// GetPrivateStaticClass @ 14ac228d0

UClass * __cdecl UMutableTextureMipDataProviderFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMutableTextureMipDataProviderFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"MutableTextureMipDataProviderFactory",
               &Z_Registration_Info_UClass_UMutableTextureMipDataProviderFactory.InnerSingleton,
               StaticRegisterNativesUMutableTextureMipDataProviderFactory,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMutableTextureMipDataProviderFactory>,
               InternalVTableHelperCtorCaller<UMutableTextureMipDataProviderFactory>,local_res8,
               UTextureMipDataProviderFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMutableTextureMipDataProviderFactory.InnerSingleton;
}

// ShouldAllowPlatformTiling @ 14ac394e0

bool __thiscall
UMutableTextureMipDataProviderFactory::ShouldAllowPlatformTiling
          (UMutableTextureMipDataProviderFactory *this,UTexture *param_1)

{
  return true;
}

// StaticRegisterNativesUMutableTextureMipDataProviderFactory @ 14ac39b60

void __cdecl
UMutableTextureMipDataProviderFactory::StaticRegisterNativesUMutableTextureMipDataProviderFactory
          (void)

{
  return;
}

// WillProvideMipDataWithoutDisk @ 14ac4c980

bool __thiscall
UMutableTextureMipDataProviderFactory::WillProvideMipDataWithoutDisk
          (UMutableTextureMipDataProviderFactory *this)

{
  return true;
}

