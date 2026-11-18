// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 58

// StaticClass @ 14acdd6f0

UClass * __cdecl UPaperTileMapComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTileMapComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileMapComponent",
               &Z_Registration_Info_UClass_UPaperTileMapComponent.InnerSingleton,
               StaticRegisterNativesUPaperTileMapComponent,0x5e0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperTileMapComponent>,
               InternalVTableHelperCtorCaller<UPaperTileMapComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTileMapComponent.InnerSingleton;
}

// UPaperTileMapComponent @ 14aceb260

UPaperTileMapComponent * __thiscall
UPaperTileMapComponent::UPaperTileMapComponent(UPaperTileMapComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->DefaultLayerTileSet_DEPRECATED).field0_0x0.DebugPtr = (UPaperTileSet *)0x0;
  (this->Material_DEPRECATED).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->TileLayers_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileLayers_DEPRECATED).ArrayNum = 0;
  (this->TileLayers_DEPRECATED).ArrayMax = 0;
  (this->TileMap).field0_0x0.DebugPtr = (UPaperTileMap *)0x0;
  return this;
}

// UPaperTileMapComponent @ 14aceb2f0

UPaperTileMapComponent * __thiscall
UPaperTileMapComponent::UPaperTileMapComponent
          (UPaperTileMapComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  FLinearColor FVar3;
  void *pvVar4;
  ulonglong uVar5;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->DefaultLayerTileSet_DEPRECATED).field0_0x0.DebugPtr = (UPaperTileSet *)0x0;
  (this->Material_DEPRECATED).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->TileLayers_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileLayers_DEPRECATED).ArrayNum = 0;
  FVar3 = FLinearColor::White;
  (this->TileLayers_DEPRECATED).ArrayMax = 0;
  this->UseSingleLayerIndex = 0;
  this->bUseSingleLayer = false;
  (this->TileMapColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  (this->TileMap).field0_0x0.DebugPtr = (UPaperTileMap *)0x0;
  FBodyInstance::SetCollisionEnabled((FBodyInstance *)&this->_padding_,QueryAndPhysics,true);
  pvVar4 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  this->MapWidth_DEPRECATED = 4;
  this->MapHeight_DEPRECATED = 4;
  this->TileWidth_DEPRECATED = 0x20;
  lVar2 = *(longlong *)((longlong)pvVar4 + uVar5 * 8);
  this->TileHeight_DEPRECATED = 0x20;
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&DefaultMaterial,L"/Paper2D/MaskedUnlitSpriteMaterial",0);
      atexit(`UPaperTileMapComponent::UPaperTileMapComponent'::__l2::
             _dynamic_atexit_destructor_for__DefaultMaterial__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (DefaultMaterial.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)DefaultMaterial.Object.field0_0x0);
  }
  (this->Material_DEPRECATED).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)DefaultMaterial.Object.field0_0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf7;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x80;
  return this;
}

// ~UPaperTileMapComponent @ 14acebf00

void __thiscall UPaperTileMapComponent::~UPaperTileMapComponent(UPaperTileMapComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->TileLayers_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// AddNewLayer @ 14acee4c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPaperTileLayer * __thiscall UPaperTileMapComponent::AddNewLayer(UPaperTileMapComponent *this)

{
  UPaperTileMap *this_00;
  UPaperTileLayer *pUVar1;
  
  this_00 = (this->TileMap).field0_0x0.DebugPtr;
  if ((this_00 != (UPaperTileMap *)0x0) && ((UPaperTileMapComponent *)this_00->_padding_ == this)) {
    pUVar1 = UPaperTileMap::AddNewLayer(this_00,-1);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    UActorComponent::RecreatePhysicsState((UActorComponent *)this);
    (**(code **)(this->_padding_ + 0x5b0))(this);
    return pUVar1;
  }
  return (UPaperTileLayer *)0x0;
}

// AdditionalStatObject @ 14acef070

UObject * __thiscall UPaperTileMapComponent::AdditionalStatObject(UPaperTileMapComponent *this)

{
  UPaperTileMap *pUVar1;
  UPaperTileMap *pUVar2;
  
  pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
  pUVar2 = (UPaperTileMap *)0x0;
  if ((pUVar1 != (UPaperTileMap *)0x0) && ((UPaperTileMapComponent *)pUVar1->_padding_ != this)) {
    pUVar2 = pUVar1;
  }
  return (UObject *)pUVar2;
}

// CalcBounds @ 14acf0c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UPaperTileMapComponent::CalcBounds
          (UPaperTileMapComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  UPaperTileMap *this_00;
  UBodySetup *pUVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  TBoxSphereBounds<double,double> *pTVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_258 [32];
  TVector<double>_u_0 local_238;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  TVector<double>_u_0 local_200;
  undefined1 auStack_1e8 [12];
  undefined4 uStack_1dc;
  double local_1d8;
  double local_1d0;
  TVector<double>_u_0 local_1c8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  TMatrix<double> local_188;
  TVector<double>_u_0 local_108;
  double local_f0;
  double local_e8;
  double local_e0;
  char local_d8;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStack_258;
  this_00 = (this->TileMap).field0_0x0.DebugPtr;
  if (this_00 == (UPaperTileMap *)0x0) {
    dVar1 = (param_1->Translation).XY.m128d_f64[1];
    dVar11 = (param_1->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar11;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar8;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    __return_storage_ptr__->SphereRadius = 0.0;
  }
  else {
    pTVar10 = UPaperTileMap::GetRenderBounds
                        (this_00,(TBoxSphereBounds<double,double> *)&local_1c8._s_0);
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_188);
    auVar21 = *(undefined1 (*) [16])&(pTVar10->BoxExtent).field0_0x0;
    dVar18 = auVar21._0_8_;
    auVar20 = *(undefined1 (*) [16])&(pTVar10->Origin).field0_0x0;
    dVar11 = (pTVar10->BoxExtent).field0_0x0._s_0.Z;
    dVar1 = (pTVar10->Origin).field0_0x0._s_0.Z;
    dVar3 = auVar20._0_8_;
    auVar12._8_4_ = auVar21._0_4_;
    auVar12._0_8_ = dVar18;
    auVar12._12_4_ = auVar21._4_4_;
    dVar5 = auVar21._8_8_;
    dVar6 = auVar20._8_8_;
    dVar17 = auVar12._8_8_ * local_188.M[0][1];
    auVar13._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dVar18 * local_188.M[0][0]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar18 * local_188.M[0][0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar13._8_4_ = SUB84(dVar17,0) & _UNK_15061cc88;
    auVar13._12_4_ = (uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c;
    auVar14._8_4_ = auVar20._0_4_;
    auVar14._0_8_ = dVar3;
    auVar14._12_4_ = auVar20._4_4_;
    dStack_220 = (double)CONCAT44((uint)((ulonglong)(dVar5 * local_188.M[1][0]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar5 * local_188.M[1][0],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar13._0_8_ +
                 (double)CONCAT44((uint)((ulonglong)(dVar11 * local_188.M[2][0]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar11 * local_188.M[2][0],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_218 = (double)CONCAT44((uint)((ulonglong)(dVar5 * local_188.M[1][1]) >> 0x20) &
                                 _UNK_15061cc8c,SUB84(dVar5 * local_188.M[1][1],0) & _UNK_15061cc88)
                + auVar13._8_8_ +
                (double)CONCAT44((uint)((ulonglong)(dVar11 * local_188.M[2][1]) >> 0x20) &
                                 _UNK_15061cc8c,SUB84(dVar11 * local_188.M[2][1],0) & _UNK_15061cc88
                                );
    uVar8 = dVar6 * local_188.M[1][0] + dVar3 * local_188.M[0][0] + dVar1 * local_188.M[2][0] +
            local_188.M[3][0];
    uVar9 = dVar6 * local_188.M[1][1] + auVar14._8_8_ * local_188.M[0][1] +
            dVar1 * local_188.M[2][1] + local_188.M[3][1];
    local_238._s_0.Z =
         dVar6 * local_188.M[1][2] + dVar3 * local_188.M[0][2] + dVar1 * local_188.M[2][2] +
         local_188.M[3][2];
    dStack_210 = (double)CONCAT44((uint)((ulonglong)(dVar5 * local_188.M[1][2]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar5 * local_188.M[1][2],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                 (double)CONCAT44((uint)((ulonglong)(dVar18 * local_188.M[0][2]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar18 * local_188.M[0][2],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                 (double)CONCAT44((uint)((ulonglong)(dVar11 * local_188.M[2][2]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar11 * local_188.M[2][2],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auStack_1e8._8_4_ = SUB84(local_218,0);
    auStack_1e8._0_8_ = dStack_220;
    auVar19._0_8_ =
         local_188.M[1][0] * local_188.M[1][0] + local_188.M[0][0] * local_188.M[0][0] +
         local_188.M[2][0] * local_188.M[2][0];
    auVar19._8_8_ =
         local_188.M[1][1] * local_188.M[1][1] + local_188.M[0][1] * local_188.M[0][1] +
         local_188.M[2][1] * local_188.M[2][1];
    dVar11 = local_188.M[1][2] * local_188.M[1][2] + local_188.M[0][2] * local_188.M[0][2] +
             local_188.M[2][2] * local_188.M[2][2];
    auVar20._8_4_ = SUB84(auVar19._8_8_,0);
    auVar20._0_8_ = auVar19._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
    auVar15._8_8_ = auVar19._8_8_;
    auVar15._0_8_ = auVar20._8_8_;
    auVar20 = maxpd(auVar19,auVar15);
    pUVar2 = (((this->TileMap).field0_0x0.DebugPtr)->BodySetup).field0_0x0.DebugPtr;
    auVar21._8_4_ = SUB84(dVar11,0);
    auVar21._0_8_ = dVar11;
    auVar21._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar21 = maxpd(auVar20,auVar21);
    local_208 = SQRT(dStack_210 * dStack_210 + dStack_220 * dStack_220 + local_218 * local_218);
    dVar11 = SQRT(auVar21._0_8_) * pTVar10->SphereRadius;
    local_238._8_4_ = (int)uVar9;
    local_238._0_8_ = uVar8;
    local_238._12_4_ = (int)((ulonglong)uVar9 >> 0x20);
    uStack_1dc = (int)((ulonglong)local_218 >> 0x20);
    if (dVar11 <= local_208) {
      local_208 = dVar11;
    }
    if (pUVar2 != (UBodySetup *)0x0) {
      local_200._s_0.Z = local_238._s_0.Z;
      local_1d8 = dStack_210;
      local_1d0 = local_208;
      FKAggregateGeom::CalcAABB(&pUVar2->AggGeom,(TBox<double> *)&local_108._s_0,param_1);
      if (local_d8 != '\0') {
        local_e8 = local_e8 - local_108._s_0.Y;
        local_f0 = local_f0 - local_108._s_0.X;
        local_e0 = local_e0 - local_108._s_0.Z;
        local_1d8 = local_e0 * __real_3fe0000000000000;
        local_200._s_0.Y = local_e8 * __real_3fe0000000000000 + local_108._s_0.Y;
        local_200._s_0.X = local_f0 * __real_3fe0000000000000 + local_108._s_0.X;
        stack0xfffffffffffffe20 = local_e8 * __real_3fe0000000000000;
        auStack_1e8._0_8_ = local_f0 * __real_3fe0000000000000;
        auVar16._0_8_ = local_1d8 + local_108._s_0.Z;
        auVar16._8_8_ = 0;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (local_e8 * local_e8 + local_f0 * local_f0 + local_e0 * local_e0) *
                       __real_3fd0000000000000;
        auVar21 = sqrtpd(auVar16,auVar4);
        local_1d0 = auVar21._0_8_;
        local_200._s_0.Z = auVar16._0_8_;
        UE::Math::TBoxSphereBounds<double,double>::operator+
                  ((TBoxSphereBounds<double,double> *)&local_238._s_0,
                   (TBoxSphereBounds<double,double> *)&local_1c8._s_0,
                   (TBoxSphereBounds<double,double> *)&local_200._s_0);
        local_238._s_0.Z = local_1c8._s_0.Z;
        dStack_220 = dStack_1b0;
        local_208 = local_198;
        local_218 = local_1a8;
        dStack_210 = dStack_1a0;
        uVar8 = local_1c8._s_0.X;
        uVar9 = local_1c8._s_0.Y;
      }
    }
    dVar11 = (double)*(float *)((longlong)&this->_padding_ + 4);
    auVar7._8_4_ = (int)uVar9;
    auVar7._0_8_ = uVar8;
    auVar7._12_4_ = (int)((ulonglong)uVar9 >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar7;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_238._s_0.Z;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dStack_220 * dVar11;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = local_218 * dVar11;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dStack_210 * dVar11;
    __return_storage_ptr__->SphereRadius = local_208 * dVar11;
  }
  return __return_storage_ptr__;
}

// CreateNewOwnedTileMap @ 14acf40d0

void __thiscall UPaperTileMapComponent::CreateNewOwnedTileMap(UPaperTileMapComponent *this)

{
  undefined1 uVar1;
  UPaperTileMap *this_00;
  
  uVar1 = *(undefined1 *)((longlong)&this->_padding_ + 3);
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  this_00 = NewObject<UPaperTileMap>((UObject *)this);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transactional);
  UPaperTileMap::AddNewLayer(this_00,-1);
  (**(code **)(this->_padding_ + 0xb28))(this,this_00);
  *(undefined1 *)((longlong)&this->_padding_ + 3) = uVar1;
  return;
}

// CreateNewTileMap @ 14acf4150

void __thiscall
UPaperTileMapComponent::CreateNewTileMap
          (UPaperTileMapComponent *this,int param_1,int param_2,int param_3,int param_4,
          float param_5,bool param_6)

{
  undefined1 uVar1;
  UPaperTileMap *this_00;
  
  uVar1 = *(undefined1 *)((longlong)&this->_padding_ + 3);
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  this_00 = NewObject<UPaperTileMap>((UObject *)this);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transactional);
  this_00->PixelsPerUnrealUnit = param_5;
  this_00->MapWidth = param_1;
  this_00->MapHeight = param_2;
  this_00->TileWidth = param_3;
  this_00->TileHeight = param_4;
  if (param_6) {
    UPaperTileMap::AddNewLayer(this_00,-1);
  }
  (**(code **)(this->_padding_ + 0xb28))(this,this_00);
  *(undefined1 *)((longlong)&this->_padding_ + 3) = uVar1;
  return;
}

// CreateSceneProxy @ 14acf4d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UPaperTileMapComponent::CreateSceneProxy(UPaperTileMapComponent *this)

{
  int *piVar1;
  FSceneInterface *this_00;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  EShaderPlatform EVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_PaperRender_TileMapRebuild> FVar10;
  FPaperRenderSceneProxy *this_01;
  FMaterialRelevance_u_0 *pFVar11;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FPaperRenderSceneProxy *pFVar15;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  pFVar15 = (FPaperRenderSceneProxy *)0x0;
  FVar10 = StatPtr_STAT_PaperRender_TileMapRebuild;
  if (StatPtr_STAT_PaperRender_TileMapRebuild ==
      (FThreadSafeStaticStat<FStat_STAT_PaperRender_TileMapRebuild>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_PaperRender_TileMapRebuild");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_PaperRender_TileMapRebuild>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PaperRender_TileMapRebuild,
                        *pFVar9,L"Rebuild Tile Map","STATGROUP_Paper2D","STATCAT_Advanced",
                        L"Paper2D",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar13.Value;
        local_res10.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperTileMapComponent.cpp"
                   ,0x3c);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar13.Value;
      local_res10.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_14acf4eb7;
    }
  }
  bVar5 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_14acf4eb7:
  this_01 = ::operator_new(0x670);
  if (this_01 != (FPaperRenderSceneProxy *)0x0) {
    FPaperRenderSceneProxy::FPaperRenderSceneProxy(this_01,(UPrimitiveComponent *)this);
    *(undefined8 *)&this_01->field_0x658 = 0;
    *(undefined ***)this_01 = &___7FPaperTileMapRenderSceneProxy__6B_;
    if (this->bUseSingleLayer == false) {
      iVar8 = -1;
    }
    else {
      iVar8 = this->UseSingleLayerIndex;
    }
    this_00 = *(FSceneInterface **)&this_01->field_0x220;
    *(int *)(this_01 + 1) = iVar8;
    *(undefined4 *)&this_01[1].field_0x4 = 0x38d1b717;
    uVar3 = *(undefined8 *)((longlong)&(this->TileMapColor).field0_0x0 + 8);
    *(undefined8 *)&this_01->field_0x30 = *(undefined8 *)&(this->TileMapColor).field0_0x0;
    *(undefined8 *)&this_01->field_0x38 = uVar3;
    *(TObjectPtr<UPaperTileMap>_u_0 *)&this_01->field_0x658 = (this->TileMap).field0_0x0;
    pcVar2 = *(code **)(this->_padding_ + 0xaa8);
    EVar7 = FSceneInterface::GetShaderPlatform(this_00);
    pFVar11 = (FMaterialRelevance_u_0 *)(*pcVar2)(this,&local_res10,EVar7);
    (this_01->MaterialRelevance).field0_0x0 = *pFVar11;
    pFVar15 = this_01;
  }
  RebuildRenderData(this,&pFVar15->BatchedSections,&pFVar15->Vertices);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_38);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return (FPrimitiveSceneProxy *)pFVar15;
}

// GetBodySetup @ 14acf94d0

UBodySetup * __thiscall UPaperTileMapComponent::GetBodySetup(UPaperTileMapComponent *this)

{
  UPaperTileMap *pUVar1;
  UBodySetup *pUVar2;
  
  pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
  if (pUVar1 != (UPaperTileMap *)0x0) {
    pUVar2 = (pUVar1->BodySetup).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    return pUVar2;
  }
  return (UBodySetup *)0x0;
}

// GetLayerColor @ 14acfacc0

FLinearColor * __thiscall
UPaperTileMapComponent::GetLayerColor
          (UPaperTileMapComponent *this,FLinearColor *__return_storage_ptr__,int param_1)

{
  UPaperTileMap *pUVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FLinearColor *pFVar7;
  
  pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
  if (((pUVar1 != (UPaperTileMap *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar1->TileLayers).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pUVar1->TileLayers).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FLinearColor *)(*pcVar3)();
        return pFVar7;
      }
    }
    lVar2 = *(longlong *)((pUVar1->TileLayers).AllocatorInstance.Data + (longlong)param_1 * 8);
    uVar4 = *(undefined8 *)(lVar2 + 0x54);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)(lVar2 + 0x4c);
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar4;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// GetMapSize @ 14acfb240

void __thiscall
UPaperTileMapComponent::GetMapSize
          (UPaperTileMapComponent *this,int *param_1,int *param_2,int *param_3)

{
  UPaperTileMap *pUVar1;
  
  pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
  if (pUVar1 != (UPaperTileMap *)0x0) {
    *param_1 = pUVar1->MapWidth;
    *param_2 = ((this->TileMap).field0_0x0.DebugPtr)->MapHeight;
    *param_3 = (((this->TileMap).field0_0x0.DebugPtr)->TileLayers).ArrayNum;
    return;
  }
  *param_1 = 1;
  *param_2 = 1;
  *param_3 = 1;
  return;
}

// GetMaterial @ 14acfb600

UMaterialInterface * __thiscall
UPaperTileMapComponent::GetMaterial(UPaperTileMapComponent *this,int param_1)

{
  UPaperTileMap *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar4 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar2)();
      return pUVar5;
    }
    if (*(longlong *)(this->_padding_ + (longlong)param_1 * 8) != 0) {
      uVar4 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar2)();
        return pUVar5;
      }
      return *(UMaterialInterface **)(this->_padding_ + (longlong)param_1 * 8);
    }
  }
  pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
  pUVar5 = (UMaterialInterface *)0x0;
  if (pUVar1 != (UPaperTileMap *)0x0) {
    pUVar5 = (pUVar1->Material).field0_0x0.DebugPtr;
  }
  return pUVar5;
}

// GetNumMaterials @ 14acfc700

int __thiscall UPaperTileMapComponent::GetNumMaterials(UPaperTileMapComponent *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)this->_padding_;
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// GetPrivateStaticClass @ 14acfd8b0

UClass * __cdecl UPaperTileMapComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTileMapComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileMapComponent",
               &Z_Registration_Info_UClass_UPaperTileMapComponent.InnerSingleton,
               StaticRegisterNativesUPaperTileMapComponent,0x5e0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperTileMapComponent>,
               InternalVTableHelperCtorCaller<UPaperTileMapComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTileMapComponent.InnerSingleton;
}

// GetTile @ 14acfed40

FPaperTileInfo * __thiscall
UPaperTileMapComponent::GetTile
          (UPaperTileMapComponent *this,FPaperTileInfo *__return_storage_ptr__,int param_1,
          int param_2,int param_3)

{
  UPaperTileMap *pUVar1;
  UPaperTileSet *pUVar2;
  code *pcVar3;
  bool bVar4;
  FPaperTileInfo *pFVar5;
  uint uVar6;
  FPaperTileInfo local_18;
  
  (__return_storage_ptr__->TileSet).field0_0x0.DebugPtr = (UPaperTileSet *)0x0;
  __return_storage_ptr__->PackedTileIndex = -1;
  pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
  if (((pUVar1 != (UPaperTileMap *)0x0) && (-1 < param_3)) &&
     (param_3 < (pUVar1->TileLayers).ArrayNum)) {
    uVar6 = 0;
    if (param_3 < (pUVar1->TileLayers).ArrayNum) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPaperTileInfo *)(*pcVar3)();
      return pFVar5;
    }
    pFVar5 = UPaperTileLayer::GetCell
                       (*(UPaperTileLayer **)
                         ((pUVar1->TileLayers).AllocatorInstance.Data + (longlong)param_3 * 8),
                        &local_18,param_1,param_2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (pFVar5->TileSet).field0_0x0.DebugPtr, pUVar2 != (UPaperTileSet *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (__return_storage_ptr__->TileSet).field0_0x0 = (pFVar5->TileSet).field0_0x0;
    __return_storage_ptr__->PackedTileIndex = pFVar5->PackedTileIndex;
  }
  return __return_storage_ptr__;
}

// GetTileCenterPosition @ 14acfefb0

TVector<double> * __thiscall
UPaperTileMapComponent::GetTileCenterPosition
          (UPaperTileMapComponent *this,TVector<double> *__return_storage_ptr__,int param_1,
          int param_2,int param_3,bool param_4)

{
  uchar uVar1;
  UPaperTileMap *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  TVector<double> *pTVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  TVector<double>_u_0 local_88;
  TVector<double> local_68 [4];
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  this_00 = (this->TileMap).field0_0x0.DebugPtr;
  if (this_00 != (UPaperTileMap *)0x0) {
    uVar1 = (this_00->ProjectionMode).Value;
    if (((uVar1 == '\0') || (uVar1 == '\x01')) || ((uVar1 != '\x02' && (uVar1 != '\x03')))) {
      UPaperTileMap::GetTilePositionInLocalSpace
                (this_00,(TVector<double> *)&local_88._s_0,(float)param_1 + __real_3f000000,
                 (float)param_2 + __real_3f000000,param_3);
    }
    else {
      fVar13 = __real_3f800000 / this_00->PixelsPerUnrealUnit;
      dVar22 = (double)((float)this_00->TileWidth * fVar13);
      dVar2 = (double)((float)this_00->TileHeight * fVar13);
      pTVar8 = UPaperTileMap::GetTilePositionInLocalSpace
                         (this_00,local_68,(float)param_1,(float)param_2,param_3);
      local_88._s_0.X =
           (dVar22 * PaperAxisX.field0_0x0._s_0.X * __real_3fe0000000000000 -
           dVar2 * PaperAxisY.field0_0x0._s_0.X * __real_3fe0000000000000) +
           (pTVar8->field0_0x0)._s_0.X;
      local_88._s_0.Y =
           (dVar22 * PaperAxisX.field0_0x0._s_0.Y * __real_3fe0000000000000 -
           dVar2 * PaperAxisY.field0_0x0._s_0.Y * __real_3fe0000000000000) +
           (pTVar8->field0_0x0)._s_0.Y;
      local_88._s_0.Z =
           (dVar22 * PaperAxisX.field0_0x0._s_0.Z * __real_3fe0000000000000 -
           dVar2 * PaperAxisY.field0_0x0._s_0.Z * __real_3fe0000000000000) +
           (pTVar8->field0_0x0)._s_0.Z;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_88._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_88._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_88._s_0.Z;
  }
  if (param_4) {
    auVar20._0_8_ = this->_padding_;
    auVar20._8_8_ = this->_padding_;
    auVar10._0_8_ = this->_padding_;
    auVar10._8_8_ = this->_padding_;
    dVar7 = (double)this->_padding_;
    dVar3 = (__return_storage_ptr__->field0_0x0)._s_0.X * (double)this->_padding_;
    dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.Y * (double)this->_padding_;
    uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar6 = (__return_storage_ptr__->field0_0x0)._s_0.Z * (double)this->_padding_;
    dVar2 = (double)this->_padding_ * 0.0;
    auVar14 = blendpd(auVar10,auVar20,2);
    auVar23._8_4_ = SUB84(dVar4,0);
    auVar23._0_8_ = dVar3;
    auVar23._12_4_ = uVar21;
    auVar24._0_8_ = auVar23._8_8_ * (double)auVar10._0_8_ - (double)auVar10._8_8_ * dVar3;
    auVar24._8_8_ = dVar6 * (double)auVar10._8_8_ - (double)auVar20._0_8_ * dVar4;
    auVar9._8_4_ = SUB84(dVar4,0);
    auVar9._0_8_ = dVar3;
    auVar9._12_4_ = uVar21;
    auVar5._8_4_ = SUB84(dVar2,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    auVar10 = blendpd(auVar9,auVar5,2);
    auVar11._0_8_ = auVar10._0_8_ * (double)auVar20._0_8_ - auVar14._0_8_ * dVar6;
    auVar11._8_8_ = auVar10._8_8_ * (double)auVar20._8_8_ - auVar14._8_8_ * dVar2;
    auVar14._0_8_ = this->_padding_;
    auVar14._8_8_ = this->_padding_;
    auVar10 = blendpd(auVar24,auVar11,2);
    dVar22 = auVar24._8_8_ + auVar24._8_8_;
    dVar2 = auVar11._0_8_ + auVar11._0_8_;
    uVar21 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar25._0_8_ = auVar10._0_8_ + auVar10._0_8_;
    auVar25._8_8_ = auVar10._8_8_ + auVar10._8_8_;
    auVar18._8_4_ = SUB84(dVar2,0);
    auVar18._0_8_ = dVar22;
    auVar18._12_4_ = uVar21;
    auVar15._8_4_ = SUB84(dVar2,0);
    auVar15._0_8_ = dVar22;
    auVar15._12_4_ = uVar21;
    auVar16 = blendpd(auVar15,auVar25,2);
    auVar19._0_8_ = auVar18._8_8_ * (double)auVar14._0_8_ - (double)auVar14._8_8_ * dVar22;
    auVar19._8_8_ = auVar25._0_8_ * (double)auVar14._8_8_ - (double)auVar20._0_8_ * dVar2;
    auVar12._8_4_ = SUB84(auVar19._8_8_,0);
    auVar12._0_8_ = auVar19._0_8_;
    auVar12._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
    auVar10 = blendpd(auVar14,auVar20,2);
    auVar17._0_8_ = auVar16._0_8_ * (double)auVar20._0_8_ - auVar10._0_8_ * auVar25._0_8_;
    auVar17._8_8_ = auVar16._8_8_ * (double)auVar20._8_8_ - auVar10._8_8_ * auVar25._8_8_;
    auVar20 = blendpd(auVar19,auVar17,2);
    dVar4 = dVar2 * dVar7 + dVar4 + auVar17._0_8_ + (double)this->_padding_;
    dVar2 = (double)this->_padding_;
    auVar16._8_4_ = SUB84(dVar4,0);
    auVar16._0_8_ = dVar22 * dVar7 + dVar3 + auVar12._8_8_ + (double)this->_padding_;
    auVar16._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar16;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         auVar25._0_8_ * dVar7 + dVar6 + auVar20._0_8_ + dVar2;
  }
  return __return_storage_ptr__;
}

// GetTileCornerPosition @ 14acff500

TVector<double> * __thiscall
UPaperTileMapComponent::GetTileCornerPosition
          (UPaperTileMapComponent *this,TVector<double> *__return_storage_ptr__,int param_1,
          int param_2,int param_3,bool param_4)

{
  UPaperTileMap *this_00;
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double> *pTVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  TVector<double> local_68 [4];
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  this_00 = (this->TileMap).field0_0x0.DebugPtr;
  if (this_00 != (UPaperTileMap *)0x0) {
    pTVar7 = UPaperTileMap::GetTilePositionInLocalSpace
                       (this_00,local_68,(float)param_1,(float)param_2,param_3);
    dVar5 = (pTVar7->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
  }
  if (param_4) {
    auVar21._0_8_ = this->_padding_;
    auVar21._8_8_ = this->_padding_;
    auVar9._0_8_ = this->_padding_;
    auVar9._8_8_ = this->_padding_;
    auVar12 = blendpd(auVar9,auVar21,2);
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X * (double)this->_padding_;
    dVar2 = (__return_storage_ptr__->field0_0x0)._s_0.Y * (double)this->_padding_;
    uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar22._8_4_ = SUB84(dVar2,0);
    auVar22._0_8_ = dVar1;
    auVar22._12_4_ = uVar18;
    dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.Z * (double)this->_padding_;
    dVar5 = (double)this->_padding_ * 0.0;
    dVar6 = (double)this->_padding_;
    auVar23._0_8_ = auVar22._8_8_ * (double)auVar9._0_8_ - (double)auVar9._8_8_ * dVar1;
    auVar23._8_8_ = dVar4 * (double)auVar9._8_8_ - (double)auVar21._0_8_ * dVar2;
    auVar8._8_4_ = SUB84(dVar2,0);
    auVar8._0_8_ = dVar1;
    auVar8._12_4_ = uVar18;
    auVar3._8_4_ = SUB84(dVar5,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar9 = blendpd(auVar8,auVar3,2);
    auVar10._0_8_ = auVar9._0_8_ * (double)auVar21._0_8_ - auVar12._0_8_ * dVar4;
    auVar10._8_8_ = auVar9._8_8_ * (double)auVar21._8_8_ - auVar12._8_8_ * dVar5;
    auVar12._0_8_ = this->_padding_;
    auVar12._8_8_ = this->_padding_;
    auVar9 = blendpd(auVar23,auVar10,2);
    auVar24._0_8_ = auVar9._0_8_ + auVar9._0_8_;
    auVar24._8_8_ = auVar9._8_8_ + auVar9._8_8_;
    dVar16 = auVar23._8_8_ + auVar23._8_8_;
    dVar17 = auVar10._0_8_ + auVar10._0_8_;
    auVar19._8_4_ = SUB84(dVar17,0);
    auVar19._0_8_ = dVar16;
    uVar18 = (undefined4)((ulonglong)dVar17 >> 0x20);
    auVar19._12_4_ = uVar18;
    auVar13._8_4_ = SUB84(dVar17,0);
    auVar13._0_8_ = dVar16;
    auVar13._12_4_ = uVar18;
    auVar9 = blendpd(auVar12,auVar21,2);
    auVar14 = blendpd(auVar13,auVar24,2);
    auVar20._0_8_ = auVar19._8_8_ * (double)auVar12._0_8_ - (double)auVar12._8_8_ * dVar16;
    auVar20._8_8_ = auVar24._0_8_ * (double)auVar12._8_8_ - (double)auVar21._0_8_ * dVar17;
    auVar11._8_4_ = SUB84(auVar20._8_8_,0);
    auVar11._0_8_ = auVar20._0_8_;
    auVar11._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
    auVar15._0_8_ = auVar14._0_8_ * (double)auVar21._0_8_ - auVar9._0_8_ * auVar24._0_8_;
    auVar15._8_8_ = auVar14._8_8_ * (double)auVar21._8_8_ - auVar9._8_8_ * auVar24._8_8_;
    auVar21 = blendpd(auVar20,auVar15,2);
    dVar5 = (double)this->_padding_;
    dVar2 = dVar6 * dVar17 + dVar2 + auVar15._0_8_ + (double)this->_padding_;
    auVar14._8_4_ = SUB84(dVar2,0);
    auVar14._0_8_ = dVar6 * dVar16 + dVar1 + auVar11._8_8_ + (double)this->_padding_;
    auVar14._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar14;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar6 * auVar24._0_8_ + dVar4 + auVar21._0_8_ + dVar5;
  }
  return __return_storage_ptr__;
}

// GetTileMapColor @ 14acff7a0

FLinearColor * __thiscall
UPaperTileMapComponent::GetTileMapColor
          (UPaperTileMapComponent *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->TileMapColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->TileMapColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetTilePolygon @ 14ad007d0

void __thiscall
UPaperTileMapComponent::GetTilePolygon
          (UPaperTileMapComponent *this,int param_1,int param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          bool param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPaperTileMap *this_00;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  this_00 = (this->TileMap).field0_0x0.DebugPtr;
  if (this_00 != (UPaperTileMap *)0x0) {
    UPaperTileMap::GetTilePolygon(this_00,param_1,param_2,param_4,param_3);
  }
  if (param_5 != false) {
    iVar2 = param_3->ArrayNum;
    pFVar10 = (param_3->AllocatorInstance).Data;
    pFVar1 = pFVar10 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (param_3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_5);
      }
      if (pFVar10 == pFVar1) break;
      auVar21._0_8_ = this->_padding_;
      auVar21._8_8_ = this->_padding_;
      auVar12._0_8_ = this->_padding_;
      auVar12._8_8_ = this->_padding_;
      dVar4 = *(double *)&pFVar10->field_0x0 * (double)this->_padding_;
      dVar5 = *(double *)(pFVar10 + 8) * (double)this->_padding_;
      uVar22 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar7 = *(double *)&pFVar10[0x10].field_0x0 * (double)this->_padding_;
      dVar8 = (double)this->_padding_ * 0.0;
      auVar18._0_8_ = this->_padding_;
      auVar18._8_8_ = this->_padding_;
      auVar23._8_4_ = SUB84(dVar5,0);
      auVar23._0_8_ = dVar4;
      auVar23._12_4_ = uVar22;
      dVar9 = (double)this->_padding_;
      auVar15 = blendpd(auVar12,auVar21,2);
      auVar24._0_8_ = auVar23._8_8_ * (double)auVar12._0_8_ - (double)auVar12._8_8_ * dVar4;
      auVar24._8_8_ = dVar7 * (double)auVar12._8_8_ - (double)auVar21._0_8_ * dVar5;
      auVar11._8_4_ = SUB84(dVar5,0);
      auVar11._0_8_ = dVar4;
      auVar11._12_4_ = uVar22;
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar12 = blendpd(auVar11,auVar6,2);
      auVar13._0_8_ = auVar12._0_8_ * (double)auVar21._0_8_ - auVar15._0_8_ * dVar7;
      auVar13._8_8_ = auVar12._8_8_ * (double)auVar21._8_8_ - auVar15._8_8_ * dVar8;
      auVar12 = blendpd(auVar24,auVar13,2);
      dVar3 = auVar24._8_8_ + auVar24._8_8_;
      dVar8 = auVar13._0_8_ + auVar13._0_8_;
      uVar22 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar25._0_8_ = auVar12._0_8_ + auVar12._0_8_;
      auVar25._8_8_ = auVar12._8_8_ + auVar12._8_8_;
      auVar19._8_4_ = SUB84(dVar8,0);
      auVar19._0_8_ = dVar3;
      auVar19._12_4_ = uVar22;
      auVar16._8_4_ = SUB84(dVar8,0);
      auVar16._0_8_ = dVar3;
      auVar16._12_4_ = uVar22;
      auVar12 = blendpd(auVar16,auVar25,2);
      auVar20._0_8_ = auVar19._8_8_ * (double)auVar18._0_8_ - (double)auVar18._8_8_ * dVar3;
      auVar20._8_8_ = auVar25._0_8_ * (double)auVar18._8_8_ - (double)auVar21._0_8_ * dVar8;
      auVar14._8_4_ = SUB84(auVar20._8_8_,0);
      auVar14._0_8_ = auVar20._0_8_;
      auVar14._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
      auVar18 = blendpd(auVar18,auVar21,2);
      auVar17._0_8_ = auVar12._0_8_ * (double)auVar21._0_8_ - auVar18._0_8_ * auVar25._0_8_;
      auVar17._8_8_ = auVar12._8_8_ * (double)auVar21._8_8_ - auVar18._8_8_ * auVar25._8_8_;
      auVar21 = blendpd(auVar20,auVar17,2);
      dVar5 = dVar8 * dVar9 + dVar5 + auVar17._0_8_ + (double)this->_padding_;
      dVar8 = (double)this->_padding_;
      auVar15._8_4_ = SUB84(dVar5,0);
      auVar15._0_8_ = dVar3 * dVar9 + dVar4 + auVar14._8_8_ + (double)this->_padding_;
      auVar15._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])pFVar10 = auVar15;
      *(double *)&pFVar10[0x10].field_0x0 = auVar25._0_8_ * dVar9 + dVar7 + auVar21._0_8_ + dVar8;
      pFVar10 = pFVar10 + 0x18;
    }
  }
  return;
}

// GetUsedTextures @ 14ad02280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPaperTileMapComponent::GetUsedTextures
          (UPaperTileMapComponent *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          Type param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPaperTileMap *pUVar3;
  UPaperTileLayer *this_00;
  TObjectPtr<UTexture2D>_u_0 TVar4;
  UPaperTileMap *pUVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TObjectPtr<UTexture2D>_u_0 local_res8;
  TObjectPtr<UPaperTileSet>_u_0 local_48;
  int local_40;
  
  pUVar3 = (this->TileMap).field0_0x0.DebugPtr;
  if (pUVar3 != (UPaperTileMap *)0x0) {
    iVar2 = (pUVar3->TileLayers).ArrayNum;
    pFVar8 = (pUVar3->TileLayers).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar3->TileLayers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UPaperTileLayer>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar8 == pFVar1) break;
      pUVar5 = (this->TileMap).field0_0x0.DebugPtr;
      iVar7 = 0;
      this_00 = *(UPaperTileLayer **)pFVar8;
      if (0 < pUVar5->MapHeight) {
        do {
          iVar6 = 0;
          if (0 < pUVar5->MapWidth) {
            do {
              UPaperTileLayer::GetCell(this_00,(FPaperTileInfo *)&local_48.ObjectPtr,iVar6,iVar7);
              if ((((local_48.DebugPtr != (UPaperTileSet *)0x0) && (local_40 != -1)) &&
                  (local_48.DebugPtr != (UPaperTileSet *)0x0)) &&
                 (TVar4 = (TObjectPtr<UTexture2D>_u_0)
                          ((local_48.DebugPtr)->TileSheet).field0_0x0.DebugPtr,
                 TVar4.DebugPtr != (UTexture2D *)0x0)) {
                local_res8 = TVar4;
                TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*>
                          (param_1,(UTexture **)&local_res8.DebugPtr);
              }
              pUVar5 = (this->TileMap).field0_0x0.DebugPtr;
              iVar6 = iVar6 + 1;
            } while (iVar6 < pUVar5->MapWidth);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < pUVar5->MapHeight);
      }
      pFVar8 = pFVar8 + 8;
    }
  }
  UPrimitiveComponent::GetUsedTextures((UPrimitiveComponent *)this,param_1,param_2);
  return;
}

// GetWireframeColor @ 14ad025c0

FLinearColor * __thiscall
UPaperTileMapComponent::GetWireframeColor
          (UPaperTileMapComponent *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->TileMapColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->TileMapColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// MakeTileMapEditable @ 14ad037d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UPaperTileMapComponent::MakeTileMapEditable(UPaperTileMapComponent *this)

{
  code *pcVar1;
  UObject *pUVar2;
  UPaperTileMap *pUVar3;
  
  pUVar3 = (this->TileMap).field0_0x0.DebugPtr;
  if ((pUVar3 != (UPaperTileMap *)0x0) && ((UPaperTileMapComponent *)pUVar3->_padding_ != this)) {
    pcVar1 = *(code **)(this->_padding_ + 0xb28);
    pUVar2 = StaticDuplicateObject
                       ((UObject *)pUVar3,(UObject *)this,(FName)0x0,
                        RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                        RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                        RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                        RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                        RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                        RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                        RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                        RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                        RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                        RF_Public,(UClass *)0x0,Normal,
                        PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                        ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                        AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                        ReachabilityFlag0);
    pUVar3 = CastChecked<UPaperTileMap,UObject>(pUVar2);
    (*pcVar1)(this,pUVar3);
  }
  return;
}

// OwnsTileMap @ 14ad05370

bool __thiscall UPaperTileMapComponent::OwnsTileMap(UPaperTileMapComponent *this)

{
  UPaperTileMap *pUVar1;
  
  pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
  if ((pUVar1 != (UPaperTileMap *)0x0) && ((UPaperTileMapComponent *)pUVar1->_padding_ == this)) {
    return true;
  }
  return false;
}

// PostInitProperties @ 14ad05420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPaperTileMapComponent::PostInitProperties(UPaperTileMapComponent *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPaperTileMap *this_00;
  EObjectFlags EVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->_padding_ & 0x30) == 0) {
    EVar4 = RF_NoFlags;
  }
  else {
    EVar4 = (EObjectFlags)this->_padding_ &
            (RF_Transient|RF_ArchetypeObject|RF_Transactional|RF_Public);
  }
  pFVar2 = ::FName::FName(local_a8,L"PaperTileMap_0");
  FVar1 = *pFVar2;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar3 = UPaperTileMap::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  local_98._16_8_ = FVar1;
  local_98._24_4_ = EVar4;
  this_00 = (UPaperTileMap *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UPaperTileMap *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->TileMap).field0_0x0.DebugPtr = this_00;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transactional);
  UPrimitiveComponent::PostInitProperties((UPrimitiveComponent *)this);
  return;
}

// PostLoad @ 14ad05c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPaperTileMapComponent::PostLoad(UPaperTileMapComponent *this)

{
  int *piVar1;
  TArray<TObjectPtr<UPaperTileLayer>,TSizedDefaultAllocator<32>_> *pTVar2;
  UMaterialInterface *pUVar3;
  FScriptContainerElement *pFVar4;
  UPaperTileLayer *this_00;
  float fVar5;
  int iVar6;
  UPaperTileMap *pUVar7;
  TArray<TObjectPtr<UPaperTileLayer>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res10 [8];
  byte local_res18;
  byte local_res19;
  byte local_res1a;
  byte local_res1b;
  UPaperTileSet *local_res20;
  FGuid local_48;
  
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  local_48 = FPaperCustomVersion::GUID;
  iVar6 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_48);
  if (iVar6 < 3) {
    pUVar7 = NewObject<UPaperTileMap>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPaperTileMap *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->TileMap).field0_0x0.DebugPtr = pUVar7;
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar7,RF_Transactional);
    ((this->TileMap).field0_0x0.DebugPtr)->MapWidth = this->MapWidth_DEPRECATED;
    ((this->TileMap).field0_0x0.DebugPtr)->MapHeight = this->MapHeight_DEPRECATED;
    ((this->TileMap).field0_0x0.DebugPtr)->TileWidth = this->TileWidth_DEPRECATED;
    ((this->TileMap).field0_0x0.DebugPtr)->TileHeight = this->TileHeight_DEPRECATED;
    ((this->TileMap).field0_0x0.DebugPtr)->PixelsPerUnrealUnit = 1.0;
    local_res20 = (this->DefaultLayerTileSet_DEPRECATED).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UPaperTileSet *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    pUVar7 = (this->TileMap).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UPaperTileSet *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FSoftObjectPtr::operator=(&(pUVar7->SelectedTileSet).SoftObjectPtr,(FObjectPtr)&local_res20);
    pUVar7 = (this->TileMap).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (this->Material_DEPRECATED).field0_0x0.DebugPtr,
       pUVar3 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pTVar2 = &this->TileLayers_DEPRECATED;
    (pUVar7->Material).field0_0x0 = (this->Material_DEPRECATED).field0_0x0;
    pUVar7 = (this->TileMap).field0_0x0.DebugPtr;
    pTVar8 = &pUVar7->TileLayers;
    if (pTVar8 != pTVar2) {
      iVar6 = (this->TileLayers_DEPRECATED).ArrayNum;
      piVar1 = &(pUVar7->TileLayers).ArrayMax;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      (pUVar7->TileLayers).ArrayNum = iVar6;
      if ((iVar6 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar6,*piVar1,&pTVar8->AllocatorInstance,iVar6,piVar1);
        ConstructItems<TObjectPtr<UPaperTileLayer>,TObjectPtr<UPaperTileLayer>,int>
                  ((pTVar8->AllocatorInstance).Data,(TObjectPtr<UPaperTileLayer> *)pFVar4,iVar6);
      }
    }
    pUVar7 = (this->TileMap).field0_0x0.DebugPtr;
    pFVar9 = (pUVar7->TileLayers).AllocatorInstance.Data;
    iVar6 = (pUVar7->TileLayers).ArrayNum;
    pFVar4 = pFVar9 + (longlong)iVar6 * 8;
    while( true ) {
      if ((pUVar7->TileLayers).ArrayNum != iVar6) {
        `TCheckedPointerIterator<TObjectPtr<UPaperTileLayer>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar9 == pFVar4) break;
      this_00 = *(UPaperTileLayer **)pFVar9;
      (**(code **)(this_00->_padding_ + 0x170))(this_00,0,(this->TileMap).field0_0x0.DebugPtr,0x10);
      UPaperTileLayer::ConvertToTileSetPerCell(this_00);
      pFVar9 = pFVar9 + 8;
    }
    piVar1 = &(this->TileLayers_DEPRECATED).ArrayMax;
    (this->DefaultLayerTileSet_DEPRECATED).field0_0x0.DebugPtr = (UPaperTileSet *)0x0;
    (this->Material_DEPRECATED).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
    (this->TileLayers_DEPRECATED).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else if (0x10 < iVar6) {
    return;
  }
  FLinearColor::ToFColorSRGB(&this->TileMapColor);
  fVar5 = __real_3b808081;
  fVar11 = (float)local_res19 * __real_3b808081;
  fVar10 = (float)local_res18 * __real_3b808081;
  (this->TileMapColor).field0_0x0._s_0.R = (float)local_res1a * __real_3b808081;
  (this->TileMapColor).field0_0x0._s_0.G = fVar11;
  (this->TileMapColor).field0_0x0._s_0.B = fVar10;
  (this->TileMapColor).field0_0x0._s_0.A = (float)local_res1b * fVar5;
  return;
}

// RebuildCollision @ 14ad06a30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPaperTileMapComponent::RebuildCollision(UPaperTileMapComponent *this)

{
  UPaperTileMap *pUVar1;
  
  pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
  if ((pUVar1 != (UPaperTileMap *)0x0) && ((UPaperTileMapComponent *)pUVar1->_padding_ == this)) {
    (**(code **)(pUVar1->_padding_ + 0x2b0))();
  }
  UActorComponent::RecreatePhysicsState((UActorComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x00014ad06a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x5b0))(this);
  return;
}

// RebuildRenderData @ 14ad06cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UPaperTileMapComponent::RebuildRenderData
          (UPaperTileMapComponent *this,
          TArray<FSpriteRenderSection,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  void *_Src;
  undefined4 uVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  UPaperTileMapComponent *pUVar16;
  ForAnyElementType _Src_00;
  TArray<FSpriteRenderSection,TSizedDefaultAllocator<32>_> *pTVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar21;
  UPaperTileMap *pUVar22;
  int iVar23;
  longlong *plVar24;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar25;
  uint uVar26;
  longlong *plVar27;
  UPaperTileMapComponent *pUVar28;
  int iVar29;
  longlong lVar30;
  FScriptContainerElement *pFVar31;
  int iVar32;
  ForElementType<UTexture_*> *_Dst;
  uint uVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  float fVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  float fVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  double dVar64;
  undefined1 auStackY_388 [32];
  uint local_348;
  undefined1 local_344 [4];
  float local_340;
  undefined4 local_33c;
  int local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  TVector<double>_u_0 local_320;
  undefined8 local_308;
  UPaperTileMapComponent *local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  uint local_2dc;
  float local_2d8;
  uint local_2d4;
  double local_2d0;
  longlong local_2c8;
  longlong *local_2c0;
  double local_2b8;
  ForAnyElementType local_2b0;
  int local_2a8;
  int local_2a4;
  float local_2a0;
  float local_29c;
  longlong *local_298;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *local_290;
  double local_288;
  double local_280;
  double local_278;
  longlong *local_270;
  float local_268;
  float local_264;
  float local_260 [4];
  float local_250 [4];
  float local_240;
  float local_23c;
  float fStack_238;
  float local_234;
  float fStack_230;
  float local_22c;
  float fStack_228;
  float local_224;
  uint uStack_220;
  float local_21c;
  float fStack_218;
  float local_214;
  float fStack_210;
  float local_20c;
  float fStack_208;
  undefined4 local_204;
  undefined4 uStack_200;
  UMaterial *local_1f8;
  float local_1f0;
  float fStack_1ec;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  TVector<float>_u_0 local_1b8;
  TArray<FSpriteRenderSection,TSizedDefaultAllocator<32>_> *local_1a8;
  TVector<float>_u_0 local_1a0;
  TVector<float>_u_0 local_194;
  TVector<float>_u_0 local_188;
  TVector<float>_u_0 local_17c;
  TVector<float>_u_0 local_170;
  TVector<float>_u_0 local_164;
  TVector<float>_u_0 local_158;
  TVector<float>_u_0 local_14c;
  TVector<float>_u_0 local_140;
  TVector<float>_u_0 local_134;
  undefined1 local_128 [16];
  TVector<float>_u_0 local_118;
  undefined1 local_108 [16];
  double local_f8;
  TVector<double>_u_0 local_e8;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_388;
  pUVar22 = (this->TileMap).field0_0x0.DebugPtr;
  if (pUVar22 != (UPaperTileMap *)0x0) {
    local_300 = this;
    local_2f0 = param_2;
    local_1a8 = param_1;
    UPaperTileMap::GetTileToLocalParameters
              (pUVar22,(TVector<double> *)&local_320._s_0,(TVector<double> *)&local_1d0._s_0,
               (TVector<double> *)&local_1e8._s_0,(TVector<double> *)&local_e8._s_0);
    fVar54 = __real_3f800000;
    fVar61 = 0.0;
    uVar26 = 0;
    uVar50 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar51 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    local_2d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_288 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_2e8 = __real_3f800000 / pUVar22->PixelsPerUnrealUnit;
    uVar33 = (pUVar22->TileLayers).ArrayNum - 1;
    local_290 = (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)0x0;
    local_348 = 0;
    local_280 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_2d8 = __real_3f800000;
    local_2e4 = __real_3f800000;
    local_2e0 = __real_3f800000;
    local_32c = __real_3f800000;
    local_328 = __real_3f800000;
    local_264 = 0.0;
    local_308 = (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)0x0;
    if (-1 < (int)uVar33) {
      lVar30 = (longlong)(int)uVar33 * 8;
      do {
        pUVar22 = (this->TileMap).field0_0x0.DebugPtr;
        uVar19 = 0;
        if ((int)uVar33 < (pUVar22->TileLayers).ArrayNum) {
          uVar19 = ~uVar33 >> 0x1f;
        }
        local_2f8 = lVar30;
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *(longlong *)((pUVar22->TileLayers).AllocatorInstance.Data + lVar30);
        if ((lVar7 != 0) &&
           ((this->bUseSingleLayer == false || (uVar33 == this->UseSingleLayerIndex)))) {
          iVar32 = *(int *)(lVar7 + 0x70);
          iVar29 = 0;
          plVar24 = *(longlong **)(lVar7 + 0x68);
          plVar27 = plVar24 + (longlong)iVar32 * 2;
          while( true ) {
            if (*(int *)(lVar7 + 0x70) != iVar32) {
              local_344[0] = 0;
              `TCheckedPointerIterator<FPaperTileInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_344);
            }
            if (plVar24 == plVar27) break;
            if ((*plVar24 != 0) && ((int)plVar24[1] != -1)) {
              iVar29 = iVar29 + 1;
            }
            plVar24 = plVar24 + 2;
          }
          uVar26 = local_348 + iVar29 * 6;
          lVar30 = local_2f8;
          this = local_300;
          local_348 = uVar26;
        }
        lVar30 = lVar30 + -8;
        uVar33 = uVar33 - 1;
      } while (-1 < (int)uVar33);
      param_2 = local_2f0;
      local_2f8 = lVar30;
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
      }
    }
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != uVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,4,uVar26,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    pUVar28 = local_300;
    local_1f8 = (UMaterial *)(**(code **)(local_300->_padding_ + 0x690))(local_300,0);
    if (local_1f8 == (UMaterial *)0x0) {
      local_1f8 = UMaterial::GetDefaultMaterial(MD_Surface);
    }
    uVar26 = (((pUVar28->TileMap).field0_0x0.DebugPtr)->TileLayers).ArrayNum - 1;
    if (-1 < (int)uVar26) {
      auVar42._8_8_ = 0;
      auVar42._0_8_ = local_320._s_0.Z;
      local_2c8 = (longlong)(int)uVar26;
      lVar30 = local_2c8 * 8;
      pTVar25 = local_308;
      uVar55 = local_320._0_4_;
      uVar56 = local_320._4_4_;
      uVar57 = local_320._8_4_;
      uVar58 = local_320._12_4_;
      uVar59 = local_320._8_4_;
      uVar60 = local_320._12_4_;
      uVar62 = local_320._0_4_;
      uVar63 = local_320._4_4_;
      dVar11 = local_2b8;
      dVar12 = local_2b8;
      dVar13 = local_2b8;
      do {
        pUVar22 = (pUVar28->TileMap).field0_0x0.DebugPtr;
        uVar33 = 0;
        if ((int)uVar26 < (pUVar22->TileLayers).ArrayNum) {
          uVar33 = ~uVar26 >> 0x1f;
        }
        local_2f8 = lVar30;
        local_2d4 = uVar26;
        if ((uVar33 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pUVar16 = local_300;
        lVar7 = *(longlong *)((pUVar22->TileLayers).AllocatorInstance.Data + lVar30);
        if ((lVar7 != 0) &&
           ((pUVar28->bUseSingleLayer == false || (uVar26 == pUVar28->UseSingleLayerIndex)))) {
          auVar43 = *(undefined1 (*) [16])(lVar7 + 0x4c);
          pFVar31 = (FScriptContainerElement *)0x0;
          fVar34 = auVar43._8_4_ * (pUVar28->TileMapColor).field0_0x0._s_0.B;
          fVar38 = auVar43._4_4_ * (pUVar28->TileMapColor).field0_0x0._s_0.G;
          if (fVar34 <= fVar61) {
            fVar34 = fVar61;
          }
          if (fVar38 <= fVar61) {
            fVar38 = fVar61;
          }
          if (fVar54 <= fVar34) {
            fVar34 = fVar54;
          }
          if (fVar54 <= fVar38) {
            fVar38 = fVar54;
          }
          fVar35 = auVar43._0_4_ * (pUVar28->TileMapColor).field0_0x0._s_0.R;
          fVar46 = auVar43._12_4_ * (pUVar28->TileMapColor).field0_0x0._s_0.A;
          plVar24 = *(longlong **)(lVar7 + 0x68);
          if (fVar35 <= fVar61) {
            fVar35 = fVar61;
          }
          if (fVar46 <= fVar61) {
            fVar46 = fVar61;
          }
          if (fVar54 <= fVar35) {
            fVar35 = fVar54;
          }
          if (fVar54 <= fVar46) {
            fVar46 = fVar54;
          }
          local_33c = CONCAT13((char)(int)(fVar46 * __real_437f0000 + __real_3f000000),
                               CONCAT12((char)(int)(fVar35 * __real_437f0000 + __real_3f000000),
                                        CONCAT11((char)(int)(fVar38 * __real_437f0000 +
                                                            __real_3f000000),
                                                 (char)(int)(fVar34 * __real_437f0000 +
                                                            __real_3f000000))));
          if ((*(int *)(lVar7 + 0x38) != ((local_300->TileMap).field0_0x0.DebugPtr)->MapWidth) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Layer->GetLayerWidth() == TileMap->MapWidth",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperTileMapComponent.cpp"
                                  ,0x14f,L""), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if ((*(int *)(lVar7 + 0x3c) != ((pUVar16->TileMap).field0_0x0.DebugPtr)->MapHeight) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Layer->GetLayerHeight() == TileMap->MapHeight",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperTileMapComponent.cpp"
                                  ,0x150,L""), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar15 = local_33c;
          pUVar22 = (pUVar16->TileMap).field0_0x0.DebugPtr;
          local_2dc = 0;
          pUVar28 = pUVar16;
          lVar30 = local_2f8;
          if (0 < pUVar22->MapHeight) {
            do {
              dVar36 = (double)CONCAT44(uVar58,uVar57);
              uVar2 = (pUVar22->ProjectionMode).Value;
              local_278 = auVar42._0_8_;
              if (uVar2 == '\0') {
LAB_14ad07352:
                local_108._4_4_ = uVar56;
                local_108._0_4_ = uVar55;
                local_108._8_4_ = uVar57;
                local_108._12_4_ = uVar58;
                local_f8 = local_278;
                auVar43._4_4_ = uVar56;
                auVar43._0_4_ = uVar55;
                auVar43._8_4_ = uVar57;
                auVar43._12_4_ = uVar58;
                uVar52 = uVar57;
                uVar53 = uVar58;
              }
              else if (uVar2 == '\x01') {
                uVar52 = 0;
                uVar53 = 0;
                auVar43._0_8_ =
                     ((double)CONCAT44(uVar63,uVar62) - local_1d0._s_0.X * __real_3fe0000000000000)
                     + local_1e8._s_0.X * __real_3fe0000000000000;
                auVar43._8_8_ = 0;
                dVar36 = ((double)CONCAT44(uVar60,uVar59) -
                         local_1d0._s_0.Y * __real_3fe0000000000000) +
                         local_1e8._s_0.Y * __real_3fe0000000000000;
                local_108 = auVar43;
                local_278 = (local_278 - local_1d0._s_0.Z * __real_3fe0000000000000) +
                            local_1e8._s_0.Z * __real_3fe0000000000000;
              }
              else {
                if ((uVar2 != '\x02') && (uVar2 != '\x03')) goto LAB_14ad07352;
                dVar36 = (double)(local_2dc & 1);
                auVar43._0_8_ = local_e8._s_0.X * dVar36 + (double)CONCAT44(uVar63,uVar62);
                auVar43._8_8_ = 0;
                local_278 = local_e8._s_0.Z * dVar36 + local_278;
                dVar36 = local_e8._s_0.Y * dVar36 + (double)CONCAT44(uVar60,uVar59);
                local_108 = auVar43;
                uVar52 = 0;
                uVar53 = 0;
              }
              local_128._8_4_ = uVar52;
              local_128._0_8_ = dVar36;
              local_128._12_4_ = uVar53;
              local_338 = 0;
              if (0 < pUVar22->MapWidth) {
                dVar64 = (double)(int)local_2dc;
                local_268 = (float)(int)local_2dc;
                local_240 = (float)(int)uVar26;
                local_270 = plVar24;
                dVar39 = local_278;
                local_2b8 = dVar64;
                do {
                  pTVar17 = local_1a8;
                  uVar14 = CONCAT44(uVar51,uVar50);
                  local_334 = (float)pUVar22->TileWidth;
                  plVar24 = local_270 + 2;
                  lVar30 = *local_270;
                  dVar49 = (double)local_338;
                  local_340 = (float)pUVar22->TileHeight;
                  dVar48 = (double)((float)local_338 * pUVar22->SeparationPerTileX +
                                    local_240 * pUVar22->SeparationPerLayer +
                                   local_268 * pUVar22->SeparationPerTileY);
                  dVar40 = local_1e8._s_0.X * dVar64 + local_1d0._s_0.X * dVar49 + auVar43._0_8_ +
                           dVar48 * PaperAxisZ.field0_0x0._s_0.X;
                  dVar37 = local_1e8._s_0.Y * dVar64 + local_1d0._s_0.Y * dVar49 + dVar36 +
                           dVar48 * PaperAxisZ.field0_0x0._s_0.Y;
                  dVar48 = local_1e8._s_0.Z * dVar64 + local_1d0._s_0.Z * dVar49 + dVar39 +
                           dVar48 * PaperAxisZ.field0_0x0._s_0.Z;
                  local_2c0 = local_270;
                  local_298 = local_270;
                  if (lVar30 != 0) {
                    pTVar21 = *(TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> **)
                               (lVar30 + 0x30);
                    uVar26 = *(uint *)(local_270 + 1) & 0x1fffffff;
                    if (pTVar21 == (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)0x0) {
                      iVar32 = 0;
                    }
                    else {
                      uVar5 = pTVar21[0x15].ArrayNum;
                      uVar8 = pTVar21[0x15].ArrayMax;
                      iVar32 = ((((uVar8 - *(int *)(lVar30 + 0x54)) - *(int *)(lVar30 + 0x4c)) +
                                *(int *)(lVar30 + 0x5c)) /
                               (*(int *)(lVar30 + 0x2c) + *(int *)(lVar30 + 0x5c))) *
                               ((((*(int *)(lVar30 + 0x58) - *(int *)(lVar30 + 0x50)) -
                                 *(int *)(lVar30 + 0x48)) + uVar5) /
                               (*(int *)(lVar30 + 0x28) + *(int *)(lVar30 + 0x58)));
                    }
                    local_2f0 = pTVar21;
                    if ((int)uVar26 < iVar32) {
                      if (pTVar21 == (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)0x0)
                      {
                        iVar32 = 0;
                      }
                      else {
                        iVar32 = (((*(int *)(lVar30 + 0x58) - *(int *)(lVar30 + 0x50)) -
                                  *(int *)(lVar30 + 0x48)) + pTVar21[0x15].ArrayNum) /
                                 (*(int *)(lVar30 + 0x28) + *(int *)(lVar30 + 0x58));
                      }
                      iVar29 = *(int *)(lVar30 + 0x5c);
                      iVar3 = *(int *)(lVar30 + 0x2c);
                      iVar4 = *(int *)(lVar30 + 0x4c);
                      if (pTVar21 != (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)0x0)
                      {
                        local_330 = (float)((*(int *)(lVar30 + 0x58) + *(int *)(lVar30 + 0x28)) *
                                            (int)((longlong)(ulonglong)uVar26 % (longlong)iVar32) +
                                           *(int *)(lVar30 + 0x48));
                        if ((pTVar21 == local_290) && (pFVar31 != (FScriptContainerElement *)0x0)) {
LAB_14ad079a8:
                          local_270 = plVar24;
                          uVar50 = SUB84(PaperAxisX.field0_0x0._s_0.X,0);
                          uVar51 = (undefined4)((ulonglong)PaperAxisX.field0_0x0._0_8_ >> 0x20);
                          uVar55 = SUB84(PaperAxisY.field0_0x0._s_0.Y,0);
                          uVar56 = (undefined4)((ulonglong)PaperAxisY.field0_0x0._8_8_ >> 0x20);
                        }
                        else {
                          uVar33 = local_1a8->ArrayNum;
                          if (uVar33 == local_1a8->ArrayMax) {
                            local_270 = plVar24;
                            uVar33 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x848,&local_1a8->AllocatorInstance,
                                                &local_1a8->ArrayMax);
                            plVar24 = local_270;
                          }
                          local_270 = plVar24;
                          pTVar17->ArrayNum = uVar33 + 1;
                          uVar19 = 0;
                          if ((int)uVar33 < (int)(uVar33 + 1)) {
                            uVar19 = ~uVar33 >> 0x1f;
                          }
                          if ((uVar19 == 0) &&
                             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar18)) {
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pFVar31 = (FScriptContainerElement *)0x0;
                          pFVar1 = (pTVar17->AllocatorInstance).Data + (longlong)(int)uVar33 * 0x48;
                          if (pFVar1 != (FScriptContainerElement *)0x0) {
                            *(longlong *)(pFVar1 + 0x30) = 0;
                            *(longlong *)pFVar1 = 0;
                            *(undefined4 *)(pFVar1 + 0x38) = 0;
                            *(undefined4 *)(pFVar1 + 0x3c) = 4;
                            *(undefined4 *)(pFVar1 + 0x40) = 0xffffffff;
                            *(undefined4 *)(pFVar1 + 0x44) = 0;
                            pFVar31 = pFVar1;
                          }
                          *(TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> **)(pFVar31 + 8)
                               = pTVar21;
                          local_2b0.Data = (FScriptContainerElement *)0x0;
                          local_2a8 = *(int *)(*local_2c0 + 0x40);
                          lVar30 = (longlong)local_2a8;
                          _Src = *(void **)(*local_2c0 + 0x38);
                          if (local_2a8 == 0) {
                            local_2a4 = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (8,8,local_2a8,0,&local_2b0,local_2a8,&local_2a4);
                            memcpy(local_2b0.Data,_Src,lVar30 << 3);
                          }
                          iVar20 = local_2a8;
                          _Src_00.Data = local_2b0.Data;
                          *(int *)(pFVar31 + 0x38) = local_2a8;
                          if ((local_2a8 == 0) && (*(int *)(pFVar31 + 0x3c) == 0)) {
                            *(int *)(pFVar31 + 0x3c) = 4;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
                                      (8,8,local_2a8,*(int *)(pFVar31 + 0x3c),
                                       (ForElementType<UTexture_*> *)(pFVar31 + 0x10),local_2a8,
                                       (int *)(pFVar31 + 0x3c));
                            _Dst = (ForElementType<UTexture_*> *)(pFVar31 + 0x10);
                            if (*(ForElementType<UTexture_*> **)(pFVar31 + 0x30) !=
                                (ForElementType<UTexture_*> *)0x0) {
                              _Dst = *(ForElementType<UTexture_*> **)(pFVar31 + 0x30);
                            }
                            if (iVar20 != 0) {
                              memcpy(_Dst,_Src_00.Data,(longlong)iVar20 << 3);
                            }
                          }
                          if (local_2b0.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_2b0.Data);
                          }
                          *(UMaterial **)pFVar31 = local_1f8;
                          *(int *)(pFVar31 + 0x40) = param_2->ArrayNum;
                          dVar11 = (dVar40 * PaperAxisZ.field0_0x0._s_0.X +
                                    dVar37 * PaperAxisZ.field0_0x0._s_0.Y +
                                   dVar48 * PaperAxisZ.field0_0x0._s_0.Z) /
                                   (PaperAxisZ.field0_0x0._s_0.X * PaperAxisZ.field0_0x0._s_0.X +
                                    PaperAxisZ.field0_0x0._s_0.Y * PaperAxisZ.field0_0x0._s_0.Y +
                                   PaperAxisZ.field0_0x0._s_0.Z * PaperAxisZ.field0_0x0._s_0.Z);
                          dVar12 = dVar11 * PaperAxisZ.field0_0x0._s_0.X;
                          dVar13 = dVar11 * PaperAxisZ.field0_0x0._s_0.Y;
                          dVar11 = dVar11 * PaperAxisZ.field0_0x0._s_0.Z;
                          plVar24 = local_270;
                          if (local_2f0 == local_290) goto LAB_14ad079a8;
                          uVar6 = local_2f0[0x15].ArrayNum;
                          uVar9 = local_2f0[0x15].ArrayMax;
                          uVar50 = SUB84(PaperAxisX.field0_0x0._s_0.X,0);
                          uVar51 = (undefined4)((ulonglong)PaperAxisX.field0_0x0._0_8_ >> 0x20);
                          uVar55 = SUB84(PaperAxisY.field0_0x0._s_0.Y,0);
                          uVar56 = (undefined4)((ulonglong)PaperAxisY.field0_0x0._8_8_ >> 0x20);
                          local_2e4 = local_2d8 / (float)(int)uVar6;
                          lVar30 = *local_2c0;
                          local_2e0 = local_2d8 / (float)(int)uVar9;
                          if (lVar30 == 0) {
                            local_290 = local_2f0;
                            local_20c = (float)(int)local_334 * local_2e8;
                            local_32c = (float)(int)local_334 * local_2e4;
                            fStack_208 = (float)(int)local_340 * local_2e8;
                            local_328 = (float)(int)local_340 * local_2e0;
                            pTVar25 = (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)
                                      CONCAT44(fStack_208,local_20c);
                            local_2d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                            local_288 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                            local_280 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                            uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                            local_308 = pTVar25;
                          }
                          else {
                            local_290 = local_2f0;
                            iVar20 = (int)*(undefined8 *)(lVar30 + 0x28);
                            local_32c = (float)iVar20 * local_2e4;
                            iVar23 = (int)((ulonglong)*(undefined8 *)(lVar30 + 0x28) >> 0x20);
                            local_328 = (float)iVar23 * local_2e0;
                            local_214 = (float)iVar20 * local_2e8;
                            fStack_210 = (float)iVar23 * local_2e8;
                            pTVar25 = (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)
                                      CONCAT44((float)iVar23 * local_2e8,local_214);
                            dVar36 = (double)((float)(int)*(undefined8 *)(lVar30 + 0x60) * local_2e8
                                             );
                            dVar39 = (double)((float)((iVar23 - (int)((ulonglong)
                                                                      *(undefined8 *)(lVar30 + 0x60)
                                                                     >> 0x20)) - (int)local_340) *
                                             local_2e8);
                            local_2d0 = dVar36 * PaperAxisX.field0_0x0._s_0.X +
                                        dVar39 * PaperAxisY.field0_0x0._s_0.X;
                            local_288 = dVar36 * PaperAxisX.field0_0x0._s_0.Y +
                                        dVar39 * PaperAxisY.field0_0x0._s_0.Y;
                            local_280 = dVar36 * PaperAxisX.field0_0x0._s_0.Z +
                                        dVar39 * PaperAxisY.field0_0x0._s_0.Z;
                            uVar14 = local_280;
                            local_308 = pTVar25;
                          }
                        }
                        dVar37 = dVar37 + local_288;
                        dVar48 = dVar48 + (double)uVar14;
                        local_250[2] = (float)((iVar29 + iVar3) *
                                               (int)((longlong)(ulonglong)uVar26 / (longlong)iVar32)
                                              + iVar4) * local_2e0;
                        dVar40 = dVar40 + local_2d0;
                        local_260[0] = local_330 * local_2e4;
                        uVar26 = *(uint *)(local_298 + 1) >> 0x1d;
                        local_2a0 = (float)(dVar37 * PaperAxisX.field0_0x0._s_0.Y +
                                            dVar40 * (double)CONCAT44(uVar51,uVar50) +
                                           dVar48 * PaperAxisX.field0_0x0._s_0.Z);
                        fVar54 = (float)(dVar37 * (double)CONCAT44(uVar56,uVar55) +
                                         dVar40 * PaperAxisY.field0_0x0._s_0.X +
                                        dVar48 * PaperAxisY.field0_0x0._s_0.Z);
                        pTVar21 = pTVar25;
                        if ((*(uint *)(local_298 + 1) & 0x20000000) != 0) {
                          local_204 = local_308._4_4_;
                          uStack_200 = (undefined4)local_308;
                          pTVar21 = (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)
                                    CONCAT44((undefined4)local_308,local_308._4_4_);
                        }
                        local_260[1] = local_32c + local_260[0];
                        local_260[2] = local_32c + local_260[0];
                        local_250[3] = local_250[2];
                        local_260[3] = local_260[0];
                        local_330 = local_260[PermutationTable[uVar26][0]];
                        local_250[0] = local_328 + local_250[2];
                        local_250[1] = local_328 + local_250[2];
                        local_2f0._4_4_ = (float)((ulonglong)pTVar21 >> 0x20);
                        local_2f0._4_4_ = fVar54 - local_2f0._4_4_;
                        local_334 = local_250[PermutationTable[uVar26][0]];
                        dVar39 = (double)local_2f0._4_4_;
                        local_340 = local_260[PermutationTable[uVar26][2]];
                        fVar61 = local_250[PermutationTable[uVar26][2]];
                        local_2c0 = (longlong *)CONCAT44(local_2c0._4_4_,local_2f0._4_4_);
                        local_29c = local_260[PermutationTable[uVar26][3]];
                        iVar32 = param_2->ArrayNum;
                        fStack_1ec = local_250[PermutationTable[uVar26][1]];
                        auVar42 = pmovsxbd(ZEXT416((uint)local_250[PermutationTable[uVar26][1]]),
                                           FPaperSpriteTangents::PackedNormalZ.Vector);
                        local_298 = (longlong *)
                                    CONCAT44(local_298._4_4_,local_250[PermutationTable[uVar26][3]])
                        ;
                        local_2f0._0_4_ = SUB84(pTVar21,0);
                        auVar43 = pmovsxbd(auVar42,FPaperSpriteTangents::PackedNormalX.Vector);
                        local_134._0_8_ =
                             CONCAT44((float)auVar42._4_4_ * _UNK_151040074,
                                      (float)auVar42._0_4_ * ___xmm_3c0102043c0102043c0102043c010204
                                     );
                        local_134._s_0.Z = (float)auVar42._8_4_ * _UNK_151040078;
                        dVar36 = (double)((float)local_2f0 + local_2a0);
                        local_1f0 = local_260[PermutationTable[uVar26][1]];
                        local_140._0_8_ =
                             CONCAT44((float)auVar43._4_4_ * _UNK_151040074,
                                      (float)auVar43._0_4_ * ___xmm_3c0102043c0102043c0102043c010204
                                     );
                        local_140._s_0.Z = (float)auVar43._8_4_ * _UNK_151040078;
                        dVar40 = dVar39 * PaperAxisY.field0_0x0._s_0.X;
                        dVar64 = dVar36 * PaperAxisX.field0_0x0._s_0.Y;
                        dVar37 = dVar36 * PaperAxisX.field0_0x0._s_0.Z;
                        dVar48 = dVar39 * PaperAxisY.field0_0x0._s_0.Z;
                        local_2f0 = pTVar21;
                        if (iVar32 == param_2->ArrayMax) {
                          iVar32 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
                        }
                        pFVar1 = (param_2->AllocatorInstance).Data;
                        param_2->ArrayNum = iVar32 + 1;
                        lVar30 = (longlong)iVar32 * 0x58;
                        *(float *)(pFVar1 + lVar30) =
                             (float)(dVar40 + dVar36 * (double)CONCAT44(uVar51,uVar50) + dVar12);
                        *(float *)(pFVar1 + lVar30 + 4) =
                             (float)(dVar39 * (double)CONCAT44(uVar56,uVar55) + dVar64 + dVar13);
                        *(float *)(pFVar1 + lVar30 + 8) = (float)(dVar48 + dVar37 + dVar11);
                        FPackedNormal::FPackedNormal
                                  ((FPackedNormal *)(pFVar1 + lVar30 + 0x4c),
                                   (TVector<float> *)&local_140._s_0);
                        FPackedNormal::FPackedNormal
                                  ((FPackedNormal *)(pFVar1 + lVar30 + 0x50),
                                   (TVector<float> *)&local_134._s_0);
                        fVar35 = _UNK_151040078;
                        fVar38 = _UNK_151040074;
                        fVar34 = ___xmm_3c0102043c0102043c0102043c010204;
                        uVar14 = CONCAT44(fStack_1ec,local_1f0);
                        *(undefined4 *)(pFVar1 + lVar30 + 0x54) = uVar15;
                        pFVar1[lVar30 + 0x53] = (FScriptContainerElement)0x7f;
                        *(undefined8 *)(pFVar1 + lVar30 + 0xc) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x14) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x1c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x24) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x2c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x34) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x3c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x44) = uVar14;
                        *(int *)(pFVar31 + 0x44) = *(int *)(pFVar31 + 0x44) + 1;
                        iVar32 = param_2->ArrayNum;
                        auVar42 = pmovsxbd(ZEXT416((uint)fVar61),
                                           FPaperSpriteTangents::PackedNormalZ.Vector);
                        auVar43 = pmovsxbd(auVar42,FPaperSpriteTangents::PackedNormalX.Vector);
                        local_1b8._0_8_ =
                             CONCAT44((float)auVar42._4_4_ * fVar38,(float)auVar42._0_4_ * fVar34);
                        local_1b8._s_0.Z = (float)auVar42._8_4_ * fVar35;
                        local_23c = local_340;
                        dVar64 = (double)fVar54;
                        dVar37 = dVar64 * PaperAxisY.field0_0x0._s_0.X;
                        dVar49 = dVar36 * PaperAxisX.field0_0x0._s_0.X;
                        local_118._0_8_ =
                             CONCAT44((float)auVar43._4_4_ * fVar38,(float)auVar43._0_4_ * fVar34);
                        local_118._s_0.Z = (float)auVar43._8_4_ * fVar35;
                        dVar40 = dVar64 * PaperAxisY.field0_0x0._s_0.Y;
                        dVar47 = dVar36 * PaperAxisX.field0_0x0._s_0.Y;
                        dVar41 = dVar36 * PaperAxisX.field0_0x0._s_0.Z;
                        dVar48 = dVar64 * PaperAxisY.field0_0x0._s_0.Z;
                        fStack_238 = fVar61;
                        if (iVar32 == param_2->ArrayMax) {
                          iVar32 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
                        }
                        pFVar1 = (param_2->AllocatorInstance).Data;
                        param_2->ArrayNum = iVar32 + 1;
                        lVar30 = (longlong)iVar32 * 0x58;
                        *(float *)(pFVar1 + lVar30) = (float)(dVar49 + dVar37 + dVar12);
                        *(float *)(pFVar1 + lVar30 + 4) = (float)(dVar47 + dVar40 + dVar13);
                        *(float *)(pFVar1 + lVar30 + 8) = (float)(dVar41 + dVar48 + dVar11);
                        FPackedNormal::FPackedNormal
                                  ((FPackedNormal *)(pFVar1 + lVar30 + 0x4c),
                                   (TVector<float> *)&local_118._s_0);
                        FPackedNormal::FPackedNormal
                                  ((FPackedNormal *)(pFVar1 + lVar30 + 0x50),
                                   (TVector<float> *)&local_1b8._s_0);
                        uVar14 = CONCAT44(fStack_238,local_23c);
                        *(undefined4 *)(pFVar1 + lVar30 + 0x54) = uVar15;
                        pFVar1[lVar30 + 0x53] = (FScriptContainerElement)0x7f;
                        *(undefined8 *)(pFVar1 + lVar30 + 0xc) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x14) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x1c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x24) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x2c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x34) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x3c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x44) = uVar14;
                        *(int *)(pFVar31 + 0x44) = *(int *)(pFVar31 + 0x44) + 1;
                        iVar32 = param_2->ArrayNum;
                        local_234 = local_330;
                        fStack_230 = local_334;
                        auVar42 = pmovsxbd(ZEXT416((uint)local_334),
                                           FPaperSpriteTangents::PackedNormalZ.Vector);
                        auVar43 = pmovsxbd(auVar42,FPaperSpriteTangents::PackedNormalX.Vector);
                        local_1a0._0_8_ =
                             CONCAT44((float)auVar42._4_4_ * fVar38,(float)auVar42._0_4_ * fVar34);
                        local_1a0._s_0.Z = (float)auVar42._8_4_ * fVar35;
                        dVar37 = (double)local_2a0;
                        local_14c._0_8_ =
                             CONCAT44((float)auVar43._4_4_ * fVar38,(float)auVar43._0_4_ * fVar34);
                        local_14c._s_0.Z = (float)auVar43._8_4_ * fVar35;
                        dVar48 = dVar39 * PaperAxisY.field0_0x0._s_0.Y;
                        dVar40 = dVar39 * PaperAxisY.field0_0x0._s_0.Z;
                        auVar44._0_8_ =
                             dVar37 * PaperAxisX.field0_0x0._s_0.X +
                             dVar39 * PaperAxisY.field0_0x0._s_0.X + dVar12;
                        auVar44._8_8_ = 0;
                        dVar49 = dVar37 * PaperAxisX.field0_0x0._s_0.Y;
                        fVar54 = (float)auVar44._0_8_;
                        dVar39 = dVar37 * PaperAxisX.field0_0x0._s_0.Z;
                        if (iVar32 == param_2->ArrayMax) {
                          iVar32 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
                        }
                        pFVar1 = (param_2->AllocatorInstance).Data;
                        param_2->ArrayNum = iVar32 + 1;
                        lVar30 = (longlong)iVar32 * 0x58;
                        *(float *)(pFVar1 + lVar30) = fVar54;
                        *(float *)(pFVar1 + lVar30 + 4) = (float)(dVar49 + dVar48 + dVar13);
                        *(float *)(pFVar1 + lVar30 + 8) = (float)(dVar39 + dVar40 + dVar11);
                        FPackedNormal::FPackedNormal
                                  ((FPackedNormal *)(pFVar1 + lVar30 + 0x4c),
                                   (TVector<float> *)&local_14c._s_0);
                        FPackedNormal::FPackedNormal
                                  ((FPackedNormal *)(pFVar1 + lVar30 + 0x50),
                                   (TVector<float> *)&local_1a0._s_0);
                        fVar38 = _UNK_151040078;
                        fVar34 = _UNK_151040074;
                        fVar54 = ___xmm_3c0102043c0102043c0102043c010204;
                        uVar14 = CONCAT44(fStack_230,local_234);
                        *(undefined4 *)(pFVar1 + lVar30 + 0x54) = uVar15;
                        pFVar1[lVar30 + 0x53] = (FScriptContainerElement)0x7f;
                        *(undefined8 *)(pFVar1 + lVar30 + 0xc) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x14) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x1c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x24) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x2c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x34) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x3c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x44) = uVar14;
                        *(int *)(pFVar31 + 0x44) = *(int *)(pFVar31 + 0x44) + 1;
                        auVar42 = pmovsxbd(auVar44,FPaperSpriteTangents::PackedNormalZ.Vector);
                        iVar32 = param_2->ArrayNum;
                        local_22c = local_340;
                        auVar43 = pmovsxbd(auVar42,FPaperSpriteTangents::PackedNormalX.Vector);
                        local_188._0_8_ =
                             CONCAT44((float)auVar42._4_4_ * fVar34,(float)auVar42._0_4_ * fVar54);
                        local_188._s_0.Z = (float)auVar42._8_4_ * fVar38;
                        dVar40 = dVar64 * PaperAxisY.field0_0x0._s_0.X;
                        dVar41 = dVar36 * PaperAxisX.field0_0x0._s_0.X;
                        local_194._0_8_ =
                             CONCAT44((float)auVar43._4_4_ * fVar34,(float)auVar43._0_4_ * fVar54);
                        local_194._s_0.Z = (float)auVar43._8_4_ * fVar38;
                        dVar48 = dVar64 * PaperAxisY.field0_0x0._s_0.Y;
                        dVar39 = dVar36 * PaperAxisX.field0_0x0._s_0.Z;
                        dVar36 = dVar36 * PaperAxisX.field0_0x0._s_0.Y;
                        dVar49 = dVar64 * PaperAxisY.field0_0x0._s_0.Z;
                        fStack_228 = fVar61;
                        if (iVar32 == param_2->ArrayMax) {
                          iVar32 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
                        }
                        pFVar1 = (param_2->AllocatorInstance).Data;
                        param_2->ArrayNum = iVar32 + 1;
                        lVar30 = (longlong)iVar32 * 0x58;
                        *(float *)(pFVar1 + lVar30) = (float)(dVar41 + dVar40 + dVar12);
                        *(float *)(pFVar1 + lVar30 + 4) = (float)(dVar36 + dVar48 + dVar13);
                        *(float *)(pFVar1 + lVar30 + 8) = (float)(dVar39 + dVar49 + dVar11);
                        FPackedNormal::FPackedNormal
                                  ((FPackedNormal *)(pFVar1 + lVar30 + 0x4c),
                                   (TVector<float> *)&local_194._s_0);
                        FPackedNormal::FPackedNormal
                                  ((FPackedNormal *)(pFVar1 + lVar30 + 0x50),
                                   (TVector<float> *)&local_188._s_0);
                        uVar14 = CONCAT44(fStack_228,local_22c);
                        *(undefined4 *)(pFVar1 + lVar30 + 0x54) = uVar15;
                        pFVar1[lVar30 + 0x53] = (FScriptContainerElement)0x7f;
                        *(undefined8 *)(pFVar1 + lVar30 + 0xc) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x14) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x1c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x24) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x2c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x34) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x3c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x44) = uVar14;
                        *(int *)(pFVar31 + 0x44) = *(int *)(pFVar31 + 0x44) + 1;
                        iVar32 = param_2->ArrayNum;
                        uStack_220 = (uint)local_298;
                        auVar42 = pmovsxbd(ZEXT416((uint)local_298),
                                           FPaperSpriteTangents::PackedNormalZ.Vector);
                        auVar43 = pmovsxbd(auVar42,FPaperSpriteTangents::PackedNormalX.Vector);
                        local_170._0_8_ =
                             CONCAT44((float)auVar42._4_4_ * fVar34,(float)auVar42._0_4_ * fVar54);
                        local_170._s_0.Z = (float)auVar42._8_4_ * fVar38;
                        local_224 = local_29c;
                        local_17c._0_8_ =
                             CONCAT44((float)auVar43._4_4_ * fVar34,(float)auVar43._0_4_ * fVar54);
                        local_17c._s_0.Z = (float)auVar43._8_4_ * fVar38;
                        dVar39 = dVar37 * PaperAxisX.field0_0x0._s_0.Y;
                        auVar45._0_8_ =
                             dVar64 * PaperAxisY.field0_0x0._s_0.X +
                             dVar37 * PaperAxisX.field0_0x0._s_0.X + dVar12;
                        auVar45._8_8_ = 0;
                        dVar36 = dVar64 * PaperAxisY.field0_0x0._s_0.Z;
                        dVar64 = dVar64 * PaperAxisY.field0_0x0._s_0.Y;
                        fVar61 = (float)auVar45._0_8_;
                        dVar40 = dVar37 * PaperAxisX.field0_0x0._s_0.Z;
                        if (iVar32 == param_2->ArrayMax) {
                          iVar32 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
                        }
                        pFVar1 = (param_2->AllocatorInstance).Data;
                        param_2->ArrayNum = iVar32 + 1;
                        lVar30 = (longlong)iVar32 * 0x58;
                        *(float *)(pFVar1 + lVar30) = fVar61;
                        *(float *)(pFVar1 + lVar30 + 4) = (float)(dVar64 + dVar39 + dVar13);
                        *(float *)(pFVar1 + lVar30 + 8) = (float)(dVar36 + dVar40 + dVar11);
                        FPackedNormal::FPackedNormal
                                  ((FPackedNormal *)(pFVar1 + lVar30 + 0x4c),
                                   (TVector<float> *)&local_17c._s_0);
                        FPackedNormal::FPackedNormal
                                  ((FPackedNormal *)(pFVar1 + lVar30 + 0x50),
                                   (TVector<float> *)&local_170._s_0);
                        uVar14 = CONCAT44(uStack_220,local_224);
                        *(undefined4 *)(pFVar1 + lVar30 + 0x54) = uVar15;
                        pFVar1[lVar30 + 0x53] = (FScriptContainerElement)0x7f;
                        *(undefined8 *)(pFVar1 + lVar30 + 0xc) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x14) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x1c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x24) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x2c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x34) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x3c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x44) = uVar14;
                        *(int *)(pFVar31 + 0x44) = *(int *)(pFVar31 + 0x44) + 1;
                        auVar42 = pmovsxbd(auVar45,FPaperSpriteTangents::PackedNormalZ.Vector);
                        iVar32 = param_2->ArrayNum;
                        local_21c = local_330;
                        fStack_218 = local_334;
                        dVar39 = dVar37 * PaperAxisX.field0_0x0._s_0.X;
                        auVar43 = pmovsxbd(auVar42,FPaperSpriteTangents::PackedNormalX.Vector);
                        local_158._0_8_ =
                             CONCAT44((float)auVar42._4_4_ * fVar34,(float)auVar42._0_4_ * fVar54);
                        local_158._s_0.Z = (float)auVar42._8_4_ * fVar38;
                        local_164._0_8_ =
                             CONCAT44((float)auVar43._4_4_ * fVar34,(float)auVar43._0_4_ * fVar54);
                        local_164._s_0.Z = (float)auVar43._8_4_ * fVar38;
                        dVar40 = (double)local_2c0._0_4_ * PaperAxisY.field0_0x0._s_0.X;
                        dVar36 = dVar37 * PaperAxisX.field0_0x0._s_0.Z;
                        dVar37 = dVar37 * PaperAxisX.field0_0x0._s_0.Y;
                        dVar48 = (double)local_2c0._0_4_ * PaperAxisY.field0_0x0._s_0.Y;
                        dVar64 = (double)local_2c0._0_4_ * PaperAxisY.field0_0x0._s_0.Z;
                        if (iVar32 == param_2->ArrayMax) {
                          iVar32 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
                        }
                        pFVar1 = (param_2->AllocatorInstance).Data;
                        param_2->ArrayNum = iVar32 + 1;
                        lVar30 = (longlong)iVar32 * 0x58;
                        *(float *)(pFVar1 + lVar30) = (float)(dVar40 + dVar39 + dVar12);
                        *(float *)(pFVar1 + lVar30 + 4) = (float)(dVar48 + dVar37 + dVar13);
                        *(float *)(pFVar1 + lVar30 + 8) = (float)(dVar64 + dVar36 + dVar11);
                        FPackedNormal::FPackedNormal
                                  ((FPackedNormal *)(pFVar1 + lVar30 + 0x4c),
                                   (TVector<float> *)&local_164._s_0);
                        FPackedNormal::FPackedNormal
                                  ((FPackedNormal *)(pFVar1 + lVar30 + 0x50),
                                   (TVector<float> *)&local_158._s_0);
                        uVar14 = CONCAT44(fStack_218,local_21c);
                        uVar50 = SUB84(local_280,0);
                        uVar51 = (undefined4)((ulonglong)local_280 >> 0x20);
                        *(undefined4 *)(pFVar1 + lVar30 + 0x54) = uVar15;
                        pFVar1[lVar30 + 0x53] = (FScriptContainerElement)0x7f;
                        *(undefined8 *)(pFVar1 + lVar30 + 0xc) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x14) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x1c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x24) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x2c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x34) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x3c) = uVar14;
                        *(undefined8 *)(pFVar1 + lVar30 + 0x44) = uVar14;
                        *(int *)(pFVar31 + 0x44) = *(int *)(pFVar31 + 0x44) + 1;
                        auVar43 = local_108;
                        dVar64 = local_2b8;
                        dVar36 = (double)local_128._0_8_;
                        dVar39 = local_278;
                        plVar24 = local_270;
                      }
                    }
                  }
                  local_270 = plVar24;
                  local_338 = local_338 + 1;
                  pUVar22 = (local_300->TileMap).field0_0x0.DebugPtr;
                } while (local_338 < pUVar22->MapWidth);
                auVar42._8_8_ = 0;
                auVar42._0_8_ = local_320._s_0.Z;
                plVar24 = local_270;
                uVar55 = local_320._0_4_;
                uVar56 = local_320._4_4_;
                uVar57 = local_320._8_4_;
                uVar58 = local_320._12_4_;
                uVar59 = local_320._8_4_;
                uVar60 = local_320._12_4_;
                uVar62 = local_320._0_4_;
                uVar63 = local_320._4_4_;
                uVar26 = local_2d4;
              }
              local_2dc = local_2dc + 1;
              pUVar28 = local_300;
              lVar30 = local_2f8;
              fVar54 = local_2d8;
              fVar61 = local_264;
            } while ((int)local_2dc < pUVar22->MapHeight);
          }
        }
        uVar26 = uVar26 - 1;
        local_2c8 = local_2c8 + -1;
        lVar30 = lVar30 + -8;
      } while (-1 < (int)uVar26);
    }
  }
  return;
}

// ResizeMap @ 14ad08db0

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
UPaperTileMapComponent::ResizeMap(UPaperTileMapComponent *this,int param_1,int param_2)

{
  UPaperTileMap *pUVar1;
  UPaperTileLayer *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
  if ((pUVar1 != (UPaperTileMap *)0x0) && ((UPaperTileMapComponent *)pUVar1->_padding_ == this)) {
    iVar7 = 1;
    if (1 < param_1) {
      iVar7 = param_1;
    }
    pUVar1->MapWidth = iVar7;
    iVar7 = 1;
    if (1 < param_2) {
      iVar7 = param_2;
    }
    uVar5 = 0;
    pUVar1->MapHeight = iVar7;
    if (0 < (pUVar1->TileLayers).ArrayNum) {
      lVar6 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar5 < (pUVar1->TileLayers).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = pUVar1->MapHeight;
        this_00 = *(UPaperTileLayer **)((pUVar1->TileLayers).AllocatorInstance.Data + lVar6);
        if ((this_00->LayerWidth != pUVar1->MapWidth) || (this_00->LayerHeight != iVar7)) {
          this_00->LayerWidth = pUVar1->MapWidth;
          this_00->LayerHeight = iVar7;
          UPaperTileLayer::ReallocateAndCopyMap(this_00);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < (pUVar1->TileLayers).ArrayNum);
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    UActorComponent::RecreatePhysicsState((UActorComponent *)this);
    (**(code **)(this->_padding_ + 0x5b0))(this);
  }
  return;
}

// Serialize @ 14ad09e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPaperTileMapComponent::Serialize(UPaperTileMapComponent *this,FArchive *param_1)

{
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014ad09ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPaperCustomVersion::GUID);
  return;
}

// Serialize @ 14ad09eb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPaperTileMapComponent::Serialize(UPaperTileMapComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPaperCustomVersion::GUID);
  return;
}

// SetDefaultCollisionThickness @ 14ad0a0b0

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
UPaperTileMapComponent::SetDefaultCollisionThickness
          (UPaperTileMapComponent *this,float param_1,bool param_2)

{
  UPaperTileMap *pUVar1;
  
  pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
  if (((pUVar1 != (UPaperTileMap *)0x0) && ((UPaperTileMapComponent *)pUVar1->_padding_ == this)) &&
     (pUVar1->CollisionThickness = param_1, param_2)) {
    pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
    if ((pUVar1 != (UPaperTileMap *)0x0) && ((UPaperTileMapComponent *)pUVar1->_padding_ == this)) {
      (**(code **)(pUVar1->_padding_ + 0x2b0))();
    }
    UActorComponent::RecreatePhysicsState((UActorComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x00014ad0a106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x5b0))(this);
    return;
  }
  return;
}

// SetLayerCollision @ 14ad0a220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPaperTileMapComponent::SetLayerCollision
          (UPaperTileMapComponent *this,int param_1,bool param_2,bool param_3,float param_4,
          bool param_5,float param_6,bool param_7)

{
  UPaperTileMap *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString local_18;
  
  this_00 = (this->TileMap).field0_0x0.DebugPtr;
  if ((this_00 != (UPaperTileMap *)0x0) && ((UPaperTileMapComponent *)this_00->_padding_ == this)) {
    if ((param_1 < 0) || ((this_00->TileLayers).ArrayNum <= param_1)) {
      if (2 < (byte)LogPaper2D._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaper2D);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      uVar4 = 0;
      if (param_1 < (this_00->TileLayers).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this_00->TileLayers).AllocatorInstance.Data + (longlong)param_1 * 8);
      *(uint *)(lVar1 + 0x40) = *(uint *)(lVar1 + 0x40) & 0xfffffff9;
      *(float *)(lVar1 + 0x44) = param_4;
      *(float *)(lVar1 + 0x48) = param_4;
      *(uint *)(lVar1 + 0x40) =
           ((uint)param_2 | (uint)param_5 << 2) * 2 |
           (uint)param_3 << 2 | *(uint *)(lVar1 + 0x40) & 0xfffffff7;
      if (param_7) {
        RebuildCollision(this);
      }
    }
  }
  return;
}

// SetLayerColor @ 14ad0a3a0

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
UPaperTileMapComponent::SetLayerColor
          (UPaperTileMapComponent *this,FLinearColor *param_1,int param_2)

{
  UPaperTileMap *pUVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  
  pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
  if ((((pUVar1 != (UPaperTileMap *)0x0) && ((UPaperTileMapComponent *)pUVar1->_padding_ == this))
      && (-1 < param_2)) && (param_2 < (pUVar1->TileLayers).ArrayNum)) {
    uVar6 = 0;
    if (param_2 < (pUVar1->TileLayers).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar4 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    lVar2 = *(longlong *)((pUVar1->TileLayers).AllocatorInstance.Data + (longlong)param_2 * 8);
    *(undefined8 *)(lVar2 + 0x4c) = *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)(lVar2 + 0x54) = uVar4;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetTile @ 14ad0b2e0

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
UPaperTileMapComponent::SetTile
          (UPaperTileMapComponent *this,int param_1,int param_2,int param_3,FPaperTileInfo *param_4)

{
  UPaperTileMap *this_00;
  longlong lVar1;
  UPaperTileSet *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TObjectPtr<UPaperTileSet>_u_0 *pTVar6;
  uint uVar7;
  FString local_28;
  
  this_00 = (this->TileMap).field0_0x0.DebugPtr;
  if ((this_00 != (UPaperTileMap *)0x0) && ((UPaperTileMapComponent *)this_00->_padding_ == this)) {
    if ((param_3 < 0) || ((this_00->TileLayers).ArrayNum <= param_3)) {
      if (2 < (byte)LogPaper2D._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaper2D);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      uVar5 = 0;
      if (param_3 < (this_00->TileLayers).ArrayNum) {
        uVar5 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)((this_00->TileLayers).AllocatorInstance.Data + (longlong)param_3 * 8);
      if ((((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x38))) && (-1 < param_2)) &&
         (param_2 < *(int *)(lVar1 + 0x3c))) {
        uVar5 = *(int *)(lVar1 + 0x38) * param_2 + param_1;
        uVar7 = 0;
        if ((int)uVar5 < *(int *)(lVar1 + 0x70)) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar6 = (TObjectPtr<UPaperTileSet>_u_0 *)
                 ((longlong)(int)uVar5 * 0x10 + *(longlong *)(lVar1 + 0x68));
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 = (param_4->TileSet).field0_0x0.DebugPtr, pUVar2 != (UPaperTileSet *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        *pTVar6 = (param_4->TileSet).field0_0x0;
        *(int *)(pTVar6 + 1) = param_4->PackedTileIndex;
      }
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// SetTileMap @ 14ad0b4b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPaperTileMapComponent::SetTileMap(UPaperTileMapComponent *this,UPaperTileMap *param_1)

{
  UPaperTileMap *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->TileMap).field0_0x0.DebugPtr;
  if (pUVar1 == (UPaperTileMap *)0x0) {
    bVar2 = param_1 == (UPaperTileMap *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (bVar2) {
    return false;
  }
  if ((((this->_padding_ != 0) &&
       (bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this),
       !bVar2)) && ((this->_padding_ & 1) != 0)) &&
     (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    return false;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPaperTileMap *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->TileMap).field0_0x0.DebugPtr = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  UActorComponent::RecreatePhysicsState((UActorComponent *)this);
  (**(code **)(this->_padding_ + 0x5b0))(this);
  return true;
}

// SetTileMapColor @ 14ad0b560

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
UPaperTileMapComponent::SetTileMapColor(UPaperTileMapComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->TileMapColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->TileMapColor).field0_0x0 + 8) = uVar1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// StaticRegisterNativesUPaperTileMapComponent @ 14ad0e140

void __cdecl UPaperTileMapComponent::StaticRegisterNativesUPaperTileMapComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x13;
  local_18.DataPtr = Z_Construct_UClass_UPaperTileMapComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddNewLayer @ 14ad10450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UPaperTileMapComponent::execAddNewLayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  UPaperTileMap *this;
  UPaperTileLayer *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UPaperTileMap **)&param_1[0x25].field_0x10;
  if ((this != (UPaperTileMap *)0x0) && ((UObject *)this->_padding_ == param_1)) {
    pUVar1 = UPaperTileMap::AddNewLayer(this,-1);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    UActorComponent::RecreatePhysicsState((UActorComponent *)param_1);
    (**(code **)(*(longlong *)param_1 + 0x5b0))(param_1);
    *(UPaperTileLayer **)param_3 = pUVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execCreateNewTileMap @ 14ad107a0

void __cdecl
UPaperTileMapComponent::execCreateNewTileMap(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  FProperty *pFVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UPaperTileMap *this;
  bool bVar8;
  int local_res10 [2];
  float local_res20 [2];
  int local_58;
  int local_54;
  int local_50;
  int local_4c [5];
  
  local_4c[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_4c,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_4c);
  }
  local_50 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_54 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_54,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_54);
  }
  local_58 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar7 = local_4c[0];
  iVar6 = local_50;
  iVar5 = local_54;
  iVar4 = local_58;
  fVar3 = local_res20[0];
  bVar8 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = param_1[10].field_0x1b;
  param_1[10].field_0x1b = 2;
  this = NewObject<UPaperTileMap>(param_1);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  this->PixelsPerUnrealUnit = fVar3;
  this->MapWidth = iVar7;
  this->MapHeight = iVar6;
  this->TileWidth = iVar5;
  this->TileHeight = iVar4;
  if (bVar8) {
    UPaperTileMap::AddNewLayer(this,-1);
  }
  (**(code **)(*(longlong *)param_1 + 0xb28))(param_1,this);
  param_1[10].field_0x1b = uVar1;
  return;
}

// execGetLayerColor @ 14ad10f10

void __cdecl
UPaperTileMapComponent::execGetLayerColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x25].field_0x10;
  lVar5 = (longlong)(int)local_res8[0];
  if ((lVar2 != 0) && (-1 < (int)local_res8[0])) {
    if ((int)local_res8[0] < *(int *)(lVar2 + 0x80)) {
      uVar6 = 0;
      if ((int)local_res8[0] < *(int *)(lVar2 + 0x80)) {
        uVar6 = ~local_res8[0] >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x78) + lVar5 * 8);
      uVar7 = *(undefined4 *)(lVar2 + 0x4c);
      uVar8 = *(undefined4 *)(lVar2 + 0x50);
      uVar9 = *(undefined4 *)(lVar2 + 0x54);
      uVar10 = *(undefined4 *)(lVar2 + 0x58);
      goto LAB_14ad10ff6;
    }
  }
  uVar7 = FLinearColor::White.field0_0x0._0_4_;
  uVar8 = FLinearColor::White.field0_0x0._4_4_;
  uVar9 = FLinearColor::White.field0_0x0._8_4_;
  uVar10 = FLinearColor::White.field0_0x0._12_4_;
LAB_14ad10ff6:
  *(undefined4 *)param_3 = uVar7;
  *(undefined4 *)((longlong)param_3 + 4) = uVar8;
  *(undefined4 *)((longlong)param_3 + 8) = uVar9;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar10;
  return;
}

// execGetMapSize @ 14ad11020

void __cdecl UPaperTileMapComponent::execGetMapSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar local_res8 [8];
  uchar local_res10 [16];
  uchar local_res20 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_res8;
  if (puVar2 != (uchar *)0x0) {
    puVar4 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar3 = local_res10;
  if (puVar2 != (uchar *)0x0) {
    puVar3 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar2 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x25].field_0x10 != 0) {
    *(undefined4 *)puVar4 = *(undefined4 *)(*(longlong *)&param_1[0x25].field_0x10 + 0x28);
    *(undefined4 *)puVar3 = *(undefined4 *)(*(longlong *)&param_1[0x25].field_0x10 + 0x2c);
    *(undefined4 *)puVar2 = *(undefined4 *)(*(longlong *)&param_1[0x25].field_0x10 + 0x80);
    return;
  }
  puVar4[0] = '\x01';
  puVar4[1] = '\0';
  puVar4[2] = '\0';
  puVar4[3] = '\0';
  puVar3[0] = '\x01';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  puVar2[0] = '\x01';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  return;
}

// execGetTile @ 14ad11570

void __cdecl UPaperTileMapComponent::execGetTile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  uint local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  
  pUVar10 = (UObject *)0x0;
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar6 = local_res18[0];
  iVar5 = local_res10[0];
  lVar11 = (longlong)(int)local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar12 = 0xffffffff;
  lVar3 = *(longlong *)&param_1[0x25].field_0x10;
  if (((lVar3 != 0) && (-1 < (int)local_res8[0])) && ((int)local_res8[0] < *(int *)(lVar3 + 0x80)))
  {
    uVar8 = 0;
    if ((int)local_res8[0] < *(int *)(lVar3 + 0x80)) {
      uVar8 = ~local_res8[0] >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x78) + lVar11 * 8);
    if (((-1 < iVar6) && (iVar6 < *(int *)(lVar3 + 0x38))) &&
       ((-1 < iVar5 && (pUVar10 = (UObject *)0x0, iVar5 < *(int *)(lVar3 + 0x3c))))) {
      uVar8 = *(int *)(lVar3 + 0x38) * iVar5 + iVar6;
      uVar9 = 0;
      if ((int)uVar8 < *(int *)(lVar3 + 0x70)) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      puVar13 = (undefined8 *)((longlong)(int)uVar8 * 0x10 + *(longlong *)(lVar3 + 0x68));
      pUVar10 = (UObject *)*puVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      uVar12 = *(undefined4 *)(puVar13 + 1);
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14ad117bc;
    if (pUVar10 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14ad117bc;
    if (pUVar10 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar10);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
LAB_14ad117bc:
  *(UObject **)param_3 = pUVar10;
  *(undefined4 *)((longlong)param_3 + 8) = uVar12;
  return;
}

// execGetTileCenterPosition @ 14ad117e0

void __cdecl
UPaperTileMapComponent::execGetTileCenterPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  TVector<double> local_30;
  
  local_38[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
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
  pTVar3 = GetTileCenterPosition
                     ((UPaperTileMapComponent *)param_1,&local_30,local_38[0],local_res20[0],
                      local_res18[0],local_res10[0] != 0);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execGetTileCornerPosition @ 14ad11970

void __cdecl
UPaperTileMapComponent::execGetTileCornerPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  TVector<double> local_30;
  
  local_38[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
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
  pTVar3 = GetTileCornerPosition
                     ((UPaperTileMapComponent *)param_1,&local_30,local_38[0],local_res20[0],
                      local_res18[0],local_res10[0] != 0);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execGetTileMapColor @ 14ad11b00

void __cdecl
UPaperTileMapComponent::execGetTileMapColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)(param_1 + 0x25);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x24].field_0x20;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetTilePolygon @ 14ad11b30

void __cdecl
UPaperTileMapComponent::execGetTilePolygon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [4];
  int local_res20 [2];
  int local_38;
  int local_34;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_30;
  
  local_34 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_34,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_34);
  }
  local_38 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res20[0] = 0;
  pTVar2 = &local_30;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
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
  GetTilePolygon((UPaperTileMapComponent *)param_1,local_34,local_38,pTVar2,local_res20[0],
                 local_res10[0] != 0);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execMakeTileMapEditable @ 14ad12680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UPaperTileMapComponent::execMakeTileMapEditable(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  UObject *pUVar2;
  UPaperTileMap *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = *(UObject **)&param_1[0x25].field_0x10;
  if ((pUVar2 != (UObject *)0x0) && (*(UObject **)&pUVar2->field_0x20 != param_1)) {
    pcVar1 = *(code **)(*(longlong *)param_1 + 0xb28);
    pUVar2 = StaticDuplicateObject
                       (pUVar2,param_1,(FName)0x0,
                        RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                        RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                        RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                        RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                        RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                        RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                        RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                        RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                        RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                        RF_Public,(UClass *)0x0,Normal,
                        PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                        ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                        AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                        ReachabilityFlag0);
    pUVar3 = CastChecked<UPaperTileMap,UObject>(pUVar2);
    (*pcVar1)(param_1,pUVar3);
  }
  return;
}

// execOwnsTileMap @ 14ad127c0

void __cdecl UPaperTileMapComponent::execOwnsTileMap(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0x25].field_0x10 != 0) &&
     (*(UObject **)(*(longlong *)&param_1[0x25].field_0x10 + 0x20) == param_1)) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRebuildCollision @ 14ad128c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPaperTileMapComponent::execRebuildCollision(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar1 = *(longlong **)&param_1[0x25].field_0x10;
  if ((plVar1 != (longlong *)0x0) && ((UObject *)plVar1[4] == param_1)) {
    (**(code **)(*plVar1 + 0x2b0))();
  }
  UActorComponent::RecreatePhysicsState((UActorComponent *)param_1);
                    /* WARNING: Could not recover jumptable at 0x00014ad1290c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x5b0))(param_1);
  return;
}

// execResizeMap @ 14ad129c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UPaperTileMapComponent::execResizeMap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  UPaperTileLayer *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x25].field_0x10;
  if ((lVar2 != 0) && (*(UObject **)(lVar2 + 0x20) == param_1)) {
    iVar6 = 1;
    if (1 < local_res10[0]) {
      iVar6 = local_res10[0];
    }
    *(int *)(lVar2 + 0x28) = iVar6;
    iVar6 = 1;
    if (1 < local_res8[0]) {
      iVar6 = local_res8[0];
    }
    uVar7 = 0;
    *(int *)(lVar2 + 0x2c) = iVar6;
    if (0 < *(int *)(lVar2 + 0x80)) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < *(int *)(lVar2 + 0x80)) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = *(int *)(lVar2 + 0x2c);
        this = *(UPaperTileLayer **)(lVar8 + *(longlong *)(lVar2 + 0x78));
        if ((this->LayerWidth != *(int *)(lVar2 + 0x28)) || (this->LayerHeight != iVar6)) {
          this->LayerWidth = *(int *)(lVar2 + 0x28);
          this->LayerHeight = iVar6;
          UPaperTileLayer::ReallocateAndCopyMap(this);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < *(int *)(lVar2 + 0x80));
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    UActorComponent::RecreatePhysicsState((UActorComponent *)param_1);
    (**(code **)(*(longlong *)param_1 + 0x5b0))(param_1);
  }
  return;
}

// execSetDefaultCollisionThickness @ 14ad12c40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPaperTileMapComponent::execSetDefaultCollisionThickness
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  lVar2 = *(longlong *)&param_1[0x25].field_0x10;
  if ((lVar2 != 0) && (*(UObject **)(lVar2 + 0x20) == param_1)) {
    *(undefined4 *)(lVar2 + 0x88) = local_res10[0];
    if (local_res8[0] != 0) {
      plVar3 = *(longlong **)&param_1[0x25].field_0x10;
      if ((plVar3 != (longlong *)0x0) && ((UObject *)plVar3[4] == param_1)) {
        (**(code **)(*plVar3 + 0x2b0))();
      }
      UActorComponent::RecreatePhysicsState((UActorComponent *)param_1);
      (**(code **)(*(longlong *)param_1 + 0x5b0))(param_1);
    }
  }
  return;
}

// execSetLayerCollision @ 14ad12e20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPaperTileMapComponent::execSetLayerCollision(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UObjectBaseUtility *this;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int local_res10 [2];
  int local_res20 [2];
  int local_78;
  int local_74;
  undefined4 local_70;
  uint local_6c [3];
  FString local_60 [2];
  
  local_6c[0] = 0;
  FIntProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_6c,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_6c);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar8 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar9 = local_res20[0] != 0;
  local_70 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_78 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  bVar10 = local_78 != 0;
  local_6c[1] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_6c + 1,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_6c + 1);
  }
  local_74 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_74,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_74);
  }
  uVar4 = local_70;
  bVar11 = local_74 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UObjectBaseUtility **)&param_1[0x25].field_0x10;
  lVar6 = (longlong)(int)local_6c[0];
  if ((this != (UObjectBaseUtility *)0x0) && (*(UObject **)&this->field_0x20 == param_1)) {
    if (((int)local_6c[0] < 0) || (*(int *)&this[3].field_0x8 <= (int)local_6c[0])) {
      if (2 < (byte)LogPaper2D._0_1_) {
        UObjectBaseUtility::GetPathName(this,local_60,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaper2D);
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      uVar7 = 0;
      if ((int)local_6c[0] < *(int *)&this[3].field_0x8) {
        uVar7 = ~local_6c[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar6 = *(longlong *)(*(longlong *)(this + 3) + lVar6 * 8);
      *(uint *)(lVar6 + 0x40) = *(uint *)(lVar6 + 0x40) & 0xfffffff9;
      *(undefined4 *)(lVar6 + 0x44) = uVar4;
      *(undefined4 *)(lVar6 + 0x48) = uVar4;
      *(uint *)(lVar6 + 0x40) =
           ((uint)bVar10 << 2 | (uint)bVar8) * 2 |
           (uint)bVar9 << 2 | *(uint *)(lVar6 + 0x40) & 0xfffffff7;
      if (bVar11) {
        RebuildCollision((UPaperTileMapComponent *)param_1);
      }
    }
  }
  return;
}

// execSetLayerColor @ 14ad13130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPaperTileMapComponent::execSetLayerColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint local_res8 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x25].field_0x10;
  lVar5 = (longlong)(int)local_res8[0];
  if ((((lVar2 != 0) && (*(UObject **)(lVar2 + 0x20) == param_1)) && (-1 < (int)local_res8[0])) &&
     ((int)local_res8[0] < *(int *)(lVar2 + 0x80))) {
    uVar6 = 0;
    if ((int)local_res8[0] < *(int *)(lVar2 + 0x80)) {
      uVar6 = ~local_res8[0] >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x78) + lVar5 * 8);
    *(undefined8 *)(lVar2 + 0x4c) = local_38;
    *(undefined8 *)(lVar2 + 0x54) = uStack_30;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetTile @ 14ad13c80

void __cdecl UPaperTileMapComponent::execSetTile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res20 [2];
  int local_38 [2];
  UPaperTileSet *local_30;
  undefined4 local_28;
  TObjectPtr<UPaperTileSet>_u_0 local_20;
  undefined4 local_18;
  
  local_38[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_30 = (UPaperTileSet *)0x0;
  local_28 = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_20.DebugPtr = local_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UPaperTileSet *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_30);
  }
  local_18 = local_28;
  SetTile((UPaperTileMapComponent *)param_1,local_38[0],local_res20[0],local_res10[0],
          (FPaperTileInfo *)&local_20.ObjectPtr);
  return;
}

// execSetTileMap @ 14ad13e20

void __cdecl UPaperTileMapComponent::execSetTileMap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xb28))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execSetTileMapColor @ 14ad13ed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPaperTileMapComponent::execSetTileMapColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[0x24].field_0x20 = local_18;
  *(undefined8 *)(param_1 + 0x25) = uStack_10;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

