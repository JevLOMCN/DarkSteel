// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 9

// StaticClass @ 145ef0270

UClass * __cdecl ULandscapeMeshProxyComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeMeshProxyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeMeshProxyComponent",
               &Z_Registration_Info_UClass_ULandscapeMeshProxyComponent.InnerSingleton,
               StaticRegisterNativesULandscapeMeshProxyComponent,0x6c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeMeshProxyComponent>,
               InternalVTableHelperCtorCaller<ULandscapeMeshProxyComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeMeshProxyComponent.InnerSingleton;
}

// ULandscapeMeshProxyComponent @ 145ef3d00

ULandscapeMeshProxyComponent * __thiscall
ULandscapeMeshProxyComponent::ULandscapeMeshProxyComponent
          (ULandscapeMeshProxyComponent *this,FVTableHelper *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->LandscapeGuid).A = 0;
  (this->LandscapeGuid).B = 0;
  (this->LandscapeGuid).C = 0;
  (this->LandscapeGuid).D = 0;
  (this->ProxyComponentBases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProxyComponentBases).ArrayNum = 0;
  (this->ProxyComponentBases).ArrayMax = 0;
  (this->ProxyComponentCentersObjectSpace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProxyComponentCentersObjectSpace).ArrayNum = 0;
  (this->ProxyComponentCentersObjectSpace).ArrayMax = 0;
  return this;
}

// ~ULandscapeMeshProxyComponent @ 145ef4400

void __thiscall
ULandscapeMeshProxyComponent::~ULandscapeMeshProxyComponent(ULandscapeMeshProxyComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->ProxyComponentCentersObjectSpace).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProxyComponentBases).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  return;
}

// GetPrivateStaticClass @ 145ef5ad0

UClass * __cdecl ULandscapeMeshProxyComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeMeshProxyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeMeshProxyComponent",
               &Z_Registration_Info_UClass_ULandscapeMeshProxyComponent.InnerSingleton,
               StaticRegisterNativesULandscapeMeshProxyComponent,0x6c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeMeshProxyComponent>,
               InternalVTableHelperCtorCaller<ULandscapeMeshProxyComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeMeshProxyComponent.InnerSingleton;
}

// StaticRegisterNativesULandscapeMeshProxyComponent @ 145ef60a0

void __cdecl ULandscapeMeshProxyComponent::StaticRegisterNativesULandscapeMeshProxyComponent(void)

{
  return;
}

// ULandscapeMeshProxyComponent @ 145f03090

ULandscapeMeshProxyComponent * __thiscall
ULandscapeMeshProxyComponent::ULandscapeMeshProxyComponent
          (ULandscapeMeshProxyComponent *this,FObjectInitializer *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->LandscapeGuid).A = 0;
  (this->LandscapeGuid).B = 0;
  (this->LandscapeGuid).C = 0;
  (this->LandscapeGuid).D = 0;
  (this->ProxyComponentBases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProxyComponentBases).ArrayNum = 0;
  (this->ProxyComponentBases).ArrayMax = 0;
  (this->ProxyComponentCentersObjectSpace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProxyComponentCentersObjectSpace).ArrayNum = 0;
  (this->ProxyComponentCentersObjectSpace).ArrayMax = 0;
  return this;
}

// InitializeForLandscape @ 145f147b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeMeshProxyComponent::InitializeForLandscape
          (ULandscapeMeshProxyComponent *this,ALandscapeProxy *param_1,schar param_2)

{
  int *piVar1;
  double *pdVar2;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  ulonglong uVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  schar sVar19;
  int iVar20;
  undefined8 *puVar21;
  char cVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar62;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  double dVar74;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar81;
  undefined4 uVar83;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar82;
  undefined4 uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar100;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  double dVar101;
  double dVar102;
  double dVar108;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined4 uVar113;
  undefined4 uVar114;
  undefined4 uVar115;
  undefined4 uVar116;
  undefined4 uVar117;
  undefined4 uVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 local_res10 [8];
  schar local_res18;
  int local_res20;
  int iStackX_24;
  undefined8 local_298;
  double local_290;
  double dStack_288;
  double local_280;
  FScriptContainerElement *local_278;
  TTransform<double> local_268;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined1 local_1d0 [16];
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_108 [16];
  
  local_res18 = param_2;
  puVar21 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_,local_158);
  uVar15 = *puVar21;
  uVar16 = puVar21[1];
  (this->LandscapeGuid).A = (int)uVar15;
  (this->LandscapeGuid).B = (int)((ulonglong)uVar15 >> 0x20);
  (this->LandscapeGuid).C = (int)uVar16;
  (this->LandscapeGuid).D = (int)((ulonglong)uVar16 >> 0x20);
  this->LODGroupKey = param_1->LODGroupKey;
  UE::Math::TTransform<double>::Inverse((TTransform<double> *)&this->_padding_,&local_268);
  pFVar24 = (param_1->LandscapeComponents).AllocatorInstance.Data;
  iVar23 = (param_1->LandscapeComponents).ArrayNum;
  local_278 = pFVar24 + (longlong)iVar23 * 8;
  bVar17 = true;
  uVar79 = local_268.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar83 = local_268.Scale3D.ZW.m128d_f64[0]._4_4_;
  uVar113 = local_268.Scale3D.ZW.m128d_f64[1]._0_4_;
  uVar114 = local_268.Scale3D.ZW.m128d_f64[1]._4_4_;
  uVar115 = local_268.Scale3D.XY.m128d_f64[0]._0_4_;
  uVar116 = local_268.Scale3D.XY.m128d_f64[0]._4_4_;
  uVar117 = local_268.Scale3D.XY.m128d_f64[1]._0_4_;
  uVar118 = local_268.Scale3D.XY.m128d_f64[1]._4_4_;
  while( true ) {
    pFVar7 = local_278;
    if ((param_1->LandscapeComponents).ArrayNum != iVar23) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar24 == pFVar7) break;
    plVar6 = *(longlong **)pFVar24;
    if (plVar6 != (longlong *)0x0) {
      pdVar2 = (double *)(plVar6 + 0x46);
      dVar14 = local_268.Rotation.XY.m128d_f64[1];
      dVar13 = local_268.Rotation.XY.m128d_f64[0];
      dVar11 = local_268.Rotation.ZW.m128d_f64[0];
      dVar12 = local_268.Rotation.ZW.m128d_f64[1];
      if (bVar17) {
        iVar20 = (int)plVar6[0xaa] + 1;
        bVar17 = false;
        this->ComponentResolution = iVar20;
        auVar75 = *(undefined1 (*) [16])(plVar6 + 0x40);
        dVar73 = auVar75._0_8_;
        auVar111 = *(undefined1 (*) [16])(plVar6 + 0x3e);
        dVar74 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z * (double)plVar6[0x48];
        dVar82 = (double)plVar6[0x49] * 0.0;
        dVar100 = (double)plVar6[0x41];
        dVar101 = *pdVar2 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
        dVar108 = (double)plVar6[0x47] * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
        auVar25 = *(undefined1 (*) [16])(plVar6 + 0x3e);
        auVar63 = blendpd(auVar25,auVar75,2);
        auVar122._8_4_ = SUB84(dVar108,0);
        auVar122._0_8_ = dVar101;
        uVar79 = (undefined4)((ulonglong)dVar108 >> 0x20);
        auVar122._12_4_ = uVar79;
        dVar62 = auVar75._8_8_;
        auVar123._0_8_ = auVar122._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar101;
        auVar123._8_8_ = dVar74 * auVar25._8_8_ - dVar73 * dVar108;
        auVar64._8_4_ = SUB84(dVar108,0);
        auVar64._0_8_ = dVar101;
        auVar64._12_4_ = uVar79;
        auVar25._8_4_ = SUB84(dVar82,0);
        auVar25._0_8_ = dVar74;
        auVar25._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
        auVar25 = blendpd(auVar64,auVar25,2);
        auVar26._0_8_ = auVar25._0_8_ * dVar73 - auVar63._0_8_ * dVar74;
        auVar26._8_8_ = auVar25._8_8_ * dVar62 - auVar63._8_8_ * dVar82;
        auVar25 = blendpd(auVar123,auVar26,2);
        dVar81 = auVar123._8_8_ + auVar123._8_8_;
        dVar102 = auVar26._0_8_ + auVar26._0_8_;
        uVar79 = (undefined4)((ulonglong)dVar102 >> 0x20);
        auVar124._0_8_ = auVar25._0_8_ + auVar25._0_8_;
        auVar124._8_8_ = auVar25._8_8_ + auVar25._8_8_;
        auVar85._8_4_ = SUB84(dVar102,0);
        auVar85._0_8_ = dVar81;
        auVar85._12_4_ = uVar79;
        auVar46._8_4_ = SUB84(dVar102,0);
        auVar46._0_8_ = dVar81;
        auVar46._12_4_ = uVar79;
        auVar25 = blendpd(auVar46,auVar124,2);
        auVar86._0_8_ = auVar85._8_8_ * auVar111._0_8_ - auVar111._8_8_ * dVar81;
        auVar86._8_8_ = auVar124._0_8_ * auVar111._8_8_ - dVar73 * dVar102;
        auVar75 = blendpd(auVar111,auVar75,2);
        auVar47._0_8_ = auVar25._0_8_ * dVar73 - auVar75._0_8_ * auVar124._0_8_;
        auVar47._8_8_ = auVar25._8_8_ * dVar62 - auVar75._8_8_ * auVar124._8_8_;
        auVar111._8_4_ = SUB84(auVar86._8_8_,0);
        auVar111._0_8_ = auVar86._0_8_;
        auVar111._12_4_ = (int)((ulonglong)auVar86._8_8_ >> 0x20);
        dVar82 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z * (double)plVar6[0x48];
        dVar73 = (double)plVar6[0x49] * 0.0;
        local_1b8 = dVar81 * dVar100 + dVar101 + auVar111._8_8_;
        dStack_1b0 = dVar102 * dVar100 + dVar108 + auVar47._0_8_;
        local_178 = (double)iVar20;
        dVar102 = *pdVar2 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
        dVar101 = (double)plVar6[0x47] * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
        auVar75 = *(undefined1 (*) [16])(plVar6 + 0x3e);
        auVar25 = blendpd(auVar86,auVar47,2);
        auVar111 = *(undefined1 (*) [16])(plVar6 + 0x40);
        dVar81 = auVar111._0_8_;
        local_1d8 = auVar124._0_8_ * dVar100 + dVar74 + auVar25._0_8_;
        local_1e8._8_4_ = SUB84(dStack_1b0,0);
        local_1e8._0_8_ = local_1b8;
        local_1e8._12_4_ = (int)((ulonglong)dStack_1b0 >> 0x20);
        auVar119._8_4_ = SUB84(dVar101,0);
        auVar119._0_8_ = dVar102;
        uVar79 = (undefined4)((ulonglong)dVar101 >> 0x20);
        auVar119._12_4_ = uVar79;
        local_1b8 = local_1b8 * local_178;
        dStack_1b0 = dStack_1b0 * local_178;
        local_1a8 = local_1d8 * local_178;
        auVar25 = *(undefined1 (*) [16])(plVar6 + 0x3e);
        auVar120._0_8_ = auVar119._8_8_ * auVar75._0_8_ - auVar75._8_8_ * dVar102;
        auVar120._8_8_ = dVar82 * auVar75._8_8_ - dVar81 * dVar101;
        auVar64 = blendpd(auVar75,auVar111,2);
        auVar63._8_4_ = SUB84(dVar101,0);
        auVar63._0_8_ = dVar102;
        auVar63._12_4_ = uVar79;
        auVar75._8_4_ = SUB84(dVar73,0);
        auVar75._0_8_ = dVar82;
        auVar75._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
        auVar75 = blendpd(auVar63,auVar75,2);
        auVar27._0_8_ = auVar75._0_8_ * dVar81 - auVar64._0_8_ * dVar82;
        auVar27._8_8_ = auVar75._8_8_ * auVar111._8_8_ - auVar64._8_8_ * dVar73;
        auVar75 = blendpd(auVar120,auVar27,2);
        dVar74 = auVar120._8_8_ + auVar120._8_8_;
        dVar73 = auVar27._0_8_ + auVar27._0_8_;
        uVar79 = (undefined4)((ulonglong)dVar73 >> 0x20);
        auVar121._0_8_ = auVar75._0_8_ + auVar75._0_8_;
        auVar121._8_8_ = auVar75._8_8_ + auVar75._8_8_;
        auVar87._8_4_ = SUB84(dVar73,0);
        auVar87._0_8_ = dVar74;
        auVar87._12_4_ = uVar79;
        auVar48._8_4_ = SUB84(dVar73,0);
        auVar48._0_8_ = dVar74;
        auVar48._12_4_ = uVar79;
        auVar75 = blendpd(auVar48,auVar121,2);
        auVar88._0_8_ = auVar87._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar74;
        auVar88._8_8_ = auVar121._0_8_ * auVar25._8_8_ - dVar81 * dVar73;
        auVar25 = blendpd(auVar25,auVar111,2);
        auVar28._8_4_ = SUB84(auVar88._8_8_,0);
        auVar28._0_8_ = auVar88._0_8_;
        auVar28._12_4_ = (int)((ulonglong)auVar88._8_8_ >> 0x20);
        auVar49._0_8_ = auVar75._0_8_ * dVar81 - auVar25._0_8_ * auVar121._0_8_;
        auVar49._8_8_ = auVar75._8_8_ * auVar111._8_8_ - auVar25._8_8_ * auVar121._8_8_;
        auVar75 = blendpd(auVar88,auVar49,2);
        local_188 = dVar74 * dVar62 + dVar102 + auVar28._8_8_;
        dStack_180 = dVar73 * dVar62 + dVar101 + auVar49._0_8_;
        auVar103._0_8_ =
             local_1a8 *
             (double)CONCAT44(local_268.Scale3D.ZW.m128d_f64[0]._4_4_,
                              local_268.Scale3D.ZW.m128d_f64[0]._0_4_);
        auVar103._8_8_ =
             (double)CONCAT44(local_268.Scale3D.ZW.m128d_f64[1]._4_4_,
                              local_268.Scale3D.ZW.m128d_f64[1]._0_4_) * 0.0;
        local_1c0 = auVar121._0_8_ * dVar62 + dVar82 + auVar75._0_8_;
        dVar102 = (double)CONCAT44(local_268.Scale3D.XY.m128d_f64[0]._4_4_,
                                   local_268.Scale3D.XY.m128d_f64[0]._0_4_) * local_1b8;
        dVar100 = (double)CONCAT44(local_268.Scale3D.XY.m128d_f64[1]._4_4_,
                                   local_268.Scale3D.XY.m128d_f64[1]._0_4_) * dStack_1b0;
        local_1d0._8_4_ = SUB84(dStack_180,0);
        local_1d0._0_8_ = local_188;
        local_1d0._12_4_ = (int)((ulonglong)dStack_180 >> 0x20);
        local_188 = local_188 * local_178;
        auVar89._8_4_ = SUB84(dVar100,0);
        auVar89._0_8_ = dVar102;
        uVar79 = (undefined4)((ulonglong)dVar100 >> 0x20);
        auVar89._12_4_ = uVar79;
        auVar50._8_4_ = SUB84(dVar100,0);
        auVar50._0_8_ = dVar102;
        auVar50._12_4_ = uVar79;
        dStack_180 = dStack_180 * local_178;
        auVar75 = blendpd(auVar50,auVar103,2);
        local_178 = local_1c0 * local_178;
        auVar29._8_4_ = local_268.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar29._0_8_ = dVar14;
        auVar29._12_4_ = local_268.Rotation.ZW.m128d_f64[0]._4_4_;
        auVar111 = blendpd((undefined1  [16])local_268.Rotation.XY.m128d_f64,
                           (undefined1  [16])local_268.Rotation.ZW.m128d_f64,2);
        auVar90._0_8_ = auVar89._8_8_ * dVar13 - dVar14 * dVar102;
        auVar90._8_8_ = auVar103._0_8_ * dVar14 - auVar29._8_8_ * dVar100;
        dVar74 = auVar111._0_8_;
        dVar82 = auVar111._8_8_;
        auVar76._8_4_ = SUB84(auVar90._8_8_,0);
        auVar76._0_8_ = auVar90._0_8_;
        auVar76._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
        auVar51._0_8_ = auVar75._0_8_ * dVar11 - dVar74 * auVar103._0_8_;
        auVar51._8_8_ = auVar75._8_8_ * dVar12 - dVar82 * auVar103._8_8_;
        dVar73 = auVar76._8_8_ + auVar76._8_8_;
        dVar81 = auVar51._0_8_ + auVar51._0_8_;
        auVar75 = blendpd(auVar90,auVar51,2);
        auVar91._0_8_ = auVar75._0_8_ + auVar75._0_8_;
        auVar91._8_8_ = auVar75._8_8_ + auVar75._8_8_;
        uVar79 = SUB84(dVar81,0);
        auVar65._8_4_ = uVar79;
        auVar65._0_8_ = dVar73;
        uVar83 = (undefined4)((ulonglong)dVar81 >> 0x20);
        auVar65._12_4_ = uVar83;
        auVar30._8_4_ = uVar79;
        auVar30._0_8_ = dVar73;
        auVar30._12_4_ = uVar83;
        auVar66._0_8_ = auVar65._8_8_ * dVar13 - dVar73 * dVar14;
        auVar66._8_8_ = auVar91._0_8_ * dVar14 - auVar30._8_8_ * dVar11;
        auVar31._8_4_ = SUB84(auVar91._8_8_,0);
        auVar31._0_8_ = auVar91._0_8_;
        auVar31._12_4_ = (int)((ulonglong)auVar91._8_8_ >> 0x20);
        auVar52._8_4_ = uVar79;
        auVar52._0_8_ = dVar73;
        auVar52._12_4_ = uVar83;
        auVar75 = blendpd(auVar52,auVar91,2);
        auVar53._0_8_ = auVar75._0_8_ * dVar11 - auVar91._0_8_ * dVar74;
        auVar53._8_8_ = auVar75._8_8_ * dVar12 - auVar31._8_8_ * dVar82;
        auVar32._8_4_ = SUB84(auVar66._8_8_,0);
        auVar32._0_8_ = auVar66._0_8_;
        auVar32._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
        auVar104._0_8_ =
             local_178 *
             (double)CONCAT44(local_268.Scale3D.ZW.m128d_f64[0]._4_4_,
                              local_268.Scale3D.ZW.m128d_f64[0]._0_4_);
        auVar104._8_8_ =
             (double)CONCAT44(local_268.Scale3D.ZW.m128d_f64[1]._4_4_,
                              local_268.Scale3D.ZW.m128d_f64[1]._0_4_) * 0.0;
        auVar75 = blendpd(auVar66,auVar53,2);
        local_190 = auVar91._0_8_ * dVar12 + auVar103._0_8_ + auVar75._0_8_;
        local_1a0 = dVar73 * dVar12 + dVar102 + auVar32._8_8_;
        dStack_198 = dVar81 * dVar12 + dVar100 + auVar53._0_8_;
        (this->ComponentXVectorObjectSpace).field0_0x0._s_0.X = local_1a0;
        (this->ComponentXVectorObjectSpace).field0_0x0._s_0.Y = dStack_198;
        (this->ComponentXVectorObjectSpace).field0_0x0._s_0.Z = local_190;
        dVar102 = local_188 *
                  (double)CONCAT44(local_268.Scale3D.XY.m128d_f64[0]._4_4_,
                                   local_268.Scale3D.XY.m128d_f64[0]._0_4_);
        dVar100 = dStack_180 *
                  (double)CONCAT44(local_268.Scale3D.XY.m128d_f64[1]._4_4_,
                                   local_268.Scale3D.XY.m128d_f64[1]._0_4_);
        uVar79 = SUB84(dVar100,0);
        auVar92._8_4_ = uVar79;
        auVar92._0_8_ = dVar102;
        uVar83 = (undefined4)((ulonglong)dVar100 >> 0x20);
        auVar92._12_4_ = uVar83;
        auVar33._8_4_ = uVar79;
        auVar33._0_8_ = dVar102;
        auVar33._12_4_ = uVar83;
        auVar54._8_4_ = uVar79;
        auVar54._0_8_ = dVar102;
        auVar54._12_4_ = uVar83;
        auVar75 = blendpd(auVar54,auVar104,2);
        auVar93._0_8_ = auVar92._8_8_ * dVar13 - dVar102 * dVar14;
        auVar93._8_8_ = auVar104._0_8_ * dVar14 - auVar33._8_8_ * dVar11;
        auVar77._8_4_ = SUB84(auVar93._8_8_,0);
        auVar77._0_8_ = auVar93._0_8_;
        auVar77._12_4_ = (int)((ulonglong)auVar93._8_8_ >> 0x20);
        auVar34._8_4_ = SUB84(auVar104._8_8_,0);
        auVar34._0_8_ = auVar104._0_8_;
        auVar34._12_4_ = (int)((ulonglong)auVar104._8_8_ >> 0x20);
        auVar55._0_8_ = auVar75._0_8_ * dVar11 - auVar104._0_8_ * dVar74;
        auVar55._8_8_ = auVar75._8_8_ * dVar12 - auVar34._8_8_ * dVar82;
        auVar75 = blendpd(auVar93,auVar55,2);
        dVar73 = auVar77._8_8_ + auVar77._8_8_;
        dVar81 = auVar55._0_8_ + auVar55._0_8_;
        auVar94._0_8_ = auVar75._0_8_ + auVar75._0_8_;
        auVar94._8_8_ = auVar75._8_8_ + auVar75._8_8_;
        uVar79 = SUB84(dVar81,0);
        auVar67._8_4_ = uVar79;
        auVar67._0_8_ = dVar73;
        uVar83 = (undefined4)((ulonglong)dVar81 >> 0x20);
        auVar67._12_4_ = uVar83;
        auVar35._8_4_ = uVar79;
        auVar35._0_8_ = dVar73;
        auVar35._12_4_ = uVar83;
        auVar56._8_4_ = uVar79;
        auVar56._0_8_ = dVar73;
        auVar56._12_4_ = uVar83;
        auVar75 = blendpd(auVar56,auVar94,2);
        auVar68._0_8_ = auVar67._8_8_ * dVar13 - dVar73 * dVar14;
        auVar68._8_8_ = auVar94._0_8_ * dVar14 - auVar35._8_8_ * dVar11;
        auVar36._8_4_ = SUB84(auVar94._8_8_,0);
        auVar36._0_8_ = auVar94._0_8_;
        auVar36._12_4_ = (int)((ulonglong)auVar94._8_8_ >> 0x20);
        auVar57._0_8_ = auVar75._0_8_ * dVar11 - auVar94._0_8_ * dVar74;
        auVar57._8_8_ = auVar75._8_8_ * dVar12 - auVar36._8_8_ * dVar82;
        auVar37._8_4_ = SUB84(auVar68._8_8_,0);
        auVar37._0_8_ = auVar68._0_8_;
        auVar37._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
        local_208 = dVar73 * dVar12 + dVar102 + auVar37._8_8_;
        dStack_200 = dVar81 * dVar12 + dVar100 + auVar57._0_8_;
        auVar75 = blendpd(auVar68,auVar57,2);
        local_1f8 = auVar94._0_8_ * dVar12 + auVar104._0_8_ + auVar75._0_8_;
        (this->ComponentYVectorObjectSpace).field0_0x0._s_0.X = local_208;
        (this->ComponentYVectorObjectSpace).field0_0x0._s_0.Y = dStack_200;
        (this->ComponentYVectorObjectSpace).field0_0x0._s_0.Z = local_1f8;
        uVar79 = local_268.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar83 = local_268.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar113 = local_268.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar114 = local_268.Scale3D.ZW.m128d_f64[1]._4_4_;
        uVar115 = local_268.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar116 = local_268.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar117 = local_268.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar118 = local_268.Scale3D.XY.m128d_f64[1]._4_4_;
      }
      pTVar3 = &this->ProxyComponentBases;
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      local_res20 = (int)plVar6[0xa9] / (int)plVar6[0xaa];
      iStackX_24 = *(int *)((longlong)plVar6 + 0x54c) / (int)plVar6[0xaa];
      local_298 = CONCAT44(iStackX_24,local_res20);
      if ((pFVar7 <= (FScriptContainerElement *)&local_298) &&
         ((FScriptContainerElement *)&local_298 <
          pFVar7 + (longlong)(this->ProxyComponentBases).ArrayMax * 8)) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar18) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iVar20 = (this->ProxyComponentBases).ArrayNum;
      piVar1 = &(this->ProxyComponentBases).ArrayMax;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->ProxyComponentBases).ArrayNum = iVar20 + 1;
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar20 * 8) = local_298;
      (**(code **)(*plVar6 + 0x598))(plVar6,&local_148,&UE::Math::TTransform<double>::Identity);
      auVar75 = *(undefined1 (*) [16])(plVar6 + 0x40);
      dVar81 = auVar75._0_8_;
      local_108 = *(undefined1 (*) [16])(plVar6 + 0x3e);
      auVar111 = *(undefined1 (*) [16])(plVar6 + 0x3e);
      auVar109._0_8_ = local_138 * (double)plVar6[0x48];
      auVar109._8_8_ = (double)plVar6[0x49] * 0.0;
      dVar74 = local_148 * *pdVar2;
      dVar82 = dStack_140 * (double)plVar6[0x47];
      uVar80 = (undefined4)((ulonglong)dVar82 >> 0x20);
      dVar73 = (double)plVar6[0x41];
      auVar97._8_4_ = SUB84(dVar82,0);
      auVar97._0_8_ = dVar74;
      auVar97._12_4_ = uVar80;
      auVar64 = blendpd(local_108,auVar75,2);
      auVar98._0_8_ = auVar97._8_8_ * local_108._0_8_ - local_108._8_8_ * dVar74;
      auVar98._8_8_ = auVar109._0_8_ * local_108._8_8_ - dVar81 * dVar82;
      auVar112._8_4_ = SUB84(auVar98._8_8_,0);
      auVar112._0_8_ = auVar98._0_8_;
      auVar112._12_4_ = (int)((ulonglong)auVar98._8_8_ >> 0x20);
      auVar38._8_4_ = SUB84(dVar82,0);
      auVar38._0_8_ = dVar74;
      auVar38._12_4_ = uVar80;
      auVar25 = blendpd(auVar38,auVar109,2);
      auVar39._0_8_ = auVar25._0_8_ * dVar81 - auVar64._0_8_ * auVar109._0_8_;
      auVar39._8_8_ = auVar25._8_8_ * auVar75._8_8_ - auVar64._8_8_ * auVar109._8_8_;
      auVar25 = blendpd(auVar98,auVar39,2);
      auVar99._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar99._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      dVar102 = auVar112._8_8_ + auVar112._8_8_;
      dVar100 = auVar39._0_8_ + auVar39._0_8_;
      auVar95._8_4_ = SUB84(dVar100,0);
      auVar95._0_8_ = dVar102;
      uVar80 = (undefined4)((ulonglong)dVar100 >> 0x20);
      auVar95._12_4_ = uVar80;
      auVar69._8_4_ = SUB84(dVar100,0);
      auVar69._0_8_ = dVar102;
      auVar69._12_4_ = uVar80;
      auVar25 = blendpd(auVar69,auVar99,2);
      auVar96._0_8_ = auVar95._8_8_ * auVar111._0_8_ - auVar111._8_8_ * dVar102;
      auVar96._8_8_ = auVar99._0_8_ * auVar111._8_8_ - dVar81 * dVar100;
      auVar111 = blendpd(auVar111,auVar75,2);
      auVar40._8_4_ = SUB84(auVar96._8_8_,0);
      auVar40._0_8_ = auVar96._0_8_;
      auVar40._12_4_ = (int)((ulonglong)auVar96._8_8_ >> 0x20);
      auVar70._0_8_ = auVar25._0_8_ * dVar81 - auVar111._0_8_ * auVar99._0_8_;
      auVar70._8_8_ = auVar25._8_8_ * auVar75._8_8_ - auVar111._8_8_ * auVar99._8_8_;
      auVar75 = blendpd(auVar96,auVar70,2);
      local_170 = dVar102 * dVar73 + dVar74 + auVar40._8_8_ + (double)plVar6[0x42];
      dStack_168 = dVar100 * dVar73 + dVar82 + auVar70._0_8_ + (double)plVar6[0x43];
      local_160 = auVar99._0_8_ * dVar73 + auVar109._0_8_ + auVar75._0_8_ + (double)plVar6[0x44];
      dVar73 = local_170 * (double)CONCAT44(uVar116,uVar115);
      dVar81 = dStack_168 * (double)CONCAT44(uVar118,uVar117);
      auVar110._0_8_ = local_160 * (double)CONCAT44(uVar83,uVar79);
      auVar110._8_8_ = (double)CONCAT44(uVar114,uVar113) * 0.0;
      uVar80 = SUB84(dVar81,0);
      auVar105._8_4_ = uVar80;
      auVar105._0_8_ = dVar73;
      uVar84 = (undefined4)((ulonglong)dVar81 >> 0x20);
      auVar105._12_4_ = uVar84;
      auVar41._8_4_ = uVar80;
      auVar41._0_8_ = dVar73;
      auVar41._12_4_ = uVar84;
      auVar111 = blendpd((undefined1  [16])local_268.Rotation.XY.m128d_f64,
                         (undefined1  [16])local_268.Rotation.ZW.m128d_f64,2);
      auVar106._0_8_ = auVar105._8_8_ * dVar13 - dVar73 * dVar14;
      auVar106._8_8_ = auVar110._0_8_ * dVar14 - auVar41._8_8_ * dVar11;
      auVar78._8_4_ = SUB84(auVar106._8_8_,0);
      auVar78._0_8_ = auVar106._0_8_;
      auVar78._12_4_ = (int)((ulonglong)auVar106._8_8_ >> 0x20);
      pTVar4 = &this->ProxyComponentCentersObjectSpace;
      pFVar7 = (pTVar4->AllocatorInstance).Data;
      auVar58._8_4_ = uVar80;
      auVar58._0_8_ = dVar73;
      auVar58._12_4_ = uVar84;
      auVar42._8_4_ = SUB84(auVar110._8_8_,0);
      auVar42._0_8_ = auVar110._0_8_;
      auVar42._12_4_ = (int)((ulonglong)auVar110._8_8_ >> 0x20);
      auVar75 = blendpd(auVar58,auVar110,2);
      auVar59._0_8_ = auVar75._0_8_ * dVar11 - auVar110._0_8_ * auVar111._0_8_;
      auVar59._8_8_ = auVar75._8_8_ * dVar12 - auVar42._8_8_ * auVar111._8_8_;
      auVar75 = blendpd(auVar106,auVar59,2);
      dVar74 = auVar78._8_8_ + auVar78._8_8_;
      dVar82 = auVar59._0_8_ + auVar59._0_8_;
      auVar107._0_8_ = auVar75._0_8_ + auVar75._0_8_;
      auVar107._8_8_ = auVar75._8_8_ + auVar75._8_8_;
      uVar80 = SUB84(dVar82,0);
      auVar71._8_4_ = uVar80;
      auVar71._0_8_ = dVar74;
      uVar84 = (undefined4)((ulonglong)dVar82 >> 0x20);
      auVar71._12_4_ = uVar84;
      auVar43._8_4_ = uVar80;
      auVar43._0_8_ = dVar74;
      auVar43._12_4_ = uVar84;
      auVar60._8_4_ = uVar80;
      auVar60._0_8_ = dVar74;
      auVar60._12_4_ = uVar84;
      auVar75 = blendpd(auVar60,auVar107,2);
      auVar72._0_8_ = auVar71._8_8_ * dVar13 - dVar74 * dVar14;
      auVar72._8_8_ = auVar107._0_8_ * dVar14 - auVar43._8_8_ * dVar11;
      auVar44._8_4_ = SUB84(auVar107._8_8_,0);
      auVar44._0_8_ = auVar107._0_8_;
      auVar44._12_4_ = (int)((ulonglong)auVar107._8_8_ >> 0x20);
      auVar61._0_8_ = auVar75._0_8_ * dVar11 - auVar107._0_8_ * auVar111._0_8_;
      auVar61._8_8_ = auVar75._8_8_ * dVar12 - auVar44._8_8_ * auVar111._8_8_;
      auVar45._8_4_ = SUB84(auVar72._8_8_,0);
      auVar45._0_8_ = auVar72._0_8_;
      auVar45._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
      auVar75 = blendpd(auVar72,auVar61,2);
      local_290 = dVar74 * dVar12 + dVar73 + auVar45._8_8_ + local_268.Translation.XY.m128d_f64[0];
      dStack_288 = dVar82 * dVar12 + dVar81 + auVar61._0_8_ + local_268.Translation.XY.m128d_f64[1];
      local_280 = auVar107._0_8_ * dVar12 + auVar110._0_8_ + auVar75._0_8_ +
                  local_268.Translation.ZW.m128d_f64[0];
      if ((pFVar7 <= (FScriptContainerElement *)&local_290) &&
         ((FScriptContainerElement *)&local_290 <
          pFVar7 + (longlong)(this->ProxyComponentCentersObjectSpace).ArrayMax * 0x18)) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar18) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iVar20 = (this->ProxyComponentCentersObjectSpace).ArrayNum;
      piVar1 = &(this->ProxyComponentCentersObjectSpace).ArrayMax;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar4->AllocatorInstance,piVar1);
      }
      (this->ProxyComponentCentersObjectSpace).ArrayNum = iVar20 + 1;
      pFVar8 = (pTVar4->AllocatorInstance).Data;
      pFVar7 = pFVar8 + (longlong)iVar20 * 0x18;
      *(double *)pFVar7 = local_290;
      *(double *)(pFVar7 + 8) = dStack_288;
      *(double *)(pFVar8 + (longlong)iVar20 * 0x18 + 0x10) = local_280;
    }
    pFVar24 = pFVar24 + 8;
  }
  if (local_res18 != -1) {
    iVar20 = param_1->SubsectionSizeQuads + 1;
    iVar23 = 1;
    if (iVar20 != 0) {
      iVar23 = iVar20;
    }
    uVar5 = (ulonglong)(iVar23 - 1) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    cVar22 = (char)lVar9 + -1;
    if (local_res18 < cVar22) {
      cVar22 = local_res18;
    }
    sVar19 = '\0';
    if ('\0' < cVar22) {
      sVar19 = cVar22;
    }
    this->ProxyLOD = sVar19;
  }
  return;
}

// PostLoad @ 145f17430

void __thiscall ULandscapeMeshProxyComponent::PostLoad(ULandscapeMeshProxyComponent *this)

{
  UStaticMeshComponent::PostLoad((UStaticMeshComponent *)this);
  ChangeLandscapeGuidIfObjectIsInstanced(&this->LandscapeGuid,(UObject *)this);
  return;
}

// CreateSceneProxy @ 145f88c20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
ULandscapeMeshProxyComponent::CreateSceneProxy(ULandscapeMeshProxyComponent *this)

{
  UObject *pUVar1;
  UStaticMesh *pUVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  FStaticMeshRenderData *pFVar7;
  FPrimitiveSceneProxy *pFVar8;
  FLandscapeMeshProxySceneProxy *pFVar9;
  UWorld *pUVar10;
  FName local_res8;
  FString local_28;
  FGuid local_18;
  
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 == (UObject *)0x0) {
      return (FPrimitiveSceneProxy *)0x0;
    }
    UE::GC::MarkAsReachable(pUVar1);
  }
  else if (pUVar1 == (UObject *)0x0) {
    return (FPrimitiveSceneProxy *)0x0;
  }
  pUVar1 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  cVar4 = (**(code **)(*(longlong *)(pUVar1 + 6) + 0x10))();
  if (cVar4 == '\0') {
    pUVar2 = (UStaticMesh *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pFVar7 = UStaticMesh::GetRenderData(pUVar2);
    if (pFVar7 != (FStaticMeshRenderData *)0x0) {
      pUVar2 = (UStaticMesh *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pFVar7 = UStaticMesh::GetRenderData(pUVar2);
      if ((pFVar7->LODResources).Array.ArrayNum != 0) {
        pUVar2 = (UStaticMesh *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        pFVar7 = UStaticMesh::GetRenderData(pUVar2);
        if (((pFVar7->LODResources).Array.ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FPrimitiveSceneProxy *)(*pcVar3)();
          return pFVar8;
        }
        if (*(int *)(*(longlong *)(pFVar7->LODResources).Array.AllocatorInstance.Data + 0x17c) != 0)
        {
          if ((this->LODGroupKey == 0) || (this->ComponentResolution != 0)) {
            pFVar9 = ::operator_new(0xba0);
            if (pFVar9 != (FLandscapeMeshProxySceneProxy *)0x0) {
              local_28.Data.AllocatorInstance.Data._0_4_ = (this->LandscapeGuid).A;
              local_28.Data.AllocatorInstance.Data._4_4_ = (this->LandscapeGuid).B;
              local_28.Data.ArrayNum = (this->LandscapeGuid).C;
              local_28.Data.ArrayMax = (this->LandscapeGuid).D;
              pUVar10 = (UWorld *)this->_padding_;
              uVar6 = this->LODGroupKey;
              if (pUVar10 == (UWorld *)0x0) {
                pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
              }
              local_18.A = (uint)local_28.Data.AllocatorInstance.Data;
              local_18.B = local_28.Data.AllocatorInstance.Data._4_4_;
              local_18.C = local_28.Data.ArrayNum;
              local_18.D = local_28.Data.ArrayMax;
              uVar6 = ALandscapeProxy::ComputeLandscapeKey(pUVar10,uVar6,&local_18);
              pFVar9 = FLandscapeMeshProxySceneProxy::FLandscapeMeshProxySceneProxy
                                 (pFVar9,(UStaticMeshComponent *)this,&this->LandscapeGuid,
                                  &this->ProxyComponentBases,&this->ProxyComponentCentersObjectSpace
                                  ,&this->ComponentXVectorObjectSpace,
                                  &this->ComponentYVectorObjectSpace,
                                  (TTransform<double> *)&this->_padding_,this->ComponentResolution,
                                  this->ProxyLOD,this->LODGroupKey,uVar6);
              return (FPrimitiveSceneProxy *)pFVar9;
            }
            return (FPrimitiveSceneProxy *)0x0;
          }
          if (2 < (byte)LogLandscape._0_1_) {
            local_res8 = (FName)this->_padding_;
            ::FName::ToString(&local_res8,&local_28);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
            if ((void *)CONCAT44(local_28.Data.AllocatorInstance.Data._4_4_,
                                 (uint)local_28.Data.AllocatorInstance.Data) != (void *)0x0) {
              FMemory::Free((void *)CONCAT44(local_28.Data.AllocatorInstance.Data._4_4_,
                                             (uint)local_28.Data.AllocatorInstance.Data));
            }
          }
        }
      }
    }
  }
  return (FPrimitiveSceneProxy *)0x0;
}

