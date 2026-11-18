// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 41

// StaticClass @ 14db0aec0

UClass * __cdecl ULandscapePatchComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapePatchComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapePatchComponent",
               &Z_Registration_Info_UClass_ULandscapePatchComponent.InnerSingleton,
               StaticRegisterNativesULandscapePatchComponent,0x2b0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapePatchComponent>,
               InternalVTableHelperCtorCaller<ULandscapePatchComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapePatchComponent.InnerSingleton;
}

// ULandscapePatchComponent @ 14db12e20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULandscapePatchComponent * __thiscall
ULandscapePatchComponent::ULandscapePatchComponent
          (ULandscapePatchComponent *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this_00 = &(this->Landscape).SoftObjectPtr.field_0x18;
  (this->EditLayerGuid).A = 0;
  (this->EditLayerGuid).B = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->EditLayerGuid).C = 0;
  (this->EditLayerGuid).D = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7ULandscapePatchComponent__6B_;
  this->Priority = 1000.0;
  this->PriorityInitialization = AcquireHighest;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Landscape).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Landscape).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Landscape).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Landscape).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->Landscape).SoftObjectPtr,(FObjectPtr)&local_res8);
  this->bIsEnabled = true;
  this->bWasCopy = false;
  return this;
}

// ULandscapePatchComponent @ 14db12ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULandscapePatchComponent * __thiscall
ULandscapePatchComponent::ULandscapePatchComponent
          (ULandscapePatchComponent *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this_00 = &(this->Landscape).SoftObjectPtr.field_0x18;
  (this->EditLayerGuid).A = 0;
  (this->EditLayerGuid).B = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->EditLayerGuid).C = 0;
  (this->EditLayerGuid).D = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7ULandscapePatchComponent__6B_;
  this->Priority = 1000.0;
  this->PriorityInitialization = AcquireHighest;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Landscape).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Landscape).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Landscape).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Landscape).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->Landscape).SoftObjectPtr,(FObjectPtr)&local_res8);
  this->field_0x1aa = this->field_0x1aa | 8;
  this->bIsEnabled = true;
  this->bWasCopy = false;
  return this;
}

// ~ULandscapePatchComponent @ 14db134d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULandscapePatchComponent::~ULandscapePatchComponent(ULandscapePatchComponent *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7ULandscapePatchComponent__6B_;
  pvVar1 = *(void **)&(this->Landscape).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->field_0x250 = &___7ILandscapeEditLayerRenderer__6B_;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// CanAffectHeightmap @ 14db15500

bool __thiscall ULandscapePatchComponent::CanAffectHeightmap(ULandscapePatchComponent *this)

{
  return false;
}

// CanAffectVisibilityLayer @ 14db15520

bool __thiscall ULandscapePatchComponent::CanAffectVisibilityLayer(ULandscapePatchComponent *this)

{
  return false;
}

// CanAffectWeightmap @ 14db15530

bool __thiscall ULandscapePatchComponent::CanAffectWeightmap(ULandscapePatchComponent *this)

{
  return false;
}

// CanAffectWeightmapLayer @ 14db15540

bool __thiscall
ULandscapePatchComponent::CanAffectWeightmapLayer(ULandscapePatchComponent *this,FName *param_1)

{
  return false;
}

// GetFullNameHash @ 14db183b0

uint __thiscall ULandscapePatchComponent::GetFullNameHash(ULandscapePatchComponent *this)

{
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pFVar3 = UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None)
  ;
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return uVar2;
}

// GetLandscapeHeightmapCoordsToWorld @ 14db188f0

TTransform<double> * __thiscall
ULandscapePatchComponent::GetLandscapeHeightmapCoordsToWorld
          (ULandscapePatchComponent *this,TTransform<double> *__return_storage_ptr__)

{
  ALandscape *pAVar1;
  
  pAVar1 = TSoftObjectPtr<ALandscape>::Get(&this->Landscape);
  if (pAVar1 == (ALandscape *)0x0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return __return_storage_ptr__;
  }
  pAVar1 = TSoftObjectPtr<ALandscape>::Get(&this->Landscape);
  if (*(longlong *)&pAVar1->field_0x1b8 != 0) {
    UE::Landscape::PatchUtil::GetHeightmapToWorld
              (__return_storage_ptr__,
               (TTransform<double> *)(*(longlong *)&pAVar1->field_0x1b8 + 0x1f0));
    return __return_storage_ptr__;
  }
  UE::Landscape::PatchUtil::GetHeightmapToWorld
            (__return_storage_ptr__,&UE::Math::TTransform<double>::Identity);
  return __return_storage_ptr__;
}

// GetLayerOptions @ 14db189c0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapePatchComponent::GetLayerOptions
          (ULandscapePatchComponent *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  longlong lVar1;
  FString local_18;
  
  _Src.Data = LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.AllocatorInstance.Data;
  lVar1 = (longlong)LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.ArrayNum;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.ArrayNum;
  if (LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.ArrayNum,0,
               (ForAnyElementType *)&local_18,
               LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src.Data,lVar1 * 2);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FString,FString,int>((__return_storage_ptr__->AllocatorInstance).Data,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPatchManager @ 14db18ab0

ADEPRECATED_LandscapePatchManager * __thiscall
ULandscapePatchComponent::GetPatchManager(ULandscapePatchComponent *this)

{
  return (ADEPRECATED_LandscapePatchManager *)0x0;
}

// GetPrivateStaticClass @ 14db18e30

UClass * __cdecl ULandscapePatchComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapePatchComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapePatchComponent",
               &Z_Registration_Info_UClass_ULandscapePatchComponent.InnerSingleton,
               StaticRegisterNativesULandscapePatchComponent,0x2b0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapePatchComponent>,
               InternalVTableHelperCtorCaller<ULandscapePatchComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapePatchComponent.InnerSingleton;
}

// GetRenderDependencies @ 14db19290

void __thiscall
ULandscapePatchComponent::GetRenderDependencies
          (ULandscapePatchComponent *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  return;
}

// IsEditorOnly @ 14db1b6a0

bool __thiscall ULandscapePatchComponent::IsEditorOnly(ULandscapePatchComponent *this)

{
  return true;
}

// IsEnabled @ 14db1b6b0

bool __thiscall ULandscapePatchComponent::IsEnabled(ULandscapePatchComponent *this)

{
  return this->bIsEnabled;
}

// IsPatchInWorld @ 14db1b6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULandscapePatchComponent::IsPatchInWorld(ULandscapePatchComponent *this)

{
  bool bVar1;
  UWorld *pUVar2;
  
  pUVar2 = *(UWorld **)&this->field_0xb0;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((((!bVar1) && ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0)) && (pUVar2 != (UWorld *)0x0)) &&
     ((((uint)pUVar2->_padding_ >> 0x1e & 1) == 0 && ((pUVar2->WorldType).Value == '\x02')))) {
    return true;
  }
  return false;
}

// NeedsLoadForClient @ 14db1ba90

bool __thiscall ULandscapePatchComponent::NeedsLoadForClient(ULandscapePatchComponent *this)

{
  return false;
}

// NeedsLoadForServer @ 14db1bab0

bool __thiscall ULandscapePatchComponent::NeedsLoadForServer(ULandscapePatchComponent *this)

{
  return false;
}

// RequestLandscapeUpdate @ 14db1be50

void __thiscall
ULandscapePatchComponent::RequestLandscapeUpdate(ULandscapePatchComponent *this,bool param_1)

{
  return;
}

// SetEditLayerGuid @ 14db1bf20

void __thiscall
ULandscapePatchComponent::SetEditLayerGuid(ULandscapePatchComponent *this,FGuid *param_1)

{
  return;
}

// SetIsEnabled @ 14db1c0b0

void __thiscall ULandscapePatchComponent::SetIsEnabled(ULandscapePatchComponent *this,bool param_1)

{
  if (param_1 != this->bIsEnabled) {
    this->bIsEnabled = param_1;
  }
  return;
}

// SetLandscape @ 14db1c0d0

void __thiscall
ULandscapePatchComponent::SetLandscape(ULandscapePatchComponent *this,ALandscape *param_1)

{
  return;
}

// SetPatchManager @ 14db1c0e0

void __thiscall
ULandscapePatchComponent::SetPatchManager
          (ULandscapePatchComponent *this,ADEPRECATED_LandscapePatchManager *param_1)

{
  return;
}

// SetPriority @ 14db1c0f0

void __thiscall ULandscapePatchComponent::SetPriority(ULandscapePatchComponent *this,double param_1)

{
  return;
}

// StaticRegisterNativesULandscapePatchComponent @ 14db1d500

void __cdecl ULandscapePatchComponent::StaticRegisterNativesULandscapePatchComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_ULandscapePatchComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 14db1d960

UObject * __thiscall ULandscapePatchComponent::_getUObject(ULandscapePatchComponent *this)

{
  return (UObject *)&this[-1].Landscape.SoftObjectPtr.field_0x10;
}

// _getUObject`adjustor{552}' @ 14db1d96c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   ULandscapePatchComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall
ULandscapePatchComponent::_getUObject_adjustor_552__(ULandscapePatchComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((ULandscapePatchComponent *)&this[-1].field_0x88);
  return (UObject *)pUVar1;
}

// execGetEditLayerGuid @ 14db1ddc0

void __cdecl
ULandscapePatchComponent::execGetEditLayerGuid(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0xf].field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0xf);
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetLandscape @ 14db1e110

void __cdecl
ULandscapePatchComponent::execGetLandscape(UObject *param_1,FFrame *param_2,void *param_3)

{
  ALandscape *pAVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar1 = TSoftObjectPtr<ALandscape>::Get((TSoftObjectPtr<ALandscape> *)&param_1[0xf].field_0x20);
  *(ALandscape **)param_3 = pAVar1;
  return;
}

// execGetLandscapeHeightmapCoordsToWorld @ 14db1e150

void __cdecl
ULandscapePatchComponent::execGetLandscapeHeightmapCoordsToWorld
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ALandscape *pAVar1;
  TTransform<double> *pTVar2;
  TTransform<double> local_68;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar1 = TSoftObjectPtr<ALandscape>::Get((TSoftObjectPtr<ALandscape> *)&param_1[0xf].field_0x20);
  if (pAVar1 == (ALandscape *)0x0) {
    local_68.Rotation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    local_68.Rotation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    local_68.Rotation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    local_68.Rotation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    local_68.Translation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    local_68.Translation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    local_68.Translation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    local_68.Translation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    local_68.Translation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    local_68.Translation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    local_68.Scale3D.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    local_68.Scale3D.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    local_68.Scale3D.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    local_68.Scale3D.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    local_68.Scale3D.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_68.Scale3D.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else {
    pAVar1 = TSoftObjectPtr<ALandscape>::Get((TSoftObjectPtr<ALandscape> *)&param_1[0xf].field_0x20)
    ;
    if (*(longlong *)&pAVar1->field_0x1b8 == 0) {
      pTVar2 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar2 = (TTransform<double> *)(*(longlong *)&pAVar1->field_0x1b8 + 0x1f0);
    }
    UE::Landscape::PatchUtil::GetHeightmapToWorld(&local_68,pTVar2);
  }
  *(undefined4 *)param_3 = local_68.Rotation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_68.Rotation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_68.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_68.Rotation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_68.Rotation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_68.Rotation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_68.Rotation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_68.Rotation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_68.Translation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_68.Translation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x28) = local_68.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x2c) = local_68.Translation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_68.Translation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_68.Translation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x38) = local_68.Translation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x3c) = local_68.Translation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x40) = local_68.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_68.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x48) = local_68.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x4c) = local_68.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x50) = local_68.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x54) = local_68.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x58) = local_68.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x5c) = local_68.Scale3D.ZW.m128d_f64[1]._4_4_;
  return;
}

// execGetLayerOptions @ 14db1e230

void __cdecl
ULandscapePatchComponent::execGetLayerOptions(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  ForAnyElementType FVar2;
  int iVar3;
  longlong lVar4;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2 = LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.AllocatorInstance;
  lVar4 = (longlong)LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.ArrayNum;
  local_18.Data.ArrayNum = LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.ArrayNum;
  if (LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.ArrayNum,0,
               (ForAnyElementType *)&local_18,
               LandscapePatchComponentLocals::NullDetailPanelLayerName.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,FVar2.Data,lVar4 * 2);
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_28,1,&local_1c);
  ConstructItems<FString,FString,int>(local_28.Data,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_28) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    iVar3 = local_20;
    FVar2.Data = local_28.Data;
    piVar1 = (int *)((longlong)param_3 + 0xc);
    *(int *)((longlong)param_3 + 8) = local_20;
    if ((local_20 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_20,*piVar1,param_3,local_20,piVar1);
      ConstructItems<FString,FString,int>(*(void **)param_3,(FString *)FVar2.Data,iVar3);
    }
  }
  DestructItems<FString,int>((FString *)local_28.Data,local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// execGetPatchManager @ 14db1e3c0

void __cdecl
ULandscapePatchComponent::execGetPatchManager(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x680))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetPriority @ 14db1e490

void __cdecl
ULandscapePatchComponent::execGetPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xf].field_0x18;
  return;
}

// execIsEnabled @ 14db1e7a0

void __cdecl ULandscapePatchComponent::execIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x668))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execRequestLandscapeUpdate @ 14db1e9f0

void __cdecl
ULandscapePatchComponent::execRequestLandscapeUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetEditLayerGuid @ 14db1eba0

void __cdecl
ULandscapePatchComponent::execSetEditLayerGuid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetIsEnabled @ 14db1f160

void __cdecl
ULandscapePatchComponent::execSetIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res8[0] != 0) != (bool)param_1[0x10].field_0x20) {
    param_1[0x10].field_0x20 = local_res8[0] != 0;
  }
  return;
}

// execSetLandscape @ 14db1f200

void __cdecl
ULandscapePatchComponent::execSetLandscape(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x670))(param_1,local_res8);
  return;
}

// execSetPatchManager @ 14db1f290

void __cdecl
ULandscapePatchComponent::execSetPatchManager(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x678))(param_1,local_res8);
  return;
}

// execSetPriority @ 14db1f320

void __cdecl
ULandscapePatchComponent::execSetPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

