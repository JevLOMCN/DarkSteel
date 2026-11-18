// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 9

// StaticClass @ 14cb59340

UClass * __cdecl UBoundarySelectionMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoundarySelectionMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BoundarySelectionMechanic",
               &Z_Registration_Info_UClass_UBoundarySelectionMechanic.InnerSingleton,
               StaticRegisterNativesUBoundarySelectionMechanic,0xb30,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBoundarySelectionMechanic>,
               InternalVTableHelperCtorCaller<UBoundarySelectionMechanic>,local_res8,
               UMeshTopologySelectionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoundarySelectionMechanic.InnerSingleton;
}

// UBoundarySelectionMechanic @ 14cb62520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBoundarySelectionMechanic * __thiscall
UBoundarySelectionMechanic::UBoundarySelectionMechanic
          (UBoundarySelectionMechanic *this,FVTableHelper *param_1)

{
  UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic
            ((UMeshTopologySelectionMechanic *)this,param_1);
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  return this;
}

// UBoundarySelectionMechanic @ 14cb62560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBoundarySelectionMechanic * __thiscall
UBoundarySelectionMechanic::UBoundarySelectionMechanic(UBoundarySelectionMechanic *this)

{
  UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic
            ((UMeshTopologySelectionMechanic *)this);
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  return this;
}

// ~UBoundarySelectionMechanic @ 14cb64c50

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
UBoundarySelectionMechanic::~UBoundarySelectionMechanic(UBoundarySelectionMechanic *this)

{
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  UMeshTopologySelectionMechanic::~UMeshTopologySelectionMechanic
            ((UMeshTopologySelectionMechanic *)this);
  return;
}

// GetPrivateStaticClass @ 14cb98e10

UClass * __cdecl UBoundarySelectionMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoundarySelectionMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BoundarySelectionMechanic",
               &Z_Registration_Info_UClass_UBoundarySelectionMechanic.InnerSingleton,
               StaticRegisterNativesUBoundarySelectionMechanic,0xb30,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBoundarySelectionMechanic>,
               InternalVTableHelperCtorCaller<UBoundarySelectionMechanic>,local_res8,
               UMeshTopologySelectionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoundarySelectionMechanic.InnerSingleton;
}

// Initialize @ 14cba1740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UBoundarySelectionMechanic::Initialize
          (UBoundarySelectionMechanic *this,FDynamicMesh3 *param_1,TTransform<double> *param_2,
          UWorld *param_3,FMeshBoundaryLoops *param_4,
          TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)>
          *param_5,EBoundarySelectionType param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  FEdgeSpanTopologyProvider *this_00;
  FEdgeSpanTopologyProvider *pFVar6;
  longlong *plVar7;
  FSharedReferencer<1> FVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_f8;
  FSharedReferencer<1> FStack_f0;
  TReferenceControllerBase<1> *local_e8;
  FSharedReferencer<1> FStack_e0;
  FDynamicMesh3 *local_d8;
  UWorld *local_d0;
  TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)> local_c8;
  TTransform<double> local_98;
  
  local_d8 = param_1;
  local_d0 = param_3;
  pTVar4 = ::operator_new(0x170);
  if (param_6 == Loops) {
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_f8 = ___xmm_00000000000000000000000000000010;
      pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_f0.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFBoundarySelector___00_SharedPointerInternals__6B_;
      FMeshTopologySelector::FMeshTopologySelector((FMeshTopologySelector *)(pTVar4 + 1));
      *(FDynamicMesh3 **)&pTVar4[5].SharedReferenceCount = param_1;
      pTVar4[1]._padding_ = (longlong)&___7FBoundarySelector__6B_;
      puVar5 = ::operator_new(0x10);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[1] = param_4;
        *puVar5 = &___7FBoundaryTopologyProvider__6B_;
      }
      puVar1 = (undefined8 *)pTVar4[6]._padding_;
      pTVar4[6]._padding_ = (longlong)puVar5;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      pTVar9 = pTVar4 + 1;
      *(undefined2 *)&pTVar4[10]._padding_ = 0;
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_f0.ReferenceController = pTVar4;
      local_f8 = pTVar9;
    }
    FVar8.ReferenceController = FStack_f0.ReferenceController;
    if ((TReferenceControllerBase<1> **)&this->field_0x90 != &local_f8) {
      *(TReferenceControllerBase<1> **)&this->field_0x90 = pTVar9;
      local_f8 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x98,&FStack_f0);
      FVar8.ReferenceController = FStack_f0.ReferenceController;
    }
  }
  else {
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_e8 = ___xmm_00000000000000000000000000000010;
      pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FVar8.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFBoundaryEdgeSpanSelector___00_SharedPointerInternals__6B_
      ;
      FMeshTopologySelector::FMeshTopologySelector((FMeshTopologySelector *)(pTVar4 + 1));
      *(FDynamicMesh3 **)&pTVar4[5].SharedReferenceCount = param_1;
      pTVar4[1]._padding_ = (longlong)&___7FBoundaryEdgeSpanSelector__6B_;
      this_00 = ::operator_new(0x20);
      pFVar6 = (FEdgeSpanTopologyProvider *)0x0;
      if (this_00 != (FEdgeSpanTopologyProvider *)0x0) {
        pFVar6 = EdgeSpanSelectorHelpers::FEdgeSpanTopologyProvider::FEdgeSpanTopologyProvider
                           (this_00,param_4);
      }
      puVar5 = (undefined8 *)pTVar4[6]._padding_;
      pTVar4[6]._padding_ = (longlong)pFVar6;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      pTVar9 = pTVar4 + 1;
      *(undefined2 *)&pTVar4[10]._padding_ = 0;
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FVar8.ReferenceController = pTVar4;
      local_e8 = pTVar9;
    }
    FStack_e0.ReferenceController = FVar8.ReferenceController;
    if ((TReferenceControllerBase<1> **)&this->field_0x90 != &local_e8) {
      *(TReferenceControllerBase<1> **)&this->field_0x90 = pTVar9;
      local_e8 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x98,&FStack_e0);
      FVar8.ReferenceController = FStack_e0.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_c8._0_8_ = *(undefined8 *)param_5;
  local_c8._40_8_ = 0;
  if (local_c8._0_8_ != 0) {
    puVar5 = (undefined8 *)&param_5->field_0x10;
    if (*(undefined8 **)&param_5->field_0x28 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)&param_5->field_0x28;
    }
    (**(code **)*puVar5)(puVar5,&local_c8.field_0x10);
  }
  local_98.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_98.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_98.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_98.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_98.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_98.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_98.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_98.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_98.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_98.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_98.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_98.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  UMeshTopologySelectionMechanic::Initialize
            ((UMeshTopologySelectionMechanic *)this,local_d8,&local_98,local_d0,&local_c8);
  if (*(longlong *)param_5 != 0) {
    plVar7 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// StaticRegisterNativesUBoundarySelectionMechanic @ 14cbb4580

void __cdecl UBoundarySelectionMechanic::StaticRegisterNativesUBoundarySelectionMechanic(void)

{
  return;
}

// UpdateHighlight @ 14cbb7670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UBoundarySelectionMechanic::UpdateHighlight(UBoundarySelectionMechanic *this,TRay<double> *param_1)

{
  undefined1 *this_00;
  code *pcVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar31;
  undefined4 uVar33;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined4 uVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  FSelectionSettings local_188 [2];
  double local_178;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_130 [16];
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  TVector<double> local_e8;
  TVector<double> local_d0 [7];
  
  if (*(longlong *)&this->field_0x6b8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DrawnTriangleSetComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelectionMechanic.cpp"
                       ,0x25,L"Initialize() not called on UMeshTopologySelectionMechanic.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  local_130 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
  local_120 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar26 = *(double *)&this->field_0x1c0 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar31 = *(double *)&this->field_0x1c8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar34._0_8_ =
       *(double *)&this->field_0x1d0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar34._8_8_ =
       *(double *)&this->field_0x1d8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar18._8_4_ = SUB84(dVar31,0);
  auVar18._0_8_ = dVar26;
  uVar33 = (undefined4)((ulonglong)dVar31 >> 0x20);
  auVar18._12_4_ = uVar33;
  auVar21._8_4_ = SUB84(dVar31,0);
  auVar21._0_8_ = dVar26;
  auVar21._12_4_ = uVar33;
  dVar32 = local_130._8_8_;
  auVar22 = blendpd(auVar21,auVar34,2);
  auVar53._8_4_ = SUB84(auVar34._8_8_,0);
  auVar53._0_8_ = auVar34._0_8_;
  auVar53._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar58._0_8_ = dVar32 * dVar26 - local_130._0_8_ * auVar18._8_8_;
  auVar58._8_8_ = local_120 * dVar31 - dVar32 * auVar34._0_8_;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = local_120;
  auVar13 = blendpd(local_130,auVar59,2);
  auVar45._8_4_ = SUB84(auVar58._8_8_,0);
  auVar45._0_8_ = auVar58._0_8_;
  auVar45._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
  auVar14._0_8_ = auVar13._0_8_ * auVar34._0_8_ - auVar22._0_8_ * local_120;
  auVar14._8_8_ = auVar13._8_8_ * auVar34._8_8_ - auVar22._8_8_ * 0.0;
  dVar44 = auVar45._8_8_ + auVar45._8_8_;
  dVar48 = auVar14._0_8_ + auVar14._0_8_;
  auVar59 = blendpd(auVar58,auVar14,2);
  uVar33 = SUB84(dVar48,0);
  auVar49._8_4_ = uVar33;
  auVar49._0_8_ = dVar44;
  uVar43 = (undefined4)((ulonglong)dVar48 >> 0x20);
  auVar49._12_4_ = uVar43;
  auVar51._8_4_ = uVar33;
  auVar51._0_8_ = dVar44;
  auVar51._12_4_ = uVar43;
  auVar39._8_4_ = uVar33;
  auVar39._0_8_ = dVar44;
  auVar39._12_4_ = uVar43;
  auVar13 = *(undefined1 (*) [16])&this->field_0x200;
  auVar60._0_8_ = auVar59._0_8_ + auVar59._0_8_;
  auVar60._8_8_ = auVar59._8_8_ + auVar59._8_8_;
  auVar62._0_8_ =
       (double)CONCAT44(auVar13._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar13._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar62._8_4_ = auVar13._8_4_ & _UNK_15061cc88;
  auVar62._12_4_ = auVar13._12_4_ & _UNK_15061cc8c;
  auVar2._4_8_ = dVar31;
  auVar2._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar27._0_8_ = auVar2._0_8_ << 0x20;
  auVar27._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar27._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar50._0_8_ = auVar49._8_8_ * dVar26 - dVar44 * auVar18._8_8_;
  auVar50._8_8_ = auVar60._0_8_ * dVar31 - auVar51._8_8_ * auVar34._0_8_;
  auVar59 = blendpd(auVar39,auVar60,2);
  local_178 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
  dStack_170 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
  auVar64._8_4_ = SUB84(auVar60._8_8_,0);
  auVar64._0_8_ = auVar60._0_8_;
  auVar64._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
  auVar40._0_8_ = auVar59._0_8_ * auVar34._0_8_ - auVar60._0_8_ * auVar22._0_8_;
  auVar40._8_8_ = auVar59._8_8_ * auVar34._8_8_ - auVar64._8_8_ * auVar22._8_8_;
  auVar59 = *(undefined1 (*) [16])&this->field_0x210;
  auVar28._8_8_ = auVar27._8_8_;
  auVar28._0_8_ = auVar59._0_8_;
  auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
  lVar7 = -(ulonglong)(auVar62._8_8_ <= dStack_170);
  auVar63._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar62._0_8_ <= local_178) >> 0x20) & auVar13._4_4_,
                        ~(uint)-(ulonglong)(auVar62._0_8_ <= local_178) & auVar13._0_4_);
  auVar63._8_4_ = ~(uint)lVar7 & auVar13._8_4_;
  auVar63._12_4_ = ~(uint)((ulonglong)lVar7 >> 0x20) & auVar13._12_4_;
  local_168 = 0;
  uStack_160 = 0;
  auVar22._8_4_ = SUB84(auVar50._8_8_,0);
  auVar22._0_8_ = auVar50._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
  lVar7 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar59._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar59._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_1a0._s_0.X = auVar63._0_8_ * (dVar44 * auVar53._8_8_ + local_130._0_8_ + auVar22._8_8_);
  local_1a0._s_0.Y = auVar63._8_8_ * (dVar48 * auVar34._8_8_ + dVar32 + auVar40._0_8_);
  auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
  local_f0 = (param_1->Origin).field0_0x0._s_0.Z;
  dVar48 = *(double *)&this->field_0x1c0 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar32 = *(double *)&this->field_0x1c8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar35._0_8_ =
       *(double *)&this->field_0x1d0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar35._8_8_ =
       *(double *)&this->field_0x1d8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar31 = local_f0 - *(double *)&this->field_0x1f0;
  auVar23._8_4_ = SUB84(dVar32,0);
  auVar23._0_8_ = dVar48;
  uVar33 = (undefined4)((ulonglong)dVar32 >> 0x20);
  auVar23._12_4_ = uVar33;
  auVar51 = blendpd(auVar50,auVar40,2);
  auVar59 = blendpd(auVar23,auVar35,2);
  local_100 = (param_1->Origin).field0_0x0._s_0.X;
  dStack_f8 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar57 = local_100 - *(double *)&this->field_0x1e0;
  dVar61 = dStack_f8 - *(double *)&this->field_0x1e8;
  local_1a0._s_0.Z =
       (local_120 + auVar60._0_8_ * auVar53._8_8_ + auVar51._0_8_) *
       (double)CONCAT44(~(uint)((ulonglong)lVar7 >> 0x20) & auVar13._4_4_,
                        ~(uint)lVar7 & auVar13._0_4_);
  auVar19._8_4_ = SUB84(dVar32,0);
  auVar19._0_8_ = dVar48;
  auVar19._12_4_ = uVar33;
  dVar44 = auVar19._8_8_;
  auVar9._8_4_ = SUB84(auVar35._0_8_,0);
  auVar9._0_8_ = dVar44;
  auVar9._12_4_ = (int)((ulonglong)auVar35._0_8_ >> 0x20);
  auVar54._8_4_ = SUB84(dVar61,0);
  auVar54._0_8_ = dVar57;
  uVar33 = (undefined4)((ulonglong)dVar61 >> 0x20);
  auVar54._12_4_ = uVar33;
  auVar52._8_4_ = SUB84(auVar35._8_8_,0);
  auVar52._0_8_ = auVar35._0_8_;
  auVar52._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
  auVar15._8_4_ = SUB84(dVar61,0);
  auVar15._0_8_ = dVar57;
  auVar15._12_4_ = uVar33;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar31;
  auVar13 = blendpd(auVar15,auVar13,2);
  auVar55._0_8_ = auVar54._8_8_ * dVar48 - dVar44 * dVar57;
  auVar55._8_8_ = dVar31 * dVar32 - auVar9._8_8_ * dVar61;
  auVar41._8_4_ = SUB84(auVar55._8_8_,0);
  auVar41._0_8_ = auVar55._0_8_;
  auVar41._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
  dVar26 = auVar59._8_8_;
  auVar16._0_8_ = auVar13._0_8_ * auVar35._0_8_ - auVar59._0_8_ * dVar31;
  auVar16._8_8_ = auVar13._8_8_ * auVar35._8_8_ - dVar26 * 0.0;
  dVar38 = auVar41._8_8_ + auVar41._8_8_;
  dVar42 = auVar16._0_8_ + auVar16._0_8_;
  auVar51 = blendpd(auVar55,auVar16,2);
  auVar13 = *(undefined1 (*) [16])&this->field_0x200;
  uVar33 = SUB84(dVar42,0);
  auVar46._8_4_ = uVar33;
  auVar46._0_8_ = dVar38;
  uVar43 = (undefined4)((ulonglong)dVar42 >> 0x20);
  auVar46._12_4_ = uVar43;
  auVar56._0_8_ = auVar51._0_8_ + auVar51._0_8_;
  auVar56._8_8_ = auVar51._8_8_ + auVar51._8_8_;
  auVar10._8_4_ = uVar33;
  auVar10._0_8_ = dVar38;
  auVar10._12_4_ = uVar43;
  auVar29._8_4_ = uVar33;
  auVar29._0_8_ = dVar38;
  auVar29._12_4_ = uVar43;
  auVar47._0_8_ = auVar46._8_8_ * dVar48 - dVar38 * dVar44;
  auVar47._8_8_ = auVar56._0_8_ * dVar32 - auVar10._8_8_ * auVar35._0_8_;
  auVar51 = blendpd(auVar29,auVar56,2);
  auVar11._8_4_ = SUB84(auVar56._8_8_,0);
  auVar11._0_8_ = auVar56._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
  auVar3._4_8_ = dVar26;
  auVar3._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar24._0_8_ = auVar3._0_8_ << 0x20;
  auVar24._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar24._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar30._0_8_ = auVar51._0_8_ * auVar35._0_8_ - auVar56._0_8_ * auVar59._0_8_;
  auVar30._8_8_ = auVar51._8_8_ * auVar35._8_8_ - auVar11._8_8_ * dVar26;
  auVar59 = *(undefined1 (*) [16])&this->field_0x210;
  auVar25._8_8_ = auVar24._8_8_;
  auVar25._0_8_ = auVar59._0_8_;
  auVar12._8_4_ = SUB84(auVar47._8_8_,0);
  auVar12._0_8_ = auVar47._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
  auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
  auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar25);
  auVar36._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar13._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar13._0_4_);
  auVar36._8_4_ = _UNK_15061cc88 & auVar13._8_4_;
  auVar36._12_4_ = _UNK_15061cc8c & auVar13._12_4_;
  lVar8 = -(ulonglong)(auVar36._8_8_ <= dStack_170);
  lVar7 = -(ulonglong)
           ((double)CONCAT44(auVar59._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             auVar59._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar37._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar36._0_8_ <= local_178) >> 0x20) & auVar64._4_4_,
                        ~(uint)-(ulonglong)(auVar36._0_8_ <= local_178) & auVar64._0_4_);
  auVar37._8_4_ = ~(uint)lVar8 & auVar64._8_4_;
  auVar37._12_4_ = ~(uint)((ulonglong)lVar8 >> 0x20) & auVar64._12_4_;
  local_1b8._s_0.X = auVar37._0_8_ * (dVar38 * auVar52._8_8_ + dVar57 + auVar12._8_8_);
  local_1b8._s_0.Y = auVar37._8_8_ * (dVar42 * auVar35._8_8_ + dVar61 + auVar30._0_8_);
  auVar13 = blendpd(auVar47,auVar30,2);
  local_1b8._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar7 >> 0x20) & auVar51._4_4_,
                        ~(uint)lVar7 & auVar51._0_4_) *
       (auVar56._0_8_ * auVar52._8_8_ + dVar31 + auVar13._0_8_);
  local_158 = local_1a0._s_0.X;
  dStack_150 = local_1a0._s_0.Y;
  local_148 = local_1b8._s_0.X;
  dStack_140 = local_1b8._s_0.Y;
  local_138 = local_1b8._s_0.Z;
  local_118 = local_1a0._s_0.X;
  dStack_110 = local_1a0._s_0.Y;
  local_108 = local_1a0._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_1a0._s_0,__real_3e45798ee0000000);
  auVar17._0_8_ = local_1a0._s_0.Z * local_1a0._s_0.Z;
  auVar17._8_8_ = 0;
  auVar20._0_8_ =
       local_1a0._s_0.X * local_1a0._s_0.X + local_1a0._s_0.Y * local_1a0._s_0.Y + auVar17._0_8_;
  auVar20._8_8_ = 0;
  auVar13 = sqrtpd(auVar17,auVar20);
  if (auVar13._0_8_ <= 0.0) {
    local_1a0._s_0.X = 0.0;
    local_1a0._s_0.Y = 0.0;
    local_1a0._s_0.Z = 0.0;
  }
  else {
    dVar26 = __real_3ff0000000000000 / auVar13._0_8_;
    local_1a0._s_0.X = local_1a0._s_0.X * dVar26;
    local_1a0._s_0.Y = local_1a0._s_0.Y * dVar26;
    local_1a0._s_0.Z = local_1a0._s_0.Z * dVar26;
  }
  this_00 = &this->field_0x250;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x2a0);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x2f0);
  UMeshTopologySelectionMechanic::GetTopoSelectorSettings
            ((UMeshTopologySelectionMechanic *)this,SUB81(local_188,0));
  if (*(longlong *)&this->field_0x90 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  bVar4 = FMeshTopologySelector::FindSelectedElement
                    (*(FMeshTopologySelector **)&this->field_0x90,local_188,
                     (TRay<double> *)&local_1b8._s_0,(FGroupTopologySelection *)this_00,local_d0,
                     &local_e8,(int *)0x0);
  bVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x390,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x2a0);
  if (bVar6) {
    bVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x3e0,
                       (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x2f0);
    if (bVar6) {
      bVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x340
                         ,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
      if (bVar6) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x2a0);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x2f0);
      }
    }
  }
  return bVar4;
}

// UpdateSelection @ 14cbb8d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UBoundarySelectionMechanic::UpdateSelection
          (UBoundarySelectionMechanic *this,TRay<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  undefined1 *this_00;
  code *pcVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  double dVar30;
  double dVar35;
  undefined4 uVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined4 uVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar51;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auStackY_3d8 [32];
  TVector<double>_u_0 local_398;
  TVector<double>_u_0 local_380;
  FSelectionSettings local_368 [2];
  double local_358;
  double dStack_350;
  double local_348;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_318;
  undefined1 local_300 [16];
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  FGroupTopologySelection local_2b8;
  FGroupTopologySelection local_1c8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_300 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
  local_2f0 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar30 = *(double *)&this->field_0x1c0 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar35 = *(double *)&this->field_0x1c8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar37._0_8_ =
       *(double *)&this->field_0x1d0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar37._8_8_ =
       *(double *)&this->field_0x1d8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar22._8_4_ = SUB84(dVar35,0);
  auVar22._0_8_ = dVar30;
  uVar36 = (undefined4)((ulonglong)dVar35 >> 0x20);
  auVar22._12_4_ = uVar36;
  auVar25._8_4_ = SUB84(dVar35,0);
  auVar25._0_8_ = dVar30;
  auVar25._12_4_ = uVar36;
  dVar41 = local_300._8_8_;
  auVar56._8_4_ = SUB84(auVar37._8_8_,0);
  auVar56._0_8_ = auVar37._0_8_;
  auVar56._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
  auVar26 = blendpd(auVar25,auVar37,2);
  dVar16 = auVar22._8_8_;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = local_2f0;
  auVar17 = blendpd(local_300,auVar62,2);
  auVar54._8_4_ = SUB84(auVar37._0_8_,0);
  auVar54._0_8_ = dVar16;
  auVar54._12_4_ = (int)((ulonglong)auVar37._0_8_ >> 0x20);
  auVar61._0_8_ = dVar41 * dVar30 - dVar16 * local_300._0_8_;
  auVar61._8_8_ = local_2f0 * dVar35 - auVar54._8_8_ * dVar41;
  auVar48._8_4_ = SUB84(auVar61._8_8_,0);
  auVar48._0_8_ = auVar61._0_8_;
  auVar48._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
  auVar18._0_8_ = auVar17._0_8_ * auVar37._0_8_ - local_2f0 * auVar26._0_8_;
  auVar18._8_8_ = auVar17._8_8_ * auVar37._8_8_ - auVar26._8_8_ * 0.0;
  dVar47 = auVar48._8_8_ + auVar48._8_8_;
  dVar51 = auVar18._0_8_ + auVar18._0_8_;
  auVar62 = blendpd(auVar61,auVar18,2);
  uVar36 = SUB84(dVar51,0);
  auVar52._8_4_ = uVar36;
  auVar52._0_8_ = dVar47;
  uVar46 = (undefined4)((ulonglong)dVar51 >> 0x20);
  auVar52._12_4_ = uVar46;
  auVar67._8_4_ = uVar36;
  auVar67._0_8_ = dVar47;
  auVar67._12_4_ = uVar46;
  auVar42._8_4_ = uVar36;
  auVar42._0_8_ = dVar47;
  auVar42._12_4_ = uVar46;
  auVar17 = *(undefined1 (*) [16])&this->field_0x200;
  auVar63._0_8_ = auVar62._0_8_ + auVar62._0_8_;
  auVar63._8_8_ = auVar62._8_8_ + auVar62._8_8_;
  auVar2._4_8_ = dVar35;
  auVar2._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar31._0_8_ = auVar2._0_8_ << 0x20;
  auVar31._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar31._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar53._0_8_ = auVar52._8_8_ * dVar30 - dVar47 * dVar16;
  auVar53._8_8_ = auVar63._0_8_ * dVar35 - auVar67._8_8_ * auVar37._0_8_;
  auVar62 = blendpd(auVar42,auVar63,2);
  auVar11._8_4_ = SUB84(auVar63._8_8_,0);
  auVar11._0_8_ = auVar63._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
  auVar43._0_8_ = auVar62._0_8_ * auVar37._0_8_ - auVar63._0_8_ * auVar26._0_8_;
  auVar43._8_8_ = auVar62._8_8_ * auVar37._8_8_ - auVar11._8_8_ * auVar26._8_8_;
  auVar62 = *(undefined1 (*) [16])&this->field_0x210;
  auVar65._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar17._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar17._0_4_);
  auVar65._8_4_ = _UNK_15061cc88 & auVar17._8_4_;
  auVar65._12_4_ = _UNK_15061cc8c & auVar17._12_4_;
  auVar32._8_8_ = auVar31._8_8_;
  auVar32._0_8_ = auVar62._0_8_;
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
  lVar9 = -(ulonglong)(auVar65._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar10 = -(ulonglong)(auVar65._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar66._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar9 >> 0x20) & auVar17._4_4_,
                        ~(uint)lVar9 & auVar17._0_4_);
  auVar66._8_4_ = ~(uint)lVar10 & auVar17._8_4_;
  auVar66._12_4_ = ~(uint)((ulonglong)lVar10 >> 0x20) & auVar17._12_4_;
  local_338._s_0.X = 0.0;
  local_338._s_0.Y = 0.0;
  auVar26._8_4_ = SUB84(auVar53._8_8_,0);
  auVar26._0_8_ = auVar53._0_8_;
  auVar26._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
  lVar9 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar62._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar62._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_380._s_0.X = auVar66._0_8_ * (dVar47 * auVar56._8_8_ + local_300._0_8_ + auVar26._8_8_);
  local_380._s_0.Y = auVar66._8_8_ * (dVar51 * auVar37._8_8_ + dVar41 + auVar43._0_8_);
  auVar38._0_8_ =
       *(double *)&this->field_0x1d0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar38._8_8_ =
       *(double *)&this->field_0x1d8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
  dVar47 = *(double *)&this->field_0x1c0 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar51 = *(double *)&this->field_0x1c8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_2c0 = (param_1->Origin).field0_0x0._s_0.Z;
  dVar16 = local_2c0 - *(double *)&this->field_0x1f0;
  auVar54 = blendpd(auVar53,auVar43,2);
  auVar27._8_4_ = SUB84(dVar51,0);
  auVar27._0_8_ = dVar47;
  uVar36 = (undefined4)((ulonglong)dVar51 >> 0x20);
  auVar27._12_4_ = uVar36;
  auVar62 = blendpd(auVar27,auVar38,2);
  local_2d0 = (param_1->Origin).field0_0x0._s_0.X;
  dStack_2c8 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar60 = local_2d0 - *(double *)&this->field_0x1e0;
  dVar64 = dStack_2c8 - *(double *)&this->field_0x1e8;
  local_380._s_0.Z =
       (local_2f0 + auVar63._0_8_ * auVar56._8_8_ + auVar54._0_8_) *
       (double)CONCAT44(~(uint)((ulonglong)lVar9 >> 0x20) & auVar17._4_4_,
                        ~(uint)lVar9 & auVar17._0_4_);
  auVar23._8_4_ = SUB84(dVar51,0);
  auVar23._0_8_ = dVar47;
  auVar23._12_4_ = uVar36;
  auVar57._8_4_ = SUB84(dVar64,0);
  auVar57._0_8_ = dVar60;
  uVar36 = (undefined4)((ulonglong)dVar64 >> 0x20);
  auVar57._12_4_ = uVar36;
  dVar30 = auVar23._8_8_;
  auVar55._8_4_ = SUB84(auVar38._8_8_,0);
  auVar55._0_8_ = auVar38._0_8_;
  auVar55._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
  auVar12._8_4_ = SUB84(auVar38._0_8_,0);
  auVar12._0_8_ = dVar30;
  auVar12._12_4_ = (int)((ulonglong)auVar38._0_8_ >> 0x20);
  auVar19._8_4_ = SUB84(dVar64,0);
  auVar19._0_8_ = dVar60;
  auVar19._12_4_ = uVar36;
  auVar58._0_8_ = auVar57._8_8_ * dVar47 - dVar30 * dVar60;
  auVar58._8_8_ = dVar16 * dVar51 - auVar12._8_8_ * dVar64;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = dVar16;
  auVar17 = blendpd(auVar19,auVar17,2);
  auVar44._8_4_ = SUB84(auVar58._8_8_,0);
  auVar44._0_8_ = auVar58._0_8_;
  auVar44._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
  dVar35 = auVar62._8_8_;
  auVar20._0_8_ = auVar17._0_8_ * auVar38._0_8_ - dVar16 * auVar62._0_8_;
  auVar20._8_8_ = auVar17._8_8_ * auVar38._8_8_ - dVar35 * 0.0;
  dVar41 = auVar44._8_8_ + auVar44._8_8_;
  dVar45 = auVar20._0_8_ + auVar20._0_8_;
  auVar54 = blendpd(auVar58,auVar20,2);
  auVar17 = *(undefined1 (*) [16])&this->field_0x200;
  uVar36 = SUB84(dVar45,0);
  auVar49._8_4_ = uVar36;
  auVar49._0_8_ = dVar41;
  uVar46 = (undefined4)((ulonglong)dVar45 >> 0x20);
  auVar49._12_4_ = uVar46;
  auVar13._8_4_ = uVar36;
  auVar13._0_8_ = dVar41;
  auVar13._12_4_ = uVar46;
  auVar59._0_8_ = auVar54._0_8_ + auVar54._0_8_;
  auVar59._8_8_ = auVar54._8_8_ + auVar54._8_8_;
  auVar67 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
  auVar33._8_4_ = uVar36;
  auVar33._0_8_ = dVar41;
  auVar33._12_4_ = uVar46;
  auVar50._0_8_ = auVar49._8_8_ * dVar47 - dVar41 * dVar30;
  auVar50._8_8_ = auVar59._0_8_ * dVar51 - auVar13._8_8_ * auVar38._0_8_;
  auVar54 = blendpd(auVar33,auVar59,2);
  auVar14._8_4_ = SUB84(auVar59._8_8_,0);
  auVar14._0_8_ = auVar59._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
  auVar3._4_8_ = dVar35;
  auVar3._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar28._0_8_ = auVar3._0_8_ << 0x20;
  auVar28._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar28._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar34._0_8_ = auVar54._0_8_ * auVar38._0_8_ - auVar59._0_8_ * auVar62._0_8_;
  auVar34._8_8_ = auVar54._8_8_ * auVar38._8_8_ - auVar14._8_8_ * dVar35;
  auVar62 = *(undefined1 (*) [16])&this->field_0x210;
  auVar29._8_8_ = auVar28._8_8_;
  auVar29._0_8_ = auVar62._0_8_;
  auVar15._8_4_ = SUB84(auVar50._8_8_,0);
  auVar15._0_8_ = auVar50._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
  auVar54 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar29);
  auVar39._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar17._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar17._0_4_);
  auVar39._8_4_ = _UNK_15061cc88 & auVar17._8_4_;
  auVar39._12_4_ = _UNK_15061cc8c & auVar17._12_4_;
  lVar9 = -(ulonglong)(auVar39._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar10 = -(ulonglong)(auVar39._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar40._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar9 >> 0x20) & auVar67._4_4_,
                        ~(uint)lVar9 & auVar67._0_4_);
  auVar40._8_4_ = ~(uint)lVar10 & auVar67._8_4_;
  auVar40._12_4_ = ~(uint)((ulonglong)lVar10 >> 0x20) & auVar67._12_4_;
  lVar9 = -(ulonglong)
           ((double)CONCAT44(auVar62._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             auVar62._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_398._s_0.X = auVar40._0_8_ * (dVar41 * auVar55._8_8_ + dVar60 + auVar15._8_8_);
  local_398._s_0.Y = auVar40._8_8_ * (dVar45 * auVar38._8_8_ + dVar64 + auVar34._0_8_);
  auVar17 = blendpd(auVar50,auVar34,2);
  local_398._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar9 >> 0x20) & auVar54._4_4_,
                        ~(uint)lVar9 & auVar54._0_4_) *
       (auVar59._0_8_ * auVar55._8_8_ + dVar16 + auVar17._0_8_);
  local_358 = local_398._s_0.X;
  dStack_350 = local_398._s_0.Y;
  local_348 = local_398._s_0.Z;
  local_318._s_0.X = local_380._s_0.X;
  local_318._s_0.Y = local_380._s_0.Y;
  local_2e8 = local_380._s_0.X;
  dStack_2e0 = local_380._s_0.Y;
  local_2d8 = local_380._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_380._s_0,__real_3e45798ee0000000);
  auVar21._0_8_ = local_380._s_0.Z * local_380._s_0.Z;
  auVar21._8_8_ = 0;
  auVar24._0_8_ =
       local_380._s_0.X * local_380._s_0.X + local_380._s_0.Y * local_380._s_0.Y + auVar21._0_8_;
  auVar24._8_8_ = 0;
  auVar17 = sqrtpd(auVar21,auVar24);
  if (auVar17._0_8_ <= 0.0) {
    local_380._s_0.X = 0.0;
    local_380._s_0.Y = 0.0;
    local_380._s_0.Z = 0.0;
  }
  else {
    dVar16 = __real_3ff0000000000000 / auVar17._0_8_;
    local_380._s_0.X = local_380._s_0.X * dVar16;
    local_380._s_0.Y = local_380._s_0.Y * dVar16;
    local_380._s_0.Z = local_380._s_0.Z * dVar16;
  }
  this_00 = &this->field_0x340;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            (&local_1c8,(FGroupTopologySelection *)this_00);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_2b8);
  UMeshTopologySelectionMechanic::GetTopoSelectorSettings
            ((UMeshTopologySelectionMechanic *)this,SUB81(local_368,0));
  if (*(longlong *)&this->field_0x90 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  bVar4 = FMeshTopologySelector::FindSelectedElement
                    (*(FMeshTopologySelector **)&this->field_0x90,local_368,
                     (TRay<double> *)&local_398._s_0,&local_2b8,(TVector<double> *)&local_318._s_0,
                     (TVector<double> *)&local_338._s_0,(int *)0x0);
  if (bVar4) {
    (param_2->field0_0x0)._s_0.X = local_318._s_0.X;
    (param_2->field0_0x0)._s_0.Y = local_318._s_0.Y;
    (param_2->field0_0x0)._s_0.Z = local_318._s_0.Z;
    (param_3->field0_0x0)._s_0.X = local_338._s_0.X;
    (param_3->field0_0x0)._s_0.Y = local_338._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = local_338._s_0.Z;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x160);
  pcVar1 = *(code **)&this->field_0x160;
  plVar8 = (longlong *)&this->field_0x170;
  if (*(longlong **)&this->field_0x188 != (longlong *)0x0) {
    plVar8 = *(longlong **)&this->field_0x188;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  cVar6 = (*pcVar1)(uVar7);
  if (cVar6 == '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x190);
    pcVar1 = *(code **)&this->field_0x190;
    plVar8 = (longlong *)&this->field_0x1a0;
    if (*(longlong **)&this->field_0x1b8 != (longlong *)0x0) {
      plVar8 = *(longlong **)&this->field_0x1b8;
    }
    uVar7 = (**(code **)(*plVar8 + 8))(plVar8);
    cVar6 = (*pcVar1)(uVar7);
    if (cVar6 == '\0') {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,
                 &local_2b8.SelectedGroupIDs);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x390,
                 &local_2b8.SelectedCornerIDs);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x3e0,
                 &local_2b8.SelectedEdgeIDs);
    }
    else {
      UE::Geometry::FGroupTopologySelection::Remove((FGroupTopologySelection *)this_00,&local_2b8);
    }
  }
  else {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x190);
    pcVar1 = *(code **)&this->field_0x190;
    plVar8 = (longlong *)&this->field_0x1a0;
    if (*(longlong **)&this->field_0x1b8 != (longlong *)0x0) {
      plVar8 = *(longlong **)&this->field_0x1b8;
    }
    uVar7 = (**(code **)(*plVar8 + 8))(plVar8);
    cVar6 = (*pcVar1)(uVar7);
    if (cVar6 == '\0') {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x390,
                 &local_2b8.SelectedCornerIDs);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x3e0,
                 &local_2b8.SelectedEdgeIDs);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,
                 &local_2b8.SelectedGroupIDs);
    }
    else {
      UE::Geometry::FGroupTopologySelection::Toggle((FGroupTopologySelection *)this_00,&local_2b8);
    }
  }
  if (((*(int *)&this->field_0x398 - *(int *)&this->field_0x3c4 ==
        local_1c8.SelectedCornerIDs.Elements._8_4_ - local_1c8.SelectedCornerIDs.Elements._52_4_) &&
      (*(int *)&this->field_0x3e8 - *(int *)&this->field_0x414 ==
       local_1c8.SelectedEdgeIDs.Elements._8_4_ - local_1c8.SelectedEdgeIDs.Elements._52_4_)) &&
     (*(int *)&this->field_0x348 - *(int *)&this->field_0x374 ==
      local_1c8.SelectedGroupIDs.Elements._8_4_ - local_1c8.SelectedGroupIDs.Elements._52_4_)) {
    bVar4 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x390,
                       &local_1c8.SelectedCornerIDs);
    if (bVar4) {
      bVar4 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x3e0
                         ,&local_1c8.SelectedEdgeIDs);
      if (bVar4) {
        bVar4 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,
                           &local_1c8.SelectedGroupIDs);
        if (bVar4) {
          bVar4 = false;
          goto LAB_14cbb93cb;
        }
      }
    }
  }
  *(int *)&this->field_0x430 = *(int *)&this->field_0x430 + 1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x48)
  ;
  bVar4 = true;
LAB_14cbb93cb:
  local_2b8.SelectedEdgeIDs.HashSize = 0;
  if (local_2b8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2b8.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2b8.SelectedEdgeIDs.Elements);
  local_2b8.SelectedCornerIDs.HashSize = 0;
  if (local_2b8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2b8.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2b8.SelectedCornerIDs.Elements);
  local_2b8.SelectedGroupIDs.HashSize = 0;
  if (local_2b8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2b8.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_2b8);
  local_1c8.SelectedEdgeIDs.HashSize = 0;
  if (local_1c8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1c8.SelectedEdgeIDs.Elements);
  local_1c8.SelectedCornerIDs.HashSize = 0;
  if (local_1c8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1c8.SelectedCornerIDs.Elements);
  local_1c8.SelectedGroupIDs.HashSize = 0;
  if (local_1c8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_1c8);
  return bVar4;
}

