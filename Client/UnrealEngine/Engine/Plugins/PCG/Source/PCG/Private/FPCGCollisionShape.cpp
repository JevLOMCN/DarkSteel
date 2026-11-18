// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// StaticStruct @ 149854930

UScriptStruct * __cdecl FPCGCollisionShape::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGCollisionShape.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGCollisionShape.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGCollisionShape,(UObject *)pUVar1,
                         L"PCGCollisionShape");
  }
  return Z_Registration_Info_UScriptStruct_FPCGCollisionShape.OuterSingleton;
}

// FPCGCollisionShape @ 14988c150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGCollisionShape * __thiscall
FPCGCollisionShape::FPCGCollisionShape
          (FPCGCollisionShape *this,FCollisionShape *param_1,FPCGContext *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Type TVar4;
  undefined8 uVar5;
  double dVar6;
  FText *pFVar7;
  FText local_18;
  
  this->ShapeType = Line;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BoxHalfExtent).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BoxHalfExtent).field0_0x0._s_0.Y = (double)uVar5;
  (this->BoxHalfExtent).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->SphereRadius = 100.0;
  this->CapsuleRadius = 100.0;
  this->CapsuleHalfHeight = 100.0;
  dVar6 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->ShapeRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ShapeRotation).Yaw = dVar6;
  (this->ShapeRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  TVar4 = param_1->ShapeType;
  if (TVar4 != Line) {
    if (TVar4 == Box) {
      fVar1 = (param_1->field1_0x4).Box.HalfExtentX;
      fVar2 = (param_1->field1_0x4).Box.HalfExtentY;
      fVar3 = (param_1->field1_0x4).Box.HalfExtentZ;
      this->ShapeType = Box;
      (this->BoxHalfExtent).field0_0x0._s_0.X = (double)fVar1;
      (this->BoxHalfExtent).field0_0x0._s_0.Y = (double)fVar2;
      (this->BoxHalfExtent).field0_0x0._s_0.Z = (double)fVar3;
    }
    else {
      if (TVar4 == Sphere) {
        this->SphereRadius = (param_1->field1_0x4).Box.HalfExtentX;
        this->ShapeType = Sphere;
        return this;
      }
      if (TVar4 == Capsule) {
        this->CapsuleRadius = (param_1->field1_0x4).Box.HalfExtentX;
        this->CapsuleHalfHeight = (param_1->field1_0x4).Box.HalfExtentY;
        this->ShapeType = Capsule;
        return this;
      }
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"PCGCollisionShape",L"InvalidFCollisionShape",
                          L"Invalid FCollisionShape shape type.");
      PCGLog::LogErrorOnGraph(pFVar7,param_2);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        return this;
      }
    }
  }
  return this;
}

// ToCollisionShape @ 1498f7870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FCollisionShape * __thiscall
FPCGCollisionShape::ToCollisionShape
          (FPCGCollisionShape *this,FCollisionShape *__return_storage_ptr__,FPCGContext *param_1)

{
  double dVar1;
  double dVar2;
  EPCGCollisionShapeType EVar3;
  bool bVar4;
  bool bVar5;
  UPackage *pUVar6;
  FText *pFVar7;
  UEnum *pUVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FText local_68;
  FText local_58;
  FText local_48;
  longlong *local_38 [2];
  FText local_28;
  FTextFormat local_18;
  
  __return_storage_ptr__->ShapeType = Line;
  EVar3 = this->ShapeType;
  if (EVar3 == Line) {
    return __return_storage_ptr__;
  }
  if (EVar3 == Box) {
    dVar1 = (this->BoxHalfExtent).field0_0x0._s_0.X;
    dVar2 = (this->BoxHalfExtent).field0_0x0._s_0.Y;
    __return_storage_ptr__->ShapeType = Box;
    (__return_storage_ptr__->field1_0x4).Box.HalfExtentX = (float)dVar1;
    dVar1 = (this->BoxHalfExtent).field0_0x0._s_0.Z;
    (__return_storage_ptr__->field1_0x4).Box.HalfExtentY = (float)dVar2;
    (__return_storage_ptr__->field1_0x4).Box.HalfExtentZ = (float)dVar1;
    return __return_storage_ptr__;
  }
  if (EVar3 == Sphere) {
    (__return_storage_ptr__->field1_0x4).Box.HalfExtentX = this->SphereRadius;
    __return_storage_ptr__->ShapeType = Sphere;
    return __return_storage_ptr__;
  }
  if (EVar3 == Capsule) {
    (__return_storage_ptr__->field1_0x4).Box.HalfExtentX = this->CapsuleRadius;
    (__return_storage_ptr__->field1_0x4).Box.HalfExtentY = this->CapsuleHalfHeight;
    __return_storage_ptr__->ShapeType = Capsule;
    return __return_storage_ptr__;
  }
  if (Z_Registration_Info_UEnum_EPCGCollisionShapeType.OuterSingleton == (UEnum *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGCollisionShapeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGCollisionShapeType,(UObject *)pUVar6,
                       L"EPCGCollisionShapeType");
    if (Z_Registration_Info_UEnum_EPCGCollisionShapeType.OuterSingleton == (UEnum *)0x0) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"PCGCollisionShape",L"UnknownEnum",L"Unknown");
      bVar5 = false;
      bVar4 = true;
      goto LAB_1498f793d;
    }
  }
  pUVar8 = StaticEnum<enum_EPCGCollisionShapeType>();
  pFVar7 = (FText *)(**(code **)(pUVar8->_padding_ + 0x2c0))(pUVar8,local_38,this->ShapeType);
  bVar5 = true;
  bVar4 = false;
LAB_1498f793d:
  pFVar7 = FText::FText(&local_28,pFVar7);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"PCGCollisionShape",L"InvalidEPCGCollisionShape",
                      L"Invalid EPCGCollisionShapeType \'{0}\'.");
  pFVar10 = FTextFormat::FTextFormat(&local_18,pFVar9,Default);
  pFVar7 = FText::Format<FText>(&local_68,pFVar10,pFVar7);
  PCGLog::LogErrorOnGraph(pFVar7,param_1);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if ((bVar4) && (local_48.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if ((bVar5) && (local_38[0] != (longlong *)0x0)) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  return __return_storage_ptr__;
}

