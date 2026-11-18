// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 249

// BakedResourcePrefix'' @ 14127f2d0

void __cdecl `dynamic_initializer_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ::FString::FString(&FBakingConfiguration::BakedResourcePrefix,L"BAKE_");
  atexit(`dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__);
  return;
}

// Bit'' @ 14127f300

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::Bit__(void)

{
  FWidgetStateBitfield::FWidgetStateBitfield(&UWidgetLockedStateRegistration::Bit);
  return;
}

// CurveGroupName'' @ 14127f320

void __cdecl `dynamic_initializer_for_'FDataflowCurveSelection::CurveGroupName__(void)

{
  ::FName::FName(&FDataflowCurveSelection::CurveGroupName,"Curves");
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 14127f340

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE__
          (void)

{
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.XY =
       UE::Math::TTransform<double>::Identity.Rotation.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.ZW =
       UE::Math::TTransform<double>::Identity.Rotation.ZW;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.XY =
       UE::Math::TTransform<double>::Identity.Translation.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.ZW =
       UE::Math::TTransform<double>::Identity.Translation.ZW;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.XY =
       UE::Math::TTransform<double>::Identity.Scale3D.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.ZW =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 14127f3a0

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE__(void)

{
  FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE = FLinearColor::Black;
  return;
}

// DEFAULT_PARAMETER_VALUE_NAME'' @ 14127f3c0

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
         DEFAULT_PARAMETER_VALUE_NAME__);
  return;
}

// Empty'' @ 14127f3e0

void __cdecl `dynamic_initializer_for_'TDS_Singleton<FDS_AuthData>::Empty__(void)

{
  FDS_AuthData::FDS_AuthData(&TDS_Singleton<FDS_AuthData>::Empty);
  atexit(`dynamic_atexit_destructor_for_'TDS_Singleton<FDS_AuthData>::Empty__);
  return;
}

// FacesGroupName'' @ 14127f410

void __cdecl `dynamic_initializer_for_'FDataflowFaceSelection::FacesGroupName__(void)

{
  ::FName::FName(&FDataflowFaceSelection::FacesGroupName,"Faces");
  return;
}

// GeometryGroupName'' @ 14127f430

void __cdecl `dynamic_initializer_for_'FDataflowGeometrySelection::GeometryGroupName__(void)

{
  ::FName::FName(&FDataflowGeometrySelection::GeometryGroupName,"Geometry");
  return;
}

// MainCharacterSwitchCompleteDelegate'' @ 14127f450

void __cdecl
`dynamic_initializer_for_'ADS_MainCharacter::MainCharacterSwitchCompleteDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'ADS_MainCharacter::MainCharacterSwitchCompleteDelegate__);
  return;
}

// MainPlayerSpawnFinishedEventDelegate'' @ 14127f470

void __cdecl
`dynamic_initializer_for_'ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate__);
  return;
}

// MaterialGroupName'' @ 14127f490

void __cdecl `dynamic_initializer_for_'FDataflowMaterialSelection::MaterialGroupName__(void)

{
  ::FName::FName(&FDataflowMaterialSelection::MaterialGroupName,"Material");
  return;
}

// MeshComponentName'' @ 14127f4b0

void __cdecl `dynamic_initializer_for_'ADS_EntityActorBase::MeshComponentName__(void)

{
  ::FName::FName(&ADS_EntityActorBase::MeshComponentName,L"CharacterMesh0");
  return;
}

// SimulationTag'' @ 14127f4d0

void __cdecl `dynamic_initializer_for_'UDataflow::SimulationTag__(void)

{
  ::FString::FString(&UDataflow::SimulationTag,L"DataflowSimulationTag");
  atexit(`dynamic_atexit_destructor_for_'UDataflow::SimulationTag__);
  return;
}

// StateName'' @ 14127f500

void __cdecl `dynamic_initializer_for_'UWidgetDisabledStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetDisabledStateRegistration::StateName,"Disabled");
  return;
}

// StateName'' @ 14127f520

void __cdecl `dynamic_initializer_for_'UWidgetHoveredStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetHoveredStateRegistration::StateName,"Hovered");
  return;
}

// StateName'' @ 14127f540

void __cdecl `dynamic_initializer_for_'UWidgetLockedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetLockedStateRegistration::StateName,"Locked");
  return;
}

// StateName'' @ 14127f560

void __cdecl `dynamic_initializer_for_'UWidgetPressedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetPressedStateRegistration::StateName,"Pressed");
  return;
}

// StateName'' @ 14127f580

void __cdecl `dynamic_initializer_for_'UWidgetSelectedStateRegistration::StateName__(void)

{
  ::FName::FName(&UWidgetSelectedStateRegistration::StateName,"Selected");
  return;
}

// TransformGroupName'' @ 14127f5a0

void __cdecl `dynamic_initializer_for_'FDataflowTransformSelection::TransformGroupName__(void)

{
  ::FName::FName(&FDataflowTransformSelection::TransformGroupName,"Transform");
  return;
}

// TypeName'' @ 14127f5c0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<signed_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<signed_char>::TypeName,L"int8");
  return;
}

// TypeName'' @ 14127f5e0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_char>::TypeName,L"uint8");
  return;
}

// TypeName'' @ 14127f600

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<short>::TypeName,L"int16");
  return;
}

// TypeName'' @ 14127f620

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_short>::TypeName,L"uint16");
  return;
}

// TypeName'' @ 14127f640

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<int>::TypeName,L"int32");
  return;
}

// TypeName'' @ 14127f660

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_int>::TypeName,L"uint32");
  return;
}

// TypeName'' @ 14127f680

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<float>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<float>::TypeName,L"float");
  return;
}

// TypeName'' @ 14127f6a0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<double>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<double>::TypeName,L"double");
  return;
}

// TypeName'' @ 14127f6c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName,L"FIntPoint");
  return;
}

// TypeName'' @ 14127f6e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName,L"FIntVector3");
  return;
}

// TypeName'' @ 14127f700

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName,L"FIntVector4");
  return;
}

// TypeName'' @ 14127f720

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName,L"TObjectPtr<UObject>");
  return;
}

// TypeName'' @ 14127f740

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName,L"FQuat4f");
  return;
}

// TypeName'' @ 14127f760

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName,L"FQuat");
  return;
}

// TypeName'' @ 14127f780

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName,L"FRotator");
  return;
}

// TypeName'' @ 14127f7a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName,L"FTransform");
  return;
}

// TypeName'' @ 14127f7c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName,L"FVector2f");
  return;
}

// TypeName'' @ 14127f7e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName,L"FVector2D");
  return;
}

// TypeName'' @ 14127f800

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName,L"FVector4f");
  return;
}

// TypeName'' @ 14127f820

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName,L"FVector4");
  return;
}

// TypeName'' @ 14127f840

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName,L"FVector3f");
  return;
}

// TypeName'' @ 14127f860

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName,L"FVector");
  return;
}

// TypeName'' @ 14127f880

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName,
                 L"FDataflowCurveSelection");
  return;
}

// TypeName'' @ 14127f8a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName,
                 L"FDataflowFaceSelection");
  return;
}

// TypeName'' @ 14127f8c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName,
                 L"FDataflowGeometrySelection");
  return;
}

// TypeName'' @ 14127f8e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName,
                 L"FDataflowMaterialSelection");
  return;
}

// TypeName'' @ 14127f900

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName,
                 L"FDataflowTransformSelection");
  return;
}

// TypeName'' @ 14127f920

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName,
                 L"FDataflowVertexSelection");
  return;
}

// TypeName'' @ 14127f940

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FLinearColor>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FLinearColor>::TypeName,L"FLinearColor");
  return;
}

// TypeName'' @ 14127f960

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<int8>");
  return;
}

// TypeName'' @ 14127f980

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint8>");
  return;
}

// TypeName'' @ 14127f9a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int16>");
  return;
}

// TypeName'' @ 14127f9c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint16>");
  return;
}

// TypeName'' @ 14127f9e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int32>");
  return;
}

// TypeName'' @ 14127fa00

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint32>");
  return;
}

// TypeName'' @ 14127fa20

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<float>");
  return;
}

// TypeName'' @ 14127fa40

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<double>");
  return;
}

// TypeName'' @ 14127fa60

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntPoint>");
  return;
}

// TypeName'' @ 14127fa80

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector3>");
  return;
}

// TypeName'' @ 14127faa0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector4>");
  return;
}

// TypeName'' @ 14127fac0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat4f>");
  return;
}

// TypeName'' @ 14127fae0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat>");
  return;
}

// TypeName'' @ 14127fb00

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FRotator>");
  return;
}

// TypeName'' @ 14127fb20

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2f>");
  return;
}

// TypeName'' @ 14127fb40

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2D>");
  return;
}

// TypeName'' @ 14127fb60

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4f>");
  return;
}

// TypeName'' @ 14127fb80

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4>");
  return;
}

// TypeName'' @ 14127fba0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector3f>");
  return;
}

// TypeName'' @ 14127fbc0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector>");
  return;
}

// TypeName'' @ 14127fbe0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<FLinearColor>");
  return;
}

// TypeName'' @ 14127fc00

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FName>");
  return;
}

// TypeName'' @ 14127fc20

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FString>");
  return;
}

// TypeName'' @ 14127fc40

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int64>");
  return;
}

// TypeName'' @ 14127fc60

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint64>");
  return;
}

// TypeName'' @ 14127fc80

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FName>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FName>::TypeName,L"FName");
  return;
}

// TypeName'' @ 14127fca0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FString>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FString>::TypeName,L"FString");
  return;
}

// TypeName'' @ 14127fcc0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FText>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FText>::TypeName,L"FText");
  return;
}

// TypeName'' @ 14127fce0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<__int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<__int64>::TypeName,L"int64");
  return;
}

// TypeName'' @ 14127fd00

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned___int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned___int64>::TypeName,L"uint64");
  return;
}

// TypeName'' @ 14127fd20

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<bool>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<bool>::TypeName,L"bool");
  return;
}

// VerticesGroupName'' @ 14127fd40

void __cdecl `dynamic_initializer_for_'FDataflowVertexSelection::VerticesGroupName__(void)

{
  ::FName::FName(&FDataflowVertexSelection::VerticesGroupName,"Vertices");
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 14127fd60

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_DYNAMIC_LAND'' @ 14127fd80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_DYNAMIC_LAND__(void)

{
  FName::FName(&COLLISION_PROFILE_DYNAMIC_LAND,"DynamicLand");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_HANDLING_NPC'' @ 14127fda0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_HANDLING_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_HANDLING_NPC,"HandlingNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_IGNORE_LAND_CHECK'' @ 14127fdc0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_IGNORE_LAND_CHECK__(void)

{
  FName::FName(&COLLISION_PROFILE_IGNORE_LAND_CHECK,"IgnoreLandCheck");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_LEVEL_TRIGGER'' @ 14127fde0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_LEVEL_TRIGGER__(void)

{
  FName::FName(&COLLISION_PROFILE_LEVEL_TRIGGER,"LevelTrigger");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NET_PLAYER'' @ 14127fe00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NET_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_NET_PLAYER,"NetPlayer");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NOCOLLISION'' @ 14127fe20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NOCOLLISION,"NoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC'' @ 14127fe40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC,"Npc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_NPC_NOCOLLISION'' @ 14127fe60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_NPC_NOCOLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_NPC_NOCOLLISION,"NpcNoCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PHYSICS_NPC'' @ 14127fe80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PHYSICS_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PHYSICS_NPC,"PhysicsNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER'' @ 14127fea0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER,"Player");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_COLLISION'' @ 14127fec0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_COLLISION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,"PlayerIgnoreCollision");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC'' @ 14127fee0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_IGNORE_PHYSIC_NPC,"PlayerIngorePhysicNpc");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_INTERACTION'' @ 14127ff00

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_INTERACTION__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_INTERACTION,"PlayerInteraction");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PLAYER_ONLY'' @ 14127ff20

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PLAYER_ONLY__(void)

{
  FName::FName(&COLLISION_PROFILE_PLAYER_ONLY,"PlayerOnly");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_PROP'' @ 14127ff40

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_PROP__(void)

{
  FName::FName(&COLLISION_PROFILE_PROP,"Prop");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR'' @ 14127ff60

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR,"Stair");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_STAIR_SLIDE'' @ 14127ff80

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_STAIR_SLIDE__(void)

{
  FName::FName(&COLLISION_PROFILE_STAIR_SLIDE,"StairSlide");
  return;
}

// `dynamic_initializer_for_'COLLISION_PROFILE_TRANSPORT'' @ 14127ffa0

void __cdecl _dynamic_initializer_for__COLLISION_PROFILE_TRANSPORT__(void)

{
  FName::FName(&COLLISION_PROFILE_TRANSPORT,"Transport");
  return;
}

// `dynamic_initializer_for_'CapsuleComponentName'' @ 14127ffc0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__CapsuleComponentName__(void)

{
  ::FName::FName(&CapsuleComponentName,L"CollisionCylinder");
  return;
}

// `dynamic_initializer_for_'CharSortingTypeList'' @ 14127ffe0

void __cdecl _dynamic_initializer_for__CharSortingTypeList__(void)

{
  undefined2 local_res8;
  undefined1 local_resa;
  
  local_res8 = 0x605;
  local_resa = 7;
  CharSortingTypeList.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,3,0,&CharSortingTypeList.AllocatorInstance,3,&CharSortingTypeList.ArrayMax);
  memcpy(CharSortingTypeList.AllocatorInstance.Data,&local_res8,3);
  atexit(_dynamic_atexit_destructor_for__CharSortingTypeList__);
  return;
}

// `dynamic_initializer_for_'DS_CVarEntityActorAnimAlwaysTickDist'' @ 141280060

void __cdecl _dynamic_initializer_for__DS_CVarEntityActorAnimAlwaysTickDist__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&DS_CVarEntityActorAnimAlwaysTickDist,L"DS.EntityAnimAlwaysTickDist",
             &sEntityActorAnimAlwaysTickDist,L"Always tick distance from camera.",0);
  atexit(_dynamic_atexit_destructor_for__DS_CVarEntityActorAnimAlwaysTickDist__);
  return;
}

// `dynamic_initializer_for_'DS_CVarEntityActorShadowDist'' @ 1412800b0

void __cdecl _dynamic_initializer_for__DS_CVarEntityActorShadowDist__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&DS_CVarEntityActorShadowDist,L"DS.EntityShadowDist",&sEntityActorShadowDist,
             L"Shadow distance from camera.",0);
  atexit(_dynamic_atexit_destructor_for__DS_CVarEntityActorShadowDist__);
  return;
}

// `dynamic_initializer_for_'EquipCharSelectSortingTypeList'' @ 141280100

void __cdecl _dynamic_initializer_for__EquipCharSelectSortingTypeList__(void)

{
  undefined2 local_res8;
  undefined1 local_resa;
  
  local_res8 = 0xc0b;
  local_resa = 0xd;
  EquipCharSelectSortingTypeList.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,3,0,&EquipCharSelectSortingTypeList.AllocatorInstance,3,
             &EquipCharSelectSortingTypeList.ArrayMax);
  memcpy(EquipCharSelectSortingTypeList.AllocatorInstance.Data,&local_res8,3);
  atexit(_dynamic_atexit_destructor_for__EquipCharSelectSortingTypeList__);
  return;
}

// `dynamic_initializer_for_'EquipParamTypes'' @ 141280180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ds_parts::_dynamic_initializer_for__EquipParamTypes__(void)

{
  undefined1 auStackY_58 [32];
  undefined4 local_18;
  undefined2 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_58;
  local_18 = 0x5040302;
  local_14 = 0x706;
  EquipParamTypes.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,6,0,&EquipParamTypes.AllocatorInstance,6,&EquipParamTypes.ArrayMax);
  memcpy(EquipParamTypes.AllocatorInstance.Data,&local_18,6);
  atexit(_dynamic_atexit_destructor_for__EquipParamTypes__);
  return;
}

// `dynamic_initializer_for_'ErrorNamespace'' @ 141280220

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 141280250

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'MainPlayerProfileName'' @ 141280270

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__MainPlayerProfileName__(void)

{
  ::FName::FName(&MainPlayerProfileName,L"Player");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 141280290

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'MoverComponentName'' @ 1412802b0

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__MoverComponentName__(void)

{
  ::FName::FName(&MoverComponentName,L"Mover");
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 1412802d0

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 1412802f0

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 141280310

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 141280330

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 141280350

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 141280370

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 141280390

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 1412803b0

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'NetPlayerProfileName'' @ 1412803d0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NetPlayerProfileName__(void)

{
  ::FName::FName(&NetPlayerProfileName,L"NetPlayer");
  return;
}

// `dynamic_initializer_for_'NpcProfileName'' @ 1412803f0

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__NpcProfileName__(void)

{
  ::FName::FName(&NpcProfileName,L"Monster");
  return;
}

// `dynamic_initializer_for_'PropProfileName'' @ 141280410

void __cdecl DS_CollisionProfileNames::_dynamic_initializer_for__PropProfileName__(void)

{
  ::FName::FName(&PropProfileName,L"Prop");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 141280430

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshComponentName'' @ 141280450

void __cdecl DS_EntityComponentNames::_dynamic_initializer_for__SkeletalMeshComponentName__(void)

{
  ::FName::FName(&SkeletalMeshComponentName,L"CharacterMesh0");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 141280470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 141280500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 141280590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 141280620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1412806b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 141280740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1412807d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 141280860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1412808f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 141280980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 141280a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HandleViewParallelForImp'' @ 141280aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HandleViewParallelForImp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HandleViewParallelForImp ==
      (FThreadSafeStaticStat<FStat_STAT_HandleViewParallelForImp>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HandleViewParallelForImp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleViewParallelForImp,*pFVar1,
               L"HandleViewParallelForImp","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleViewParallelForImp'' @ 141280b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticleViewParallelForImp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleViewParallelForImp ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleViewParallelForImp>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleViewParallelForImp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleViewParallelForImp,*pFVar1,
               L"ParticleViewParallelForImp","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesParallelFor'' @ 141280bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesParallelFor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesParallelFor ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesParallelFor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesParallelFor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesParallelFor,*pFVar1,
               L"ParticlesParallelFor","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSequentialFor'' @ 141280c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesSequentialFor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesSequentialFor ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesSequentialFor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesSequentialFor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesSequentialFor,*pFVar1,
               L"ParticlesSequentialFor","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 141280ce0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// GetFullNameForCastLogError<APawn> @ 14bc26df0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __cdecl GetFullNameForCastLogError<APawn>(FString *__return_storage_ptr__,APawn *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<ADS_MainCharacter> @ 14bc26e20

FString * __cdecl GetTypeName<ADS_MainCharacter>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// NewObject<UBoxComponent> @ 14bc26e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBoxComponent * __cdecl NewObject<UBoxComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UBoxComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UBoxComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UBoxComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UBoxComponent> @ 14bc26f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBoxComponent * __cdecl
NewObject<UBoxComponent>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UBoxComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UBoxComponent_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UBoxComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UCapsuleComponent> @ 14bc27000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCapsuleComponent * __cdecl NewObject<UCapsuleComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UCapsuleComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCapsuleComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UCapsuleComponent> @ 14bc270a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCapsuleComponent * __cdecl
NewObject<UCapsuleComponent>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UCapsuleComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UCapsuleComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_AirWalkAbilityContext> @ 14bc271a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_AirWalkAbilityContext * __cdecl NewObject<UDS_AirWalkAbilityContext>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_AirWalkAbilityContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_AirWalkAbilityContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_AirWalkAbilityContext *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_CameraStateBase> @ 14bc27240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CameraStateBase * __cdecl NewObject<UDS_CameraStateBase>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CameraStateBase *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CameraStateBase_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CameraStateBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_CameraStateFreeView> @ 14bc272e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CameraStateFreeView * __cdecl NewObject<UDS_CameraStateFreeView>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CameraStateFreeView *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CameraStateFreeView_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CameraStateFreeView *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_CameraStateLockFront> @ 14bc27380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CameraStateLockFront * __cdecl NewObject<UDS_CameraStateLockFront>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CameraStateLockFront *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CameraStateLockFront_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CameraStateLockFront *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_CameraStateLockOnTarget> @ 14bc27420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CameraStateLockOnTarget * __cdecl NewObject<UDS_CameraStateLockOnTarget>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CameraStateLockOnTarget *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CameraStateLockOnTarget_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CameraStateLockOnTarget *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_CameraStateNpcBoss> @ 14bc274c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CameraStateNpcBoss * __cdecl NewObject<UDS_CameraStateNpcBoss>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CameraStateNpcBoss *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CameraStateNpcBoss_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CameraStateNpcBoss *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_CharacterUIEvent> @ 14bc27560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_CharacterUIEvent * __cdecl NewObject<UDS_CharacterUIEvent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_CharacterUIEvent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_CharacterUIEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_CharacterUIEvent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_ColliderComponent> @ 14bc27600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ColliderComponent * __cdecl NewObject<UDS_ColliderComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ColliderComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ColliderComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ColliderComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_ColliderCore> @ 14bc276a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ColliderCore * __cdecl NewObject<UDS_ColliderCore>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_ColliderCore *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ColliderCore_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_ColliderCore *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_EntityActorMovementCore> @ 14bc27740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_EntityActorMovementCore * __cdecl NewObject<UDS_EntityActorMovementCore>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_EntityActorMovementCore *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_EntityActorMovementCore_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_EntityActorMovementCore *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_HitAbilityContext> @ 14bc277e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_HitAbilityContext * __cdecl NewObject<UDS_HitAbilityContext>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_HitAbilityContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_HitAbilityContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_HitAbilityContext *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_LevelTriggerComponentBase> @ 14bc27880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_LevelTriggerComponentBase * __cdecl NewObject<UDS_LevelTriggerComponentBase>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_LevelTriggerComponentBase *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_LevelTriggerComponentBase_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_LevelTriggerComponentBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_MainPlayerMovementCore> @ 14bc27920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_MainPlayerMovementCore * __cdecl NewObject<UDS_MainPlayerMovementCore>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_MainPlayerMovementCore *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_MainPlayerMovementCore_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_MainPlayerMovementCore *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_MultiHitCapsuleComponent> @ 14bc279c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_MultiHitCapsuleComponent * __cdecl
NewObject<UDS_MultiHitCapsuleComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UDS_MultiHitCapsuleComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_MultiHitCapsuleComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UDS_MultiHitCapsuleComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_MultiHitSphereComponent> @ 14bc27ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_MultiHitSphereComponent * __cdecl
NewObject<UDS_MultiHitSphereComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UDS_MultiHitSphereComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_MultiHitSphereComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UDS_MultiHitSphereComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_PartsComponent> @ 14bc27ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PartsComponent * __cdecl
NewObject<UDS_PartsComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UDS_PartsComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDS_PartsComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UDS_PartsComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_PartsSystemCore_SKM> @ 14bc27c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PartsSystemCore_SKM * __cdecl NewObject<UDS_PartsSystemCore_SKM>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_PartsSystemCore_SKM *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_PartsSystemCore_SKM_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_PartsSystemCore_SKM *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_SyncRecvComponent> @ 14bc27d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_SyncRecvComponent * __cdecl NewObject<UDS_SyncRecvComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_SyncRecvComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_SyncRecvComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_SyncRecvComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_SyncSendComponent> @ 14bc27dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_SyncSendComponent * __cdecl NewObject<UDS_SyncSendComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_SyncSendComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_SyncSendComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_SyncSendComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_TriggerComponent> @ 14bc27e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_TriggerComponent * __cdecl NewObject<UDS_TriggerComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_TriggerComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_TriggerComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_TriggerComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDS_TriggerCore> @ 14bc27f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_TriggerCore * __cdecl NewObject<UDS_TriggerCore>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_TriggerCore *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_TriggerCore_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_TriggerCore *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USphereComponent> @ 14bc27fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USphereComponent * __cdecl NewObject<USphereComponent>(UObject *param_1)

{
  UClass *pUVar1;
  USphereComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_USphereComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USphereComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USphereComponent> @ 14bc28050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USphereComponent * __cdecl
NewObject<USphereComponent>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USphereComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_USphereComponent_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USphereComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UWN_AbilityContext> @ 14bc28150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWN_AbilityContext * __cdecl NewObject<UWN_AbilityContext>(UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UWN_AbilityContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UWN_AbilityContext *)pUVar2;
}

// get<1,TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>_const_&> @ 14bc29720

TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr> * __cdecl
get<1,TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>_const_&>
          (TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_> *param_1)

{
  return (TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr> *)&param_1->field_0x8;
}

// get<0,TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>_const_&> @ 14bc29730

ulong64 * __cdecl
get<0,TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>_const_&>
          (TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_> *param_1)

{
  return (ulong64 *)param_1;
}

// ~TFunction_OwnedObject<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::__l2::<lambda_1>,0,0> @ 14bc2b710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_ADS_EntityActorBase::OnDetectedByPlayerSkill_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// `vcall'{1904,{flat}}'_}' @ 14bc2b784

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl ADS_PartsSystemActor::`vcall'{1904,{flat}}' }' */

void __thiscall ADS_PartsSystemActor::_vcall__1904__flat______(ADS_PartsSystemActor *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc2b787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x770))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 14bc2b794

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* [thunk]: __cdecl FDS_EntityBase::`vcall'{152,{flat}}' }' */

void __thiscall FDS_EntityBase::_vcall__152__flat______(FDS_EntityBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc2b797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `scalar_deleting_destructor' @ 14bc2b7b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2b7e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2b810

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned_int,UWN_MCS_COICore_*,enum_EWN_MCS_MeshUpdateResult),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2b840

void * __thiscall
IBaseDelegateInstance<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>,USceneComponent_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>,USceneComponent_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2b870

void * __thiscall
IBaseDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2b8a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2b8d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_EntityBase,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2b900

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_EntityActorBase,void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_EntityActorBase,void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2b930

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_EntityActorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_EntityActorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2b960

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_EntityActorBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_EntityActorBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2b990

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_EntityActorBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,enum_EDS_EntityHiddenPolicy,bool>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2b9c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2b9f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2ba30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2ba70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2baa0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(unsigned_int,UWN_MCS_COICore_*,enum_EWN_MCS_MeshUpdateResult),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bad0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(FName),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(FName),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bb00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bb30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bb60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_MainCharacter,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bb90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ADS_PartsSystemActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ADS_PartsSystemActor,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bbc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ActorAttachedWidgetComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ActorAttachedWidgetComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bbf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CharacterTrajectoryComponent,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CharacterTrajectoryComponent,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bc20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ColliderComponent,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ColliderComponent,void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bc50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ColliderComponent,void___cdecl(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ColliderComponent,void___cdecl(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bc80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_ColliderComponent,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_ColliderComponent,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bcb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_CustomizableSkeletalComponent,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_CustomizableSkeletalComponent,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bce0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MainCameraComponent,void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bd10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MainCameraComponent,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_MainCameraComponent,void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bd40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MainCameraComponent,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_MainCameraComponent,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bd70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MainCameraComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_MainCameraComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bda0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MainCameraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_MainCameraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bdd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MainCharacterCollisionComponent,void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_MainCharacterCollisionComponent,void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2be00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MainPlayerMovementComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_MainPlayerMovementComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2be30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MainPlayerMovementCore,void___cdecl(double_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_MainPlayerMovementCore,void___cdecl(double_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2be60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MainPlayerMovementCore,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_MainPlayerMovementCore,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2be90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_MainPlayerMovementCore,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_MainPlayerMovementCore,void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bec0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_NpcBossCameraComponent,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_NpcBossCameraComponent,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bef0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_PartsComponent,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_PartsComponent,void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bf20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_PartsSystemControl,void___cdecl(TObjectPtr<UWN_CS_CharacterCore>,USceneComponent_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_PartsSystemControl,void___cdecl(TObjectPtr<UWN_CS_CharacterCore>,USceneComponent_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bf50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_PartsSystemControl,void___cdecl(void),FDefaultDelegateUserPolicy,AActor_*,FDS_ResourcePresetTableRow_const_*,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_PartsSystemControl,void___cdecl(void),FDefaultDelegateUserPolicy,AActor_*,FDS_ResourcePresetTableRow_const_*,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bf90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_PartsSystemControl,void___cdecl(void),FDefaultDelegateUserPolicy,FDS_ResourcePresetTableRow_const_*,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_PartsSystemControl,void___cdecl(void),FDefaultDelegateUserPolicy,FDS_ResourcePresetTableRow_const_*,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2bfd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDS_PartsSystemControl,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDS_PartsSystemControl,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c030

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c070

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c0b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c0e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c110

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned_int,UWN_MCS_COICore_*,enum_EWN_MCS_MeshUpdateResult),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c140

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>,USceneComponent_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>,USceneComponent_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c170

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c1a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c1d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,AActor_*,FDS_ResourcePresetTableRow_const_*,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,AActor_*,FDS_ResourcePresetTableRow_const_*,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x18);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c210

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FDS_ResourcePresetTableRow_const_*,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FDS_ResourcePresetTableRow_const_*,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c250

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,FWN_EndOfRefs>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,FWN_EndOfRefs>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x18);
  DestructItems<FSoftObjectPath,int>
            (*(FSoftObjectPath **)&this->Payload,*(int *)&(this->Payload).field_0x8);
  if (*(void **)&this->Payload != (void *)0x0) {
    FMemory::Free(*(void **)&this->Payload);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c2b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c2e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,enum_EDS_EntityHiddenPolicy,bool>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14bc2c350

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDS_ViewModelContext_Entity,void_(__cdecl*)(FDS_ViewModelContext_*),1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDS_ViewModelContext_Entity,void_(__cdecl*)(FDS_ViewModelContext_*),1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// CaculateViewFrustum @ 14bc2efb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FConvexVolume * __cdecl
CaculateViewFrustum(FConvexVolume *__return_storage_ptr__,FMinimalViewInfo *param_1)

{
  double dVar1;
  ForElementType<UE::Math::TPlane<double>_> FVar2;
  double dVar3;
  double dVar4;
  TVector<double> *pTVar5;
  ForElementType<UE::Math::TPlane<double>_> FVar6;
  float fVar7;
  float fVar8;
  undefined1 auStackY_218 [32];
  TRotator<double> local_1d8;
  TVector<double> local_1b8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  void *local_78;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  fVar8 = param_1->FOV * __real_3f000000;
  fVar7 = tanf(fVar8 * __real_3c8efa35);
  fVar7 = atanf(fVar7 * param_1->AspectRatio);
  local_1d8.Yaw = (double)fVar8;
  local_1d8.Pitch = 0.0;
  fVar7 = fVar7 * __real_42652ee0;
  local_1d8.Roll = 0.0;
  pTVar5 = UE::Math::TRotator<double>::RotateVector
                     (&local_1d8,&local_1b8,&UE::Math::TVector<double>::RightVector);
  UE::Math::TRotator<double>::RotateVector
            (&param_1->Rotation,(TVector<double> *)&local_198._s_0,pTVar5);
  local_1d8.Pitch = 0.0;
  local_1d8.Yaw = (double)(float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
  local_1d8.Roll = 0.0;
  pTVar5 = UE::Math::TRotator<double>::RotateVector
                     (&local_1d8,&local_1b8,&UE::Math::TVector<double>::LeftVector);
  UE::Math::TRotator<double>::RotateVector
            (&param_1->Rotation,(TVector<double> *)&local_180._s_0,pTVar5);
  local_1d8.Pitch = (double)fVar7;
  local_1d8.Yaw = 0.0;
  local_1d8.Roll = 0.0;
  pTVar5 = UE::Math::TRotator<double>::RotateVector
                     (&local_1d8,&local_1b8,&UE::Math::TVector<double>::UpVector);
  UE::Math::TRotator<double>::RotateVector
            (&param_1->Rotation,(TVector<double> *)&local_168._s_0,pTVar5);
  local_1d8.Pitch = (double)(float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
  local_1d8.Yaw = 0.0;
  local_1d8.Roll = 0.0;
  pTVar5 = UE::Math::TRotator<double>::RotateVector
                     (&local_1d8,&local_1b8,&UE::Math::TVector<double>::DownVector);
  UE::Math::TRotator<double>::RotateVector
            (&param_1->Rotation,(TVector<double> *)&local_150._s_0,pTVar5);
  local_64 = 6;
  dVar3 = (param_1->Location).field0_0x0._s_0.X;
  dVar4 = (param_1->Location).field0_0x0._s_0.Y;
  local_78 = (void *)0x0;
  dVar1 = (param_1->Location).field0_0x0._s_0.Z;
  local_138 = local_198._s_0.X;
  dStack_130 = local_198._s_0.Y;
  local_128 = local_198._s_0.Z;
  (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  local_118 = local_180._s_0.X;
  dStack_110 = local_180._s_0.Y;
  dStack_120 = local_198._s_0.Y * dVar4 + local_198._s_0.X * dVar3 + local_198._s_0.Z * dVar1;
  local_68 = 4;
  local_108 = local_180._s_0.Z;
  (__return_storage_ptr__->Planes).ArrayNum = 4;
  local_f8 = local_168._s_0.X;
  dStack_f0 = local_168._s_0.Y;
  dStack_100 = local_180._s_0.Y * dVar4 + local_180._s_0.X * dVar3 + local_180._s_0.Z * dVar1;
  local_e8 = local_168._s_0.Z;
  local_d8 = local_150._s_0.X;
  dStack_d0 = local_150._s_0.Y;
  dStack_e0 = local_168._s_0.Y * dVar4 + local_168._s_0.X * dVar3 + local_168._s_0.Z * dVar1;
  local_c8 = local_150._s_0.Z;
  dStack_c0 = local_150._s_0.X * dVar3 + local_150._s_0.Y * dVar4 + local_150._s_0.Z * dVar1;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
            (0x20,0x10,4,0,(ForElementType<UE::Math::TPlane<double>_> *)__return_storage_ptr__,4,
             &(__return_storage_ptr__->Planes).ArrayMax);
  FVar2 = (__return_storage_ptr__->Planes).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<UE::Math::TPlane<double>_>)__return_storage_ptr__;
  if (FVar2 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar6 = FVar2;
  }
  *(double *)FVar6 = local_138;
  *(double *)((longlong)FVar6 + 8) = dStack_130;
  *(double *)((longlong)FVar6 + 0x10) = local_128;
  *(double *)((longlong)FVar6 + 0x18) = dStack_120;
  *(double *)((longlong)FVar6 + 0x20) = local_118;
  *(double *)((longlong)FVar6 + 0x28) = dStack_110;
  *(double *)((longlong)FVar6 + 0x30) = local_108;
  *(double *)((longlong)FVar6 + 0x38) = dStack_100;
  *(double *)((longlong)FVar6 + 0x40) = local_f8;
  *(double *)((longlong)FVar6 + 0x48) = dStack_f0;
  *(double *)((longlong)FVar6 + 0x50) = local_e8;
  *(double *)((longlong)FVar6 + 0x58) = dStack_e0;
  *(double *)((longlong)FVar6 + 0x60) = local_d8;
  *(double *)((longlong)FVar6 + 0x68) = dStack_d0;
  *(double *)((longlong)FVar6 + 0x70) = local_c8;
  *(double *)((longlong)FVar6 + 0x78) = dStack_c0;
  (__return_storage_ptr__->PermutedPlanes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (__return_storage_ptr__->PermutedPlanes).ArrayNum = 0;
  (__return_storage_ptr__->PermutedPlanes).ArrayMax = 8;
  FConvexVolume::Init(__return_storage_ptr__);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return __return_storage_ptr__;
}

// BakedResourcePrefix'' @ 15043e640

void __cdecl `dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data;
  if (FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// DEFAULT_PARAMETER_VALUE_NAME'' @ 15043e660

void __cdecl
`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
DEFAULT_PARAMETER_VALUE_NAME__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.
               AllocatorInstance.Data;
  if (FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.AllocatorInstance.
      Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Empty'' @ 15043e680

void __cdecl `dynamic_atexit_destructor_for_'TDS_Singleton<FDS_AuthData>::Empty__(void)

{
  FDS_AuthData::~FDS_AuthData(&TDS_Singleton<FDS_AuthData>::Empty);
  return;
}

// MainCharacterSwitchCompleteDelegate'' @ 15043e6a0

void __cdecl
`dynamic_atexit_destructor_for_'ADS_MainCharacter::MainCharacterSwitchCompleteDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             ADS_MainCharacter::MainCharacterSwitchCompleteDelegate._8_8_,
             ADS_MainCharacter::MainCharacterSwitchCompleteDelegate._16_4_);
  if (ADS_MainCharacter::MainCharacterSwitchCompleteDelegate._8_8_ != 0) {
    FMemory::Free((void *)ADS_MainCharacter::MainCharacterSwitchCompleteDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate
            );
  return;
}

// MainPlayerSpawnFinishedEventDelegate'' @ 15043e6e0

void __cdecl
`dynamic_atexit_destructor_for_'ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate._8_8_,
             ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate._16_4_);
  if (ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate._8_8_ != 0) {
    FMemory::Free((void *)ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate);
  return;
}

// SimulationTag'' @ 15043e720

void __cdecl `dynamic_atexit_destructor_for_'UDataflow::SimulationTag__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UDataflow::SimulationTag.Data.AllocatorInstance.Data;
  if (UDataflow::SimulationTag.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UDataflow::SimulationTag.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CharSortingTypeList'' @ 15043e740

void __cdecl _dynamic_atexit_destructor_for__CharSortingTypeList__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CharSortingTypeList.AllocatorInstance.Data;
  if (CharSortingTypeList.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CharSortingTypeList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DS_CVarEntityActorAnimAlwaysTickDist'' @ 15043e760

void __cdecl _dynamic_atexit_destructor_for__DS_CVarEntityActorAnimAlwaysTickDist__(void)

{
  DS_CVarEntityActorAnimAlwaysTickDist._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&DS_CVarEntityActorAnimAlwaysTickDist);
  return;
}

// `dynamic_atexit_destructor_for_'DS_CVarEntityActorShadowDist'' @ 15043e780

void __cdecl _dynamic_atexit_destructor_for__DS_CVarEntityActorShadowDist__(void)

{
  DS_CVarEntityActorShadowDist._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DS_CVarEntityActorShadowDist);
  return;
}

// `dynamic_atexit_destructor_for_'EquipCharSelectSortingTypeList'' @ 15043e7a0

void __cdecl _dynamic_atexit_destructor_for__EquipCharSelectSortingTypeList__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EquipCharSelectSortingTypeList.AllocatorInstance.Data;
  if (EquipCharSelectSortingTypeList.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EquipCharSelectSortingTypeList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EquipParamTypes'' @ 15043e7c0

void __cdecl ds_parts::_dynamic_atexit_destructor_for__EquipParamTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EquipParamTypes.AllocatorInstance.Data;
  if (EquipParamTypes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EquipParamTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 15043e7e0

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'emptyHitCollisions'' @ 15043e800

void __cdecl
`UDS_MovementCore::GetHitCollisionCapsuleList'::__l2::
_dynamic_atexit_destructor_for__emptyHitCollisions__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = emptyHitCollisions.AllocatorInstance.Data;
  if (emptyHitCollisions.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (emptyHitCollisions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'emptyHits'' @ 15043e820

void __cdecl
`UDS_MovementCore::GetHitCollisionList'::__l2::_dynamic_atexit_destructor_for__emptyHits__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = emptyHits.AllocatorInstance.Data;
  if (emptyHits.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (emptyHits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'emptyInfo'' @ 15043e840

void __cdecl
`FDS_EntityBase::GetEntityMaterialInfo'::__l2::_dynamic_atexit_destructor_for__emptyInfo__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (emptyInfo.MaterialAsyncLoadHandle.SharedReferenceCount.ReferenceController);
  if (emptyInfo.MaterialPath.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(emptyInfo.MaterialPath.SubPathString.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

