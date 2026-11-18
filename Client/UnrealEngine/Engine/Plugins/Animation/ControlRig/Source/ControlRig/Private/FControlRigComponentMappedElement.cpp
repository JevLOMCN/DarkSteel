// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a1ffc40

UScriptStruct * __cdecl FControlRigComponentMappedElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigComponentMappedElement.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigComponentMappedElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigComponentMappedElement,
                         (UObject *)pUVar1,L"ControlRigComponentMappedElement");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigComponentMappedElement.OuterSingleton;
}

// FControlRigComponentMappedElement @ 14a21e200

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FControlRigComponentMappedElement * __thiscall
FControlRigComponentMappedElement::FControlRigComponentMappedElement
          (FControlRigComponentMappedElement *this,FControlRigComponentMappedElement *param_1)

{
  USceneComponent *pUVar1;
  double dVar2;
  
  (this->ComponentReference)._padding_ = (param_1->ComponentReference)._padding_;
  ::FString::FString((FString *)&(this->ComponentReference)._padding_,
                     (FString *)&(param_1->ComponentReference)._padding_);
  (this->ComponentReference)._padding_ = (param_1->ComponentReference)._padding_;
  *(undefined8 *)&(this->ComponentReference).OtherActor.SoftObjectPtr =
       *(undefined8 *)&(param_1->ComponentReference).OtherActor.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->ComponentReference).OtherActor.SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->ComponentReference).OtherActor.SoftObjectPtr.field_0x8);
  this->TransformIndex = param_1->TransformIndex;
  this->TransformName = param_1->TransformName;
  this->ElementType = param_1->ElementType;
  this->ElementName = param_1->ElementName;
  this->Direction = param_1->Direction;
  dVar2 = (param_1->Offset).Rotation.XY.m128d_f64[1];
  (this->Offset).Rotation.XY.m128d_f64[0] = (param_1->Offset).Rotation.XY.m128d_f64[0];
  (this->Offset).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Offset).Rotation.ZW.m128d_f64[1];
  (this->Offset).Rotation.ZW.m128d_f64[0] = (param_1->Offset).Rotation.ZW.m128d_f64[0];
  (this->Offset).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Offset).Translation.XY.m128d_f64[1];
  (this->Offset).Translation.XY.m128d_f64[0] = (param_1->Offset).Translation.XY.m128d_f64[0];
  (this->Offset).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Offset).Translation.ZW.m128d_f64[1];
  (this->Offset).Translation.ZW.m128d_f64[0] = (param_1->Offset).Translation.ZW.m128d_f64[0];
  (this->Offset).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Offset).Scale3D.XY.m128d_f64[1];
  (this->Offset).Scale3D.XY.m128d_f64[0] = (param_1->Offset).Scale3D.XY.m128d_f64[0];
  (this->Offset).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Offset).Scale3D.ZW.m128d_f64[1];
  (this->Offset).Scale3D.ZW.m128d_f64[0] = (param_1->Offset).Scale3D.ZW.m128d_f64[0];
  (this->Offset).Scale3D.ZW.m128d_f64[1] = dVar2;
  this->Weight = param_1->Weight;
  this->Space = param_1->Space;
  pUVar1 = (param_1->SceneComponent).field0_0x0.DebugPtr;
  (this->SceneComponent).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->ElementIndex = param_1->ElementIndex;
  this->SubIndex = param_1->SubIndex;
  return this;
}

// FControlRigComponentMappedElement @ 14a21e320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FControlRigComponentMappedElement * __thiscall
FControlRigComponentMappedElement::FControlRigComponentMappedElement
          (FControlRigComponentMappedElement *this)

{
  FSoftComponentReference::FSoftComponentReference(&this->ComponentReference);
  this->TransformIndex = -1;
  (this->TransformName).ComparisonIndex = 0;
  (this->TransformName).Number = 0;
  this->ElementType = Bone;
  (this->ElementName).ComparisonIndex = 0;
  (this->ElementName).Number = 0;
  this->Direction = Output;
  *&(this->Offset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Offset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Offset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Offset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Offset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Offset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->SceneComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  this->Space = WorldSpace;
  this->Weight = 1.0;
  this->ElementIndex = -1;
  this->SubIndex = -1;
  return this;
}

// GetAnimProxyOnGameThread @ 14a25de40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FControlRigAnimInstanceProxy * __thiscall
FControlRigComponentMappedElement::GetAnimProxyOnGameThread(FControlRigComponentMappedElement *this)

{
  TObjectPtr<USceneComponent> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UAnimInstance *this_01;
  FControlRigAnimInstanceProxy *pFVar5;
  USkeletalMeshComponent *pUVar6;
  
  this_00 = &this->SceneComponent;
  if ((this_00->field0_0x0).DebugPtr != (USceneComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (((bVar3) &&
        ((USkeletalMeshComponent *)(this_00->field0_0x0).DebugPtr != (USkeletalMeshComponent *)0x0))
       && (this_01 = USkeletalMeshComponent::GetAnimInstance
                               ((USkeletalMeshComponent *)(this_00->field0_0x0).DebugPtr),
          this_01 != (UAnimInstance *)0x0)) {
      pUVar4 = UControlRigAnimInstance::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        bVar3 = IsInGameThread();
        if ((!bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                               ,0x687,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FControlRigAnimInstanceProxy *)(*pcVar2)();
          return pFVar5;
        }
        bVar3 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this_01->field_0x20);
        if (bVar3) {
          pUVar6 = UAnimInstance::GetSkelMeshComponentChecked(this_01);
          UAnimInstance::HandleExistingParallelEvaluationTask(pUVar6);
        }
        if ((FControlRigAnimInstanceProxy *)this_01->AnimInstanceProxy !=
            (FControlRigAnimInstanceProxy *)0x0) {
          return (FControlRigAnimInstanceProxy *)this_01->AnimInstanceProxy;
        }
        pFVar5 = (FControlRigAnimInstanceProxy *)
                 (**(code **)(*(longlong *)this_01 + 0x378))(this_01);
        this_01->AnimInstanceProxy = (FAnimInstanceProxy *)pFVar5;
        return pFVar5;
      }
    }
  }
  return (FControlRigAnimInstanceProxy *)0x0;
}

