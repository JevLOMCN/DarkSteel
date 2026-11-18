// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CustomMeshComponent
// Functions: 15

// StaticClass @ 14f02f400

UClass * __cdecl UCustomMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomMeshComponent",L"CustomMeshComponent",
               &Z_Registration_Info_UClass_UCustomMeshComponent.InnerSingleton,
               StaticRegisterNativesUCustomMeshComponent,0x5a0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomMeshComponent>,
               InternalVTableHelperCtorCaller<UCustomMeshComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomMeshComponent.InnerSingleton;
}

// UCustomMeshComponent @ 14f030450

UCustomMeshComponent * __thiscall
UCustomMeshComponent::UCustomMeshComponent(UCustomMeshComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->CustomMeshTris).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomMeshTris).ArrayNum = 0;
  (this->CustomMeshTris).ArrayMax = 0;
  return this;
}

// UCustomMeshComponent @ 14f0304d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UCustomMeshComponent * __thiscall
UCustomMeshComponent::UCustomMeshComponent(UCustomMeshComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->CustomMeshTris).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomMeshTris).ArrayNum = 0;
  (this->CustomMeshTris).ArrayMax = 0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::BlockAllDynamic_ProfileName,true);
  return this;
}

// ~UCustomMeshComponent @ 14f030640

void __thiscall UCustomMeshComponent::~UCustomMeshComponent(UCustomMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->CustomMeshTris).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// AddCustomMeshTriangles @ 14f0308e0

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
UCustomMeshComponent::AddCustomMeshTriangles
          (UCustomMeshComponent *this,
          TArray<FCustomMeshTriangle,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FCustomMeshTriangle,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pTVar1 = &this->CustomMeshTris;
  if (pTVar1 == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,iVar2,&pTVar1->AllocatorInstance,&(this->CustomMeshTris).ArrayNum,
                       &(this->CustomMeshTris).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x48,
           (param_1->AllocatorInstance).Data,(longlong)iVar2 * 0x48);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f0309a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x5b0))(this);
  return;
}

// CalcBounds @ 14f0309b0

TBoxSphereBounds<double,double> * __thiscall
UCustomMeshComponent::CalcBounds
          (UCustomMeshComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [8];
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [8];
  double dVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  TBoxSphereBounds<double,double> *pTVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar40;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined4 uVar62;
  undefined4 uVar63;
  undefined1 local_158 [8];
  double dStack_150;
  double local_148;
  undefined1 auStack_140 [8];
  double local_138;
  double dStack_130;
  
  bVar16 = false;
  _local_158 = ZEXT816(0);
  auVar46 = _local_158;
  uVar21 = 0;
  dStack_150 = 0.0;
  local_158 = (undefined1  [8])0x0;
  local_148 = 0.0;
  auStack_140 = (undefined1  [8])0x0;
  auVar9 = auStack_140;
  _auStack_140 = ZEXT816(0);
  auVar23 = _auStack_140;
  dStack_130 = 0.0;
  local_138 = 0.0;
  auVar14 = local_158;
  dVar41 = local_138;
  dVar1 = dStack_150;
  if (0 < (this->CustomMeshTris).ArrayNum) {
    lVar22 = 0;
    do {
      uVar20 = ~uVar21 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar21 < (this->CustomMeshTris).ArrayNum) {
        uVar18 = uVar20;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        pTVar19 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
        return pTVar19;
      }
      auVar46 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      auVar23 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      pFVar2 = (this->CustomMeshTris).AllocatorInstance.Data;
      auVar43 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      dVar15 = (param_1->Rotation).ZW.m128d_f64[1];
      dVar7 = *(double *)(pFVar2 + lVar22 + 0x10) * (param_1->Scale3D).ZW.m128d_f64[0];
      dVar8 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
      pFVar2 = pFVar2 + lVar22;
      auVar32 = blendpd(auVar23,auVar46,2);
      dVar52 = *(double *)pFVar2 * (param_1->Scale3D).XY.m128d_f64[0];
      dVar51 = *(double *)(pFVar2 + 8) * (param_1->Scale3D).XY.m128d_f64[1];
      uVar62 = (undefined4)((ulonglong)dVar51 >> 0x20);
      auVar53._8_4_ = SUB84(dVar51,0);
      auVar53._0_8_ = dVar52;
      auVar53._12_4_ = uVar62;
      dVar40 = auVar46._0_8_;
      auVar54._0_8_ = auVar53._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar52;
      auVar54._8_8_ = dVar7 * auVar23._8_8_ - dVar40 * dVar51;
      auVar42._8_4_ = SUB84(dVar51,0);
      auVar42._0_8_ = dVar52;
      auVar42._12_4_ = uVar62;
      auVar23._8_4_ = SUB84(dVar8,0);
      auVar23._0_8_ = dVar7;
      auVar23._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar23 = blendpd(auVar42,auVar23,2);
      auVar24._0_8_ = auVar23._0_8_ * dVar40 - auVar32._0_8_ * dVar7;
      auVar24._8_8_ = auVar23._8_8_ * auVar46._8_8_ - auVar32._8_8_ * dVar8;
      auVar23 = blendpd(auVar54,auVar24,2);
      dVar8 = auVar54._8_8_ + auVar54._8_8_;
      dVar10 = auVar24._0_8_ + auVar24._0_8_;
      uVar62 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar55._0_8_ = auVar23._0_8_ + auVar23._0_8_;
      auVar55._8_8_ = auVar23._8_8_ + auVar23._8_8_;
      auVar44._8_4_ = SUB84(dVar10,0);
      auVar44._0_8_ = dVar8;
      auVar44._12_4_ = uVar62;
      auVar33._8_4_ = SUB84(dVar10,0);
      auVar33._0_8_ = dVar8;
      auVar33._12_4_ = uVar62;
      auVar23 = blendpd(auVar33,auVar55,2);
      auVar45._0_8_ = auVar44._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar8;
      auVar45._8_8_ = auVar55._0_8_ * auVar43._8_8_ - dVar40 * dVar10;
      auVar32._8_4_ = SUB84(auVar45._8_8_,0);
      auVar32._0_8_ = auVar45._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
      auVar42 = blendpd(auVar43,auVar46,2);
      auVar43._0_8_ = auVar23._0_8_ * dVar40 - auVar42._0_8_ * auVar55._0_8_;
      auVar43._8_8_ = auVar23._8_8_ * auVar46._8_8_ - auVar42._8_8_ * auVar55._8_8_;
      auVar46 = blendpd(auVar45,auVar43,2);
      dVar40 = dVar8 * dVar15 + dVar52 + auVar32._8_8_ + (param_1->Translation).XY.m128d_f64[0];
      dVar52 = dVar10 * dVar15 + dVar51 + auVar43._0_8_ + (param_1->Translation).XY.m128d_f64[1];
      dVar51 = auVar55._0_8_ * dVar15 + dVar7 + auVar46._0_8_ +
               (param_1->Translation).ZW.m128d_f64[0];
      if (bVar16) {
        if (dVar40 <= (double)auVar14) {
          auVar14 = (undefined1  [8])dVar40;
        }
        if (dVar51 <= local_148) {
          local_148 = dVar51;
        }
        auVar11._4_8_ = auVar43._8_8_;
        auVar11._0_4_ = (int)((ulonglong)dVar40 >> 0x20);
        auVar46._0_8_ = auVar11._0_8_ << 0x20;
        auVar46._8_4_ = SUB84(dVar52,0);
        auVar46._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
        if ((double)auVar9 <= dVar40) {
          auVar9 = (undefined1  [8])dVar40;
        }
        dVar40 = auVar46._8_8_;
        if (dVar40 <= dVar1) {
          dVar1 = dVar52;
        }
        dVar52 = dVar41;
        if (dVar41 <= dVar40) {
          dVar52 = dVar40;
        }
        if (dStack_130 <= dVar51) {
          dStack_130 = dVar51;
        }
      }
      else {
        bVar16 = true;
        auVar14 = (undefined1  [8])dVar40;
        auVar9 = (undefined1  [8])dVar40;
        dVar1 = dVar52;
        local_148 = dVar51;
        dStack_130 = dVar51;
      }
      uVar18 = 0;
      if ((int)uVar21 < (this->CustomMeshTris).ArrayNum) {
        uVar18 = uVar20;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        pTVar19 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
        return pTVar19;
      }
      auVar46 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      auVar23 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      pFVar2 = (this->CustomMeshTris).AllocatorInstance.Data;
      auVar43 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      dVar15 = (param_1->Rotation).ZW.m128d_f64[1];
      dVar7 = *(double *)(pFVar2 + lVar22 + 0x28) * (param_1->Scale3D).ZW.m128d_f64[0];
      dVar8 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
      pFVar2 = pFVar2 + lVar22 + 0x18;
      auVar42 = blendpd(auVar23,auVar46,2);
      dVar40 = *(double *)pFVar2 * (param_1->Scale3D).XY.m128d_f64[0];
      dVar51 = *(double *)(pFVar2 + 8) * (param_1->Scale3D).XY.m128d_f64[1];
      uVar62 = (undefined4)((ulonglong)dVar51 >> 0x20);
      auVar56._8_4_ = SUB84(dVar51,0);
      auVar56._0_8_ = dVar40;
      auVar56._12_4_ = uVar62;
      dVar41 = auVar46._0_8_;
      auVar57._0_8_ = auVar56._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar40;
      auVar57._8_8_ = dVar7 * auVar23._8_8_ - dVar41 * dVar51;
      auVar25._8_4_ = SUB84(dVar51,0);
      auVar25._0_8_ = dVar40;
      auVar25._12_4_ = uVar62;
      auVar5._8_4_ = SUB84(dVar8,0);
      auVar5._0_8_ = dVar7;
      auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar23 = blendpd(auVar25,auVar5,2);
      auVar26._0_8_ = auVar23._0_8_ * dVar41 - auVar42._0_8_ * dVar7;
      auVar26._8_8_ = auVar23._8_8_ * auVar46._8_8_ - auVar42._8_8_ * dVar8;
      auVar23 = blendpd(auVar57,auVar26,2);
      dVar8 = auVar57._8_8_ + auVar57._8_8_;
      dVar10 = auVar26._0_8_ + auVar26._0_8_;
      uVar62 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar58._0_8_ = auVar23._0_8_ + auVar23._0_8_;
      auVar58._8_8_ = auVar23._8_8_ + auVar23._8_8_;
      auVar47._8_4_ = SUB84(dVar10,0);
      auVar47._0_8_ = dVar8;
      auVar47._12_4_ = uVar62;
      auVar34._8_4_ = SUB84(dVar10,0);
      auVar34._0_8_ = dVar8;
      auVar34._12_4_ = uVar62;
      auVar23 = blendpd(auVar34,auVar58,2);
      auVar48._0_8_ = auVar47._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar8;
      auVar48._8_8_ = auVar58._0_8_ * auVar43._8_8_ - dVar41 * dVar10;
      auVar27._8_4_ = SUB84(auVar48._8_8_,0);
      auVar27._0_8_ = auVar48._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
      auVar43 = blendpd(auVar43,auVar46,2);
      auVar35._0_8_ = auVar23._0_8_ * dVar41 - auVar43._0_8_ * auVar58._0_8_;
      auVar35._8_8_ = auVar23._8_8_ * auVar46._8_8_ - auVar43._8_8_ * auVar58._8_8_;
      auVar46 = blendpd(auVar48,auVar35,2);
      dVar41 = dVar8 * dVar15 + dVar40 + auVar27._8_8_ + (param_1->Translation).XY.m128d_f64[0];
      dVar40 = dVar10 * dVar15 + dVar51 + auVar35._0_8_ + (param_1->Translation).XY.m128d_f64[1];
      dVar51 = auVar58._0_8_ * dVar15 + dVar7 + auVar46._0_8_ +
               (param_1->Translation).ZW.m128d_f64[0];
      if (bVar16) {
        if (dVar41 <= (double)auVar14) {
          auVar14 = (undefined1  [8])dVar41;
        }
        if (dVar51 <= local_148) {
          local_148 = dVar51;
        }
        auVar12._4_8_ = auVar35._8_8_;
        auVar12._0_4_ = (int)((ulonglong)dVar41 >> 0x20);
        auVar36._0_8_ = auVar12._0_8_ << 0x20;
        auVar36._8_4_ = SUB84(dVar40,0);
        auVar36._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
        auStack_140 = auVar9;
        if ((double)auVar9 <= dVar41) {
          auStack_140 = (undefined1  [8])dVar41;
        }
        dVar41 = auVar36._8_8_;
        if (dVar41 <= dVar1) {
          dVar1 = dVar41;
        }
        dVar40 = dVar52;
        if (dVar52 <= dVar41) {
          dVar40 = dVar41;
        }
        if (dStack_130 <= dVar51) {
          dStack_130 = dVar51;
        }
      }
      else {
        bVar16 = true;
        auVar14 = (undefined1  [8])dVar41;
        auStack_140 = (undefined1  [8])dVar41;
        dVar1 = dVar40;
        local_148 = dVar51;
        dStack_130 = dVar51;
      }
      uVar18 = 0;
      if ((int)uVar21 < (this->CustomMeshTris).ArrayNum) {
        uVar18 = uVar20;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        pTVar19 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
        return pTVar19;
      }
      auVar46 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      pFVar2 = (this->CustomMeshTris).AllocatorInstance.Data;
      auVar23 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      dVar15 = (param_1->Rotation).ZW.m128d_f64[1];
      dVar7 = *(double *)(pFVar2 + lVar22 + 0x40) * (param_1->Scale3D).ZW.m128d_f64[0];
      dVar8 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
      pFVar2 = pFVar2 + lVar22 + 0x30;
      dVar52 = (param_1->Scale3D).XY.m128d_f64[0] * *(double *)pFVar2;
      dVar51 = (param_1->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar2 + 8);
      uVar62 = (undefined4)((ulonglong)dVar51 >> 0x20);
      auVar43 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      auVar59._8_4_ = SUB84(dVar51,0);
      auVar59._0_8_ = dVar52;
      auVar59._12_4_ = uVar62;
      dVar41 = auVar46._0_8_;
      auVar42 = blendpd(auVar43,auVar46,2);
      auVar60._0_8_ = auVar59._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar52;
      auVar60._8_8_ = dVar7 * auVar43._8_8_ - dVar41 * dVar51;
      auVar28._8_4_ = SUB84(dVar51,0);
      auVar28._0_8_ = dVar52;
      auVar28._12_4_ = uVar62;
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar43 = blendpd(auVar28,auVar6,2);
      auVar29._0_8_ = auVar43._0_8_ * dVar41 - auVar42._0_8_ * dVar7;
      auVar29._8_8_ = auVar43._8_8_ * auVar46._8_8_ - auVar42._8_8_ * dVar8;
      auVar43 = blendpd(auVar60,auVar29,2);
      dVar8 = auVar60._8_8_ + auVar60._8_8_;
      dVar10 = auVar29._0_8_ + auVar29._0_8_;
      uVar62 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar61._0_8_ = auVar43._0_8_ + auVar43._0_8_;
      auVar61._8_8_ = auVar43._8_8_ + auVar43._8_8_;
      auVar49._8_4_ = SUB84(dVar10,0);
      auVar49._0_8_ = dVar8;
      auVar49._12_4_ = uVar62;
      auVar37._8_4_ = SUB84(dVar10,0);
      auVar37._0_8_ = dVar8;
      auVar37._12_4_ = uVar62;
      auVar43 = blendpd(auVar37,auVar61,2);
      auVar50._0_8_ = auVar49._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar8;
      auVar50._8_8_ = auVar61._0_8_ * auVar23._8_8_ - dVar41 * dVar10;
      auVar30._8_4_ = SUB84(auVar50._8_8_,0);
      auVar30._0_8_ = auVar50._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
      auVar23 = blendpd(auVar23,auVar46,2);
      auVar38._0_8_ = auVar43._0_8_ * dVar41 - auVar23._0_8_ * auVar61._0_8_;
      auVar38._8_8_ = auVar43._8_8_ * auVar46._8_8_ - auVar23._8_8_ * auVar61._8_8_;
      auVar46 = blendpd(auVar50,auVar38,2);
      auVar9 = (undefined1  [8])
               (dVar8 * dVar15 + dVar52 + auVar30._8_8_ + (param_1->Translation).XY.m128d_f64[0]);
      dVar41 = dVar10 * dVar15 + dVar51 + auVar38._0_8_ + (param_1->Translation).XY.m128d_f64[1];
      uVar62 = SUB84(dVar41,0);
      uVar63 = (undefined4)((ulonglong)dVar41 >> 0x20);
      dVar52 = auVar61._0_8_ * dVar15 + dVar7 + auVar46._0_8_ +
               (param_1->Translation).ZW.m128d_f64[0];
      if (bVar16) {
        if ((double)auVar9 <= (double)auVar14) {
          auVar14 = auVar9;
        }
        if (dVar52 <= local_148) {
          local_148 = dVar52;
        }
        auVar13._4_8_ = auVar38._8_8_;
        auVar13._0_4_ = (int)((ulonglong)auVar9 >> 0x20);
        auVar39._0_8_ = auVar13._0_8_ << 0x20;
        auVar39._8_4_ = uVar62;
        auVar39._12_4_ = uVar63;
        if ((double)auStack_140 <= (double)auVar9) {
          auStack_140 = auVar9;
        }
        dVar51 = auVar39._8_8_;
        if (dVar51 <= dVar1) {
          dVar1 = dVar51;
        }
        dVar41 = dVar40;
        if (dVar40 <= dVar51) {
          dVar41 = dVar51;
        }
        if (dStack_130 <= dVar52) {
          dStack_130 = dVar52;
        }
        dStack_150 = dVar1;
        local_158 = auVar14;
        local_138 = dVar41;
        auVar9 = auStack_140;
      }
      else {
        bVar16 = true;
        unique0x10000ad6 = uVar62;
        auStack_140 = auVar9;
        unique0x10000ada = uVar63;
        unique0x10000afa = uVar62;
        local_158 = auVar9;
        unique0x10000afe = uVar63;
        auVar14 = auVar9;
        dVar1 = dVar41;
        local_148 = dVar52;
        dStack_130 = dVar52;
      }
      uVar21 = uVar21 + 1;
      lVar22 = lVar22 + 0x48;
      auVar46 = _local_158;
      auVar23 = _auStack_140;
    } while ((int)uVar21 < (this->CustomMeshTris).ArrayNum);
  }
  _auStack_140 = auVar23;
  _local_158 = auVar46;
  dVar40 = __real_3fe0000000000000;
  dVar52 = (dStack_130 - local_148) * __real_3fe0000000000000;
  dVar41 = (dVar41 - dVar1) * __real_3fe0000000000000;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
       ((double)auVar9 - (double)auVar14) * __real_3fe0000000000000;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar41;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar52;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       ((double)auStack_140 + (double)local_158) * dVar40;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (local_138 + dStack_150) * dVar40;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (dStack_130 + local_148) * dVar40;
  dVar41 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  dVar1 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y;
  dVar40 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
  auVar31._0_8_ = dVar41 * dVar41;
  auVar31._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar1 * dVar1 + auVar31._0_8_ + dVar40 * dVar40;
  auVar46 = sqrtpd(auVar31,auVar4);
  __return_storage_ptr__->SphereRadius = auVar46._0_8_;
  return __return_storage_ptr__;
}

// ClearCustomMeshTriangles @ 14f0311e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCustomMeshComponent::ClearCustomMeshTriangles(UCustomMeshComponent *this)

{
  (this->CustomMeshTris).ArrayNum = 0;
  if ((this->CustomMeshTris).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&(this->CustomMeshTris).AllocatorInstance,0,&(this->CustomMeshTris).ArrayMax
              );
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f031230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x5b0))(this);
  return;
}

// CreateSceneProxy @ 14f031240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UCustomMeshComponent::CreateSceneProxy(UCustomMeshComponent *this)

{
  FCustomMeshSceneProxy *pFVar1;
  
  if (0 < (this->CustomMeshTris).ArrayNum) {
    pFVar1 = ::operator_new(0x660);
    if (pFVar1 != (FCustomMeshSceneProxy *)0x0) {
      pFVar1 = FCustomMeshSceneProxy::FCustomMeshSceneProxy(pFVar1,this);
      return (FPrimitiveSceneProxy *)pFVar1;
    }
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetNumMaterials @ 14f031980

int __thiscall UCustomMeshComponent::GetNumMaterials(UCustomMeshComponent *this)

{
  return 1;
}

// GetPrivateStaticClass @ 14f031990

UClass * __cdecl UCustomMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomMeshComponent",L"CustomMeshComponent",
               &Z_Registration_Info_UClass_UCustomMeshComponent.InnerSingleton,
               StaticRegisterNativesUCustomMeshComponent,0x5a0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomMeshComponent>,
               InternalVTableHelperCtorCaller<UCustomMeshComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomMeshComponent.InnerSingleton;
}

// SetCustomMeshTriangles @ 14f031bb0

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
UCustomMeshComponent::SetCustomMeshTriangles
          (UCustomMeshComponent *this,
          TArray<FCustomMeshTriangle,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FCustomMeshTriangle,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar2 = &this->CustomMeshTris;
  if (pTVar2 != param_1) {
    iVar3 = (this->CustomMeshTris).ArrayMax;
    piVar1 = &(this->CustomMeshTris).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    (this->CustomMeshTris).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x48);
      }
    }
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  (**(code **)(this->_padding_ + 0x5b0))(this);
  return true;
}

// StaticRegisterNativesUCustomMeshComponent @ 14f031c60

void __cdecl UCustomMeshComponent::StaticRegisterNativesUCustomMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UCustomMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddCustomMeshTriangles @ 14f031d60

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
UCustomMeshComponent::execAddCustomMeshTriangles(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar7 = &local_18;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar7 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = &param_1[0x23].field_0x18;
  if ((ForAnyElementType *)puVar1 == pFVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = *(int *)&pFVar7[1].Data;
  if (iVar2 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,iVar2,(ForAnyElementType *)puVar1,(int *)&param_1[0x23].field_0x20,
                       (int *)&param_1[0x23].field_0x24);
    memcpy((void *)(*(longlong *)puVar1 + (longlong)iVar6 * 0x48),pFVar7->Data,
           (longlong)iVar2 * 0x48);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  (**(code **)(*(longlong *)param_1 + 0x5b0))(param_1);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execClearCustomMeshTriangles @ 14f031eb0

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
UCustomMeshComponent::execClearCustomMeshTriangles(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x23].field_0x20 = 0;
  if (*(int *)&param_1[0x23].field_0x24 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)&param_1[0x23].field_0x18,0,
               (int *)&param_1[0x23].field_0x24);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f031f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x5b0))(param_1);
  return;
}

// execSetCustomMeshTriangles @ 14f031f30

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
UCustomMeshComponent::execSetCustomMeshTriangles(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  FProperty *pFVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  puVar2 = &param_1[0x23].field_0x18;
  pFVar5 = &local_28;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar5 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((ForAnyElementType *)puVar2 != pFVar5) {
    iVar3 = *(int *)&pFVar5[1].Data;
    puVar1 = &param_1[0x23].field_0x24;
    _Src = pFVar5->Data;
    *(int *)&param_1[0x23].field_0x20 = iVar3;
    if ((iVar3 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar3,*(int *)puVar1,(ForAnyElementType *)puVar2,iVar3,(int *)puVar1);
      if (iVar3 != 0) {
        memcpy(*(void **)puVar2,_Src,(longlong)iVar3 * 0x48);
      }
    }
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  (**(code **)(*(longlong *)param_1 + 0x5b0))(param_1);
  *(undefined1 *)param_3 = 1;
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

