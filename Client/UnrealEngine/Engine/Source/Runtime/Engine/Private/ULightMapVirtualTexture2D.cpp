// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 148998d40

UClass * __cdecl ULightMapVirtualTexture2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightMapVirtualTexture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightMapVirtualTexture2D",
               &Z_Registration_Info_UClass_ULightMapVirtualTexture2D.InnerSingleton,
               StaticRegisterNativesULightMapVirtualTexture2D,0x188,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULightMapVirtualTexture2D>,
               InternalVTableHelperCtorCaller<ULightMapVirtualTexture2D>,local_res8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightMapVirtualTexture2D.InnerSingleton;
}

// ULightMapVirtualTexture2D @ 1489b6850

ULightMapVirtualTexture2D * __thiscall
ULightMapVirtualTexture2D::ULightMapVirtualTexture2D
          (ULightMapVirtualTexture2D *this,FVTableHelper *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->TypeToLayer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeToLayer).ArrayNum = 0;
  (this->TypeToLayer).ArrayMax = 0;
  return this;
}

// ULightMapVirtualTexture2D @ 1489b68b0

ULightMapVirtualTexture2D * __thiscall
ULightMapVirtualTexture2D::ULightMapVirtualTexture2D
          (ULightMapVirtualTexture2D *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 | 4;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->TypeToLayer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeToLayer).ArrayNum = 0;
  (this->TypeToLayer).ArrayMax = 0;
  SetLayerForType(this,LightmapLayer0,'\0');
  SetLayerForType(this,LightmapLayer1,'\x01');
  return this;
}

// ~ULightMapVirtualTexture2D @ 1489ba5a0

void __thiscall
ULightMapVirtualTexture2D::~ULightMapVirtualTexture2D(ULightMapVirtualTexture2D *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  pFVar1 = (this->TypeToLayer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTexture2D::~UTexture2D((UTexture2D *)this);
  return;
}

// GetLayerForType @ 1489e9ab0

uint __thiscall
ULightMapVirtualTexture2D::GetLayerForType
          (ULightMapVirtualTexture2D *this,ELightMapVirtualTextureType param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->TypeToLayer).ArrayNum <= (int)param_1) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (int)(char)(this->TypeToLayer).AllocatorInstance.Data[(int)param_1];
}

// GetPrivateStaticClass @ 1489eb7e0

UClass * __cdecl ULightMapVirtualTexture2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightMapVirtualTexture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightMapVirtualTexture2D",
               &Z_Registration_Info_UClass_ULightMapVirtualTexture2D.InnerSingleton,
               StaticRegisterNativesULightMapVirtualTexture2D,0x188,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULightMapVirtualTexture2D>,
               InternalVTableHelperCtorCaller<ULightMapVirtualTexture2D>,local_res8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightMapVirtualTexture2D.InnerSingleton;
}

// SetLayerForType @ 148a15210

void __thiscall
ULightMapVirtualTexture2D::SetLayerForType
          (ULightMapVirtualTexture2D *this,ELightMapVirtualTextureType param_1,uchar param_2)

{
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement local_18 [16];
  
  pTVar1 = &this->TypeToLayer;
  iVar5 = (this->TypeToLayer).ArrayNum;
  while (iVar5 <= (int)param_1) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    local_18[0] = (FScriptContainerElement)0xff;
    if (((pFVar2 <= local_18) && (local_18 < pFVar2 + (this->TypeToLayer).ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->TypeToLayer).ArrayNum;
    if (iVar5 == (this->TypeToLayer).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar1->AllocatorInstance,&(this->TypeToLayer).ArrayMax);
    }
    (this->TypeToLayer).ArrayNum = iVar5 + 1;
    (pTVar1->AllocatorInstance).Data[iVar5] = local_18[0];
    iVar5 = (this->TypeToLayer).ArrayNum;
  }
  uVar6 = 0;
  if ((int)param_1 < (this->TypeToLayer).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (pTVar1->AllocatorInstance).Data[(int)param_1] = (FScriptContainerElement)param_2;
  return;
}

// StaticRegisterNativesULightMapVirtualTexture2D @ 148a18760

void __cdecl ULightMapVirtualTexture2D::StaticRegisterNativesULightMapVirtualTexture2D(void)

{
  return;
}

