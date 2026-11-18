// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraStatelessGlobals @ 1494274a0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FNiagaraStatelessGlobals * __thiscall
FNiagaraStatelessGlobals::FNiagaraStatelessGlobals(FNiagaraStatelessGlobals *this)

{
  int iVar1;
  
  (this->CameraOffsetVariable).Name.ComparisonIndex = 0;
  (this->CameraOffsetVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->CameraOffsetVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->CameraOffsetVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->ColorVariable).Name.ComparisonIndex = 0;
  (this->ColorVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->ColorVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->ColorVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->DynamicMaterialParameters0Variable).Name.ComparisonIndex = 0;
  (this->DynamicMaterialParameters0Variable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DynamicMaterialParameters0Variable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterialParameters0Variable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->DynamicMaterialParameters1Variable).Name.ComparisonIndex = 0;
  (this->DynamicMaterialParameters1Variable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DynamicMaterialParameters1Variable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterialParameters1Variable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->DynamicMaterialParameters2Variable).Name.ComparisonIndex = 0;
  (this->DynamicMaterialParameters2Variable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DynamicMaterialParameters2Variable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterialParameters2Variable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->DynamicMaterialParameters3Variable).Name.ComparisonIndex = 0;
  (this->DynamicMaterialParameters3Variable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DynamicMaterialParameters3Variable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterialParameters3Variable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->MaterialRandomVariable).Name.ComparisonIndex = 0;
  (this->MaterialRandomVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->MaterialRandomVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def)
  ;
  (this->MaterialRandomVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->MeshIndexVariable).Name.ComparisonIndex = 0;
  (this->MeshIndexVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->MeshIndexVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->MeshIndexVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->MeshOrientationVariable).Name.ComparisonIndex = 0;
  (this->MeshOrientationVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->MeshOrientationVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def
                    );
  (this->MeshOrientationVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->PositionVariable).Name.ComparisonIndex = 0;
  (this->PositionVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PositionVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->PositionVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->RibbonWidthVariable).Name.ComparisonIndex = 0;
  (this->RibbonWidthVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonWidthVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonWidthVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->ScaleVariable).Name.ComparisonIndex = 0;
  (this->ScaleVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->ScaleVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->ScaleVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->SpriteAlignmentVariable).Name.ComparisonIndex = 0;
  (this->SpriteAlignmentVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->SpriteAlignmentVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def
                    );
  (this->SpriteAlignmentVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->SpriteFacingVariable).Name.ComparisonIndex = 0;
  (this->SpriteFacingVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->SpriteFacingVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->SpriteFacingVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->SpriteSizeVariable).Name.ComparisonIndex = 0;
  (this->SpriteSizeVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->SpriteSizeVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->SpriteSizeVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->SpriteRotationVariable).Name.ComparisonIndex = 0;
  (this->SpriteRotationVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->SpriteRotationVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def)
  ;
  (this->SpriteRotationVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->SubImageIndexVariable).Name.ComparisonIndex = 0;
  (this->SubImageIndexVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->SubImageIndexVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->SubImageIndexVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->UniqueIDVariable).Name.ComparisonIndex = 0;
  (this->UniqueIDVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->UniqueIDVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->UniqueIDVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->VelocityVariable).Name.ComparisonIndex = 0;
  (this->VelocityVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->VelocityVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->VelocityVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->PreviousCameraOffsetVariable).Name.ComparisonIndex = 0;
  (this->PreviousCameraOffsetVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousCameraOffsetVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousCameraOffsetVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->PreviousMeshOrientationVariable).Name.ComparisonIndex = 0;
  (this->PreviousMeshOrientationVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousMeshOrientationVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousMeshOrientationVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->PreviousPositionVariable).Name.ComparisonIndex = 0;
  (this->PreviousPositionVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousPositionVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousPositionVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->PreviousRibbonWidthVariable).Name.ComparisonIndex = 0;
  (this->PreviousRibbonWidthVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousRibbonWidthVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousRibbonWidthVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->PreviousScaleVariable).Name.ComparisonIndex = 0;
  (this->PreviousScaleVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousScaleVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousScaleVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->PreviousSpriteAlignmentVariable).Name.ComparisonIndex = 0;
  (this->PreviousSpriteAlignmentVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousSpriteAlignmentVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousSpriteAlignmentVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->PreviousSpriteFacingVariable).Name.ComparisonIndex = 0;
  (this->PreviousSpriteFacingVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousSpriteFacingVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousSpriteFacingVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->PreviousSpriteSizeVariable).Name.ComparisonIndex = 0;
  (this->PreviousSpriteSizeVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousSpriteSizeVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousSpriteSizeVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->PreviousSpriteRotationVariable).Name.ComparisonIndex = 0;
  (this->PreviousSpriteRotationVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousSpriteRotationVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousSpriteRotationVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->PreviousVelocityVariable).Name.ComparisonIndex = 0;
  (this->PreviousVelocityVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousVelocityVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousVelocityVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  this->FeatureMask = All;
  return this;
}

// Get @ 149448400

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FNiagaraStatelessGlobals * __cdecl FNiagaraStatelessGlobals::Get(void)

{
  return &NiagaraStatelessCommon::GGlobals;
}

