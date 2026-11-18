// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 16

// StaticClass @ 145ef19b0

UClass * __cdecl ULandscapeSplinesComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSplinesComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplinesComponent",
               &Z_Registration_Info_UClass_ULandscapeSplinesComponent.InnerSingleton,
               StaticRegisterNativesULandscapeSplinesComponent,0x580,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeSplinesComponent>,
               InternalVTableHelperCtorCaller<ULandscapeSplinesComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSplinesComponent.InnerSingleton;
}

// ULandscapeSplinesComponent @ 145ef3ec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ULandscapeSplinesComponent * __thiscall
ULandscapeSplinesComponent::ULandscapeSplinesComponent
          (ULandscapeSplinesComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->ControlPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlPoints).ArrayNum = 0;
  (this->ControlPoints).ArrayMax = 0;
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  (this->CookedForeignMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedForeignMeshComponents).ArrayNum = 0;
  (this->CookedForeignMeshComponents).ArrayMax = 0;
  return this;
}

// ~ULandscapeSplinesComponent @ 145ef4550

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
ULandscapeSplinesComponent::~ULandscapeSplinesComponent(ULandscapeSplinesComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->CookedForeignMeshComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Segments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ControlPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// GetPrivateStaticClass @ 145ef5dd0

UClass * __cdecl ULandscapeSplinesComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSplinesComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplinesComponent",
               &Z_Registration_Info_UClass_ULandscapeSplinesComponent.InnerSingleton,
               StaticRegisterNativesULandscapeSplinesComponent,0x580,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeSplinesComponent>,
               InternalVTableHelperCtorCaller<ULandscapeSplinesComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSplinesComponent.InnerSingleton;
}

// Serialize @ 145ef5f60

void __thiscall
ULandscapeSplinesComponent::Serialize
          (ULandscapeSplinesComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesULandscapeSplinesComponent @ 145ef60e0

void __cdecl ULandscapeSplinesComponent::StaticRegisterNativesULandscapeSplinesComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ULandscapeSplinesComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSplineMeshComponents @ 145ef6dc0

void __cdecl
ULandscapeSplinesComponent::execGetSplineMeshComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<USplineMeshComponent_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<USplineMeshComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetSplineMeshComponents((ULandscapeSplinesComponent *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ULandscapeSplinesComponent @ 145fb55b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ULandscapeSplinesComponent * __thiscall
ULandscapeSplinesComponent::ULandscapeSplinesComponent
          (ULandscapeSplinesComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->ControlPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlPoints).ArrayNum = 0;
  (this->ControlPoints).ArrayMax = 0;
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  (this->CookedForeignMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedForeignMeshComponents).ArrayNum = 0;
  (this->CookedForeignMeshComponents).ArrayMax = 0;
  this->field_0x1ab = 0;
  return this;
}

// CalcBounds @ 145fba250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoxSphereBounds<double,double> * __thiscall
ULandscapeSplinesComponent::CalcBounds
          (ULandscapeSplinesComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  undefined8 uVar7;
  TMatrix<double> *pTVar8;
  FScriptContainerElement *pFVar9;
  char cVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [32];
  TVector<double>_u_0 local_198;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  TVector<double>_u_0 local_160;
  undefined8 uStack_148;
  double dStack_140;
  double dStack_138;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar9 = (this->ControlPoints).AllocatorInstance.Data;
  cVar10 = '\0';
  iVar4 = (this->ControlPoints).ArrayNum;
  local_198._s_0.X = 0.0;
  local_198._s_0.Y = 0.0;
  uVar11 = 0;
  uVar19 = 0;
  uVar14 = 0;
  uVar22 = 0;
  pFVar1 = pFVar9 + (longlong)iVar4 * 8;
  local_198._s_0.Z = 0.0;
  dStack_180 = 0.0;
  uVar12 = 0;
  uVar20 = 0;
  local_178 = 0.0;
  dStack_170 = 0.0;
  uVar13 = 0;
  uVar21 = 0;
  local_168 = 0;
  uVar15 = 0;
  uVar23 = 0;
  uVar16 = 0;
  uVar24 = 0;
LAB_145fba310:
  do {
    if ((this->ControlPoints).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeSplineControlPoint>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_1b8);
    }
    if (pFVar9 == pFVar1) break;
    lVar5 = *(longlong *)pFVar9;
    if (lVar5 != 0) {
      if (cVar10 == '\0') {
        if (*(char *)(lVar5 + 200) != '\0') {
          uVar14 = *(undefined4 *)(lVar5 + 0x98);
          uVar22 = *(undefined4 *)(lVar5 + 0x9c);
          local_198._s_0.X = *(double *)(lVar5 + 0x98);
          uVar11 = *(undefined4 *)(lVar5 + 0xa0);
          uVar19 = *(undefined4 *)(lVar5 + 0xa4);
          local_198._s_0.Y = *(double *)(lVar5 + 0xa0);
          uVar15 = *(undefined4 *)(lVar5 + 0xa8);
          uVar23 = *(undefined4 *)(lVar5 + 0xac);
          local_198._s_0.Z = *(double *)(lVar5 + 0xa8);
          uVar12 = *(undefined4 *)(lVar5 + 0xb0);
          uVar20 = *(undefined4 *)(lVar5 + 0xb4);
          dStack_180 = *(double *)(lVar5 + 0xb0);
          uVar16 = *(undefined4 *)(lVar5 + 0xb8);
          uVar24 = *(undefined4 *)(lVar5 + 0xbc);
          local_178 = *(double *)(lVar5 + 0xb8);
          uVar13 = *(undefined4 *)(lVar5 + 0xc0);
          uVar21 = *(undefined4 *)(lVar5 + 0xc4);
          dStack_170 = *(double *)(lVar5 + 0xc0);
          local_168 = *(undefined8 *)(lVar5 + 200);
          cVar10 = (char)local_168;
        }
      }
      else if (*(char *)(lVar5 + 200) != '\0') {
        local_198._s_0.Y = *(double *)(lVar5 + 0xa0);
        pFVar9 = pFVar9 + 8;
        dVar2 = *(double *)(lVar5 + 0xa8);
        if ((double)CONCAT44(uVar19,uVar11) <= local_198._s_0.Y) {
          local_198._s_0.Y = (double)CONCAT44(uVar19,uVar11);
        }
        dVar3 = *(double *)(lVar5 + 0x98);
        if (dVar3 <= (double)CONCAT44(uVar22,uVar14)) {
          uVar14 = SUB84(dVar3,0);
          uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        uVar26 = SUB84(dVar2,0);
        uVar28 = (int)((ulonglong)dVar2 >> 0x20);
        if ((double)CONCAT44(uVar23,uVar15) <= dVar2) {
          uVar26 = uVar15;
          uVar28 = uVar23;
        }
        uVar11 = SUB84(local_198._s_0.Y,0);
        uVar19 = (undefined4)((ulonglong)local_198._s_0.Y >> 0x20);
        dStack_180 = *(double *)(lVar5 + 0xb0);
        if (dStack_180 <= (double)CONCAT44(uVar20,uVar12)) {
          dStack_180 = (double)CONCAT44(uVar20,uVar12);
        }
        local_198._s_0.Z = (double)CONCAT44(uVar28,uVar26);
        local_198._s_0.X = (double)CONCAT44(uVar22,uVar14);
        dVar2 = *(double *)(lVar5 + 0xb8);
        uVar25 = SUB84(dVar2,0);
        uVar27 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= (double)CONCAT44(uVar24,uVar16)) {
          uVar25 = uVar16;
          uVar27 = uVar24;
        }
        uVar12 = SUB84(dStack_180,0);
        uVar20 = (undefined4)((ulonglong)dStack_180 >> 0x20);
        dStack_170 = *(double *)(lVar5 + 0xc0);
        if (dStack_170 <= (double)CONCAT44(uVar21,uVar13)) {
          dStack_170 = (double)CONCAT44(uVar21,uVar13);
        }
        local_178 = (double)CONCAT44(uVar27,uVar25);
        uVar13 = SUB84(dStack_170,0);
        uVar21 = (undefined4)((ulonglong)dStack_170 >> 0x20);
        uVar15 = uVar26;
        uVar23 = uVar28;
        uVar16 = uVar25;
        uVar24 = uVar27;
        goto LAB_145fba310;
      }
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
  pFVar9 = (this->Segments).AllocatorInstance.Data;
  iVar4 = (this->Segments).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar4 * 8;
LAB_145fba450:
  do {
    if ((this->Segments).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeSplineSegment>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_1b8);
    }
    uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (pFVar9 == pFVar1) {
      if (cVar10 == '\0') {
        lVar5 = *(longlong *)&this->field_0xd0;
        uVar14 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar22 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        if (lVar5 == 0) {
          dVar2 = (param_1->Translation).ZW.m128d_f64[0];
          dVar3 = (param_1->Translation).XY.m128d_f64[1];
          (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
               (param_1->Translation).XY.m128d_f64[0];
          (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar3;
          (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar2;
          (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = (double)uVar7;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 8) = uVar26;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0xc) = uVar28;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x10) = uVar14
          ;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x14) = uVar22
          ;
          __return_storage_ptr__->SphereRadius = 0.0;
        }
        else {
          dVar2 = *(double *)(lVar5 + 0x118);
          uVar11 = *(undefined4 *)(lVar5 + 0x120);
          uVar19 = *(undefined4 *)(lVar5 + 0x124);
          (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *(double *)(lVar5 + 0x110);
          (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
          uStack_148._0_4_ = (undefined4)uVar7;
          uStack_148._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = uVar11;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x14) = uVar19;
          *(undefined4 *)&(__return_storage_ptr__->BoxExtent).field0_0x0 = (undefined4)uStack_148;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 4) =
               uStack_148._4_4_;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 8) = uVar26;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0xc) = uVar28;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x10) = uVar14
          ;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x14) = uVar22
          ;
          __return_storage_ptr__->SphereRadius = 0.0;
        }
      }
      else {
        pTVar8 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_128);
        UE::Math::TBox<double>::TransformBy
                  ((TBox<double> *)&local_198._s_0,(TBox<double> *)&local_160._s_0,pTVar8);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = __real_3fe0000000000000;
        uStack_148 = uStack_148 - local_160._s_0.X;
        dStack_140 = dStack_140 - local_160._s_0.Y;
        dStack_138 = dStack_138 - local_160._s_0.Z;
        dVar6 = uStack_148 * __real_3fe0000000000000;
        dVar3 = dStack_140 * __real_3fe0000000000000;
        dVar2 = dStack_138 * __real_3fe0000000000000;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_160._s_0.X + dVar6;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_160._s_0.Y + dVar3;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_160._s_0.Z + dVar2;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar6;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar3;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar2;
        auVar18._8_8_ = 0;
        auVar18._0_8_ =
             (dStack_140 * dStack_140 + uStack_148 * uStack_148 + dStack_138 * dStack_138) *
             __real_3fd0000000000000;
        auVar18 = sqrtpd(auVar17,auVar18);
        __return_storage_ptr__->SphereRadius = auVar18._0_8_;
      }
      return __return_storage_ptr__;
    }
    lVar5 = *(longlong *)pFVar9;
    if (lVar5 != 0) {
      if (cVar10 == '\0') {
        if (*(char *)(lVar5 + 0xb0) != '\0') {
          uVar14 = *(undefined4 *)(lVar5 + 0x80);
          uVar22 = *(undefined4 *)(lVar5 + 0x84);
          local_198._s_0.X = *(double *)(lVar5 + 0x80);
          uVar11 = *(undefined4 *)(lVar5 + 0x88);
          uVar19 = *(undefined4 *)(lVar5 + 0x8c);
          local_198._s_0.Y = *(double *)(lVar5 + 0x88);
          uVar15 = *(undefined4 *)(lVar5 + 0x90);
          uVar23 = *(undefined4 *)(lVar5 + 0x94);
          local_198._s_0.Z = *(double *)(lVar5 + 0x90);
          uVar12 = *(undefined4 *)(lVar5 + 0x98);
          uVar20 = *(undefined4 *)(lVar5 + 0x9c);
          dStack_180 = *(double *)(lVar5 + 0x98);
          uVar16 = *(undefined4 *)(lVar5 + 0xa0);
          uVar24 = *(undefined4 *)(lVar5 + 0xa4);
          local_178 = *(double *)(lVar5 + 0xa0);
          uVar13 = *(undefined4 *)(lVar5 + 0xa8);
          uVar21 = *(undefined4 *)(lVar5 + 0xac);
          dStack_170 = *(double *)(lVar5 + 0xa8);
          local_168 = *(undefined8 *)(lVar5 + 0xb0);
          cVar10 = (char)local_168;
        }
      }
      else if (*(char *)(lVar5 + 0xb0) != '\0') {
        local_198._s_0.X = *(double *)(lVar5 + 0x80);
        pFVar9 = pFVar9 + 8;
        dVar2 = *(double *)(lVar5 + 0x88);
        if ((double)CONCAT44(uVar22,uVar14) <= local_198._s_0.X) {
          local_198._s_0.X = (double)CONCAT44(uVar22,uVar14);
        }
        uVar26 = SUB84(dVar2,0);
        uVar28 = (int)((ulonglong)dVar2 >> 0x20);
        if ((double)CONCAT44(uVar19,uVar11) <= dVar2) {
          uVar26 = uVar11;
          uVar28 = uVar19;
        }
        uVar14 = SUB84(local_198._s_0.X,0);
        uVar22 = (undefined4)((ulonglong)local_198._s_0.X >> 0x20);
        local_198._s_0.Z = *(double *)(lVar5 + 0x90);
        local_198._s_0.Y = (double)CONCAT44(uVar28,uVar26);
        if ((double)CONCAT44(uVar23,uVar15) <= local_198._s_0.Z) {
          local_198._s_0.Z = (double)CONCAT44(uVar23,uVar15);
        }
        dVar2 = *(double *)(lVar5 + 0x98);
        uVar11 = SUB84(dVar2,0);
        uVar19 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= (double)CONCAT44(uVar20,uVar12)) {
          uVar11 = uVar12;
          uVar19 = uVar20;
        }
        uVar15 = SUB84(local_198._s_0.Z,0);
        uVar23 = (undefined4)((ulonglong)local_198._s_0.Z >> 0x20);
        local_178 = *(double *)(lVar5 + 0xa0);
        dStack_180 = (double)CONCAT44(uVar19,uVar11);
        if (local_178 <= (double)CONCAT44(uVar24,uVar16)) {
          local_178 = (double)CONCAT44(uVar24,uVar16);
        }
        dVar2 = *(double *)(lVar5 + 0xa8);
        uVar12 = SUB84(dVar2,0);
        uVar20 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= (double)CONCAT44(uVar21,uVar13)) {
          uVar12 = uVar13;
          uVar20 = uVar21;
        }
        uVar16 = SUB84(local_178,0);
        uVar24 = (undefined4)((ulonglong)local_178 >> 0x20);
        dStack_170 = (double)CONCAT44(uVar20,uVar12);
        uVar13 = uVar12;
        uVar21 = uVar20;
        uVar12 = uVar11;
        uVar20 = uVar19;
        uVar11 = uVar26;
        uVar19 = uVar28;
        goto LAB_145fba450;
      }
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// CheckSplinesValid @ 145fba8a0

void __thiscall ULandscapeSplinesComponent::CheckSplinesValid(ULandscapeSplinesComponent *this)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  ULandscapeSplinesComponent *pUVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_60;
  longlong local_58 [3];
  
  pFVar3 = (this->ControlPoints).AllocatorInstance.Data;
  local_60 = 0;
  if (((pFVar3 <= (FScriptContainerElement *)&local_60) &&
      ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)(this->ControlPoints).ArrayMax * 8)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (this->ControlPoints).ArrayNum;
  if (iVar1 != 0) {
    pFVar3 = (this->ControlPoints).AllocatorInstance.Data;
    iVar14 = 0;
    bVar5 = *(longlong *)pFVar3 != local_60;
    lVar8 = 0;
    lVar6 = local_60;
    iVar12 = 0;
    do {
      iVar13 = iVar12;
      do {
        lVar8 = lVar8 + 1;
        iVar13 = iVar13 + 1;
        if (iVar1 <= lVar8) break;
      } while (bVar5 == (*(longlong *)(pFVar3 + lVar8 * 8) != lVar6));
      if (bVar5 != false) {
        if (iVar14 != iVar12) {
          memmove(pFVar3 + (longlong)iVar14 * 8,pFVar3 + (longlong)iVar12 * 8,
                  (longlong)(iVar13 - iVar12) << 3);
          lVar6 = local_60;
        }
        iVar14 = iVar14 + (iVar13 - iVar12);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar12 = iVar13;
    } while (lVar8 < iVar1);
    (this->ControlPoints).ArrayNum = iVar14;
    if ((iVar1 != iVar14) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_787461186907012584>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSplines.cpp"
                           ,0x218,"!ControlPoints.Remove(nullptr)"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Segments).AllocatorInstance.Data;
  local_58[0] = 0;
  if (((pFVar3 <= (FScriptContainerElement *)local_58) &&
      ((FScriptContainerElement *)local_58 < pFVar3 + (longlong)(this->Segments).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (this->Segments).ArrayNum;
  if (iVar1 != 0) {
    pFVar3 = (this->Segments).AllocatorInstance.Data;
    iVar14 = 0;
    bVar5 = *(longlong *)pFVar3 != local_58[0];
    lVar8 = 0;
    lVar6 = local_58[0];
    iVar12 = 0;
    do {
      iVar13 = iVar12;
      do {
        lVar8 = lVar8 + 1;
        iVar13 = iVar13 + 1;
        if (iVar1 <= lVar8) break;
      } while (bVar5 == (*(longlong *)(pFVar3 + lVar8 * 8) != lVar6));
      if (bVar5 != false) {
        if (iVar14 != iVar12) {
          memmove(pFVar3 + (longlong)iVar14 * 8,pFVar3 + (longlong)iVar12 * 8,
                  (longlong)(iVar13 - iVar12) << 3);
          lVar6 = local_58[0];
        }
        iVar14 = iVar14 + (iVar13 - iVar12);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar12 = iVar13;
    } while (lVar8 < iVar1);
    (this->Segments).ArrayNum = iVar14;
    if ((iVar1 != iVar14) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_787461186907012583>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSplines.cpp"
                           ,0x219,"!Segments.Remove(nullptr)"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar2 = (this->ControlPoints).ArrayNum;
  uVar15 = (ulonglong)(int)uVar2;
  pFVar11 = (this->ControlPoints).AllocatorInstance.Data;
  pFVar3 = pFVar11 + uVar15 * 8;
  while( true ) {
    if ((this->ControlPoints).ArrayNum != (int)uVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<ULandscapeSplineControlPoint>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar3) {
      pFVar11 = (this->Segments).AllocatorInstance.Data;
      iVar1 = (this->Segments).ArrayNum;
      pFVar3 = pFVar11 + (longlong)iVar1 * 8;
      while( true ) {
        if ((this->Segments).ArrayNum != iVar1) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<ULandscapeSplineSegment>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar11 == pFVar3) {
          return;
        }
        lVar8 = *(longlong *)pFVar11;
        if ((*(uint *)(lVar8 + 8) & 0x10) == 0) {
          pUVar7 = *(ULandscapeSplinesComponent **)(lVar8 + 0x20);
        }
        else {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5225616679601438524>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeSplineSegment.h"
                             ,0xc4,"false || !HasAnyFlags(RF_ClassDefaultObject)");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar7 = (ULandscapeSplinesComponent *)0x0;
        }
        if ((pUVar7 != this) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_787461186907012565>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSplines.cpp"
                               ,0x22b,"Segment->GetOuterULandscapeSplinesComponent() == this"),
           bVar5)) break;
        for (plVar9 = (longlong *)(lVar8 + 0x28); plVar9 != (longlong *)(lVar8 + 0x58);
            plVar9 = plVar9 + 3) {
          lVar6 = *plVar9;
          if (lVar6 != 0) {
            if ((*(uint *)(lVar6 + 8) & 0x10) == 0) {
              pUVar7 = *(ULandscapeSplinesComponent **)(lVar6 + 0x20);
            }
            else {
              bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<249470843220918324>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeSplineControlPoint.h"
                                 ,0x34,"false || !HasAnyFlags(RF_ClassDefaultObject)");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pUVar7 = (ULandscapeSplinesComponent *)0x0;
            }
            if ((pUVar7 != this) &&
               (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_787461186907012560>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSplines.cpp"
                                   ,0x230,
                                   "Connection.ControlPoint->GetOuterULandscapeSplinesComponent() == this"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        pFVar11 = pFVar11 + 8;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar8 = *(longlong *)pFVar11;
    if ((*(uint *)(lVar8 + 8) & 0x10) == 0) {
      pUVar7 = *(ULandscapeSplinesComponent **)(lVar8 + 0x20);
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<249470843220918324>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeSplineControlPoint.h"
                         ,0x34,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar7 = (ULandscapeSplinesComponent *)0x0;
    }
    if ((pUVar7 != this) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_787461186907012577>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSplines.cpp"
                           ,0x21f,"ControlPoint->GetOuterULandscapeSplinesComponent() == this"),
       bVar5)) break;
    iVar1 = *(int *)(lVar8 + 0x80);
    plVar9 = *(longlong **)(lVar8 + 0x78);
    plVar10 = plVar9 + (longlong)iVar1 * 2;
    while( true ) {
      if (*(int *)(lVar8 + 0x80) != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FLandscapeSplineConnection,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (plVar9 == plVar10) break;
      lVar6 = *plVar9;
      if (lVar6 != 0) {
        if ((*(uint *)(lVar6 + 8) & 0x10) == 0) {
          pUVar7 = *(ULandscapeSplinesComponent **)(lVar6 + 0x20);
        }
        else {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5225616679601438524>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeSplineSegment.h"
                             ,0xc4,"false || !HasAnyFlags(RF_ClassDefaultObject)");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar7 = (ULandscapeSplinesComponent *)0x0;
        }
        if ((pUVar7 != this) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_787461186907012572>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSplines.cpp"
                               ,0x224,
                               "Connection.Segment->GetOuterULandscapeSplinesComponent() == this"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar9 = plVar9 + 2;
    }
    uVar15 = (ulonglong)uVar2;
    pFVar11 = pFVar11 + 8;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetSplineMeshComponents @ 145fc41e0

TArray<USplineMeshComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeSplinesComponent::GetSplineMeshComponents
          (ULandscapeSplinesComponent *this,
          TArray<USplineMeshComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetSplineOwner @ 145fc4200

ILandscapeSplineInterface * __thiscall
ULandscapeSplinesComponent::GetSplineOwner(ULandscapeSplinesComponent *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  ILandscapeSplineInterface *pIVar2;
  
  this_00 = *(UObjectBaseUtility **)&this->field_0xa8;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar1 = Z_Construct_UClass_ULandscapeSplineInterface_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    return pIVar2;
  }
  return (ILandscapeSplineInterface *)0x0;
}

// ModifySplines @ 145fc5470

bool __thiscall
ULandscapeSplinesComponent::ModifySplines(ULandscapeSplinesComponent *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ControlPoints).AllocatorInstance.Data;
  iVar2 = (this->ControlPoints).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ControlPoints).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeSplineControlPoint>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  pFVar3 = (this->Segments).AllocatorInstance.Data;
  iVar2 = (this->Segments).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Segments).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeSplineSegment>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return false;
}

// OnRegister @ 145fc5a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ULandscapeSplinesComponent::OnRegister(ULandscapeSplinesComponent *this)

{
  CheckSplinesValid(this);
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  return;
}

// PostLoad @ 145fc6230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ULandscapeSplinesComponent::PostLoad(ULandscapeSplinesComponent *this)

{
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  CheckSplinesValid(this);
  return;
}

// Serialize @ 145fc7eb0

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
ULandscapeSplinesComponent::Serialize(ULandscapeSplinesComponent *this,FArchive *param_1)

{
  bool bVar1;
  int iVar2;
  
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar1) {
      FBodyInstance::FixupData((FBodyInstance *)&this->field_0x390,(UObject *)this);
    }
  }
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if ((iVar2 < 0x18) && ((char)this->field_0x27f < '\0')) {
    this->field_0x277 = 1;
  }
  return;
}

