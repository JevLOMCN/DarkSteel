// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FInitBodiesHelper<1,TSizedDefaultAllocator<32>_> @ 1481c5e40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInitBodiesHelper<1,TSizedDefaultAllocator<32>_> * __thiscall
FInitBodiesHelper<1,TSizedDefaultAllocator<32>_>::FInitBodiesHelper<1,TSizedDefaultAllocator<32>_>
          (FInitBodiesHelper<1,TSizedDefaultAllocator<32>_> *this,
          TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          UBodySetup *param_3,UPrimitiveComponent *param_4,FPhysScene_Chaos *param_5,
          FInitBodySpawnParams *param_6,FPhysicsAggregateReference_Chaos param_7,
          IPhysicsBodyInstanceOwner *param_8)

{
  UObject *pUVar1;
  
  if (param_4 == (UPrimitiveComponent *)0x0) {
    if (param_8 == (IPhysicsBodyInstanceOwner *)0x0) {
      pUVar1 = (UObject *)0x0;
    }
    else {
      pUVar1 = (UObject *)(**(code **)((longlong)*param_8 + 0x10))(param_8);
    }
  }
  else {
    pUVar1 = *(UObject **)&param_4->field_0xa8;
  }
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>
            ((TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *)this,param_1,param_2,param_3,
             param_4,pUVar1,param_5,param_6,param_7,param_8);
  this->field_0x60 = 1;
  *(undefined8 *)&this->field_0x68 = 0;
  if (*(char *)(*(longlong *)&this->field_0x70 + 1) != '\0') {
    GetSimulatingAndBlendWeight
              ((USkeletalMeshComponent *)0x0,*(UBodySetup **)&this->field_0x10,
               (float *)&this->field_0x64,(bool *)&this->field_0x61);
  }
  return this;
}

// FInitBodiesHelper<1,TSizedDefaultAllocator<32>_> @ 1481c5f30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInitBodiesHelper<1,TSizedDefaultAllocator<32>_> * __thiscall
FInitBodiesHelper<1,TSizedDefaultAllocator<32>_>::FInitBodiesHelper<1,TSizedDefaultAllocator<32>_>
          (FInitBodiesHelper<1,TSizedDefaultAllocator<32>_> *this,
          TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          UBodySetup *param_3,UPrimitiveComponent *param_4,UObject *param_5,
          FPhysScene_Chaos *param_6,FInitBodySpawnParams *param_7,
          FPhysicsAggregateReference_Chaos param_8,IPhysicsBodyInstanceOwner *param_9)

{
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>
            ((TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *)this,param_1,param_2,param_3,
             param_4,param_5,param_6,param_7,param_8,param_9);
  this->field_0x60 = 1;
  *(undefined8 *)&this->field_0x68 = 0;
  if (*(char *)(*(longlong *)&this->field_0x70 + 1) != '\0') {
    GetSimulatingAndBlendWeight
              ((USkeletalMeshComponent *)0x0,*(UBodySetup **)&this->field_0x10,
               (float *)&this->field_0x64,(bool *)&this->field_0x61);
  }
  return this;
}

// FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1481c5fd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FBodyInstance_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2,UBodySetup *param_3,UPrimitiveComponent *param_4,FPhysScene_Chaos *param_5,
          FInitBodySpawnParams *param_6,FPhysicsAggregateReference_Chaos param_7,
          IPhysicsBodyInstanceOwner *param_8)

{
  UObject *pUVar1;
  
  if (param_4 == (UPrimitiveComponent *)0x0) {
    if (param_8 == (IPhysicsBodyInstanceOwner *)0x0) {
      pUVar1 = (UObject *)0x0;
    }
    else {
      pUVar1 = (UObject *)(**(code **)((longlong)*param_8 + 0x10))(param_8);
    }
  }
  else {
    pUVar1 = *(UObject **)&param_4->field_0xa8;
  }
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            ((TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)this
             ,param_1,param_2,param_3,param_4,pUVar1,param_5,param_6,param_7,param_8);
  this->field_0x60 = 1;
  *(undefined8 *)&this->field_0x68 = 0;
  if (*(char *)(*(longlong *)&this->field_0x70 + 1) != '\0') {
    GetSimulatingAndBlendWeight
              ((USkeletalMeshComponent *)0x0,*(UBodySetup **)&this->field_0x10,
               (float *)&this->field_0x64,(bool *)&this->field_0x61);
  }
  return this;
}

// FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1481c60c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FBodyInstance_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2,UBodySetup *param_3,UPrimitiveComponent *param_4,UObject *param_5,
          FPhysScene_Chaos *param_6,FInitBodySpawnParams *param_7,
          FPhysicsAggregateReference_Chaos param_8,IPhysicsBodyInstanceOwner *param_9)

{
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            ((TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)this
             ,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  this->field_0x60 = 1;
  *(undefined8 *)&this->field_0x68 = 0;
  if (*(char *)(*(longlong *)&this->field_0x70 + 1) != '\0') {
    GetSimulatingAndBlendWeight
              ((USkeletalMeshComponent *)0x0,*(UBodySetup **)&this->field_0x10,
               (float *)&this->field_0x64,(bool *)&this->field_0x61);
  }
  return this;
}

// FInitBodiesHelper<0,TSizedDefaultAllocator<32>_> @ 1481c6160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInitBodiesHelper<0,TSizedDefaultAllocator<32>_> * __thiscall
FInitBodiesHelper<0,TSizedDefaultAllocator<32>_>::FInitBodiesHelper<0,TSizedDefaultAllocator<32>_>
          (FInitBodiesHelper<0,TSizedDefaultAllocator<32>_> *this,
          TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          UBodySetup *param_3,UPrimitiveComponent *param_4,FPhysScene_Chaos *param_5,
          FInitBodySpawnParams *param_6,FPhysicsAggregateReference_Chaos param_7,
          IPhysicsBodyInstanceOwner *param_8)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  USkeletalMeshComponent *pUVar4;
  
  if (param_4 == (UPrimitiveComponent *)0x0) {
    if (param_8 == (IPhysicsBodyInstanceOwner *)0x0) {
      pUVar2 = (UObject *)0x0;
    }
    else {
      pUVar2 = (UObject *)(**(code **)((longlong)*param_8 + 0x10))(param_8);
    }
  }
  else {
    pUVar2 = *(UObject **)&param_4->field_0xa8;
  }
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>
            ((TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *)this,param_1,param_2,param_3,
             param_4,pUVar2,param_5,param_6,param_7,param_8);
  pUVar4 = *(USkeletalMeshComponent **)&this->field_0x18;
  this->field_0x60 = **(char **)&this->field_0x70 != '\0';
  if (pUVar4 != (USkeletalMeshComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_1481c6238;
  }
  pUVar4 = (USkeletalMeshComponent *)0x0;
LAB_1481c6238:
  *(USkeletalMeshComponent **)&this->field_0x68 = pUVar4;
  if (*(char *)(*(longlong *)&this->field_0x70 + 1) != '\0') {
    GetSimulatingAndBlendWeight
              (pUVar4,*(UBodySetup **)&this->field_0x10,(float *)&this->field_0x64,
               (bool *)&this->field_0x61);
  }
  return this;
}

// FInitBodiesHelper<0,TSizedDefaultAllocator<32>_> @ 1481c6280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInitBodiesHelper<0,TSizedDefaultAllocator<32>_> * __thiscall
FInitBodiesHelper<0,TSizedDefaultAllocator<32>_>::FInitBodiesHelper<0,TSizedDefaultAllocator<32>_>
          (FInitBodiesHelper<0,TSizedDefaultAllocator<32>_> *this,
          TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          UBodySetup *param_3,UPrimitiveComponent *param_4,UObject *param_5,
          FPhysScene_Chaos *param_6,FInitBodySpawnParams *param_7,
          FPhysicsAggregateReference_Chaos param_8,IPhysicsBodyInstanceOwner *param_9)

{
  int iVar1;
  UClass *pUVar2;
  USkeletalMeshComponent *pUVar3;
  
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>
            ((TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *)this,param_1,param_2,param_3,
             param_4,param_5,param_6,param_7,param_8,param_9);
  pUVar3 = *(USkeletalMeshComponent **)&this->field_0x18;
  this->field_0x60 = **(char **)&this->field_0x70 != '\0';
  if (pUVar3 != (USkeletalMeshComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_1481c631a;
  }
  pUVar3 = (USkeletalMeshComponent *)0x0;
LAB_1481c631a:
  *(USkeletalMeshComponent **)&this->field_0x68 = pUVar3;
  if (*(char *)(*(longlong *)&this->field_0x70 + 1) != '\0') {
    GetSimulatingAndBlendWeight
              (pUVar3,*(UBodySetup **)&this->field_0x10,(float *)&this->field_0x64,
               (bool *)&this->field_0x61);
  }
  return this;
}

// FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1481c6350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FBodyInstance_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2,UBodySetup *param_3,UPrimitiveComponent *param_4,FPhysScene_Chaos *param_5,
          FInitBodySpawnParams *param_6,FPhysicsAggregateReference_Chaos param_7,
          IPhysicsBodyInstanceOwner *param_8)

{
  UObject *pUVar1;
  
  if (param_4 == (UPrimitiveComponent *)0x0) {
    if (param_8 == (IPhysicsBodyInstanceOwner *)0x0) {
      pUVar1 = (UObject *)0x0;
    }
    else {
      pUVar1 = (UObject *)(**(code **)((longlong)*param_8 + 0x10))(param_8);
    }
  }
  else {
    pUVar1 = *(UObject **)&param_4->field_0xa8;
  }
  FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (this,param_1,param_2,param_3,param_4,pUVar1,param_5,param_6,param_7,param_8);
  return this;
}

// FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1481c6420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FBodyInstance_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2,UBodySetup *param_3,UPrimitiveComponent *param_4,UObject *param_5,
          FPhysScene_Chaos *param_6,FInitBodySpawnParams *param_7,
          FPhysicsAggregateReference_Chaos param_8,IPhysicsBodyInstanceOwner *param_9)

{
  int iVar1;
  UClass *pUVar2;
  USkeletalMeshComponent *pUVar3;
  
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            ((TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)this
             ,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  pUVar3 = *(USkeletalMeshComponent **)&this->field_0x18;
  this->field_0x60 = **(char **)&this->field_0x70 != '\0';
  if (pUVar3 != (USkeletalMeshComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_1481c64ba;
  }
  pUVar3 = (USkeletalMeshComponent *)0x0;
LAB_1481c64ba:
  *(USkeletalMeshComponent **)&this->field_0x68 = pUVar3;
  if (*(char *)(*(longlong *)&this->field_0x70 + 1) != '\0') {
    GetSimulatingAndBlendWeight
              (pUVar3,*(UBodySetup **)&this->field_0x10,(float *)&this->field_0x64,
               (bool *)&this->field_0x61);
  }
  return this;
}

// ~FInitBodiesHelper<1,TSizedDefaultAllocator<32>_> @ 1481c8840

void __thiscall
FInitBodiesHelper<1,TSizedDefaultAllocator<32>_>::~FInitBodiesHelper<1,TSizedDefaultAllocator<32>_>
          (FInitBodiesHelper<1,TSizedDefaultAllocator<32>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x48);
  return;
}

// ~FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1481c8870

void __thiscall
FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
~FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FInitBodiesHelper<1,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x48);
  return;
}

// ~FInitBodiesHelper<0,TSizedDefaultAllocator<32>_> @ 1481c88a0

void __thiscall
FInitBodiesHelper<0,TSizedDefaultAllocator<32>_>::~FInitBodiesHelper<0,TSizedDefaultAllocator<32>_>
          (FInitBodiesHelper<0,TSizedDefaultAllocator<32>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x48);
  return;
}

// ~FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1481c88d0

void __thiscall
FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
~FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FInitBodiesHelper<0,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x48);
  return;
}

