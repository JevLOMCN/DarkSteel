// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 46

// StaticClass @ 14acdd7b0

UClass * __cdecl UPaperGroupedSpriteComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperGroupedSpriteComponent",
               &Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.InnerSingleton,
               StaticRegisterNativesUPaperGroupedSpriteComponent,0x5c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperGroupedSpriteComponent>,
               InternalVTableHelperCtorCaller<UPaperGroupedSpriteComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.InnerSingleton;
}

// UPaperGroupedSpriteComponent @ 14acea4e0

UPaperGroupedSpriteComponent * __thiscall
UPaperGroupedSpriteComponent::UPaperGroupedSpriteComponent
          (UPaperGroupedSpriteComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->InstanceMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceMaterials).ArrayNum = 0;
  (this->InstanceMaterials).ArrayMax = 0;
  (this->PerInstanceSpriteData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceSpriteData).ArrayNum = 0;
  (this->PerInstanceSpriteData).ArrayMax = 0;
  (this->InstanceBodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceBodies).ArrayNum = 0;
  (this->InstanceBodies).ArrayMax = 0;
  return this;
}

// UPaperGroupedSpriteComponent @ 14acea580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPaperGroupedSpriteComponent * __thiscall
UPaperGroupedSpriteComponent::UPaperGroupedSpriteComponent
          (UPaperGroupedSpriteComponent *this,FObjectInitializer *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->InstanceMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceMaterials).ArrayNum = 0;
  (this->InstanceMaterials).ArrayMax = 0;
  (this->PerInstanceSpriteData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceSpriteData).ArrayNum = 0;
  (this->PerInstanceSpriteData).ArrayMax = 0;
  (this->InstanceBodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceBodies).ArrayNum = 0;
  (this->InstanceBodies).ArrayMax = 0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::BlockAllDynamic_ProfileName,true);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  return this;
}

// ~UPaperGroupedSpriteComponent @ 14acebad0

void __thiscall
UPaperGroupedSpriteComponent::~UPaperGroupedSpriteComponent(UPaperGroupedSpriteComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->InstanceBodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerInstanceSpriteData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstanceMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// AddInstance @ 14acedf80

int __thiscall
UPaperGroupedSpriteComponent::AddInstance
          (UPaperGroupedSpriteComponent *this,TTransform<double> *param_1,UPaperSprite *param_2,
          bool param_3,FLinearColor *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0xb28))();
  return iVar1;
}

// AddInstanceWithMaterial @ 14acedfc0

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

int __thiscall
UPaperGroupedSpriteComponent::AddInstanceWithMaterial
          (UPaperGroupedSpriteComponent *this,TTransform<double> *param_1,UPaperSprite *param_2,
          UMaterialInterface *param_3,bool param_4,FLinearColor *param_5)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  TTransform<double> *pTVar8;
  FSpriteInstanceData *pFVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_1b8 [32];
  FColor_u_0 local_178 [4];
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar7 = (this->PerInstanceSpriteData).ArrayNum;
  if (param_4) {
    pTVar8 = UE::Math::TTransform<double>::GetRelativeTransform
                       (param_1,&local_a8,(TTransform<double> *)&this->_padding_);
  }
  else {
    pTVar8 = &local_168;
    local_168.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    local_168.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
    local_168.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    local_168.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
    local_168.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    local_168.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
    local_168.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    local_168.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
    local_168.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    local_168.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
    local_168.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    local_168.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
  }
  piVar1 = &(this->PerInstanceSpriteData).ArrayMax;
  uVar5 = (this->PerInstanceSpriteData).ArrayNum;
  local_108.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
  local_108.Rotation.XY.m128d_f64[1] = (pTVar8->Rotation).XY.m128d_f64[1];
  local_108.Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
  local_108.Rotation.ZW.m128d_f64[1] = (pTVar8->Rotation).ZW.m128d_f64[1];
  local_108.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
  local_108.Translation.XY.m128d_f64[1] = (pTVar8->Translation).XY.m128d_f64[1];
  local_108.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
  local_108.Scale3D.XY.m128d_f64[1] = (pTVar8->Scale3D).XY.m128d_f64[1];
  local_108.Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
  local_108.Translation.ZW.m128d_f64[1] = (pTVar8->Translation).ZW.m128d_f64[1];
  local_108.Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
  local_108.Scale3D.ZW.m128d_f64[1] = (pTVar8->Scale3D).ZW.m128d_f64[1];
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1090,&(this->PerInstanceSpriteData).AllocatorInstance,piVar1);
  }
  (this->PerInstanceSpriteData).ArrayNum = uVar5 + 1;
  uVar6 = 0;
  if ((int)uVar5 < (int)(uVar5 + 1)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar7 = (*pcVar2)();
      return iVar7;
    }
  }
  dVar3 = UE::Math::TMatrix<double>::Identity.M[0][1];
  pFVar9 = (FSpriteInstanceData *)
           ((this->PerInstanceSpriteData).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x90);
  if (pFVar9 == (FSpriteInstanceData *)0x0) {
    pFVar9 = (FSpriteInstanceData *)0x0;
  }
  else {
    (pFVar9->Transform).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    (pFVar9->Transform).M[0][1] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[0][3];
    (pFVar9->Transform).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    (pFVar9->Transform).M[0][3] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[1][1];
    (pFVar9->Transform).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    (pFVar9->Transform).M[1][1] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[1][3];
    (pFVar9->Transform).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    (pFVar9->Transform).M[1][3] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[2][1];
    (pFVar9->Transform).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
    (pFVar9->Transform).M[2][1] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[2][3];
    (pFVar9->Transform).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    (pFVar9->Transform).M[2][3] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[3][1];
    (pFVar9->Transform).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    (pFVar9->Transform).M[3][1] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[3][3];
    (pFVar9->Transform).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    (pFVar9->Transform).M[3][3] = dVar3;
    (pFVar9->SourceSprite).field0_0x0.DebugPtr = (UPaperSprite *)0x0;
    (pFVar9->VertexColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
    pFVar9->MaterialIndex = -1;
  }
  fVar10 = (param_5->field0_0x0)._s_0.B;
  fVar12 = (param_5->field0_0x0)._s_0.R;
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar12) {
    fVar12 = __real_3f800000;
  }
  fVar11 = (param_5->field0_0x0)._s_0.G;
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_178[0]._0_1_ = (undefined1)(int)(fVar10 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar11) {
    fVar11 = __real_3f800000;
  }
  fVar10 = (param_5->field0_0x0)._s_0.A;
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  local_178[0]._1_1_ = (undefined1)(int)(fVar11 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  local_178[0]._2_1_ = (undefined1)(int)(fVar12 * __real_437f0000 + __real_3f000000);
  local_178[0]._3_1_ = (undefined1)(int)(fVar10 * __real_437f0000 + __real_3f000000);
  SetupNewInstanceData(this,pFVar9,iVar7,&local_108,param_2,param_3,(FColor *)&local_178[0]._s_0);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  FNavigationSystem::UpdateComponentData((UActorComponent *)this);
  return iVar7;
}

// AdditionalStatObject @ 14aceefd0

UObject * __thiscall
UPaperGroupedSpriteComponent::AdditionalStatObject(UPaperGroupedSpriteComponent *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PerInstanceSpriteData).ArrayNum;
  pFVar2 = (this->PerInstanceSpriteData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x90;
  while( true ) {
    if ((this->PerInstanceSpriteData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSpriteInstanceData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(UObject **)(pFVar2 + 0x80) != (UObject *)0x0) {
      return *(UObject **)(pFVar2 + 0x80);
    }
    pFVar2 = pFVar2 + 0x90;
  }
  return (UObject *)0x0;
}

// CalcBounds @ 14acefc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffc48 : 0x00014acf0060 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TBoxSphereBounds<double,double> * __thiscall
UPaperGroupedSpriteComponent::CalcBounds
          (UPaperGroupedSpriteComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  TBoxSphereBounds<double,double> *pTVar16;
  double *pdVar17;
  char cVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [24];
  TVector<double>_u_0 TStack_3a0;
  double local_388;
  char local_380;
  undefined1 local_378 [16];
  double dStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  double dStack_350;
  double local_348;
  TVector<double>_u_0 local_340;
  double local_328;
  double dStack_320;
  double local_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0 [48];
  double local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  double local_260;
  double dStack_258;
  double local_250;
  double dStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  TBoxSphereBounds<double,double> local_210;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  cVar18 = '\0';
  local_380 = '\0';
  if (0 < (this->PerInstanceSpriteData).ArrayNum) {
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_158);
    uVar12 = _UNK_15061cc8c;
    uVar11 = _UNK_15061cc88;
    uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar7 = (double)CONCAT44(local_360._4_4_,(undefined4)local_360);
    iVar1 = (this->PerInstanceSpriteData).ArrayNum;
    pFVar20 = (this->PerInstanceSpriteData).AllocatorInstance.Data;
    pFVar19 = pFVar20 + (longlong)iVar1 * 0x90;
    while( true ) {
      if ((this->PerInstanceSpriteData).ArrayNum != iVar1) {
        local_3c8[0] = 0;
        local_360 = dVar7;
        `TCheckedPointerIterator<FSpriteInstanceData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_3c8);
        dVar7 = local_360;
      }
      if (pFVar20 == pFVar19) break;
      if (*(UPaperSprite **)&pFVar20[0x80].field_0x0 == (UPaperSprite *)0x0) {
LAB_14aceffba:
        pFVar20 = pFVar20 + 0x90;
      }
      else {
        local_360 = dVar7;
        UPaperSprite::GetRenderBounds
                  (*(UPaperSprite **)&pFVar20[0x80].field_0x0,
                   (TBoxSphereBounds<double,double> *)&local_340._s_0);
        VectorMatrixMultiply(&local_1d8,(TMatrix<double> *)pFVar20,&local_158);
        dVar7 = (double)CONCAT44((uint)((ulonglong)(dStack_320 * local_1d8.M[1][0]) >> 0x20) &
                                 uVar10,SUB84(dStack_320 * local_1d8.M[1][0],0) & uVar9) +
                (double)CONCAT44((uint)((ulonglong)(local_328 * local_1d8.M[0][0]) >> 0x20) & uVar10
                                 ,SUB84(local_328 * local_1d8.M[0][0],0) & uVar9) +
                (double)CONCAT44((uint)((ulonglong)(local_318 * local_1d8.M[2][0]) >> 0x20) & uVar10
                                 ,SUB84(local_318 * local_1d8.M[2][0],0) & uVar9);
        uStack_358 = (double)CONCAT44((uint)((ulonglong)(dStack_320 * local_1d8.M[1][1]) >> 0x20) &
                                      uVar12,SUB84(dStack_320 * local_1d8.M[1][1],0) & uVar11) +
                     (double)CONCAT44((uint)((ulonglong)(local_328 * local_1d8.M[0][1]) >> 0x20) &
                                      uVar12,SUB84(local_328 * local_1d8.M[0][1],0) & uVar11) +
                     (double)CONCAT44((uint)((ulonglong)(local_318 * local_1d8.M[2][1]) >> 0x20) &
                                      uVar12,SUB84(local_318 * local_1d8.M[2][1],0) & uVar11);
        dStack_350 = (double)CONCAT44((uint)((ulonglong)(dStack_320 * local_1d8.M[1][2]) >> 0x20) &
                                      uVar10,SUB84(dStack_320 * local_1d8.M[1][2],0) & uVar9) +
                     (double)CONCAT44((uint)((ulonglong)(local_328 * local_1d8.M[0][2]) >> 0x20) &
                                      uVar10,SUB84(local_328 * local_1d8.M[0][2],0) & uVar9) +
                     (double)CONCAT44((uint)((ulonglong)(local_318 * local_1d8.M[2][2]) >> 0x20) &
                                      uVar10,SUB84(local_318 * local_1d8.M[2][2],0) & uVar9);
        local_360._0_4_ = SUB84(dVar7,0);
        uVar13 = (undefined4)local_360;
        local_360._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
        uVar14 = local_360._4_4_;
        auVar23._0_8_ =
             local_1d8.M[1][0] * local_1d8.M[1][0] + local_1d8.M[0][0] * local_1d8.M[0][0] +
             local_1d8.M[2][0] * local_1d8.M[2][0];
        auVar23._8_8_ =
             local_1d8.M[1][1] * local_1d8.M[1][1] + local_1d8.M[0][1] * local_1d8.M[0][1] +
             local_1d8.M[2][1] * local_1d8.M[2][1];
        auVar24._8_4_ = SUB84(auVar23._8_8_,0);
        auVar24._0_8_ = auVar23._8_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
        auVar24 = maxpd(auVar23,auVar24);
        dVar4 = local_1d8.M[1][2] * local_1d8.M[1][2] + local_1d8.M[0][2] * local_1d8.M[0][2] +
                local_1d8.M[2][2] * local_1d8.M[2][2];
        dVar5 = local_340._s_0.Y * local_1d8.M[1][0] + local_340._s_0.X * local_1d8.M[0][0] +
                local_340._s_0.Z * local_1d8.M[2][0] + local_1d8.M[3][0];
        dVar6 = local_340._s_0.Y * local_1d8.M[1][1] + local_340._s_0.X * local_1d8.M[0][1] +
                local_340._s_0.Z * local_1d8.M[2][1] + local_1d8.M[3][1];
        uVar21 = SUB84(dVar6,0);
        uVar22 = (undefined4)((ulonglong)dVar6 >> 0x20);
        dStack_368 = local_340._s_0.Y * local_1d8.M[1][2] + local_340._s_0.X * local_1d8.M[0][2] +
                     local_340._s_0.Z * local_1d8.M[2][2] + local_1d8.M[3][2];
        local_378._8_4_ = uVar21;
        local_378._0_8_ = dVar5;
        local_378._12_4_ = uVar22;
        auVar3._8_4_ = SUB84(dVar4,0);
        auVar3._0_8_ = dVar4;
        auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        auVar24 = maxpd(auVar24,auVar3);
        local_348 = SQRT(dStack_350 * dStack_350 + dVar7 * dVar7 + uStack_358 * uStack_358);
        dVar4 = SQRT(auVar24._0_8_) * local_310;
        local_2d0._8_4_ = uVar21;
        local_2d0._0_8_ = dVar5;
        local_2d0._12_4_ = uVar22;
        if (dVar4 <= local_348) {
          local_348 = dVar4;
        }
        local_2a0 = local_348;
        local_360 = dVar7;
        local_2d0._24_4_ = uVar13;
        local_2d0._16_8_ = dStack_368;
        local_2d0._28_4_ = uVar14;
        local_2d0._32_8_ = uStack_358;
        local_2d0._40_8_ = dStack_350;
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          local_3b8._8_4_ = uVar21;
          local_3b8._0_8_ = dVar5;
          local_3b8._12_4_ = uVar22;
          local_380 = '\x01';
          unique0x1000012b = uVar13;
          local_3b8._16_8_ = dStack_368;
          unique0x1000012f = uVar14;
          TStack_3a0._8_8_ = uStack_358;
          TStack_3a0._s_0.Z = dStack_350;
          local_388 = local_348;
          goto LAB_14aceffba;
        }
        pTVar16 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_3b8,&local_210,
                             (TBoxSphereBounds<double,double> *)local_2d0);
        cVar18 = local_380;
        dVar4 = pTVar16->SphereRadius;
        auVar24 = *(undefined1 (*) [16])&(pTVar16->Origin).field0_0x0;
        auVar3 = *(undefined1 (*) [16])((longlong)&(pTVar16->Origin).field0_0x0 + 0x10);
        dVar5 = (pTVar16->BoxExtent).field0_0x0._s_0.Y;
        dVar6 = (pTVar16->BoxExtent).field0_0x0._s_0.Z;
        dVar7 = local_360;
        if (local_380 == '\0') {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             );
          dVar7 = local_360;
          if (bVar15) {
            pcVar2 = (code *)swi(3);
            pTVar16 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
            return pTVar16;
          }
        }
        local_3b8._0_16_ = auVar24;
        pFVar20 = pFVar20 + 0x90;
        stack0xfffffffffffffc58 = auVar3;
        TStack_3a0._s_0.Y = dVar5;
        TStack_3a0._s_0.Z = dVar6;
        local_388 = dVar4;
      }
    }
  }
  if (cVar18 == '\0') {
    local_308 = (param_1->Translation).XY.m128d_f64[0];
    dStack_300 = (param_1->Translation).XY.m128d_f64[1];
    local_2f8 = (param_1->Translation).ZW.m128d_f64[0];
    pdVar17 = &local_308;
    local_2f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_2e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_2e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_2d8 = 0;
  }
  else {
    local_268 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_260 = (double)local_3b8._0_8_;
    dStack_258 = (double)local_3b8._8_8_;
    local_250 = (double)local_3b8._16_8_;
    dStack_248 = TStack_3a0._s_0.X;
    pdVar17 = &local_260;
    local_240 = TStack_3a0._s_0.Y;
    dStack_238 = TStack_3a0._s_0.Z;
    local_230 = local_388;
  }
  dVar7 = pdVar17[1];
  dVar4 = pdVar17[2];
  dVar5 = pdVar17[3];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *pdVar17;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar7;
  dVar6 = pdVar17[4];
  dVar8 = pdVar17[5];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar5;
  dVar7 = pdVar17[6];
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar6;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar8;
  __return_storage_ptr__->SphereRadius = dVar7;
  return __return_storage_ptr__;
}

// CanEditSimulatePhysics @ 14acf1220

bool __thiscall
UPaperGroupedSpriteComponent::CanEditSimulatePhysics(UPaperGroupedSpriteComponent *this)

{
  return false;
}

// ClearAllInstanceBodies @ 14acf1230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPaperGroupedSpriteComponent::ClearAllInstanceBodies(UPaperGroupedSpriteComponent *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FBodyInstance *this_00;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_protected:_void___cdecl_UPaperGroupedSpriteComponent::ClearAllInstanceBodies(void)_::_2_::FStat_STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies>
  FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  FScriptContainerElement *pFVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_UPaperGroupedSpriteComponent::ClearAllInstanceBodies(void)_::_2_::FStat_STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,
                                "STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies,*pFVar7,
                   L"STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies;
  if (StatPtr_STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UPaperGroupedSpriteComponent::ClearAllInstanceBodies(void)_::_2_::FStat_STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies")
    ;
    FVar8 = (FThreadSafeStaticStat<_protected:_void___cdecl_UPaperGroupedSpriteComponent::ClearAllInstanceBodies(void)_::_2_::FStat_STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies,*pFVar7,
                         L"STAT_UPaperGroupedSpriteComponent_ClearAllInstanceBodies",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperGroupedSpriteComponent.cpp"
                   ,0x162);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_14acf13bb;
    }
  }
  bVar5 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14acf13bb:
  pFVar13 = (this->InstanceBodies).AllocatorInstance.Data;
  iVar3 = (this->InstanceBodies).ArrayNum;
  pFVar2 = pFVar13 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->InstanceBodies).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar13 == pFVar2) break;
    this_00 = *(FBodyInstance **)pFVar13;
    if (this_00 != (FBodyInstance *)0x0) {
      FBodyInstance::TermBody(this_00,false);
      FBodyInstance::~FBodyInstance(this_00);
      ::operator_delete(this_00,400);
    }
    pFVar13 = pFVar13 + 8;
  }
  piVar1 = &(this->InstanceBodies).ArrayMax;
  (this->InstanceBodies).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->InstanceBodies).AllocatorInstance,0,piVar1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// ClearInstances @ 14acf15d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPaperGroupedSpriteComponent::ClearInstances(UPaperGroupedSpriteComponent *this)

{
  int *piVar1;
  
  piVar1 = &(this->PerInstanceSpriteData).ArrayMax;
  (this->PerInstanceSpriteData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,0,&(this->PerInstanceSpriteData).AllocatorInstance,0,piVar1);
  }
  ClearAllInstanceBodies(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  FNavigationSystem::UpdateComponentData((UActorComponent *)this);
  return;
}

// ContainsSprite @ 14acf23a0

bool __thiscall
UPaperGroupedSpriteComponent::ContainsSprite
          (UPaperGroupedSpriteComponent *this,UPaperSprite *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PerInstanceSpriteData).ArrayNum;
  pFVar2 = (this->PerInstanceSpriteData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x90;
  while( true ) {
    if ((this->PerInstanceSpriteData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSpriteInstanceData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) {
      return false;
    }
    if (*(UPaperSprite **)(pFVar2 + 0x80) == (UPaperSprite *)0x0) {
      bVar4 = param_1 == (UPaperSprite *)0x0;
    }
    else {
      bVar4 = *(UPaperSprite **)(pFVar2 + 0x80) == param_1;
    }
    if (bVar4) break;
    pFVar2 = pFVar2 + 0x90;
  }
  return true;
}

// CreateAllInstanceBodies @ 14acf2a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPaperGroupedSpriteComponent::CreateAllInstanceBodies(UPaperGroupedSpriteComponent *this)

{
  int *piVar1;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  uint uVar3;
  FPhysScene_Chaos *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_protected:_void___cdecl_UPaperGroupedSpriteComponent::CreateAllInstanceBodies(void)_::_2_::FStat_STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies>
  FVar16;
  UWorld *pUVar17;
  FBodyInstance *pFVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar19;
  longlong lVar20;
  uint uVar21;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FName local_res20;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_UPaperGroupedSpriteComponent::CreateAllInstanceBodies(void)_::_2_::FStat_STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies>
         )0x0) {
      pFVar15 = ::FName::FName(&local_80,"STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies"
                              );
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies,*pFVar15,
                 L"STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies;
  if (StatPtr_STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UPaperGroupedSpriteComponent::CreateAllInstanceBodies(void)_::_2_::FStat_STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies>
       )0x0) {
    pFVar15 = ::FName::FName(&local_78,"STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies");
    FVar16 = (FThreadSafeStaticStat<_protected:_void___cdecl_UPaperGroupedSpriteComponent::CreateAllInstanceBodies(void)_::_2_::FStat_STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies,
                          *pFVar15,L"STAT_UPaperGroupedSpriteComponent_CreateAllInstanceBodies",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar16;
  bVar7 = false;
  bVar10 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  bVar12 = false;
  bVar8 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) ||
     (bVar6 = bVar7, bVar9 = bVar10, FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar7 = false;
      bVar10 = true;
      bVar12 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_res18.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperGroupedSpriteComponent.cpp"
                   ,0x14f);
        bVar7 = true;
        bVar10 = true;
        bVar12 = true;
        bVar8 = true;
      }
    }
    bVar6 = bVar7;
    bVar9 = bVar10;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar12 = true;
      bVar8 = true;
      goto LAB_14acf2bd5;
    }
  }
  bVar10 = bVar8;
  bVar7 = bVar12;
  bVar12 = false;
  bVar8 = false;
  local_res20 = local_70;
  FVar19 = local_70;
LAB_14acf2bd5:
  pUVar17 = (UWorld *)this->_padding_;
  if (pUVar17 == (UWorld *)0x0) {
    pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pFVar4 = pUVar17->PhysicsScene;
  piVar1 = &(this->InstanceBodies).ArrayNum;
  uVar3 = (this->PerInstanceSpriteData).ArrayNum;
  if ((*piVar1 != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceBodies.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperGroupedSpriteComponent.cpp"
                          ,0x154,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar2 = &this->InstanceBodies;
  iVar13 = (this->InstanceBodies).ArrayNum;
  if (iVar13 < (int)uVar3) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3 - iVar13,&pTVar2->AllocatorInstance,piVar1,&(this->InstanceBodies).ArrayMax
              );
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar13) {
      uVar21 = iVar13 - uVar3;
      if (((int)(uVar21 | uVar3) < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar21 != 0) {
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar3 * 8;
        iVar13 = ((this->InstanceBodies).ArrayNum - uVar21) - uVar3;
        if (iVar13 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar21 * 8,(longlong)iVar13 << 3);
        }
        piVar1 = &(this->InstanceBodies).ArrayNum;
        *piVar1 = *piVar1 - uVar21;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->InstanceBodies).ArrayNum,
                   &(this->InstanceBodies).ArrayMax);
      }
    }
  }
  uVar21 = 0;
  if (0 < (int)uVar3) {
    lVar20 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar21 < (this->PerInstanceSpriteData).ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar18 = InitInstanceBody(this,uVar21,
                                 (FSpriteInstanceData *)
                                 ((this->PerInstanceSpriteData).AllocatorInstance.Data +
                                 (longlong)(int)uVar21 * 0x90),pFVar4);
      uVar14 = 0;
      if ((int)uVar21 < (this->InstanceBodies).ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar21 = uVar21 + 1;
      *(FBodyInstance **)((pTVar2->AllocatorInstance).Data + lVar20 * 8) = pFVar18;
      lVar20 = lVar20 + 1;
      FVar19 = local_res20;
      bVar6 = bVar7;
      bVar12 = bVar8;
      bVar9 = bVar10;
    } while (lVar20 < (int)uVar3);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// CreateSceneProxy @ 14acf47a0

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
UPaperGroupedSpriteComponent::CreateSceneProxy(UPaperGroupedSpriteComponent *this)

{
  FGroupedSpriteSceneProxy *pFVar1;
  
  if (0 < (this->PerInstanceSpriteData).ArrayNum) {
    pFVar1 = ::operator_new(0x6a0);
    if (pFVar1 != (FGroupedSpriteSceneProxy *)0x0) {
      pFVar1 = FGroupedSpriteSceneProxy::FGroupedSpriteSceneProxy(pFVar1,this);
      return (FPrimitiveSceneProxy *)pFVar1;
    }
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DoCustomNavigableGeometryExport @ 14acf5a20

bool __thiscall
UPaperGroupedSpriteComponent::DoCustomNavigableGeometryExport
          (UPaperGroupedSpriteComponent *this,FNavigableGeometryExport *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  UBodySetup *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  UObject *local_res18;
  uint local_res20;
  uint uStack_7c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  puVar8 = (undefined8 *)this->_padding_;
  local_res20 = (uint)this->_padding_;
  uVar6 = (ulonglong)(int)local_res20;
  puVar1 = puVar8 + uVar6;
  while( true ) {
    if ((int)this->_padding_ != (int)uVar6) {
      `TCheckedPointerIterator<FBodyInstance_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res18);
    }
    if (puVar8 == puVar1) break;
    if ((FBodyInstance *)*puVar8 != (FBodyInstance *)0x0) {
      pUVar3 = FBodyInstance::GetBodySetup((FBodyInstance *)*puVar8);
      if (pUVar3 != (UBodySetup *)0x0) {
        (**(code **)((longlong)*param_1 + 0x28))(param_1,pUVar3);
      }
    }
    plVar7 = &this[-1]._padding_;
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    pcVar2 = *(code **)((longlong)*param_1 + 0x40);
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    local_48 = &local_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__00__CBVUPaperGroupedSpriteComponent____A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar7 != (longlong *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)plVar7);
      }
      puVar4[3] = 0;
      local_res18 = (UObject *)plVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar7 != (longlong *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)plVar7);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res18);
      puVar4[4] = GetNavigationPerInstanceTransforms;
      puVar4[5] = (ulonglong)uStack_7c << 0x20;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    (*pcVar2)(param_1,&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    uVar6 = (ulonglong)local_res20;
    puVar8 = puVar8 + 1;
  }
  return false;
}

// GetInstanceCount @ 14acfa920

int __thiscall UPaperGroupedSpriteComponent::GetInstanceCount(UPaperGroupedSpriteComponent *this)

{
  return (this->PerInstanceSpriteData).ArrayNum;
}

// GetInstanceTransform @ 14acfa930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPaperGroupedSpriteComponent::GetInstanceTransform
          (UPaperGroupedSpriteComponent *this,int param_1,TTransform<double> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((param_1 < 0) || ((this->PerInstanceSpriteData).ArrayNum <= param_1)) {
    bVar3 = false;
  }
  else {
    iVar1 = (this->PerInstanceSpriteData).ArrayNum;
    uVar5 = 0;
    if (param_1 < iVar1) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_f8 = (longlong)param_1;
      local_f0 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    UE::Math::TTransform<double>::SetFromMatrix
              (&local_e8,
               (TMatrix<double> *)
               ((this->PerInstanceSpriteData).AllocatorInstance.Data + (longlong)param_1 * 0x90));
    (param_2->Rotation).XY.m128d_f64[0] = local_e8.Rotation.XY.m128d_f64[0];
    (param_2->Rotation).XY.m128d_f64[1] = local_e8.Rotation.XY.m128d_f64[1];
    (param_2->Rotation).ZW.m128d_f64[0] = local_e8.Rotation.ZW.m128d_f64[0];
    (param_2->Rotation).ZW.m128d_f64[1] = local_e8.Rotation.ZW.m128d_f64[1];
    (param_2->Translation).XY.m128d_f64[0] = local_e8.Translation.XY.m128d_f64[0];
    (param_2->Translation).XY.m128d_f64[1] = local_e8.Translation.XY.m128d_f64[1];
    (param_2->Translation).ZW.m128d_f64[0] = local_e8.Translation.ZW.m128d_f64[0];
    (param_2->Translation).ZW.m128d_f64[1] = local_e8.Translation.ZW.m128d_f64[1];
    (param_2->Scale3D).XY.m128d_f64[0] = local_e8.Scale3D.XY.m128d_f64[0];
    (param_2->Scale3D).XY.m128d_f64[1] = local_e8.Scale3D.XY.m128d_f64[1];
    (param_2->Scale3D).ZW.m128d_f64[0] = local_e8.Scale3D.ZW.m128d_f64[0];
    (param_2->Scale3D).ZW.m128d_f64[1] = local_e8.Scale3D.ZW.m128d_f64[1];
    if (param_3) {
      local_88.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_88.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_88.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_88.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_88.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_88.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_88,param_2,(TTransform<double> *)&this->_padding_);
      (param_2->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
      (param_2->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
      (param_2->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
      (param_2->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
      (param_2->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
      (param_2->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
      (param_2->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
      (param_2->Translation).ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
      (param_2->Scale3D).XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
      (param_2->Scale3D).XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
      (param_2->Scale3D).ZW.m128d_f64[0] = local_88.Scale3D.ZW.m128d_f64[0];
      (param_2->Scale3D).ZW.m128d_f64[1] = local_88.Scale3D.ZW.m128d_f64[1];
    }
    bVar3 = true;
  }
  return bVar3;
}

// GetMaterial @ 14acfb3a0

UMaterialInterface * __thiscall
UPaperGroupedSpriteComponent::GetMaterial(UPaperGroupedSpriteComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMaterialInterface *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar3 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMaterialInterface *)(*pcVar1)();
      return pUVar4;
    }
    pUVar4 = *(UMaterialInterface **)(this->_padding_ + (longlong)param_1 * 8);
    if (pUVar4 != (UMaterialInterface *)0x0) {
      return pUVar4;
    }
  }
  if ((param_1 < 0) || ((this->InstanceMaterials).ArrayNum <= param_1)) {
    pUVar4 = (UMaterialInterface *)0x0;
  }
  else {
    uVar3 = 0;
    if (param_1 < (this->InstanceMaterials).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMaterialInterface *)(*pcVar1)();
      return pUVar4;
    }
    pUVar4 = *(UMaterialInterface **)
              ((this->InstanceMaterials).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return pUVar4;
}

// GetNavigationData @ 14acfba90

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
UPaperGroupedSpriteComponent::GetNavigationData
          (UPaperGroupedSpriteComponent *this,FNavigationRelevantData *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  longlong *local_res8;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  plVar1 = &this[-1]._padding_;
  local_78 = GetNavigationPerInstanceTransforms;
  uStack_70 = 0;
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUPaperGroupedSpriteComponent____A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)plVar1);
    }
    puVar2[3] = 0;
    local_res8 = plVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)plVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    puVar2[4] = local_78;
    puVar2[5] = CONCAT44(uStack_6c,uStack_70);
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &param_1->NavDataPerInstanceTransformDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_78);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
               (FDestructionSentinel *)&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// GetNavigationPerInstanceTransforms @ 14acfbc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPaperGroupedSpriteComponent::GetNavigationPerInstanceTransforms
          (UPaperGroupedSpriteComponent *this,TBox<double> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  TTransform<double> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_178 [32];
  TTransform<double> *local_158;
  TTransform<double> *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  double local_120;
  double dStack_118;
  double local_110;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  iVar1 = (this->PerInstanceSpriteData).ArrayNum;
  pFVar9 = (this->PerInstanceSpriteData).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x90;
  while( true ) {
    if ((this->PerInstanceSpriteData).ArrayNum != iVar1) {
      local_128[0] = 0;
      `TCheckedPointerIterator<FSpriteInstanceData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_128);
    }
    if (pFVar9 == pFVar8) break;
    UE::Math::TTransform<double>::SetFromMatrix(&local_a8,(TMatrix<double> *)pFVar9);
    local_120 = local_a8.Scale3D.XY.m128d_f64[0];
    dStack_118 = local_a8.Scale3D.XY.m128d_f64[1];
    local_110 = local_a8.Scale3D.ZW.m128d_f64[0];
    if (((local_a8.Scale3D.XY.m128d_f64[0] != 0.0) || (local_a8.Scale3D.XY.m128d_f64[1] != 0.0)) ||
       (local_a8.Scale3D.ZW.m128d_f64[0] != 0.0)) {
      local_108.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_108.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_108.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_108.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_108.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_108.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_108,&local_a8,(TTransform<double> *)&this->_padding_);
      pTVar2 = (TTransform<double> *)(param_2->AllocatorInstance).Data;
      if ((pTVar2 <= &local_108) && (&local_108 < pTVar2 + param_2->ArrayMax)) {
        local_140 = (longlong)param_2->ArrayNum;
        local_138 = 0x60;
        local_158 = &local_108;
        local_150 = pTVar2;
        local_148 = (longlong)param_2->ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1060,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      pFVar3 = (param_2->AllocatorInstance).Data;
      lVar7 = (longlong)iVar6 * 0x60;
      *(double *)(pFVar3 + lVar7) = local_108.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar3 + lVar7 + 8) = local_108.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar3 + lVar7 + 0x10) = local_108.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar3 + lVar7 + 0x10 + 8) = local_108.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar3 + lVar7 + 0x20) = local_108.Translation.XY.m128d_f64[0];
      *(double *)(pFVar3 + lVar7 + 0x20 + 8) = local_108.Translation.XY.m128d_f64[1];
      *(double *)(pFVar3 + lVar7 + 0x30) = local_108.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar3 + lVar7 + 0x30 + 8) = local_108.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar3 + lVar7 + 0x40) = local_108.Scale3D.XY.m128d_f64[0];
      *(double *)(pFVar3 + lVar7 + 0x40 + 8) = local_108.Scale3D.XY.m128d_f64[1];
      *(double *)(pFVar3 + lVar7 + 0x50) = local_108.Scale3D.ZW.m128d_f64[0];
      *(double *)(pFVar3 + lVar7 + 0x50 + 8) = local_108.Scale3D.ZW.m128d_f64[1];
    }
    pFVar9 = pFVar9 + 0x90;
  }
  return;
}

// GetNumMaterials @ 14acfc670

int __thiscall UPaperGroupedSpriteComponent::GetNumMaterials(UPaperGroupedSpriteComponent *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (this->InstanceMaterials).ArrayNum;
  iVar2 = (int)this->_padding_;
  iVar3 = 1;
  if (1 < iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 < iVar2) {
    iVar3 = iVar2;
  }
  return iVar3;
}

// GetPrivateStaticClass @ 14acfd0c0

UClass * __cdecl UPaperGroupedSpriteComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperGroupedSpriteComponent",
               &Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.InnerSingleton,
               StaticRegisterNativesUPaperGroupedSpriteComponent,0x5c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperGroupedSpriteComponent>,
               InternalVTableHelperCtorCaller<UPaperGroupedSpriteComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.InnerSingleton;
}

// GetReferencedSpriteAssets @ 14acfdae0

void __thiscall
UPaperGroupedSpriteComponent::GetReferencedSpriteAssets
          (UPaperGroupedSpriteComponent *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  UObject *local_res8;
  
  iVar1 = (this->PerInstanceSpriteData).ArrayNum;
  pFVar2 = (this->PerInstanceSpriteData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x90;
  while( true ) {
    if ((this->PerInstanceSpriteData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSpriteInstanceData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(UObject **)(pFVar2 + 0x80) != (UObject *)0x0) {
      local_res8 = *(UObject **)(pFVar2 + 0x80);
      TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>(param_1,&local_res8);
    }
    pFVar2 = pFVar2 + 0x90;
  }
  return;
}

// GetUsedTextures @ 14ad01f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UPaperGroupedSpriteComponent::GetUsedTextures
          (UPaperGroupedSpriteComponent *this,
          TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,Type param_2)

{
  ForElementType<UTexture_*> FVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  ForElementType<UTexture_*> FVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_c8 [32];
  undefined1 local_87 [7];
  UTexture *local_80;
  UTexture *local_78;
  ForElementType<UTexture_*> local_70;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  iVar2 = (this->PerInstanceSpriteData).ArrayNum;
  pFVar6 = (this->PerInstanceSpriteData).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar2 * 0x90;
  while( true ) {
    if ((this->PerInstanceSpriteData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSpriteInstanceData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_87);
    }
    if (pFVar6 == pFVar5) break;
    if (*(longlong *)(pFVar6 + 0x80) != 0) {
      local_80 = *(UTexture **)(*(longlong *)(pFVar6 + 0x80) + 0x68);
      if (local_80 != (UTexture *)0x0) {
        TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                  (param_1,&local_80);
      }
      local_70.SecondaryData = (ForElementType<UTexture_*>)0x0;
      local_44 = 4;
      iVar3 = *(int *)(*(longlong *)(pFVar6 + 0x80) + 0x40);
      _Src = *(void **)(*(longlong *)(pFVar6 + 0x80) + 0x38);
      local_48 = iVar3;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
                (8,8,iVar3,4,&local_70,iVar3,&local_44);
      FVar4 = (ForElementType<UTexture_*>)&local_70;
      if (local_70.SecondaryData != (ForElementType<UTexture_*>)0x0) {
        FVar4 = local_70.SecondaryData;
      }
      if (iVar3 != 0) {
        memcpy((void *)FVar4,_Src,(longlong)iVar3 << 3);
      }
      iVar3 = local_48;
      FVar4 = (ForElementType<UTexture_*>)&local_70;
      if (local_70.SecondaryData != (ForElementType<UTexture_*>)0x0) {
        FVar4 = local_70.SecondaryData;
      }
      FVar1 = (ForElementType<UTexture_*>)((longlong)FVar4 + (longlong)local_48 * 8);
      while( true ) {
        if (local_48 != iVar3) {
          `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_87);
        }
        if (FVar4 == FVar1) break;
        local_78 = *(UTexture **)FVar4;
        if (local_78 != (UTexture *)0x0) {
          TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                    (param_1,&local_78);
        }
        FVar4 = (ForElementType<UTexture_*>)((longlong)FVar4 + 8);
      }
      if (local_70.SecondaryData != (ForElementType<UTexture_*>)0x0) {
        FMemory::Free((void *)local_70.SecondaryData);
      }
    }
    pFVar6 = pFVar6 + 0x90;
  }
  UPrimitiveComponent::GetUsedTextures((UPrimitiveComponent *)this,param_1,param_2);
  return;
}

// InitInstanceBody @ 14ad02970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBodyInstance * __thiscall
UPaperGroupedSpriteComponent::InitInstanceBody
          (UPaperGroupedSpriteComponent *this,int param_1,FSpriteInstanceData *param_2,
          FPhysScene_Chaos *param_3)

{
  UPaperSprite *pUVar1;
  UBodySetup *pUVar2;
  FBodyInstance *pFVar3;
  FInitBodySpawnParams *pFVar4;
  undefined1 auStackY_148 [32];
  FInitBodySpawnParams local_108 [5];
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pUVar1 = (param_2->SourceSprite).field0_0x0.DebugPtr;
  if (pUVar1 == (UPaperSprite *)0x0) {
    pFVar3 = (FBodyInstance *)0x0;
  }
  else {
    pUVar2 = (pUVar1->BodySetup).field0_0x0.DebugPtr;
    if (pUVar2 == (UBodySetup *)0x0) {
      pFVar3 = (FBodyInstance *)0x0;
    }
    else {
      pFVar3 = ::operator_new(400);
      if (pFVar3 == (FBodyInstance *)0x0) {
        pFVar3 = (FBodyInstance *)0x0;
      }
      else {
        pFVar3 = FBodyInstance::FBodyInstance(pFVar3);
      }
      FBodyInstance::CopyBodyInstancePropertiesFrom(pFVar3,(FBodyInstance *)&this->_padding_);
      *(byte *)&pFVar3->_padding_ = (byte)pFVar3->_padding_ & 0xde;
      pFVar3->InstanceBodyIndex = param_1;
      UE::Math::TTransform<double>::SetFromMatrix(&local_98,&param_2->Transform);
      local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_f8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_f8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_f8,&local_98,(TTransform<double> *)&this->_padding_);
      pFVar4 = FInitBodySpawnParams::FInitBodySpawnParams(local_108,(UPrimitiveComponent *)this);
      FBodyInstance::InitBody
                (pFVar3,pUVar2,&local_f8,(UPrimitiveComponent *)this,param_3,pFVar4,
                 (IPhysicsBodyInstanceOwner *)0x0);
    }
  }
  return pFVar3;
}

// OnCreatePhysicsState @ 14ad03850

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
UPaperGroupedSpriteComponent::OnCreatePhysicsState(UPaperGroupedSpriteComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->InstanceBodies).ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceBodies.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperGroupedSpriteComponent.cpp"
                       ,200,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  CreateAllInstanceBodies(this);
  UActorComponent::OnCreatePhysicsState((UActorComponent *)this);
  return;
}

// OnDestroyPhysicsState @ 14ad038b0

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
UPaperGroupedSpriteComponent::OnDestroyPhysicsState(UPaperGroupedSpriteComponent *this)

{
  UActorComponent::OnDestroyPhysicsState((UActorComponent *)this);
  ClearAllInstanceBodies(this);
  return;
}

// OnUpdateTransform @ 14ad051c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UPaperGroupedSpriteComponent::OnUpdateTransform
          (UPaperGroupedSpriteComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  longlong local_100;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  UPrimitiveComponent::OnUpdateTransform
            ((UPrimitiveComponent *)this,param_1 | SkipPhysicsUpdate,param_2);
  if (((this->_padding_ & 8) != 0) && ((param_1 & SkipPhysicsUpdate) == None)) {
    uVar5 = 0;
    if (0 < (this->PerInstanceSpriteData).ArrayNum) {
      do {
        iVar1 = (this->PerInstanceSpriteData).ArrayNum;
        uVar4 = 0;
        if ((int)uVar5 < iVar1) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_108 = (ulonglong)(int)uVar5;
          local_100 = (longlong)iVar1;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        UE::Math::TTransform<double>::SetFromMatrix
                  (&local_98,
                   (TMatrix<double> *)
                   ((this->PerInstanceSpriteData).AllocatorInstance.Data +
                   (longlong)(int)uVar5 * 0x90));
        local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        pcVar2 = *(code **)(this->_padding_ + 0xb30);
        local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_f8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_f8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_f8,&local_98,(TTransform<double> *)&this->_padding_);
        local_100 = CONCAT71(local_100._1_7_,param_2 == TeleportPhysics);
        local_108 = local_108 & 0xffffffffffffff00;
        (*pcVar2)(this,uVar5,&local_f8,1);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (this->PerInstanceSpriteData).ArrayNum);
    }
  }
  return;
}

// RebuildInstances @ 14ad06a80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPaperGroupedSpriteComponent::RebuildInstances(UPaperGroupedSpriteComponent *this)

{
  if ((this->_padding_ & 8) != 0) {
    ClearAllInstanceBodies(this);
    CreateAllInstanceBodies(this);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// RebuildMaterialList @ 14ad06ac0

void __thiscall
UPaperGroupedSpriteComponent::RebuildMaterialList(UPaperGroupedSpriteComponent *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  TObjectPtr<UMaterialInterface> *pTVar4;
  TObjectPtr<UMaterialInterface>_u_0 TVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  TObjectPtr<UMaterialInterface>_u_0 local_res10;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  iVar2 = (int)this->_padding_;
  pTVar4 = (TObjectPtr<UMaterialInterface> *)this->_padding_;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = iVar2;
  if (iVar2 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,&local_38,iVar2,&local_2c);
    ConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInterface>,int>
              (local_38.Data,pTVar4,iVar2);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  iVar2 = (this->PerInstanceSpriteData).ArrayNum;
  pFVar11 = (this->PerInstanceSpriteData).AllocatorInstance.Data;
  pFVar10 = pFVar11 + (longlong)iVar2 * 0x90;
  while( true ) {
    if ((this->PerInstanceSpriteData).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSpriteInstanceData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar10) break;
    uVar3 = *(uint *)(pFVar11 + 0x8c);
    lVar12 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < local_30)) {
      uVar8 = 0;
      if ((int)uVar3 < local_30) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar12 = *(longlong *)(local_38.Data + (longlong)(int)uVar3 * 8);
    }
    iVar9 = -1;
    if (*(longlong *)(pFVar11 + 0x80) != 0) {
      TVar5 = (TObjectPtr<UMaterialInterface>_u_0)
              ((TObjectPtr<UMaterialInterface>_u_0 *)(*(longlong *)(pFVar11 + 0x80) + 0x70))->
              DebugPtr;
      if (TVar5.DebugPtr != (UMaterialInterface *)0x0) {
        local_res10 = TVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
        iVar9 = TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<TObjectPtr<UMaterialInterface>_>
                          (&this->InstanceMaterials,
                           (TObjectPtr<UMaterialInterface> *)&local_res10.ObjectPtr);
      }
      if (lVar12 != 0) {
        (**(code **)(this->_padding_ + 0x6b8))(this,iVar9,lVar12);
      }
    }
    *(int *)(pFVar11 + 0x8c) = iVar9;
    pFVar11 = pFVar11 + 0x90;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// RemoveInstance @ 14ad08a70

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
UPaperGroupedSpriteComponent::RemoveInstance(UPaperGroupedSpriteComponent *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *_Dst;
  int iVar6;
  
  if ((-1 < param_1) && (param_1 < (this->PerInstanceSpriteData).ArrayNum)) {
    FNavigationSystem::UpdateComponentData((UActorComponent *)this);
    uVar5 = 0;
    if (param_1 < (this->PerInstanceSpriteData).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    _Dst = (this->PerInstanceSpriteData).AllocatorInstance.Data + (longlong)param_1 * 0x90;
    iVar6 = (this->PerInstanceSpriteData).ArrayNum + ~param_1;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x90,(longlong)iVar6 * 0x90);
    }
    piVar1 = &(this->PerInstanceSpriteData).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,&(this->PerInstanceSpriteData).AllocatorInstance,
               (this->PerInstanceSpriteData).ArrayNum,&(this->PerInstanceSpriteData).ArrayMax);
    if ((this->_padding_ & 8) != 0) {
      ClearAllInstanceBodies(this);
      CreateAllInstanceBodies(this);
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return true;
  }
  return false;
}

// SetupNewInstanceData @ 14ad0b580

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
UPaperGroupedSpriteComponent::SetupNewInstanceData
          (UPaperGroupedSpriteComponent *this,FSpriteInstanceData *param_1,int param_2,
          TTransform<double> *param_3,UPaperSprite *param_4,UMaterialInterface *param_5,
          FColor *param_6)

{
  int *piVar1;
  UMaterialInterface *pUVar2;
  code *pcVar3;
  double dVar4;
  FColor *pFVar5;
  bool bVar6;
  int iVar7;
  TMatrix<double> *pTVar8;
  UWorld *pUVar9;
  FScriptContainerElement *pFVar10;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FBodyInstance *local_98 [2];
  TMatrix<double> local_88;
  
  pFVar5 = param_6;
  pTVar8 = UE::Math::TTransform<double>::ToMatrixWithScale(param_3,&local_88);
  dVar4 = pTVar8->M[0][1];
  (param_1->Transform).M[0][0] = pTVar8->M[0][0];
  (param_1->Transform).M[0][1] = dVar4;
  dVar4 = pTVar8->M[0][3];
  (param_1->Transform).M[0][2] = pTVar8->M[0][2];
  (param_1->Transform).M[0][3] = dVar4;
  dVar4 = pTVar8->M[1][1];
  (param_1->Transform).M[1][0] = pTVar8->M[1][0];
  (param_1->Transform).M[1][1] = dVar4;
  dVar4 = pTVar8->M[1][3];
  (param_1->Transform).M[1][2] = pTVar8->M[1][2];
  (param_1->Transform).M[1][3] = dVar4;
  dVar4 = pTVar8->M[2][1];
  (param_1->Transform).M[2][0] = pTVar8->M[2][0];
  (param_1->Transform).M[2][1] = dVar4;
  dVar4 = pTVar8->M[2][3];
  (param_1->Transform).M[2][2] = pTVar8->M[2][2];
  (param_1->Transform).M[2][3] = dVar4;
  dVar4 = pTVar8->M[3][1];
  (param_1->Transform).M[3][0] = pTVar8->M[3][0];
  (param_1->Transform).M[3][1] = dVar4;
  dVar4 = pTVar8->M[3][3];
  (param_1->Transform).M[3][2] = pTVar8->M[3][2];
  (param_1->Transform).M[3][3] = dVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_4 == (UPaperSprite *)0x0)) {
    (param_1->SourceSprite).field0_0x0.DebugPtr = param_4;
    iVar7 = -1;
    (param_1->VertexColor).field0_0x0 = pFVar5->field0_0x0;
    if (param_4 == (UPaperSprite *)0x0) goto LAB_14ad0b69b;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_4);
    (param_1->SourceSprite).field0_0x0.DebugPtr = param_4;
    (param_1->VertexColor).field0_0x0 = pFVar5->field0_0x0;
  }
  iVar7 = -1;
  pUVar2 = (param_4->DefaultMaterial).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    param_6 = (FColor *)pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    iVar7 = TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TObjectPtr<UMaterialInterface>_>
                      (&this->InstanceMaterials,(TObjectPtr<UMaterialInterface> *)&param_6);
  }
  if (param_5 != (UMaterialInterface *)0x0) {
    (**(code **)(this->_padding_ + 0x6b8))(this,iVar7);
  }
LAB_14ad0b69b:
  param_1->MaterialIndex = iVar7;
  if ((((this->_padding_ & 8) != 0) && (param_4 != (UPaperSprite *)0x0)) &&
     ((param_4->BodySetup).field0_0x0.DebugPtr != (UBodySetup *)0x0)) {
    pUVar9 = (UWorld *)this->_padding_;
    if (pUVar9 == (UWorld *)0x0) {
      pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    local_98[0] = InitInstanceBody(this,param_2,param_1,pUVar9->PhysicsScene);
    pTVar11 = &this->InstanceBodies;
    pFVar10 = (pTVar11->AllocatorInstance).Data;
    if ((pFVar10 <= (FScriptContainerElement *)local_98) &&
       ((FScriptContainerElement *)local_98 <
        pFVar10 + (longlong)(this->InstanceBodies).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = (this->InstanceBodies).ArrayNum;
    piVar1 = &(this->InstanceBodies).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar11->AllocatorInstance,piVar1);
    }
    pFVar10 = (pTVar11->AllocatorInstance).Data;
    (this->InstanceBodies).ArrayNum = iVar7 + 1;
    pFVar10 = pFVar10 + (longlong)param_2 * 8;
    memmove(pFVar10 + 8,pFVar10,(longlong)(iVar7 - param_2) << 3);
    *(FBodyInstance **)((pTVar11->AllocatorInstance).Data + (longlong)param_2 * 8) = local_98[0];
  }
  return;
}

// ShouldCreatePhysicsState @ 14ad0b7e0

bool __thiscall
UPaperGroupedSpriteComponent::ShouldCreatePhysicsState(UPaperGroupedSpriteComponent *this)

{
  int iVar1;
  
  if ((this->_padding_ & 1) == 0) {
    return false;
  }
  if (((this->_padding_ & 0x4000000) == 0) &&
     (iVar1 = (**(code **)(this->_padding_ + 0x5e0))(), iVar1 == 0)) {
    return false;
  }
  return true;
}

// SortInstancesAlongAxis @ 14ad0c0b0

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
UPaperGroupedSpriteComponent::SortInstancesAlongAxis
          (UPaperGroupedSpriteComponent *this,TVector<double> *param_1)

{
  int *piVar1;
  TArray<FSpriteInstanceData,TSizedDefaultAllocator<32>_> *pTVar2;
  FSortStruct *pFVar3;
  FScriptContainerElement *pFVar4;
  FSpriteInstanceData *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [12];
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  ulonglong uVar18;
  FSpriteInstanceData *pFVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined4 uVar34;
  double dVar33;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  FIdentityFunctor local_res8 [8];
  undefined1 local_res18 [16];
  ForAnyElementType local_d8;
  uint local_d0;
  uint local_cc;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc [5];
  double local_a8;
  undefined1 local_98 [16];
  double local_88;
  
  uVar11 = (this->PerInstanceSpriteData).ArrayNum;
  uVar15 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_cc = 0;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  local_d0 = 0;
  if (uVar11 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&local_d8,0,(int *)&local_cc);
  }
  pTVar2 = &this->PerInstanceSpriteData;
  uVar18 = uVar15;
  if (0 < (this->PerInstanceSpriteData).ArrayNum) {
    do {
      uVar17 = (uint)uVar18;
      uVar11 = 0;
      if ((int)uVar17 < (this->PerInstanceSpriteData).ArrayNum) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      auVar30._0_8_ = this->_padding_;
      auVar30._8_8_ = this->_padding_;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      auVar27._0_8_ = this->_padding_;
      auVar27._8_8_ = this->_padding_;
      dVar9 = (double)this->_padding_;
      local_a8 = *(double *)(pFVar4 + uVar15 + 0x70);
      pFVar4 = pFVar4 + uVar15 + 0x60;
      dVar35 = local_a8 * (double)this->_padding_;
      dVar31 = (double)this->_padding_ * 0.0;
      dVar33 = (double)this->_padding_ * *(double *)pFVar4;
      dVar7 = (double)this->_padding_ * *(double *)(pFVar4 + 8);
      uVar34 = (undefined4)((ulonglong)dVar7 >> 0x20);
      local_98._0_8_ = this->_padding_;
      local_98._8_8_ = this->_padding_;
      auVar36._8_4_ = SUB84(dVar7,0);
      auVar36._0_8_ = dVar33;
      auVar36._12_4_ = uVar34;
      auVar24 = blendpd(local_98,auVar30,2);
      auVar37._0_8_ = auVar36._8_8_ * (double)local_98._0_8_ - (double)local_98._8_8_ * dVar33;
      auVar37._8_8_ = dVar35 * (double)local_98._8_8_ - (double)auVar30._0_8_ * dVar7;
      auVar20._8_4_ = SUB84(dVar7,0);
      auVar20._0_8_ = dVar33;
      auVar20._12_4_ = uVar34;
      auVar21._8_4_ = SUB84(dVar31,0);
      auVar21._0_8_ = dVar35;
      auVar21._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      auVar21 = blendpd(auVar20,auVar21,2);
      auVar22._0_8_ = auVar21._0_8_ * (double)auVar30._0_8_ - auVar24._0_8_ * dVar35;
      auVar22._8_8_ = auVar21._8_8_ * (double)auVar30._8_8_ - auVar24._8_8_ * dVar31;
      auVar21 = blendpd(auVar37,auVar22,2);
      auVar38._0_8_ = auVar21._0_8_ + auVar21._0_8_;
      auVar38._8_8_ = auVar21._8_8_ + auVar21._8_8_;
      dVar31 = auVar37._8_8_ + auVar37._8_8_;
      dVar32 = auVar22._0_8_ + auVar22._0_8_;
      auVar28._8_4_ = SUB84(dVar32,0);
      auVar28._0_8_ = dVar31;
      uVar34 = (undefined4)((ulonglong)dVar32 >> 0x20);
      auVar28._12_4_ = uVar34;
      auVar25._8_4_ = SUB84(dVar32,0);
      auVar25._0_8_ = dVar31;
      auVar25._12_4_ = uVar34;
      auVar21 = blendpd(auVar25,auVar38,2);
      auVar29._0_8_ = auVar28._8_8_ * (double)auVar27._0_8_ - (double)auVar27._8_8_ * dVar31;
      auVar29._8_8_ = auVar38._0_8_ * (double)auVar27._8_8_ - (double)auVar30._0_8_ * dVar32;
      auVar24._8_4_ = SUB84(auVar29._8_8_,0);
      auVar24._0_8_ = auVar29._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
      auVar27 = blendpd(auVar27,auVar30,2);
      auVar26._0_8_ = auVar21._0_8_ * (double)auVar30._0_8_ - auVar27._0_8_ * auVar38._0_8_;
      auVar26._8_8_ = auVar21._8_8_ * (double)auVar30._8_8_ - auVar27._8_8_ * auVar38._8_8_;
      auVar30 = blendpd(auVar29,auVar26,2);
      dVar31 = dVar31 * dVar9 + dVar33 + auVar24._8_8_ + (double)this->_padding_;
      dVar33 = dVar32 * dVar9 + dVar7 + auVar26._0_8_ + (double)this->_padding_;
      auVar8._4_8_ = auVar26._0_8_;
      auVar8._0_4_ = (int)((ulonglong)dVar31 >> 0x20);
      auVar23._0_8_ = auVar8._0_8_ << 0x20;
      auVar23._8_4_ = SUB84(dVar33,0);
      auVar23._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      local_88 = auVar38._0_8_ * dVar9 + dVar35 + auVar30._0_8_ + (double)this->_padding_;
      dVar33 = (param_1->field0_0x0)._s_0.Y;
      dVar7 = (param_1->field0_0x0)._s_0.X;
      dVar35 = local_88 * (param_1->field0_0x0)._s_0.Z;
      if (local_d0 == local_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_d8,(int *)&local_cc);
      }
      lVar14 = (longlong)(int)local_d0;
      uVar15 = uVar15 + 0x90;
      local_d0 = local_d0 + 1;
      *(uint *)&local_d8.Data[lVar14 * 8].field_0x0 = uVar17;
      *(float *)(local_d8.Data + lVar14 * 8 + 4) =
           (float)(auVar23._8_8_ * dVar33 + dVar31 * dVar7 + dVar35);
      uVar18 = (ulonglong)(uVar17 + 1);
    } while ((int)(uVar17 + 1) < (this->PerInstanceSpriteData).ArrayNum);
  }
  AlgoImpl::
  IntroSortInternal<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::__l2::FSortStruct,int,FIdentityFunctor,TDereferenceWrapper<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::__l2::FSortStruct,_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::__l2::<lambda_1>_>_>
            ((FSortStruct *)local_d8.Data,local_d0,local_res8[0],(<lambda_1> *)local_res18);
  iVar13 = (this->PerInstanceSpriteData).ArrayNum;
  pFVar5 = (FSpriteInstanceData *)(pTVar2->AllocatorInstance).Data;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = iVar13;
  if (iVar13 == 0) {
    local_bc[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,iVar13,0,&local_c8,iVar13,local_bc);
    ConstructItems<FSpriteInstanceData,FSpriteInstanceData,int>(local_c8.Data,pFVar5,iVar13);
  }
  piVar1 = &(this->PerInstanceSpriteData).ArrayMax;
  (this->PerInstanceSpriteData).ArrayNum = 0;
  if ((this->PerInstanceSpriteData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar11 = local_d0;
  uVar15 = (ulonglong)(int)local_d0;
  pFVar3 = (FSortStruct *)(local_d8.Data + uVar15 * 8);
  FVar16.Data = local_d8.Data;
  while( true ) {
    if ((uint)uVar15 != uVar11) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::__l2::FSortStruct,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FSortStruct *)FVar16.Data == pFVar3) {
      if ((this->_padding_ & 8) != 0) {
        ClearAllInstanceBodies(this);
        CreateAllInstanceBodies(this);
      }
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      if ((FSortStruct *)local_d8.Data != (FSortStruct *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      return;
    }
    uVar17 = ((FSortStruct *)FVar16.Data)->OldIndex;
    uVar12 = 0;
    if ((int)uVar17 < local_c0) {
      uVar12 = ~uVar17 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    pFVar5 = (FSpriteInstanceData *)(pTVar2->AllocatorInstance).Data;
    pFVar19 = (FSpriteInstanceData *)(local_c8.Data + (longlong)(int)uVar17 * 0x90);
    if (((pFVar5 <= pFVar19) && (pFVar19 < pFVar5 + *piVar1)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar13 = (this->PerInstanceSpriteData).ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1090,&pTVar2->AllocatorInstance,piVar1);
      (this->PerInstanceSpriteData).ArrayNum = iVar13;
    }
    (this->PerInstanceSpriteData).ArrayNum = iVar13 + 1;
    FSpriteInstanceData::FSpriteInstanceData
              ((FSpriteInstanceData *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x90),
               pFVar19);
    uVar15 = (ulonglong)local_d0;
    FVar16.Data = FVar16.Data + 8;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// StaticRegisterNativesUPaperGroupedSpriteComponent @ 14ad0dfd0

void __cdecl UPaperGroupedSpriteComponent::StaticRegisterNativesUPaperGroupedSpriteComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateInstanceColor @ 14ad0f020

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
UPaperGroupedSpriteComponent::UpdateInstanceColor
          (UPaperGroupedSpriteComponent *this,int param_1,FLinearColor *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_1 < 0) || ((this->PerInstanceSpriteData).ArrayNum <= param_1)) {
    bVar2 = false;
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->PerInstanceSpriteData).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    fVar5 = (param_2->field0_0x0)._s_0.B;
    fVar8 = (param_2->field0_0x0)._s_0.R;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (__real_3f800000 <= fVar5) {
      fVar5 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar8) {
      fVar8 = __real_3f800000;
    }
    fVar6 = (param_2->field0_0x0)._s_0.G;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if (__real_3f800000 <= fVar6) {
      fVar6 = __real_3f800000;
    }
    fVar7 = (param_2->field0_0x0)._s_0.A;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    *(uint *)((this->PerInstanceSpriteData).AllocatorInstance.Data + (longlong)param_1 * 0x90 + 0x88
             ) = CONCAT13((char)(int)(fVar7 * __real_437f0000 + __real_3f000000),
                          CONCAT12((char)(int)(fVar8 * __real_437f0000 + __real_3f000000),
                                   CONCAT11((char)(int)(fVar6 * __real_437f0000 + __real_3f000000),
                                            (char)(int)(fVar5 * __real_437f0000 + __real_3f000000)))
                         );
    if (param_3) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
    bVar2 = true;
  }
  return bVar2;
}

// UpdateInstanceTransform @ 14ad0f180

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

bool __thiscall
UPaperGroupedSpriteComponent::UpdateInstanceTransform
          (UPaperGroupedSpriteComponent *this,int param_1,TTransform<double> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  int iVar1;
  FBodyInstance *this_00;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TTransform<double> *pTVar7;
  TMatrix<double> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  longlong local_2e0;
  char local_2d8;
  TTransform<double> *local_2d0;
  TVector<double>_u_0 local_2c8;
  TTransform<double> local_2a8;
  TMatrix<double> local_248;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_308;
  lVar9 = (longlong)param_1;
  if ((param_1 < 0) || ((this->PerInstanceSpriteData).ArrayNum <= param_1)) {
    bVar4 = false;
  }
  else {
    local_2d8 = param_3;
    FNavigationSystem::UpdateComponentData((UActorComponent *)this);
    iVar1 = (this->PerInstanceSpriteData).ArrayNum;
    uVar6 = 0;
    if (param_1 < iVar1) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      local_2e8 = lVar9;
      local_2e0 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    pFVar10 = (this->PerInstanceSpriteData).AllocatorInstance.Data + lVar9 * 0x90;
    if (local_2d8 == '\0') {
      pTVar7 = &local_2a8;
      local_2a8.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
      local_2a8.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
      local_2a8.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
      local_2a8.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
      local_2a8.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
      local_2a8.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
      local_2a8.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
      local_2a8.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
      local_2a8.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
      local_2a8.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
      local_2a8.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
      local_2a8.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
    }
    else {
      pTVar7 = UE::Math::TTransform<double>::GetRelativeTransform
                         (param_2,&local_a8,(TTransform<double> *)&this->_padding_);
    }
    local_108.Rotation.XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
    local_108.Rotation.XY.m128d_f64[1] = (pTVar7->Rotation).XY.m128d_f64[1];
    local_2d0 = (TTransform<double> *)&this->_padding_;
    local_108.Rotation.ZW.m128d_f64[0] = (pTVar7->Rotation).ZW.m128d_f64[0];
    local_108.Rotation.ZW.m128d_f64[1] = (pTVar7->Rotation).ZW.m128d_f64[1];
    local_108.Translation.XY.m128d_f64[0] = (pTVar7->Translation).XY.m128d_f64[0];
    local_108.Translation.XY.m128d_f64[1] = (pTVar7->Translation).XY.m128d_f64[1];
    local_108.Translation.ZW.m128d_f64[0] = (pTVar7->Translation).ZW.m128d_f64[0];
    local_108.Translation.ZW.m128d_f64[1] = (pTVar7->Translation).ZW.m128d_f64[1];
    local_108.Scale3D.XY.m128d_f64[0] = (pTVar7->Scale3D).XY.m128d_f64[0];
    local_108.Scale3D.XY.m128d_f64[1] = (pTVar7->Scale3D).XY.m128d_f64[1];
    local_108.Scale3D.ZW.m128d_f64[0] = (pTVar7->Scale3D).ZW.m128d_f64[0];
    local_108.Scale3D.ZW.m128d_f64[1] = (pTVar7->Scale3D).ZW.m128d_f64[1];
    pTVar8 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_108,&local_248);
    dVar3 = pTVar8->M[0][1];
    *(double *)pFVar10 = pTVar8->M[0][0];
    *(double *)(pFVar10 + 8) = dVar3;
    dVar3 = pTVar8->M[0][3];
    *(double *)(pFVar10 + 0x10) = pTVar8->M[0][2];
    *(double *)(pFVar10 + 0x18) = dVar3;
    dVar3 = pTVar8->M[1][1];
    *(double *)(pFVar10 + 0x20) = pTVar8->M[1][0];
    *(double *)(pFVar10 + 0x28) = dVar3;
    dVar3 = pTVar8->M[1][3];
    *(double *)(pFVar10 + 0x30) = pTVar8->M[1][2];
    *(double *)(pFVar10 + 0x38) = dVar3;
    dVar3 = pTVar8->M[2][1];
    *(double *)(pFVar10 + 0x40) = pTVar8->M[2][0];
    *(double *)(pFVar10 + 0x48) = dVar3;
    dVar3 = pTVar8->M[2][3];
    *(double *)(pFVar10 + 0x50) = pTVar8->M[2][2];
    *(double *)(pFVar10 + 0x58) = dVar3;
    dVar3 = pTVar8->M[3][1];
    *(double *)(pFVar10 + 0x60) = pTVar8->M[3][0];
    *(double *)(pFVar10 + 0x68) = dVar3;
    dVar3 = pTVar8->M[3][3];
    *(double *)(pFVar10 + 0x70) = pTVar8->M[3][2];
    *(double *)(pFVar10 + 0x78) = dVar3;
    if ((this->_padding_ & 8) != 0) {
      if (local_2d8 == '\0') {
        local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_1c8,&local_108,local_2d0);
        local_168.Rotation.XY.m128d_f64[0]._0_4_ = local_1c8.Rotation.XY.m128d_f64[0]._0_4_;
        local_168.Rotation.XY.m128d_f64[0]._4_4_ = local_1c8.Rotation.XY.m128d_f64[0]._4_4_;
        local_168.Rotation.XY.m128d_f64[1]._0_4_ = local_1c8.Rotation.XY.m128d_f64[1]._0_4_;
        local_168.Rotation.XY.m128d_f64[1]._4_4_ = local_1c8.Rotation.XY.m128d_f64[1]._4_4_;
        local_168.Rotation.ZW.m128d_f64[0]._0_4_ = local_1c8.Rotation.ZW.m128d_f64[0]._0_4_;
        local_168.Rotation.ZW.m128d_f64[0]._4_4_ = local_1c8.Rotation.ZW.m128d_f64[0]._4_4_;
        local_168.Rotation.ZW.m128d_f64[1]._0_4_ = local_1c8.Rotation.ZW.m128d_f64[1]._0_4_;
        local_168.Rotation.ZW.m128d_f64[1]._4_4_ = local_1c8.Rotation.ZW.m128d_f64[1]._4_4_;
        local_168.Translation.XY.m128d_f64[0]._0_4_ = local_1c8.Translation.XY.m128d_f64[0]._0_4_;
        local_168.Translation.XY.m128d_f64[0]._4_4_ = local_1c8.Translation.XY.m128d_f64[0]._4_4_;
        local_168.Translation.XY.m128d_f64[1]._0_4_ = local_1c8.Translation.XY.m128d_f64[1]._0_4_;
        local_168.Translation.XY.m128d_f64[1]._4_4_ = local_1c8.Translation.XY.m128d_f64[1]._4_4_;
        local_168.Translation.ZW.m128d_f64[0]._0_4_ = local_1c8.Translation.ZW.m128d_f64[0]._0_4_;
        local_168.Translation.ZW.m128d_f64[0]._4_4_ = local_1c8.Translation.ZW.m128d_f64[0]._4_4_;
        local_168.Translation.ZW.m128d_f64[1]._0_4_ = local_1c8.Translation.ZW.m128d_f64[1]._0_4_;
        local_168.Translation.ZW.m128d_f64[1]._4_4_ = local_1c8.Translation.ZW.m128d_f64[1]._4_4_;
        local_168.Scale3D.XY.m128d_f64[0]._0_4_ = local_1c8.Scale3D.XY.m128d_f64[0]._0_4_;
        local_168.Scale3D.XY.m128d_f64[0]._4_4_ = local_1c8.Scale3D.XY.m128d_f64[0]._4_4_;
        local_168.Scale3D.XY.m128d_f64[1]._0_4_ = local_1c8.Scale3D.XY.m128d_f64[1]._0_4_;
        local_168.Scale3D.XY.m128d_f64[1]._4_4_ = local_1c8.Scale3D.XY.m128d_f64[1]._4_4_;
        local_168.Scale3D.ZW.m128d_f64[0]._0_4_ = local_1c8.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_168.Scale3D.ZW.m128d_f64[0]._4_4_ = local_1c8.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_168.Scale3D.ZW.m128d_f64[1]._0_4_ = local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_168.Scale3D.ZW.m128d_f64[1]._4_4_ = local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      else {
        local_168.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
        local_168.Rotation.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
        local_168.Rotation.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
        local_168.Rotation.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
        local_168.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
        local_168.Rotation.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
        local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
        local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
        local_168.Translation.XY.m128d_f64[0]._0_4_ =
             *(undefined4 *)(param_2->Translation).XY.m128d_f64;
        local_168.Translation.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4);
        local_168.Translation.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1);
        local_168.Translation.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc);
        local_168.Translation.ZW.m128d_f64[0]._0_4_ =
             *(undefined4 *)(param_2->Translation).ZW.m128d_f64;
        local_168.Translation.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4);
        local_168.Translation.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((param_2->Translation).ZW.m128d_f64 + 1);
        local_168.Translation.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 0xc);
        local_168.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
        local_168.Scale3D.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
        local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
        local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
        local_168.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
        local_168.Scale3D.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
        local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
        local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
      }
      iVar1 = (this->InstanceBodies).ArrayNum;
      uVar6 = 0;
      if (param_1 < iVar1) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_2e8 = lVar9;
        local_2e0 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      this_00 = *(FBodyInstance **)((this->InstanceBodies).AllocatorInstance.Data + lVar9 * 8);
      if (this_00 != (FBodyInstance *)0x0) {
        FBodyInstance::SetBodyTransform(this_00,&local_168,param_5,true);
        local_2c8._s_0.X =
             (double)CONCAT44(local_168.Scale3D.XY.m128d_f64[0]._4_4_,
                              local_168.Scale3D.XY.m128d_f64[0]._0_4_);
        local_2c8._s_0.Y =
             (double)CONCAT44(local_168.Scale3D.XY.m128d_f64[1]._4_4_,
                              local_168.Scale3D.XY.m128d_f64[1]._0_4_);
        local_2c8._s_0.Z =
             (double)CONCAT44(local_168.Scale3D.ZW.m128d_f64[0]._4_4_,
                              local_168.Scale3D.ZW.m128d_f64[0]._0_4_);
        FBodyInstance::UpdateBodyScale(this_00,(TVector<double> *)&local_2c8._s_0,false);
      }
    }
    FNavigationSystem::UpdateComponentData((UActorComponent *)this);
    if (param_4) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
    bVar4 = true;
  }
  return bVar4;
}

// UpdateMaterialList @ 14ad0f510

int __thiscall
UPaperGroupedSpriteComponent::UpdateMaterialList
          (UPaperGroupedSpriteComponent *this,UPaperSprite *param_1,UMaterialInterface *param_2)

{
  TObjectPtr<UMaterialInterface>_u_0 TVar1;
  int iVar2;
  TObjectPtr<UMaterialInterface>_u_0 local_res10;
  
  iVar2 = -1;
  if (param_1 != (UPaperSprite *)0x0) {
    TVar1 = (TObjectPtr<UMaterialInterface>_u_0)(param_1->DefaultMaterial).field0_0x0.DebugPtr;
    if (TVar1.DebugPtr != (UMaterialInterface *)0x0) {
      local_res10 = TVar1;
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      iVar2 = TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<TObjectPtr<UMaterialInterface>_>
                        (&this->InstanceMaterials,
                         (TObjectPtr<UMaterialInterface> *)&local_res10.ObjectPtr);
    }
    if (param_2 != (UMaterialInterface *)0x0) {
      (**(code **)(this->_padding_ + 0x6b8))(this,iVar2,param_2);
    }
  }
  return iVar2;
}

// execAddInstance @ 14ad10250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPaperGroupedSpriteComponent::execAddInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  uchar *puVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 *local_d0;
  int local_c8 [2];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98._8_4_ = SUB84((double)fVar5,0);
  local_98._0_8_ = (double)fVar2;
  local_98._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_88._8_4_ = SUB84((double)fVar11,0);
  local_88._0_8_ = (double)fVar8;
  local_88._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_78._8_4_ = SUB84((double)fVar6,0);
  local_78._0_8_ = (double)fVar3;
  local_78._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_68._8_4_ = SUB84((double)fVar12,0);
  local_68._0_8_ = (double)fVar9;
  local_68._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_58._8_4_ = SUB84((double)fVar7,0);
  local_58._0_8_ = (double)fVar4;
  local_58._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_48._8_4_ = SUB84((double)fVar13,0);
  local_48._0_8_ = (double)fVar10;
  local_48._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_c0 = 0;
  puVar15 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  bVar16 = local_c8[0] != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_d0 = &local_a8;
  local_a8 = local_b8;
  uStack_a4 = uStack_b4;
  uStack_a0 = uStack_b0;
  uStack_9c = uStack_ac;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = bVar16;
  uVar14 = (**(code **)(*(longlong *)param_1 + 0xb28))(param_1,puVar15,local_c0,0);
  *(undefined4 *)param_3 = uVar14;
  return;
}

// execClearInstances @ 14ad10770

void __cdecl
UPaperGroupedSpriteComponent::execClearInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014ad10788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xb48))();
  return;
}

// execGetInstanceCount @ 14ad10b30

void __cdecl
UPaperGroupedSpriteComponent::execGetInstanceCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x24].field_0x8;
  return;
}

// execGetInstanceTransform @ 14ad10b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPaperGroupedSpriteComponent::execGetInstanceTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  longlong lVar16;
  uint uVar17;
  TTransform<double> *pTVar18;
  bool bVar19;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  int local_178;
  uint local_174 [3];
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_174[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_174,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_174);
  }
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar13 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)fVar3;
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar9;
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar4;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar10;
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar5;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar14,0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar11;
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_178 = 0;
  pTVar18 = &local_a8;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar18 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  bVar19 = local_178 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar16 = (longlong)(int)local_174[0];
  if (((int)local_174[0] < 0) || (*(int *)&param_1[0x24].field_0x8 <= (int)local_174[0])) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    uVar17 = 0;
    if ((int)local_174[0] < *(int *)&param_1[0x24].field_0x8) {
      uVar17 = ~local_174[0] >> 0x1f;
    }
    if (uVar17 == 0) {
      local_188 = lVar16;
      local_180 = (longlong)*(int *)&param_1[0x24].field_0x8;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Math::TTransform<double>::SetFromMatrix
              (&local_168,(TMatrix<double> *)(lVar16 * 0x90 + *(longlong *)(param_1 + 0x24)));
    (pTVar18->Rotation).XY.m128d_f64[0] = local_168.Rotation.XY.m128d_f64[0];
    (pTVar18->Rotation).XY.m128d_f64[1] = local_168.Rotation.XY.m128d_f64[1];
    (pTVar18->Rotation).ZW.m128d_f64[0] = local_168.Rotation.ZW.m128d_f64[0];
    (pTVar18->Rotation).ZW.m128d_f64[1] = local_168.Rotation.ZW.m128d_f64[1];
    (pTVar18->Translation).XY.m128d_f64[0] = local_168.Translation.XY.m128d_f64[0];
    (pTVar18->Translation).XY.m128d_f64[1] = local_168.Translation.XY.m128d_f64[1];
    (pTVar18->Translation).ZW.m128d_f64[0] = local_168.Translation.ZW.m128d_f64[0];
    (pTVar18->Translation).ZW.m128d_f64[1] = local_168.Translation.ZW.m128d_f64[1];
    (pTVar18->Scale3D).XY.m128d_f64[0] = local_168.Scale3D.XY.m128d_f64[0];
    (pTVar18->Scale3D).XY.m128d_f64[1] = local_168.Scale3D.XY.m128d_f64[1];
    (pTVar18->Scale3D).ZW.m128d_f64[0] = local_168.Scale3D.ZW.m128d_f64[0];
    (pTVar18->Scale3D).ZW.m128d_f64[1] = local_168.Scale3D.ZW.m128d_f64[1];
    if (bVar19) {
      local_108.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_108.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_108.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_108.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_108.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_108.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_108,pTVar18,(TTransform<double> *)&param_1[0xc].field_0x10);
      (pTVar18->Rotation).XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
      (pTVar18->Rotation).XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
      (pTVar18->Rotation).ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
      (pTVar18->Rotation).ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
      (pTVar18->Translation).XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
      (pTVar18->Translation).XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
      (pTVar18->Translation).ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
      (pTVar18->Translation).ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
      (pTVar18->Scale3D).XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
      (pTVar18->Scale3D).XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
      (pTVar18->Scale3D).ZW.m128d_f64[0] = local_108.Scale3D.ZW.m128d_f64[0];
      (pTVar18->Scale3D).ZW.m128d_f64[1] = local_108.Scale3D.ZW.m128d_f64[1];
    }
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execRemoveInstance @ 14ad12920

void __cdecl
UPaperGroupedSpriteComponent::execRemoveInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xb40))(param_1,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execSortInstancesAlongAxis @ 14ad13f60

void __cdecl
UPaperGroupedSpriteComponent::execSortInstancesAlongAxis
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SortInstancesAlongAxis((UPaperGroupedSpriteComponent *)param_1,(TVector<double> *)&local_28._s_0);
  return;
}

// execUpdateInstanceColor @ 14ad14030

void __cdecl
UPaperGroupedSpriteComponent::execUpdateInstanceColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
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
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28 = local_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xb38))
                    (param_1,local_res10[0],&local_28,local_res8[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execUpdateInstanceTransform @ 14ad14150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPaperGroupedSpriteComponent::execUpdateInstanceTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 uVar12;
  double *pdVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_ac = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_ac,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_ac);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_a8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98 = (double)fVar6;
  dStack_90 = (double)fVar9;
  local_78 = (double)fVar7;
  dStack_70 = (double)fVar10;
  local_88._8_4_ = SUB84((double)fVar4,0);
  local_88._0_8_ = (double)fVar2;
  local_88._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_58 = (double)fVar8;
  dStack_50 = (double)fVar11;
  local_68._8_4_ = SUB84((double)fVar5,0);
  local_68._0_8_ = (double)fVar3;
  local_68._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b8 = 0;
  pdVar13 = &local_a8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar13 = (double *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  bVar14 = local_b8 != 0;
  local_b4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b4);
  }
  bVar15 = local_b4 != 0;
  local_b0 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_c0 = local_b0 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = bVar15;
  uVar12 = (**(code **)(*(longlong *)param_1 + 0xb30))(param_1,local_ac,pdVar13,bVar14);
  *(undefined1 *)param_3 = uVar12;
  return;
}

