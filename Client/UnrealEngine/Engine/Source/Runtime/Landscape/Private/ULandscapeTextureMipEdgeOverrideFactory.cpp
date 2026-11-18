// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 13

// StaticClass @ 145fadf00

UClass * __cdecl ULandscapeTextureMipEdgeOverrideFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTextureMipEdgeOverrideFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeTextureMipEdgeOverrideFactory",
               &Z_Registration_Info_UClass_ULandscapeTextureMipEdgeOverrideFactory.InnerSingleton,
               StaticRegisterNativesULandscapeTextureMipEdgeOverrideFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeTextureMipEdgeOverrideFactory>
               ,InternalVTableHelperCtorCaller<ULandscapeTextureMipEdgeOverrideFactory>,local_res8,
               UTextureMipDataProviderFactory::StaticClass,UTexture2D::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureMipEdgeOverrideFactory.InnerSingleton;
}

// ULandscapeTextureMipEdgeOverrideFactory @ 145fb5910

ULandscapeTextureMipEdgeOverrideFactory * __thiscall
ULandscapeTextureMipEdgeOverrideFactory::ULandscapeTextureMipEdgeOverrideFactory
          (ULandscapeTextureMipEdgeOverrideFactory *this,FVTableHelper *param_1)

{
  UTextureMipDataProviderFactory::UTextureMipDataProviderFactory
            ((UTextureMipDataProviderFactory *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeTextureMipEdgeOverrideFactory__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->EdgeFixup).field0_0x0.DebugPtr = (ULandscapeHeightmapTextureEdgeFixup *)0x0;
  return this;
}

// ULandscapeTextureMipEdgeOverrideFactory @ 145fb5950

ULandscapeTextureMipEdgeOverrideFactory * __thiscall
ULandscapeTextureMipEdgeOverrideFactory::ULandscapeTextureMipEdgeOverrideFactory
          (ULandscapeTextureMipEdgeOverrideFactory *this,FObjectInitializer *param_1)

{
  UTextureMipDataProviderFactory::UTextureMipDataProviderFactory
            ((UTextureMipDataProviderFactory *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeTextureMipEdgeOverrideFactory__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->EdgeFixup).field0_0x0.DebugPtr = (ULandscapeHeightmapTextureEdgeFixup *)0x0;
  return this;
}

// ~ULandscapeTextureMipEdgeOverrideFactory @ 145fb6ab0

void __thiscall
ULandscapeTextureMipEdgeOverrideFactory::~ULandscapeTextureMipEdgeOverrideFactory
          (ULandscapeTextureMipEdgeOverrideFactory *this)

{
  this->_padding_ = (longlong)&___7ULandscapeTextureMipEdgeOverrideFactory__6B_;
  UTextureMipDataProviderFactory::~UTextureMipDataProviderFactory
            ((UTextureMipDataProviderFactory *)this);
  return;
}

// AddReferencedObjects @ 145fb9c30

void __cdecl
ULandscapeTextureMipEdgeOverrideFactory::AddReferencedObjects
          (UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 != (UObject *)0x0) {
    pUVar2 = GetPrivateStaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_145fb9c6f;
  }
  param_1 = (UObject *)0x0;
LAB_145fb9c6f:
  (**(code **)(param_2->_padding_ + 0x88))(param_2,param_1 + 1,0,0);
                    /* WARNING: Could not recover jumptable at 0x000145fb9c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[1].field_0x8,0,0);
  return;
}

// AddTo @ 145fb9d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULandscapeTextureMipEdgeOverrideFactory * __cdecl
ULandscapeTextureMipEdgeOverrideFactory::AddTo(UTexture2D *param_1)

{
  int iVar1;
  UTexture2D *pUVar2;
  code *pcVar3;
  bool bVar4;
  ULandscapeTextureMipEdgeOverrideFactory *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  UClass *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 == (UTexture2D *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                       ,0x79,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (ULandscapeTextureMipEdgeOverrideFactory *)(*pcVar3)();
      return pUVar5;
    }
  }
  pcVar3 = *(code **)(param_1->_padding_ + 0x18);
  local_a8[0] = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8[0]);
  }
  pUVar5 = (ULandscapeTextureMipEdgeOverrideFactory *)(*pcVar3)(&param_1->_padding_,local_a8);
  if (pUVar5 != (ULandscapeTextureMipEdgeOverrideFactory *)0x0) {
    pUVar6 = StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) goto LAB_145fb9e70;
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._8_8_ = param_1;
  pUVar5 = (ULandscapeTextureMipEdgeOverrideFactory *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (pUVar5->Texture).field0_0x0.DebugPtr = param_1;
  (**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_,pUVar5);
LAB_145fb9e70:
  pUVar2 = (pUVar5->Texture).field0_0x0.DebugPtr;
  if (pUVar2 == (UTexture2D *)0x0) {
    bVar4 = param_1 == (UTexture2D *)0x0;
  }
  else {
    bVar4 = pUVar2 == param_1;
  }
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Factory->Texture == TargetTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                       ,0x85,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (ULandscapeTextureMipEdgeOverrideFactory *)(*pcVar3)();
      return pUVar5;
    }
  }
  if ((UTexture2D *)pUVar5->_padding_ != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Factory->GetOuter() == TargetTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                       ,0x86,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (ULandscapeTextureMipEdgeOverrideFactory *)(*pcVar3)();
      return pUVar5;
    }
  }
  return pUVar5;
}

// AllocateMipDataProvider @ 145fb9f10

FTextureMipDataProvider * __thiscall
ULandscapeTextureMipEdgeOverrideFactory::AllocateMipDataProvider
          (ULandscapeTextureMipEdgeOverrideFactory *this,UTexture *param_1)

{
  UTexture2D *pUVar1;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  FTextureMipDataProvider *pFVar5;
  
  if ((UTexture2D *)param_1 != (this->Texture).field0_0x0.DebugPtr) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Asset == (UTexture*) Texture.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeTextureStorageProvider.h"
                       ,0x9d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FTextureMipDataProvider *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar5 = ::operator_new(0x310);
  if (pFVar5 != (FTextureMipDataProvider *)0x0) {
    pUVar1 = (this->Texture).field0_0x0.DebugPtr;
    TVar2 = (this->EdgeFixup).field0_0x0;
    FTextureMipDataProvider::FTextureMipDataProvider(pFVar5,(UTexture *)pUVar1,GetMips,Async);
    pFVar5->_padding_ = (longlong)&___7FLandscapeTextureMipEdgeOverrideProvider__6B_;
    pFVar5[0x17].NextTickState = Init;
    pFVar5[0x17].NextTickThread = Async;
    *(undefined4 *)&pFVar5[0x18]._padding_ = 0;
    *(undefined8 *)((longlong)&pFVar5[0x18]._padding_ + 4) = 0xf;
    *(undefined4 *)((longlong)&pFVar5[0x18].ResourceState.field0_0x0 + 4) = 0;
    *(TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_u_0 *)(pFVar5 + 1) = TVar2;
    pFVar5[0x18].ResourceState.field0_0x0 = (FStreamableRenderResourceState_u_0)pUVar1->_padding_;
    return pFVar5;
  }
  return (FTextureMipDataProvider *)0x0;
}

// GetPrivateStaticClass @ 145fc35d0

UClass * __cdecl ULandscapeTextureMipEdgeOverrideFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTextureMipEdgeOverrideFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeTextureMipEdgeOverrideFactory",
               &Z_Registration_Info_UClass_ULandscapeTextureMipEdgeOverrideFactory.InnerSingleton,
               StaticRegisterNativesULandscapeTextureMipEdgeOverrideFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeTextureMipEdgeOverrideFactory>
               ,InternalVTableHelperCtorCaller<ULandscapeTextureMipEdgeOverrideFactory>,local_res8,
               UTextureMipDataProviderFactory::StaticClass,UTexture2D::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureMipEdgeOverrideFactory.InnerSingleton;
}

// Serialize @ 145fc7ec0

void __thiscall
ULandscapeTextureMipEdgeOverrideFactory::Serialize
          (ULandscapeTextureMipEdgeOverrideFactory *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000145fc7ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Texture);
  return;
}

// Serialize @ 145fc7f00

void __thiscall
ULandscapeTextureMipEdgeOverrideFactory::Serialize
          (ULandscapeTextureMipEdgeOverrideFactory *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x150))(pFVar1,&this->Texture);
  return;
}

// SetupEdgeFixup @ 145fc8410

void __thiscall
ULandscapeTextureMipEdgeOverrideFactory::SetupEdgeFixup
          (ULandscapeTextureMipEdgeOverrideFactory *this,
          ULandscapeHeightmapTextureEdgeFixup *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (ULandscapeHeightmapTextureEdgeFixup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->EdgeFixup).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->EdgeFixup).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesULandscapeTextureMipEdgeOverrideFactory @ 145fc8770

void __cdecl
ULandscapeTextureMipEdgeOverrideFactory::
StaticRegisterNativesULandscapeTextureMipEdgeOverrideFactory(void)

{
  return;
}

// WillProvideMipDataWithoutDisk @ 145fcad50

bool __thiscall
ULandscapeTextureMipEdgeOverrideFactory::WillProvideMipDataWithoutDisk
          (ULandscapeTextureMipEdgeOverrideFactory *this)

{
  return true;
}

