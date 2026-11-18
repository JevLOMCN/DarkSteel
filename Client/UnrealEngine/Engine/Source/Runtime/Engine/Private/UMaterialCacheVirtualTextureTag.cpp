// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147e8e480

UClass * __cdecl UMaterialCacheVirtualTextureTag::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialCacheVirtualTextureTag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialCacheVirtualTextureTag",
               &Z_Registration_Info_UClass_UMaterialCacheVirtualTextureTag.InnerSingleton,
               StaticRegisterNativesUMaterialCacheVirtualTextureTag,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialCacheVirtualTextureTag>,
               InternalVTableHelperCtorCaller<UMaterialCacheVirtualTextureTag>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialCacheVirtualTextureTag.InnerSingleton;
}

// UMaterialCacheVirtualTextureTag @ 147ea7610

UMaterialCacheVirtualTextureTag * __thiscall
UMaterialCacheVirtualTextureTag::UMaterialCacheVirtualTextureTag
          (UMaterialCacheVirtualTextureTag *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialCacheVirtualTextureTag__6B_;
  (this->TileCountMultiplier).field0_0x0._s_0.X = 1;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  (this->RuntimeLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeLayers).ArrayNum = 0;
  (this->RuntimeLayers).ArrayMax = 0;
  (this->TileCountMultiplier).field0_0x0._s_0.Y = 1;
  FGuid::NewGuid(&this->Guid);
  return this;
}

// UMaterialCacheVirtualTextureTag @ 147ea7660

UMaterialCacheVirtualTextureTag * __thiscall
UMaterialCacheVirtualTextureTag::UMaterialCacheVirtualTextureTag
          (UMaterialCacheVirtualTextureTag *this,FObjectInitializer *param_1)

{
  TArray<EMaterialCacheAttribute,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  
  UObject::UObject((UObject *)this,param_1);
  pTVar1 = &this->Attributes;
  this->_padding_ = (longlong)&___7UMaterialCacheVirtualTextureTag__6B_;
  piVar2 = &(this->Attributes).ArrayMax;
  (this->TileCountMultiplier).field0_0x0._s_0.X = 1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  *piVar2 = 0;
  (this->RuntimeLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeLayers).ArrayNum = 0;
  (this->RuntimeLayers).ArrayMax = 0;
  (this->TileCountMultiplier).field0_0x0._s_0.Y = 1;
  FGuid::NewGuid(&this->Guid);
  (this->Attributes).ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,6,*piVar2,&pTVar1->AllocatorInstance,6,piVar2);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined4 *)pFVar3 = DefaultMaterialCacheAttributes._0_4_;
  *(undefined2 *)(pFVar3 + 4) = DefaultMaterialCacheAttributes._4_2_;
  PackRuntimeLayers(this);
  return this;
}

// ~UMaterialCacheVirtualTextureTag @ 147ea9830

void __thiscall
UMaterialCacheVirtualTextureTag::~UMaterialCacheVirtualTextureTag
          (UMaterialCacheVirtualTextureTag *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialCacheVirtualTextureTag__6B_;
  DestructItems<FMaterialCacheLayer,int>
            ((FMaterialCacheLayer *)(this->RuntimeLayers).AllocatorInstance.Data,
             (this->RuntimeLayers).ArrayNum);
  pFVar1 = (this->RuntimeLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Attributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147ec4830

UClass * __cdecl UMaterialCacheVirtualTextureTag::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialCacheVirtualTextureTag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialCacheVirtualTextureTag",
               &Z_Registration_Info_UClass_UMaterialCacheVirtualTextureTag.InnerSingleton,
               StaticRegisterNativesUMaterialCacheVirtualTextureTag,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialCacheVirtualTextureTag>,
               InternalVTableHelperCtorCaller<UMaterialCacheVirtualTextureTag>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialCacheVirtualTextureTag.InnerSingleton;
}

// GetRuntimeLayout @ 147ec5600

FMaterialCacheTagLayout * __thiscall
UMaterialCacheVirtualTextureTag::GetRuntimeLayout
          (UMaterialCacheVirtualTextureTag *this,FMaterialCacheTagLayout *__return_storage_ptr__)

{
  TArray<FMaterialCacheLayer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FMaterialCacheLayer *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FMaterialCacheLayer> FVar9;
  
  piVar2 = &(__return_storage_ptr__->Layers).ArrayMax;
  (__return_storage_ptr__->Guid).A = 0;
  (__return_storage_ptr__->Guid).B = 0;
  pTVar1 = &__return_storage_ptr__->Layers;
  (__return_storage_ptr__->Guid).C = 0;
  (__return_storage_ptr__->Guid).D = 0;
  (__return_storage_ptr__->Layers).AllocatorInstance.SecondaryData =
       (ForElementType<FMaterialCacheLayer>)0x0;
  (__return_storage_ptr__->Layers).ArrayNum = 0;
  *piVar2 = 8;
  uVar6 = (this->Guid).B;
  uVar7 = (this->Guid).C;
  uVar8 = (this->Guid).D;
  (__return_storage_ptr__->Guid).A = (this->Guid).A;
  (__return_storage_ptr__->Guid).B = uVar6;
  (__return_storage_ptr__->Guid).C = uVar7;
  (__return_storage_ptr__->Guid).D = uVar8;
  DestructItems<FMaterialCacheLayer,int>((FMaterialCacheLayer *)pTVar1,0);
  iVar3 = (this->RuntimeLayers).ArrayNum;
  pFVar5 = (FMaterialCacheLayer *)(this->RuntimeLayers).AllocatorInstance.Data;
  iVar4 = (__return_storage_ptr__->Layers).ArrayMax;
  (__return_storage_ptr__->Layers).ArrayNum = iVar3;
  if ((iVar3 == 0) && (iVar4 == 0)) {
    (__return_storage_ptr__->Layers).ArrayMax = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
              (0x18,8,iVar3,iVar4,&pTVar1->AllocatorInstance,iVar3,piVar2);
    FVar9 = (__return_storage_ptr__->Layers).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar9 = (ForElementType<FMaterialCacheLayer>)pTVar1;
    }
    ConstructItems<FMaterialCacheLayer,FMaterialCacheLayer,int>((void *)FVar9,pFVar5,iVar3);
  }
  return __return_storage_ptr__;
}

// PackRuntimeLayers @ 147ed0ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMaterialCacheVirtualTextureTag::PackRuntimeLayers(UMaterialCacheVirtualTextureTag *this)

{
  TArray<FMaterialCacheLayer,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FMaterialCacheLayer *pFVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  TArray<EMaterialCacheAttribute,TSizedDefaultAllocator<32>_> local_28;
  
  iVar3 = (this->RuntimeLayers).ArrayNum;
  pTVar1 = &this->RuntimeLayers;
  piVar2 = &(this->RuntimeLayers).ArrayMax;
  pFVar4 = (FMaterialCacheLayer *)(pTVar1->AllocatorInstance).Data;
  if ((this->RuntimeLayers).ArrayMax < 0) {
    DestructItems<FMaterialCacheLayer,int>(pFVar4,iVar3);
    (this->RuntimeLayers).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FMaterialCacheLayer,int>(pFVar4,iVar3);
    (this->RuntimeLayers).ArrayNum = 0;
  }
  iVar3 = (this->Attributes).ArrayNum;
  _Src = (this->Attributes).AllocatorInstance.Data;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = iVar3;
  if (iVar3 == 0) {
    local_28.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&local_28.AllocatorInstance,iVar3,&local_28.ArrayMax);
    memcpy(local_28.AllocatorInstance.Data,_Src,(longlong)iVar3);
  }
  PackMaterialCacheAttributeLayers<TSizedDefaultAllocator<32>_>(&local_28,pTVar1);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (((this->RuntimeLayers).ArrayNum == 0) && (1 < (byte)LogVirtualTexturing._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
  }
  if (8 < (uint)(this->RuntimeLayers).ArrayNum) {
    if (1 < (byte)LogVirtualTexturing._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
    }
    DestructItems<FMaterialCacheLayer,int>
              ((FMaterialCacheLayer *)(pTVar1->AllocatorInstance).Data,
               (this->RuntimeLayers).ArrayNum);
    (this->RuntimeLayers).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  return;
}

// StaticRegisterNativesUMaterialCacheVirtualTextureTag @ 147edf1a0

void __cdecl
UMaterialCacheVirtualTextureTag::StaticRegisterNativesUMaterialCacheVirtualTextureTag(void)

{
  return;
}

