// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEnginePlugin
// Functions: 148

// CurveGroupName'' @ 1413e8a10

void __cdecl `dynamic_initializer_for_'FDataflowCurveSelection::CurveGroupName__(void)

{
  ::FName::FName(&FDataflowCurveSelection::CurveGroupName,"Curves");
  return;
}

// FacesGroupName'' @ 1413e8a30

void __cdecl `dynamic_initializer_for_'FDataflowFaceSelection::FacesGroupName__(void)

{
  ::FName::FName(&FDataflowFaceSelection::FacesGroupName,"Faces");
  return;
}

// GeometryGroupName'' @ 1413e8a50

void __cdecl `dynamic_initializer_for_'FDataflowGeometrySelection::GeometryGroupName__(void)

{
  ::FName::FName(&FDataflowGeometrySelection::GeometryGroupName,"Geometry");
  return;
}

// MaterialGroupName'' @ 1413e8a70

void __cdecl `dynamic_initializer_for_'FDataflowMaterialSelection::MaterialGroupName__(void)

{
  ::FName::FName(&FDataflowMaterialSelection::MaterialGroupName,"Material");
  return;
}

// SelectionLockedPrimaryColor'' @ 1413e8a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'IDataflowEnginePlugin::SelectionLockedPrimaryColor__(void)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = ___xmm_3f8000003e4ccccd3ecccccd3f4ccccd;
  local_18._8_8_ = _UNK_152c72898;
  FLinearColor::ToRGBE((FLinearColor *)&local_18._s_0);
  return;
}

// SelectionPrimaryColor'' @ 1413e8ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'IDataflowEnginePlugin::SelectionPrimaryColor__(void)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = ___xmm_3f800000000000003ecccccd3f4ccccd;
  local_18._8_8_ = _UNK_152c72888;
  FLinearColor::ToRGBE((FLinearColor *)&local_18._s_0);
  return;
}

// SimulationTag'' @ 1413e8af0

void __cdecl `dynamic_initializer_for_'UDataflow::SimulationTag__(void)

{
  ::FString::FString(&UDataflow::SimulationTag,L"DataflowSimulationTag");
  atexit(`dynamic_atexit_destructor_for_'UDataflow::SimulationTag__);
  return;
}

// TransformGroupName'' @ 1413e8b20

void __cdecl `dynamic_initializer_for_'FDataflowTransformSelection::TransformGroupName__(void)

{
  ::FName::FName(&FDataflowTransformSelection::TransformGroupName,"Transform");
  return;
}

// TypeName'' @ 1413e8b40

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<signed_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<signed_char>::TypeName,L"int8");
  return;
}

// TypeName'' @ 1413e8b60

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_char>::TypeName,L"uint8");
  return;
}

// TypeName'' @ 1413e8b80

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<short>::TypeName,L"int16");
  return;
}

// TypeName'' @ 1413e8ba0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_short>::TypeName,L"uint16");
  return;
}

// TypeName'' @ 1413e8bc0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<int>::TypeName,L"int32");
  return;
}

// TypeName'' @ 1413e8be0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_int>::TypeName,L"uint32");
  return;
}

// TypeName'' @ 1413e8c00

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<float>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<float>::TypeName,L"float");
  return;
}

// TypeName'' @ 1413e8c20

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<double>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<double>::TypeName,L"double");
  return;
}

// TypeName'' @ 1413e8c40

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName,L"FIntPoint");
  return;
}

// TypeName'' @ 1413e8c60

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName,L"FIntVector3");
  return;
}

// TypeName'' @ 1413e8c80

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName,L"FIntVector4");
  return;
}

// TypeName'' @ 1413e8ca0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TObjectPtr<UDynamicMesh>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TObjectPtr<UDynamicMesh>_>::TypeName,
                 L"TObjectPtr<UDynamicMesh>");
  return;
}

// TypeName'' @ 1413e8cc0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName,L"TObjectPtr<UObject>");
  return;
}

// TypeName'' @ 1413e8ce0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName,L"FQuat4f");
  return;
}

// TypeName'' @ 1413e8d00

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName,L"FQuat");
  return;
}

// TypeName'' @ 1413e8d20

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName,L"FRotator");
  return;
}

// TypeName'' @ 1413e8d40

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName,L"FTransform");
  return;
}

// TypeName'' @ 1413e8d60

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName,L"FVector2f");
  return;
}

// TypeName'' @ 1413e8d80

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName,L"FVector2D");
  return;
}

// TypeName'' @ 1413e8da0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName,L"FVector4f");
  return;
}

// TypeName'' @ 1413e8dc0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName,L"FVector4");
  return;
}

// TypeName'' @ 1413e8de0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName,L"FVector3f");
  return;
}

// TypeName'' @ 1413e8e00

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName,L"FVector");
  return;
}

// TypeName'' @ 1413e8e20

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName,
                 L"FDataflowCurveSelection");
  return;
}

// TypeName'' @ 1413e8e40

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName,
                 L"FDataflowFaceSelection");
  return;
}

// TypeName'' @ 1413e8e60

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName,
                 L"FDataflowGeometrySelection");
  return;
}

// TypeName'' @ 1413e8e80

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName,
                 L"FDataflowMaterialSelection");
  return;
}

// TypeName'' @ 1413e8ea0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName,
                 L"FDataflowTransformSelection");
  return;
}

// TypeName'' @ 1413e8ec0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName,
                 L"FDataflowVertexSelection");
  return;
}

// TypeName'' @ 1413e8ee0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FLinearColor>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FLinearColor>::TypeName,L"FLinearColor");
  return;
}

// TypeName'' @ 1413e8f00

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<int8>");
  return;
}

// TypeName'' @ 1413e8f20

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint8>");
  return;
}

// TypeName'' @ 1413e8f40

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int16>");
  return;
}

// TypeName'' @ 1413e8f60

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint16>");
  return;
}

// TypeName'' @ 1413e8f80

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int32>");
  return;
}

// TypeName'' @ 1413e8fa0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint32>");
  return;
}

// TypeName'' @ 1413e8fc0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<float>");
  return;
}

// TypeName'' @ 1413e8fe0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<double>");
  return;
}

// TypeName'' @ 1413e9000

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntPoint>");
  return;
}

// TypeName'' @ 1413e9020

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector3>");
  return;
}

// TypeName'' @ 1413e9040

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector4>");
  return;
}

// TypeName'' @ 1413e9060

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<TObjectPtr<UDynamicMesh>>");
  return;
}

// TypeName'' @ 1413e9080

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat4f>");
  return;
}

// TypeName'' @ 1413e90a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat>");
  return;
}

// TypeName'' @ 1413e90c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FRotator>");
  return;
}

// TypeName'' @ 1413e90e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2f>");
  return;
}

// TypeName'' @ 1413e9100

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2D>");
  return;
}

// TypeName'' @ 1413e9120

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4f>");
  return;
}

// TypeName'' @ 1413e9140

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4>");
  return;
}

// TypeName'' @ 1413e9160

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector3f>");
  return;
}

// TypeName'' @ 1413e9180

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector>");
  return;
}

// TypeName'' @ 1413e91a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<FLinearColor>");
  return;
}

// TypeName'' @ 1413e91c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FName>");
  return;
}

// TypeName'' @ 1413e91e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FString>");
  return;
}

// TypeName'' @ 1413e9200

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int64>");
  return;
}

// TypeName'' @ 1413e9220

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint64>");
  return;
}

// TypeName'' @ 1413e9240

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FName>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FName>::TypeName,L"FName");
  return;
}

// TypeName'' @ 1413e9260

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FString>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FString>::TypeName,L"FString");
  return;
}

// TypeName'' @ 1413e9280

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FText>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FText>::TypeName,L"FText");
  return;
}

// TypeName'' @ 1413e92a0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<__int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<__int64>::TypeName,L"int64");
  return;
}

// TypeName'' @ 1413e92c0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned___int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned___int64>::TypeName,L"uint64");
  return;
}

// TypeName'' @ 1413e92e0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<bool>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<bool>::TypeName,L"bool");
  return;
}

// VertexColor'' @ 1413e9300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'IDataflowEnginePlugin::VertexColor__(void)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_18._8_8_ = _UNK_150689648;
  FLinearColor::ToRGBE((FLinearColor *)&local_18._s_0);
  return;
}

// VerticesGroupName'' @ 1413e9330

void __cdecl `dynamic_initializer_for_'FDataflowVertexSelection::VerticesGroupName__(void)

{
  ::FName::FName(&FDataflowVertexSelection::VerticesGroupName,"Vertices");
  return;
}

// `dynamic_initializer_for_'ADataflowLogging'' @ 1413e9350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__ADataflowLogging__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&ADataflowLogging,L"ADataflowLogging",Log,All);
  atexit(_dynamic_atexit_destructor_for__ADataflowLogging__);
  return;
}

// `dynamic_initializer_for_'BoxIndicesArray'' @ 1413e9390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__BoxIndicesArray__(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ForAnyElementType FVar19;
  
  uVar18 = _UNK_152c72878;
  uVar17 = ___xmm_00000007000000040000000000000006;
  uVar16 = _UNK_152c72868;
  uVar15 = ___xmm_00000007000000030000000500000006;
  uVar14 = _UNK_152c72858;
  uVar13 = ___xmm_00000006000000000000000300000007;
  uVar12 = _UNK_152c72848;
  uVar11 = ___xmm_00000005000000000000000100000002;
  uVar10 = _UNK_152c72838;
  uVar9 = ___xmm_00000004000000070000000700000006;
  uVar8 = _UNK_152c72828;
  uVar7 = ___xmm_00000002000000040000000500000001;
  uVar6 = _UNK_152c72818;
  uVar5 = ___xmm_00000001000000050000000300000002;
  uVar4 = _UNK_152c72808;
  uVar3 = ___xmm_00000001000000000000000400000002;
  uVar2 = _UNK_151e593b8;
  uVar1 = ___xmm_00000002000000030000000000000005;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,0xc,0,&BoxIndicesArray.AllocatorInstance,0xc,&BoxIndicesArray.ArrayMax);
  FVar19 = BoxIndicesArray.AllocatorInstance;
  *(undefined8 *)BoxIndicesArray.AllocatorInstance.Data = uVar7;
  *(undefined8 *)(FVar19.Data + 8) = uVar8;
  *(undefined8 *)(FVar19.Data + 0x10) = uVar15;
  *(undefined8 *)(FVar19.Data + 0x18) = uVar16;
  *(undefined8 *)(FVar19.Data + 0x20) = uVar17;
  *(undefined8 *)(FVar19.Data + 0x28) = uVar18;
  *(undefined8 *)(FVar19.Data + 0x30) = uVar11;
  *(undefined8 *)(FVar19.Data + 0x38) = uVar12;
  *(undefined8 *)(FVar19.Data + 0x40) = uVar9;
  *(undefined8 *)(FVar19.Data + 0x48) = uVar10;
  *(undefined8 *)(FVar19.Data + 0x50) = uVar1;
  *(undefined8 *)(FVar19.Data + 0x58) = uVar2;
  *(undefined8 *)(FVar19.Data + 0x60) = uVar13;
  *(undefined8 *)(FVar19.Data + 0x68) = uVar14;
  *(undefined8 *)(FVar19.Data + 0x70) = uVar5;
  *(undefined8 *)(FVar19.Data + 0x78) = uVar6;
  *(undefined8 *)(FVar19.Data + 0x80) = uVar3;
  *(undefined8 *)(FVar19.Data + 0x88) = uVar4;
  atexit(_dynamic_atexit_destructor_for__BoxIndicesArray__);
  return;
}

// `dynamic_initializer_for_'BoxVertexArray'' @ 1413e9500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__BoxVertexArray__(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ForAnyElementType FVar11;
  
  uVar10 = _UNK_151aa27a8;
  uVar9 = ___xmm_bf8000003f800000bf800000bf800000;
  uVar8 = _UNK_150d56628;
  uVar7 = ___xmm_3f800000bf8000003f800000bf800000;
  uVar6 = _UNK_150b51aa8;
  uVar5 = ___xmm_3f800000bf800000bf800000bf800000;
  uVar4 = _UNK_150b51a68;
  uVar3 = ___xmm_3f800000bf800000bf8000003f800000;
  uVar2 = _UNK_150a9e568;
  uVar1 = ___xmm_3f8000003f800000bf8000003f800000;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,8,0,&BoxVertexArray.AllocatorInstance,8,&BoxVertexArray.ArrayMax);
  FVar11 = BoxVertexArray.AllocatorInstance;
  *(undefined8 *)BoxVertexArray.AllocatorInstance.Data = uVar5;
  *(undefined8 *)(FVar11.Data + 8) = uVar6;
  *(undefined8 *)(FVar11.Data + 0x10) = uVar9;
  *(undefined8 *)(FVar11.Data + 0x18) = uVar10;
  *(undefined8 *)(FVar11.Data + 0x20) = uVar3;
  *(undefined8 *)(FVar11.Data + 0x28) = uVar4;
  *(undefined8 *)(FVar11.Data + 0x30) = uVar7;
  *(undefined8 *)(FVar11.Data + 0x38) = uVar8;
  *(undefined8 *)(FVar11.Data + 0x40) = uVar1;
  *(undefined8 *)(FVar11.Data + 0x48) = uVar2;
  *(undefined8 *)(FVar11.Data + 0x50) = uVar1;
  *(undefined8 *)(FVar11.Data + 0x58) = uVar2;
  atexit(_dynamic_atexit_destructor_for__BoxVertexArray__);
  return;
}

// `dynamic_initializer_for_'LogDataflowRenderComponentInternal'' @ 1413e9600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDataflowRenderComponentInternal__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDataflowRenderComponentInternal,
             L"LogDataflowRenderComponentInternal",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDataflowRenderComponentInternal__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantDataflowEnginePlugin'' @ 1413e9640

void __cdecl _dynamic_initializer_for__ModuleRegistrantDataflowEnginePlugin__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DataflowEnginePlugin";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DataflowEnginePlugin",0x14);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDataflowEnginePlugin>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413e9690

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413e9720

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413e97b0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413e9840

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413e98d0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413e9960

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413e99f0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413e9a80

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413e9b10

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413e9ba0

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h__Script_DataflowEnginePlugin_3886129502'' @ 1413e9c30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h__Script_DataflowEnginePlugin_3886129502__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowEnginePlugin",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h__Script_DataflowEnginePlugin_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h__Script_DataflowEnginePlugin_2170164560'' @ 1413e9c70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h__Script_DataflowEnginePlugin_2170164560__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowEnginePlugin",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h__Script_DataflowEnginePlugin_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowConnectionTypes_h__Script_DataflowEnginePlugin_2617355210'' @ 1413e9cb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowConnectionTypes_h__Script_DataflowEnginePlugin_2617355210__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowEnginePlugin",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowConnectionTypes_h__Script_DataflowEnginePlugin_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowEngineAnyTypes_h__Script_DataflowEnginePlugin_118856864'' @ 1413e9cf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowEngineAnyTypes_h__Script_DataflowEnginePlugin_118856864__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowEnginePlugin",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowEngineAnyTypes_h__Script_DataflowEnginePlugin_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_DataflowEnginePlugin'' @ 1413e9d30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_DataflowEnginePlugin__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x7b9fc6ca;
  local_res8[0].DeclarationsHash = 0x41ad757f;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_DataflowEnginePlugin,L"/Script/DataflowEnginePlugin",
             &Z_Registration_Info_UPackage__Script_DataflowEnginePlugin,local_res8);
  return;
}

// Z_Construct_UPackage__Script_DataflowEnginePlugin @ 14daae840

UPackage * __cdecl Z_Construct_UPackage__Script_DataflowEnginePlugin(void)

{
  if (Z_Registration_Info_UPackage__Script_DataflowEnginePlugin.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_DataflowEnginePlugin.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_DataflowEnginePlugin.OuterSingleton;
}

// NewStructOps @ 14daae880

void * __cdecl Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCollectionAttributeKey,&UE::CoreUObject::Private::Construct<FCollectionAttributeKey>,&UE::CoreUObject::Private::ConstructForTests<FCollectionAttributeKey>,&UE::CoreUObject::Private::Destruct<FCollectionAttributeKey>,&UE::CoreUObject::Private::Copy<FCollectionAttributeKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14daae8c0

void * __cdecl Z_Construct_UScriptStruct_FDataflowDynamicMeshArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowDynamicMeshArray,&UE::CoreUObject::Private::Construct<FDataflowDynamicMeshArray>,&UE::CoreUObject::Private::ConstructForTests<FDataflowDynamicMeshArray>,&UE::CoreUObject::Private::Destruct<FDataflowDynamicMeshArray>,&UE::CoreUObject::Private::Copy<FDataflowDynamicMeshArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14daaea20

void * __thiscall
IDataflowEnginePlugin::_scalar_deleting_destructor_(IDataflowEnginePlugin *this,uint param_1)

{
  *this = (IDataflowEnginePlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UDataflowComponent_NoRegister @ 14daaeb70

UClass * __cdecl Z_Construct_UClass_UDataflowComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEnginePlugin",L"DataflowComponent",
               &Z_Registration_Info_UClass_UDataflowComponent.InnerSingleton,
               UDataflowComponent::StaticRegisterNativesUDataflowComponent,0x690,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowComponent>,
               InternalVTableHelperCtorCaller<UDataflowComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowComponent.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14daaee90

void * __thiscall
FDataflowEnginePlugin::_scalar_deleting_destructor_(FDataflowEnginePlugin *this,uint param_1)

{
  *this = (FDataflowEnginePlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_ADataflowActor @ 14daaef90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADataflowActor(void)

{
  if (Z_Registration_Info_UClass_ADataflowActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADataflowActor.OuterSingleton,
               &Z_Construct_UClass_ADataflowActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADataflowActor.OuterSingleton;
}

// Z_Construct_UClass_UDataflowComponent @ 14daaefd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataflowComponent(void)

{
  if (Z_Registration_Info_UClass_UDataflowComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataflowComponent.OuterSingleton,
               &Z_Construct_UClass_UDataflowComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataflowComponent.OuterSingleton;
}

// ConstructItems<FManagedArrayCollection,FManagedArrayCollection,int> @ 14daaf130

void __cdecl
ConstructItems<FManagedArrayCollection,FManagedArrayCollection,int>
          (void *param_1,FManagedArrayCollection *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FManagedArrayCollection::FManagedArrayCollection
                ((FManagedArrayCollection *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FDataflowVertexBatchData,int> @ 14daaf180

void __cdecl DefaultConstructItems<FDataflowVertexBatchData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0xffffffffffffffff;
      *puVar1 = 0xffffffffffffffff;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FManagedArrayCollection,int> @ 14daaf1c0

void __cdecl
DestructItems<FManagedArrayCollection,int>(FManagedArrayCollection *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FManagedArrayCollection::~FManagedArrayCollection(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FDataflowSelectionState::ObjectID,int> @ 14daaf200

void __cdecl DestructItems<FDataflowSelectionState::ObjectID,int>(ObjectID *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// InternalConstructor<ADataflowActor> @ 14daaf240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ADataflowActor>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ADataflowActor__6B_;
    this[1]._padding_ = 0;
    pFVar3 = FName::FName(&local_res8,L"DataflowComponent0");
    FVar2 = *pFVar3;
    pUVar4 = UDataflowComponent::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
    pbVar1 = (byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}

// InternalConstructor<UDataflowComponent> @ 14daaf310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UDataflowComponent>(FObjectInitializer *param_1)

{
  UPrimitiveComponent *this;
  
  this = (UPrimitiveComponent *)param_1->Obj;
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined ***)this = &UDataflowComponent::_vftable__for__UObject__;
    *(undefined8 *)&this->field_0x548 = 0;
    *(undefined ***)&this->field_0x28 =
         &UDataflowComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UDataflowComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 = &UDataflowComponent::_vftable__for__INavRelevantInterface__
    ;
    *(undefined ***)&this->field_0x258 =
         &UDataflowComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 = &UDataflowComponent::_vftable__for__IPhysicsComponent__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)&this[1].field_0x20)
    ;
    this->field_0x42 = this->field_0x42 | 2;
    this->field_0x99 = this->field_0x99 | 0x80;
    *(undefined8 *)&this[1].field_0xd8 = 0;
    *(undefined8 *)&this[1].field_0xe0 = 0;
    *(undefined8 *)&this[1].field_0xe8 = 0;
    *(undefined8 *)&this[1].field_0xf0 = 0;
    *(undefined8 *)&this[1].field_0xf8 = 0;
    *(undefined8 *)&this[1].field_0x100 = 0;
    *(undefined8 *)&this[1].field_0x108 = 0;
    *(undefined4 *)&this[1].field_0x110 = 0;
    *(undefined8 *)&this[1].field_0x118 = 0;
    *(undefined8 *)&this[1].field_0x120 = 0;
    *(undefined8 *)&this[1].field_0x128 = 0;
    *(undefined8 *)&this[1].field_0x130 = 0;
    *(undefined2 *)&this[1].field_0xd0 = 0x101;
    this[1].field_0xd2 = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<ADataflowActor> @ 14daaf430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ADataflowActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADataflowActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ADataflowActor__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataflowComponent> @ 14daaf4f0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UDataflowComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPrimitiveComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataflowComponent::GetPrivateStaticClass();
  this = (UPrimitiveComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined ***)this = &UDataflowComponent::_vftable__for__UObject__;
    *(undefined8 *)&this->field_0x548 = 0;
    *(undefined ***)&this->field_0x28 =
         &UDataflowComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UDataflowComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 = &UDataflowComponent::_vftable__for__INavRelevantInterface__
    ;
    *(undefined ***)&this->field_0x258 =
         &UDataflowComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 = &UDataflowComponent::_vftable__for__IPhysicsComponent__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)&this[1].field_0x20)
    ;
    *(undefined2 *)&this[1].field_0xd0 = 0x101;
    this[1].field_0xd2 = 1;
    *(undefined8 *)&this[1].field_0xd8 = 0;
    *(undefined8 *)&this[1].field_0xe0 = 0;
    *(undefined8 *)&this[1].field_0xe8 = 0;
    *(undefined8 *)&this[1].field_0xf0 = 0;
    *(undefined8 *)&this[1].field_0xf8 = 0;
    *(undefined8 *)&this[1].field_0x100 = 0;
    *(undefined8 *)&this[1].field_0x108 = 0;
    *(undefined4 *)&this[1].field_0x110 = 0;
    *(undefined8 *)&this[1].field_0x118 = 0;
    *(undefined8 *)&this[1].field_0x120 = 0;
    *(undefined8 *)&this[1].field_0x128 = 0;
    *(undefined8 *)&this[1].field_0x130 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// HDataflowDefault @ 14daafa60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

HDataflowDefault * __thiscall
HDataflowDefault::HDataflowDefault
          (HDataflowDefault *this,AActor *param_1,UPrimitiveComponent *param_2)

{
  HHitProxy::HHitProxy((HHitProxy *)this,HPP_World);
  *(undefined ***)this = &___7HActor__6B_;
  *(AActor **)&this->field_0x20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(UPrimitiveComponent **)&this->field_0x28 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(undefined ***)this = &___7HDataflowDefault__6B_;
  *(undefined8 *)&this->field_0x30 = 0xffffffffffffffff;
  return this;
}

// HDataflowNode @ 14daafaf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

HDataflowNode * __thiscall
HDataflowNode::HDataflowNode
          (HDataflowNode *this,AActor *param_1,UPrimitiveComponent *param_2,FString *param_3,
          int param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  HHitProxy::HHitProxy((HHitProxy *)this,HPP_World);
  this->_padding_ = (longlong)&___7HActor__6B_;
  this->_padding_ = (longlong)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = (longlong)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  this->_padding_ = -1;
  this->_padding_ = (longlong)&___7HDataflowNode__6B_;
  this->GeometryIndex = -1;
  ::FString::FString(&this->NodeName,"");
  iVar1 = (param_3->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange(&this->NodeName,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar3);
  this->GeometryIndex = param_4;
  *(int *)&this->_padding_ = param_4;
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// HDataflowVertex @ 14daafbe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

HDataflowVertex * __thiscall
HDataflowVertex::HDataflowVertex
          (HDataflowVertex *this,AActor *param_1,UPrimitiveComponent *param_2,int param_3)

{
  HHitProxy::HHitProxy((HHitProxy *)this,HPP_World);
  *(undefined ***)this = &___7HActor__6B_;
  *(AActor **)&this->field_0x20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(UPrimitiveComponent **)&this->field_0x28 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(undefined ***)this = &___7HDataflowVertex__6B_;
  *(int *)&this->field_0x30 = param_3;
  *(undefined4 *)&this->field_0x34 = 0xffffffff;
  return this;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14dab11ac

/* [thunk]:public: virtual void * __ptr64 __cdecl UDataflowComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UDataflowComponent::_vector_deleting_destructor__adjustor_592__
          (UDataflowComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDataflowComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14dab11c0

/* [thunk]:public: virtual void * __ptr64 __cdecl UDataflowComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UDataflowComponent::_vector_deleting_destructor__adjustor_600__
          (UDataflowComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDataflowComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14dab11d4

/* [thunk]:public: virtual void * __ptr64 __cdecl UDataflowComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UDataflowComponent::_vector_deleting_destructor__adjustor_608__
          (UDataflowComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDataflowComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14dab11e8

/* [thunk]:public: virtual void * __ptr64 __cdecl UDataflowComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDataflowComponent::_vector_deleting_destructor__adjustor_40__
          (UDataflowComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDataflowComponent *)&this[-1].SelectionState.Nodes,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14dab1200

void * __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<FManagedArrayCollection_const_&> *this,uint param_1)

{
  FManagedArrayCollection::~FManagedArrayCollection(&this->Data);
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dab1250

void * __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection>::_scalar_deleting_destructor_
          (TContextCacheElement<FManagedArrayCollection> *this,uint param_1)

{
  FManagedArrayCollection::~FManagedArrayCollection(&this->Data);
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dab12a0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FManagedArrayCollection,int>
            ((FManagedArrayCollection *)(this->Data).AllocatorInstance.Data,(this->Data).ArrayNum);
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dab1300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFContextCacheElementBase_Dataflow_UE__AEAVFArchive__PEAU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dab1340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ADataflowActor::_scalar_deleting_destructor_(ADataflowActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ADataflowActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dab13a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FDataflowEngineSceneProxy::_scalar_deleting_destructor_
          (FDataflowEngineSceneProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FDataflowEngineSceneProxy__6B_;
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->BoxIndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->BoxVertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->BoxVertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer
            (&(this->BoxVertexBuffers).StaticMeshVertexBuffer);
  FLocalVertexFactory::~FLocalVertexFactory(&this->BoxVertexFactory);
  pFVar1 = (this->VertexBatchDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  pFVar1 = (this->MeshBatchDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dab1490

void * __thiscall
HDataflowDefault::_scalar_deleting_destructor_(HDataflowDefault *this,uint param_1)

{
  HHitProxy::~HHitProxy((HHitProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dab14d0

void * __thiscall HDataflowNode::_scalar_deleting_destructor_(HDataflowNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NodeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  HHitProxy::~HHitProxy((HHitProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dab1520

void * __thiscall HDataflowVertex::_scalar_deleting_destructor_(HDataflowVertex *this,uint param_1)

{
  HHitProxy::~HHitProxy((HHitProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dab1560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UDataflowComponent::_scalar_deleting_destructor_(UDataflowComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->SelectionState).Vertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDataflowSelectionState::ObjectID,int>
            ((ObjectID *)(this->SelectionState).Nodes.AllocatorInstance.Data,
             (this->SelectionState).Nodes.ArrayNum);
  pFVar1 = (this->SelectionState).Nodes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->RenderCollection);
  pFVar1 = (this->RenderTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Context).SharedReferenceCount.ReferenceController);
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x690);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDataflowActor @ 14dab4140

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowComponent @ 14dab4150

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowConnectionTypes @ 14dab4160

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowConnectionTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowEngineAnyTypes @ 14dab4170

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowEngineAnyTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowEnginePlugin_init @ 14dab4180

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowEnginePlugin_init(void)

{
  return;
}

// GetMouseCursor @ 14dab50e0

Type __thiscall HDataflowDefault::GetMouseCursor(HDataflowDefault *this)

{
  return Default;
}

// GetMouseCursor @ 14dab50f0

Type __thiscall HDataflowNode::GetMouseCursor(HDataflowNode *this)

{
  return Default;
}

// GetMouseCursor @ 14dab5100

Type __thiscall HDataflowVertex::GetMouseCursor(HDataflowVertex *this)

{
  return Crosshairs;
}

// GetType @ 14dab5310

HHitProxyType * __thiscall HDataflowDefault::GetType(HDataflowDefault *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HActor::StaticGetType();
      ::StaticType.Name = L"HDataflowDefault";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// GetType @ 14dab5390

HHitProxyType * __thiscall HDataflowNode::GetType(HDataflowNode *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HActor::StaticGetType();
      ::StaticType.Name = L"HDataflowNode";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// GetType @ 14dab5410

HHitProxyType * __thiscall HDataflowVertex::GetType(HDataflowVertex *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HActor::StaticGetType();
      ::StaticType.Name = L"HDataflowVertex";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// StaticGetType @ 14dab57e0

HHitProxyType * __cdecl HDataflowDefault::StaticGetType(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HActor::StaticGetType();
      ::StaticType.Name = L"HDataflowDefault";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// StaticGetType @ 14dab5860

HHitProxyType * __cdecl HDataflowNode::StaticGetType(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HActor::StaticGetType();
      ::StaticType.Name = L"HDataflowNode";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// StaticGetType @ 14dab58e0

HHitProxyType * __cdecl HDataflowVertex::StaticGetType(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HActor::StaticGetType();
      ::StaticType.Name = L"HDataflowVertex";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// Z_Construct_UClass_ADataflowActor_NoRegister @ 14dab6440

UClass * __cdecl Z_Construct_UClass_ADataflowActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADataflowActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEnginePlugin",L"DataflowActor",
               &Z_Registration_Info_UClass_ADataflowActor.InnerSingleton,
               ADataflowActor::StaticRegisterNativesADataflowActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADataflowActor>,InternalVTableHelperCtorCaller<ADataflowActor>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADataflowActor.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCollectionAttributeKey @ 14dab6500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCollectionAttributeKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCollectionAttributeKey.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCollectionAttributeKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FCollectionAttributeKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCollectionAttributeKey.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCollectionAttributeKey.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FDataflowDynamicMeshArray @ 14dab6580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowDynamicMeshArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowDynamicMeshArray.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowDynamicMeshArray.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowDynamicMeshArray_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowDynamicMeshArray.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowDynamicMeshArray.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_DataflowEnginePlugin @ 14dab6600

void __cdecl IMPLEMENT_MODULE_DataflowEnginePlugin(void)

{
  return;
}

// SimulationTag'' @ 15045c080

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

// `dynamic_atexit_destructor_for_'ADataflowLogging'' @ 15045c0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__ADataflowLogging__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&ADataflowLogging);
  return;
}

// `dynamic_atexit_destructor_for_'BoxIndicesArray'' @ 15045c0c0

void __cdecl _dynamic_atexit_destructor_for__BoxIndicesArray__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BoxIndicesArray.AllocatorInstance.Data;
  if (BoxIndicesArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BoxIndicesArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BoxVertexArray'' @ 15045c0e0

void __cdecl _dynamic_atexit_destructor_for__BoxVertexArray__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BoxVertexArray.AllocatorInstance.Data;
  if (BoxVertexArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BoxVertexArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogDataflowRenderComponentInternal'' @ 15045c100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDataflowRenderComponentInternal__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDataflowRenderComponentInternal);
  return;
}

