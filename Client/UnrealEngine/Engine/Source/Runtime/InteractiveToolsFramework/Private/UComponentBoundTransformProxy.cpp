// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 10

// StaticClass @ 14962be00

UClass * __cdecl UComponentBoundTransformProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentBoundTransformProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ComponentBoundTransformProxy",
               &Z_Registration_Info_UClass_UComponentBoundTransformProxy.InnerSingleton,
               StaticRegisterNativesUComponentBoundTransformProxy,0x1f0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UComponentBoundTransformProxy>,
               InternalVTableHelperCtorCaller<UComponentBoundTransformProxy>,local_res8,
               UTransformProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentBoundTransformProxy.InnerSingleton;
}

// UComponentBoundTransformProxy @ 14963a050

UComponentBoundTransformProxy * __thiscall
UComponentBoundTransformProxy::UComponentBoundTransformProxy
          (UComponentBoundTransformProxy *this,FVTableHelper *param_1)

{
  UTransformProxy::UTransformProxy((UTransformProxy *)this,param_1);
  this->bStoreScaleSeparately = true;
  this->_padding_ = (longlong)&___7UComponentBoundTransformProxy__6B_;
  (this->BoundComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UComponentBoundTransformProxy @ 14963a090

UComponentBoundTransformProxy * __thiscall
UComponentBoundTransformProxy::UComponentBoundTransformProxy
          (UComponentBoundTransformProxy *this,FObjectInitializer *param_1)

{
  UTransformProxy::UTransformProxy((UTransformProxy *)this,param_1);
  this->bStoreScaleSeparately = true;
  this->_padding_ = (longlong)&___7UComponentBoundTransformProxy__6B_;
  (this->BoundComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UComponentBoundTransformProxy @ 14963e650

void __thiscall
UComponentBoundTransformProxy::~UComponentBoundTransformProxy(UComponentBoundTransformProxy *this)

{
  this->_padding_ = (longlong)&___7UComponentBoundTransformProxy__6B_;
  UTransformProxy::~UTransformProxy((UTransformProxy *)this);
  return;
}

// BindToComponent @ 14964b610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UComponentBoundTransformProxy::BindToComponent
          (UComponentBoundTransformProxy *this,USceneComponent *param_1,bool param_2)

{
  undefined1 uVar1;
  USceneComponent *local_res8;
  
  if (param_1 != (USceneComponent *)0x0) {
    local_res8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->BoundComponent).WeakPtr,(FObjectPtr)&local_res8);
    uVar1 = *(undefined1 *)((longlong)&this->_padding_ + 1);
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    (**(code **)(this->_padding_ + 0x2c8))(this,&param_1->ComponentToWorld);
    *(undefined1 *)((longlong)&this->_padding_ + 1) = uVar1;
    this->bStoreScaleSeparately = param_2;
    return;
  }
  this->bStoreScaleSeparately = param_2;
  return;
}

// GetPrivateStaticClass @ 149655dd0

UClass * __cdecl UComponentBoundTransformProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentBoundTransformProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ComponentBoundTransformProxy",
               &Z_Registration_Info_UClass_UComponentBoundTransformProxy.InnerSingleton,
               StaticRegisterNativesUComponentBoundTransformProxy,0x1f0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UComponentBoundTransformProxy>,
               InternalVTableHelperCtorCaller<UComponentBoundTransformProxy>,local_res8,
               UTransformProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentBoundTransformProxy.InnerSingleton;
}

// GetTransform @ 149658a40

TTransform<double> * __thiscall
UComponentBoundTransformProxy::GetTransform
          (UComponentBoundTransformProxy *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  UObject *pUVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  bVar8 = FWeakObjectPtr::IsValid(&(this->BoundComponent).WeakPtr);
  if (bVar8) {
    pUVar9 = FWeakObjectPtr::Get(&(this->BoundComponent).WeakPtr);
    dVar1 = *(double *)&pUVar9[0xc].field_0x18;
    dVar2 = *(double *)&pUVar9[0xc].field_0x20;
    dVar3 = *(double *)(pUVar9 + 0xd);
    dVar4 = *(double *)&pUVar9[0xd].field_0x8;
    dVar5 = *(double *)&pUVar9[0xd].field_0x10;
    dVar6 = *(double *)&pUVar9[0xd].field_0x18;
    dVar7 = *(double *)&pUVar9[0xd].field_0x20;
    uVar14 = *(undefined4 *)(pUVar9 + 0xe);
    uVar15 = *(undefined4 *)&pUVar9[0xe].field_0x4;
    uVar16 = *(undefined4 *)&pUVar9[0xe].field_0x8;
    uVar17 = *(undefined4 *)&pUVar9[0xe].field_0xc;
    uVar10 = *(undefined4 *)&pUVar9[0xe].field_0x10;
    uVar11 = *(undefined4 *)&pUVar9[0xe].field_0x14;
    uVar12 = *(undefined4 *)&pUVar9[0xe].field_0x18;
    uVar13 = *(undefined4 *)&pUVar9[0xe].field_0x1c;
    if (this->bStoreScaleSeparately != false) {
      uVar14 = (undefined4)this->_padding_;
      uVar15 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      uVar16 = (undefined4)this->_padding_;
      uVar17 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      uVar10 = (undefined4)this->_padding_;
      uVar11 = (undefined4)((ulonglong)this->_padding_ >> 0x20);
      uVar12 = 0;
      uVar13 = 0;
    }
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)&pUVar9[0xc].field_0x10;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar5;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar6;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar7;
    *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar14;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar15;
    *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uVar16;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uVar17;
    *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar10;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar11;
    *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar12;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar13;
    return __return_storage_ptr__;
  }
  UTransformProxy::GetTransform((UTransformProxy *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SetTransform @ 149662fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UComponentBoundTransformProxy::SetTransform
          (UComponentBoundTransformProxy *this,TTransform<double> *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  USceneComponent *this_00;
  undefined1 auStack_a8 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar1 = FWeakObjectPtr::IsValid(&(this->BoundComponent).WeakPtr);
  if (bVar1) {
    local_78.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    local_78.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
    local_78.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    local_78.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
    local_78.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    local_78.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
    local_78.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    local_78.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
    local_78.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    local_78.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
    local_78.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    local_78.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
    if (this->bStoreScaleSeparately != false) {
      pUVar2 = FWeakObjectPtr::Get(&(this->BoundComponent).WeakPtr);
      local_78.Scale3D.XY.m128d_f64[0] = *(double *)(pUVar2 + 0xe);
      local_78.Scale3D.XY.m128d_f64[1] = *(double *)&pUVar2[0xe].field_0x8;
      local_78.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar2[0xe].field_0x10;
      local_78.Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(this->BoundComponent).WeakPtr);
    USceneComponent::SetWorldTransform(this_00,&local_78,false,(FHitResult *)0x0,None);
  }
  UTransformProxy::SetTransform((UTransformProxy *)this,param_1);
  return;
}

// StaticRegisterNativesUComponentBoundTransformProxy @ 149664a30

void __cdecl UComponentBoundTransformProxy::StaticRegisterNativesUComponentBoundTransformProxy(void)

{
  return;
}

// UpdateSharedTransform @ 149667000

void __thiscall
UComponentBoundTransformProxy::UpdateSharedTransform(UComponentBoundTransformProxy *this)

{
  longlong *plVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  UObject *pUVar8;
  TTransform<double> *this_00;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  
  bVar7 = FWeakObjectPtr::IsValid(&(this->BoundComponent).WeakPtr);
  if (!bVar7) {
    UTransformProxy::UpdateSharedTransform((UTransformProxy *)this);
    return;
  }
  pUVar8 = FWeakObjectPtr::Get(&(this->BoundComponent).WeakPtr);
  plVar1 = &this->_padding_;
  lVar9 = *(longlong *)&pUVar8[0xc].field_0x18;
  *plVar1 = *(longlong *)&pUVar8[0xc].field_0x10;
  this->_padding_ = lVar9;
  lVar9 = *(longlong *)(pUVar8 + 0xd);
  this->_padding_ = *(longlong *)&pUVar8[0xc].field_0x20;
  this->_padding_ = lVar9;
  lVar9 = *(longlong *)&pUVar8[0xd].field_0x10;
  this->_padding_ = *(longlong *)&pUVar8[0xd].field_0x8;
  this->_padding_ = lVar9;
  lVar9 = *(longlong *)&pUVar8[0xd].field_0x20;
  this->_padding_ = *(longlong *)&pUVar8[0xd].field_0x18;
  this->_padding_ = lVar9;
  lVar9 = *(longlong *)&pUVar8[0xe].field_0x8;
  this->_padding_ = *(longlong *)(pUVar8 + 0xe);
  this->_padding_ = lVar9;
  lVar9 = *(longlong *)&pUVar8[0xe].field_0x18;
  this->_padding_ = *(longlong *)&pUVar8[0xe].field_0x10;
  this->_padding_ = lVar9;
  lVar9 = this->_padding_;
  iVar2 = (int)this->_padding_;
  this_00 = (TTransform<double> *)(lVar9 + 0xe0);
  lVar10 = (longlong)iVar2 * 0x140 + lVar9;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<UTransformProxy::FRelativeObject,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar9 == lVar10) break;
    dVar3 = this_00[-1].Rotation.XY.m128d_f64[1];
    dVar4 = this_00[-1].Rotation.ZW.m128d_f64[0];
    dVar5 = this_00[-1].Rotation.ZW.m128d_f64[1];
    (this_00->Rotation).XY.m128d_f64[0] = this_00[-1].Rotation.XY.m128d_f64[0];
    (this_00->Rotation).XY.m128d_f64[1] = dVar3;
    dVar3 = this_00[-1].Translation.XY.m128d_f64[0];
    dVar6 = this_00[-1].Translation.XY.m128d_f64[1];
    (this_00->Rotation).ZW.m128d_f64[0] = dVar4;
    (this_00->Rotation).ZW.m128d_f64[1] = dVar5;
    dVar4 = this_00[-1].Translation.ZW.m128d_f64[0];
    dVar5 = this_00[-1].Translation.ZW.m128d_f64[1];
    (this_00->Translation).XY.m128d_f64[0] = dVar3;
    (this_00->Translation).XY.m128d_f64[1] = dVar6;
    dVar3 = this_00[-1].Scale3D.XY.m128d_f64[0];
    dVar6 = this_00[-1].Scale3D.XY.m128d_f64[1];
    (this_00->Translation).ZW.m128d_f64[0] = dVar4;
    (this_00->Translation).ZW.m128d_f64[1] = dVar5;
    dVar4 = this_00[-1].Scale3D.ZW.m128d_f64[0];
    dVar5 = this_00[-1].Scale3D.ZW.m128d_f64[1];
    (this_00->Scale3D).XY.m128d_f64[0] = dVar3;
    (this_00->Scale3D).XY.m128d_f64[1] = dVar6;
    (this_00->Scale3D).ZW.m128d_f64[0] = dVar4;
    (this_00->Scale3D).ZW.m128d_f64[1] = dVar5;
    UE::Math::TTransform<double>::SetToRelativeTransform(this_00,(TTransform<double> *)plVar1);
    lVar9 = lVar9 + 0x140;
    this_00 = (TTransform<double> *)&this_00[3].Translation;
  }
  this->_padding_ = *plVar1;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  return;
}

