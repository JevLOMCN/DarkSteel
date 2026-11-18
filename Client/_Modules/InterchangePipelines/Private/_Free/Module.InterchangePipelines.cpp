// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 1265

// CurveGroupName'' @ 141433ed0

void __cdecl `dynamic_initializer_for_'FDataflowCurveSelection::CurveGroupName__(void)

{
  ::FName::FName(&FDataflowCurveSelection::CurveGroupName,"Curves");
  return;
}

// ExpectedMaterialInstanceIdentifiers'' @ 141433ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
`dynamic_initializer_for_'UGLTFPipelineSettings::ExpectedMaterialInstanceIdentifiers__(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined1 auStackY_258 [32];
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_258;
  ::FString::FString(&local_218,L"MI_Default_Opaque");
  ::FString::FString(&local_208,L"MI_Default_Mask");
  ::FString::FString(&local_1f8,L"MI_Default_Blend");
  ::FString::FString(&local_1e8,L"MI_Unlit_Opaque");
  ::FString::FString(&local_1d8,L"MI_Unlit_Mask");
  ::FString::FString(&local_1c8,L"MI_Unlit_Blend");
  ::FString::FString(&local_1b8,L"MI_ClearCoat_Opaque");
  ::FString::FString(&local_1a8,L"MI_ClearCoat_Mask");
  ::FString::FString(&local_198,L"MI_ClearCoat_Blend");
  ::FString::FString(&local_188,L"MI_Sheen_Opaque");
  ::FString::FString(&local_178,L"MI_Sheen_Mask");
  ::FString::FString(&local_168,L"MI_Sheen_Blend");
  ::FString::FString(&local_158,L"MI_Transmission");
  ::FString::FString(&local_148,L"MI_SpecularGlossiness_Opaque");
  ::FString::FString(&local_138,L"MI_SpecularGlossiness_Mask");
  ::FString::FString(&local_128,L"MI_SpecularGlossiness_Blend");
  ::FString::FString(&local_118,L"MI_Default_Opaque_DS");
  ::FString::FString(&local_108,L"MI_Default_Mask_DS");
  ::FString::FString(&local_f8,L"MI_Default_Blend_DS");
  ::FString::FString(&local_e8,L"MI_Unlit_Opaque_DS");
  ::FString::FString(&local_d8,L"MI_Unlit_Mask_DS");
  ::FString::FString(&local_c8,L"MI_Unlit_Blend_DS");
  ::FString::FString(&local_b8,L"MI_ClearCoat_Opaque_DS");
  ::FString::FString(&local_a8,L"MI_ClearCoat_Mask_DS");
  ::FString::FString(&local_98,L"MI_ClearCoat_Blend_DS");
  ::FString::FString(&local_88,L"MI_Sheen_Opaque_DS");
  ::FString::FString(&local_78,L"MI_Sheen_Mask_DS");
  ::FString::FString(&local_68,L"MI_Sheen_Blend_DS");
  ::FString::FString(&local_58,L"MI_Transmission_DS");
  ::FString::FString(&local_48,L"MI_SpecularGlossiness_Opaque_DS");
  ::FString::FString(&local_38,L"MI_SpecularGlossiness_Mask_DS");
  ::FString::FString(&local_28,L"MI_SpecularGlossiness_Blend_DS");
  lVar2 = 0x20;
  UGLTFPipelineSettings::ExpectedMaterialInstanceIdentifiers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  UGLTFPipelineSettings::ExpectedMaterialInstanceIdentifiers.ArrayNum = 0x20;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0x20,0,
             &UGLTFPipelineSettings::ExpectedMaterialInstanceIdentifiers.AllocatorInstance,0x20,
             &UGLTFPipelineSettings::ExpectedMaterialInstanceIdentifiers.ArrayMax);
  ConstructItems<FString,FString,int>
            (UGLTFPipelineSettings::ExpectedMaterialInstanceIdentifiers.AllocatorInstance.Data,
             &local_218,0x20);
  puVar3 = local_18;
  do {
    puVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar2 != 0);
  atexit(`dynamic_atexit_destructor_for_'UGLTFPipelineSettings::
         ExpectedMaterialInstanceIdentifiers__);
  return;
}

// FacesGroupName'' @ 141434200

void __cdecl `dynamic_initializer_for_'FDataflowFaceSelection::FacesGroupName__(void)

{
  ::FName::FName(&FDataflowFaceSelection::FacesGroupName,"Faces");
  return;
}

// GeometryGroupName'' @ 141434220

void __cdecl `dynamic_initializer_for_'FDataflowGeometrySelection::GeometryGroupName__(void)

{
  ::FName::FName(&FDataflowGeometrySelection::GeometryGroupName,"Geometry");
  return;
}

// MaterialGroupName'' @ 141434240

void __cdecl `dynamic_initializer_for_'FDataflowMaterialSelection::MaterialGroupName__(void)

{
  ::FName::FName(&FDataflowMaterialSelection::MaterialGroupName,"Material");
  return;
}

// NAME_Asset'' @ 141434260

void __cdecl
`dynamic_initializer_for_'SInterchangeGenericAssetMaterialConflictWidget::NAME_Asset__(void)

{
  ::FName::FName(&SInterchangeGenericAssetMaterialConflictWidget::NAME_Asset,L"Asset");
  return;
}

// NAME_Import'' @ 141434280

void __cdecl
`dynamic_initializer_for_'SInterchangeGenericAssetMaterialConflictWidget::NAME_Import__(void)

{
  ::FName::FName(&SInterchangeGenericAssetMaterialConflictWidget::NAME_Import,L"Imported");
  return;
}

// PathToEnumMapping'' @ 1414342a0

void __cdecl `dynamic_initializer_for_'UInterchangeMaterialXPipeline::PathToEnumMapping__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UInterchangeMaterialXPipeline::PathToEnumMapping__);
  return;
}

// TransformGroupName'' @ 1414342c0

void __cdecl `dynamic_initializer_for_'FDataflowTransformSelection::TransformGroupName__(void)

{
  ::FName::FName(&FDataflowTransformSelection::TransformGroupName,"Transform");
  return;
}

// TypeName'' @ 1414342e0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<signed_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<signed_char>::TypeName,L"int8");
  return;
}

// TypeName'' @ 141434300

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_char>::TypeName,L"uint8");
  return;
}

// TypeName'' @ 141434320

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<short>::TypeName,L"int16");
  return;
}

// TypeName'' @ 141434340

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_short>::TypeName,L"uint16");
  return;
}

// TypeName'' @ 141434360

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<int>::TypeName,L"int32");
  return;
}

// TypeName'' @ 141434380

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_int>::TypeName,L"uint32");
  return;
}

// TypeName'' @ 1414343a0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<float>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<float>::TypeName,L"float");
  return;
}

// TypeName'' @ 1414343c0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<double>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<double>::TypeName,L"double");
  return;
}

// TypeName'' @ 1414343e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName,L"FIntPoint");
  return;
}

// TypeName'' @ 141434400

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName,L"FIntVector3");
  return;
}

// TypeName'' @ 141434420

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName,L"FIntVector4");
  return;
}

// TypeName'' @ 141434440

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName,L"TObjectPtr<UObject>");
  return;
}

// TypeName'' @ 141434460

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName,L"FQuat4f");
  return;
}

// TypeName'' @ 141434480

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName,L"FQuat");
  return;
}

// TypeName'' @ 1414344a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName,L"FRotator");
  return;
}

// TypeName'' @ 1414344c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName,L"FTransform");
  return;
}

// TypeName'' @ 1414344e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName,L"FVector2f");
  return;
}

// TypeName'' @ 141434500

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName,L"FVector2D");
  return;
}

// TypeName'' @ 141434520

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName,L"FVector4f");
  return;
}

// TypeName'' @ 141434540

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName,L"FVector4");
  return;
}

// TypeName'' @ 141434560

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName,L"FVector3f");
  return;
}

// TypeName'' @ 141434580

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName,L"FVector");
  return;
}

// TypeName'' @ 1414345a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName,
                 L"FDataflowCurveSelection");
  return;
}

// TypeName'' @ 1414345c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName,
                 L"FDataflowFaceSelection");
  return;
}

// TypeName'' @ 1414345e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName,
                 L"FDataflowGeometrySelection");
  return;
}

// TypeName'' @ 141434600

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName,
                 L"FDataflowMaterialSelection");
  return;
}

// TypeName'' @ 141434620

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName,
                 L"FDataflowTransformSelection");
  return;
}

// TypeName'' @ 141434640

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName,
                 L"FDataflowVertexSelection");
  return;
}

// TypeName'' @ 141434660

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FLinearColor>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FLinearColor>::TypeName,L"FLinearColor");
  return;
}

// TypeName'' @ 141434680

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<int8>");
  return;
}

// TypeName'' @ 1414346a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint8>");
  return;
}

// TypeName'' @ 1414346c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int16>");
  return;
}

// TypeName'' @ 1414346e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint16>");
  return;
}

// TypeName'' @ 141434700

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int32>");
  return;
}

// TypeName'' @ 141434720

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint32>");
  return;
}

// TypeName'' @ 141434740

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<float>");
  return;
}

// TypeName'' @ 141434760

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<double>");
  return;
}

// TypeName'' @ 141434780

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntPoint>");
  return;
}

// TypeName'' @ 1414347a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector3>");
  return;
}

// TypeName'' @ 1414347c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector4>");
  return;
}

// TypeName'' @ 1414347e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat4f>");
  return;
}

// TypeName'' @ 141434800

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat>");
  return;
}

// TypeName'' @ 141434820

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FRotator>");
  return;
}

// TypeName'' @ 141434840

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2f>");
  return;
}

// TypeName'' @ 141434860

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2D>");
  return;
}

// TypeName'' @ 141434880

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4f>");
  return;
}

// TypeName'' @ 1414348a0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4>");
  return;
}

// TypeName'' @ 1414348c0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector3f>");
  return;
}

// TypeName'' @ 1414348e0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector>");
  return;
}

// TypeName'' @ 141434900

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<FLinearColor>");
  return;
}

// TypeName'' @ 141434920

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FName>");
  return;
}

// TypeName'' @ 141434940

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FString>");
  return;
}

// TypeName'' @ 141434960

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int64>");
  return;
}

// TypeName'' @ 141434980

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint64>");
  return;
}

// TypeName'' @ 1414349a0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FName>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FName>::TypeName,L"FName");
  return;
}

// TypeName'' @ 1414349c0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FString>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FString>::TypeName,L"FString");
  return;
}

// TypeName'' @ 1414349e0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FText>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FText>::TypeName,L"FText");
  return;
}

// TypeName'' @ 141434a00

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<__int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<__int64>::TypeName,L"int64");
  return;
}

// TypeName'' @ 141434a20

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned___int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned___int64>::TypeName,L"uint64");
  return;
}

// TypeName'' @ 141434a40

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<bool>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<bool>::TypeName,L"bool");
  return;
}

// VerticesGroupName'' @ 141434a60

void __cdecl `dynamic_initializer_for_'FDataflowVertexSelection::VerticesGroupName__(void)

{
  ::FName::FName(&FDataflowVertexSelection::VerticesGroupName,"Vertices");
  return;
}

// `dynamic_initializer_for_'A'' @ 141434a80

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Mask::Attributes::_dynamic_initializer_for__A__(void)

{
  ::FName::FName(&A,L"A");
  return;
}

// `dynamic_initializer_for_'A'' @ 141434aa0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Add::Inputs::_dynamic_initializer_for__A__(void)

{
  ::FName::FName(&A,L"A");
  return;
}

// `dynamic_initializer_for_'A'' @ 141434ac0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Lerp::Inputs::_dynamic_initializer_for__A__(void)

{
  ::FName::FName(&A,L"A");
  return;
}

// `dynamic_initializer_for_'A'' @ 141434ae0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Multiply::Inputs::_dynamic_initializer_for__A__(void)

{
  ::FName::FName(&A,L"A");
  return;
}

// `dynamic_initializer_for_'A'' @ 141434b00

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSample::Outputs::_dynamic_initializer_for__A__
          (void)

{
  ::FName::FName(&A,L"A");
  return;
}

// `dynamic_initializer_for_'AlphaCutoff'' @ 141434b20

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AlphaCutoff__(void)

{
  ::FString::FString(&AlphaCutoff,L"AlphaCutoff");
  atexit(_dynamic_atexit_destructor_for__AlphaCutoff__);
  return;
}

// `dynamic_initializer_for_'AlphaMode'' @ 141434b50

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AlphaMode__(void)

{
  ::FString::FString(&AlphaMode,L"AlphaMode");
  atexit(_dynamic_atexit_destructor_for__AlphaMode__);
  return;
}

// `dynamic_initializer_for_'AmbientColor'' @ 141434b80

void __cdecl
UE::Interchange::Materials::Phong::Parameters::_dynamic_initializer_for__AmbientColor__(void)

{
  ::FName::FName(&AmbientColor,L"AmbientColor");
  return;
}

// `dynamic_initializer_for_'Anisotropy'' @ 141434ba0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::
_dynamic_initializer_for__Anisotropy__(void)

{
  ::FName::FName(&Anisotropy,L"Anisotropy");
  return;
}

// `dynamic_initializer_for_'Anisotropy'' @ 141434bc0

void __cdecl
UE::Interchange::Materials::Common::Parameters::_dynamic_initializer_for__Anisotropy__(void)

{
  ::FName::FName(&Anisotropy,L"Anisotropy");
  return;
}

// `dynamic_initializer_for_'AnisotropyRotation'' @ 141434be0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyRotation__(void)

{
  ::FString::FString(&AnisotropyRotation,L"AnisotropyRotation");
  atexit(_dynamic_atexit_destructor_for__AnisotropyRotation__);
  return;
}

// `dynamic_initializer_for_'AnisotropyStrength'' @ 141434c10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyStrength__(void)

{
  ::FString::FString(&AnisotropyStrength,L"AnisotropyStrength");
  atexit(_dynamic_atexit_destructor_for__AnisotropyStrength__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture'' @ 141434c40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture__(void)

{
  ::FString::FString(&AnisotropyTexture,L"AnisotropyTexture");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_OffsetScale'' @ 141434c70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_OffsetScale__
          (void)

{
  ::FString::FString(&AnisotropyTexture_OffsetScale,L"AnisotropyTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_Offset_X'' @ 141434ca0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_Offset_X__(void)

{
  ::FString::FString(&AnisotropyTexture_Offset_X,L"AnisotropyTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_Offset_Y'' @ 141434cd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_Offset_Y__(void)

{
  ::FString::FString(&AnisotropyTexture_Offset_Y,L"AnisotropyTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_Rotation'' @ 141434d00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_Rotation__(void)

{
  ::FString::FString(&AnisotropyTexture_Rotation,L"AnisotropyTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_Scale_X'' @ 141434d30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_Scale_X__(void)

{
  ::FString::FString(&AnisotropyTexture_Scale_X,L"AnisotropyTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_Scale_Y'' @ 141434d60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_Scale_Y__(void)

{
  ::FString::FString(&AnisotropyTexture_Scale_Y,L"AnisotropyTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_TexCoord'' @ 141434d90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_TexCoord__(void)

{
  ::FString::FString(&AnisotropyTexture_TexCoord,L"AnisotropyTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_TilingMethod'' @ 141434dc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_TilingMethod__
          (void)

{
  ::FString::FString(&AnisotropyTexture_TilingMethod,L"AnisotropyTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'B'' @ 141434df0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Mask::Attributes::_dynamic_initializer_for__B__(void)

{
  ::FName::FName(&B,L"B");
  return;
}

// `dynamic_initializer_for_'B'' @ 141434e10

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Add::Inputs::_dynamic_initializer_for__B__(void)

{
  ::FName::FName(&B,L"B");
  return;
}

// `dynamic_initializer_for_'B'' @ 141434e30

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Lerp::Inputs::_dynamic_initializer_for__B__(void)

{
  ::FName::FName(&B,L"B");
  return;
}

// `dynamic_initializer_for_'B'' @ 141434e50

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Multiply::Inputs::_dynamic_initializer_for__B__(void)

{
  ::FName::FName(&B,L"B");
  return;
}

// `dynamic_initializer_for_'B'' @ 141434e70

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSample::Outputs::_dynamic_initializer_for__B__
          (void)

{
  ::FName::FName(&B,L"B");
  return;
}

// `dynamic_initializer_for_'BSDF'' @ 141434e90

void __cdecl UE::Interchange::Materials::Surface::Parameters::_dynamic_initializer_for__BSDF__(void)

{
  ::FName::FName(&BSDF,L"bsdf");
  return;
}

// `dynamic_initializer_for_'BakeMeshes'' @ 141434eb0

void __cdecl UE::Interchange::MeshPayload::Attributes::_dynamic_initializer_for__BakeMeshes__(void)

{
  ::FString::FString(&BakeMeshes,L"__Payload__BakeMeshes");
  atexit(_dynamic_atexit_destructor_for__BakeMeshes__);
  return;
}

// `dynamic_initializer_for_'Base'' @ 141434ee0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__Base__(void)

{
  ::FName::FName(&Base,L"base");
  return;
}

// `dynamic_initializer_for_'BaseColor'' @ 141434f00

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__BaseColor__(void)

{
  ::FName::FName(&BaseColor,L"base_color");
  return;
}

// `dynamic_initializer_for_'BaseColor'' @ 141434f20

void __cdecl
UE::Interchange::Materials::PBRMR::Parameters::_dynamic_initializer_for__BaseColor__(void)

{
  ::FName::FName(&BaseColor,L"BaseColor");
  return;
}

// `dynamic_initializer_for_'BaseColor'' @ 141434f40

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__BaseColor__(void)

{
  ::FName::FName(&BaseColor,L"base_color");
  return;
}

// `dynamic_initializer_for_'BaseColorFactor'' @ 141434f60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorFactor__(void)

{
  ::FString::FString(&BaseColorFactor,L"BaseColorFactor");
  atexit(_dynamic_atexit_destructor_for__BaseColorFactor__);
  return;
}

// `dynamic_initializer_for_'BaseColorFactor_A'' @ 141434f90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorFactor_A__(void)

{
  ::FString::ConcatFF(&BaseColorFactor_A,&BaseColorFactor,&PostFix::Color_A);
  atexit(_dynamic_atexit_destructor_for__BaseColorFactor_A__);
  return;
}

// `dynamic_initializer_for_'BaseColorFactor_RGB'' @ 141434fd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorFactor_RGB__(void)

{
  ::FString::ConcatFF(&BaseColorFactor_RGB,&BaseColorFactor,&PostFix::Color_RGB);
  atexit(_dynamic_atexit_destructor_for__BaseColorFactor_RGB__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture'' @ 141435010

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture__(void)

{
  ::FString::FString(&BaseColorTexture,L"BaseColorTexture");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_OffsetScale'' @ 141435040

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_OffsetScale__
          (void)

{
  ::FString::FString(&BaseColorTexture_OffsetScale,L"BaseColorTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_Offset_X'' @ 141435070

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_Offset_X__(void)

{
  ::FString::FString(&BaseColorTexture_Offset_X,L"BaseColorTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_Offset_Y'' @ 1414350a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_Offset_Y__(void)

{
  ::FString::FString(&BaseColorTexture_Offset_Y,L"BaseColorTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_Rotation'' @ 1414350d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_Rotation__(void)

{
  ::FString::FString(&BaseColorTexture_Rotation,L"BaseColorTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_Scale_X'' @ 141435100

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_Scale_X__(void)

{
  ::FString::FString(&BaseColorTexture_Scale_X,L"BaseColorTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_Scale_Y'' @ 141435130

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_Scale_Y__(void)

{
  ::FString::FString(&BaseColorTexture_Scale_Y,L"BaseColorTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_TexCoord'' @ 141435160

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_TexCoord__(void)

{
  ::FString::FString(&BaseColorTexture_TexCoord,L"BaseColorTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_TilingMethod'' @ 141435190

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_TilingMethod__
          (void)

{
  ::FString::FString(&BaseColorTexture_TilingMethod,L"BaseColorTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'BaseMetalness'' @ 1414351c0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__BaseMetalness__
          (void)

{
  ::FName::FName(&BaseMetalness,L"base_metalness");
  return;
}

// `dynamic_initializer_for_'BaseRoughness'' @ 1414351e0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__BaseRoughness__
          (void)

{
  ::FName::FName(&BaseRoughness,L"base_roughness");
  return;
}

// `dynamic_initializer_for_'BaseWeight'' @ 141435200

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__BaseWeight__(void)

{
  ::FName::FName(&BaseWeight,L"base_weight");
  return;
}

// `dynamic_initializer_for_'BxDF'' @ 141435220

void __cdecl UE::Interchange::Materials::Common::Parameters::_dynamic_initializer_for__BxDF__(void)

{
  ::FName::FName(&BxDF,L"BxDF");
  return;
}

// `dynamic_initializer_for_'CenterX'' @ 141435240

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Rotator::Attributes::
_dynamic_initializer_for__CenterX__(void)

{
  ::FName::FName(&CenterX,L"CenterX");
  return;
}

// `dynamic_initializer_for_'CenterY'' @ 141435260

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Rotator::Attributes::
_dynamic_initializer_for__CenterY__(void)

{
  ::FName::FName(&CenterY,L"CenterY");
  return;
}

// `dynamic_initializer_for_'Channel'' @ 141435280

void __cdecl
UE::Interchange::Materials::Standard::Nodes::NormalFromHeightMap::Inputs::
_dynamic_initializer_for__Channel__(void)

{
  ::FName::FName(&Channel,L"Height Map Channel Selector");
  return;
}

// `dynamic_initializer_for_'ClearCoat'' @ 1414352a0

void __cdecl
UE::Interchange::Materials::ClearCoat::Parameters::_dynamic_initializer_for__ClearCoat__(void)

{
  ::FName::FName(&ClearCoat,L"ClearCoat");
  return;
}

// `dynamic_initializer_for_'ClearCoatFactor'' @ 1414352c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatFactor__(void)

{
  ::FString::FString(&ClearCoatFactor,L"ClearCoatFactor");
  atexit(_dynamic_atexit_destructor_for__ClearCoatFactor__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormal'' @ 1414352f0

void __cdecl
UE::Interchange::Materials::ClearCoat::Parameters::_dynamic_initializer_for__ClearCoatNormal__(void)

{
  ::FName::FName(&ClearCoatNormal,L"ClearCoatNormal");
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalScale'' @ 141435310

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalScale__(void)

{
  ::FString::FString(&ClearCoatNormalScale,L"ClearCoatNormalScale");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalScale__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture'' @ 141435340

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture__(void)

{
  ::FString::FString(&ClearCoatNormalTexture,L"ClearCoatNormalTexture");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_OffsetScale'' @ 141435370

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatNormalTexture_OffsetScale__(void)

{
  ::FString::FString(&ClearCoatNormalTexture_OffsetScale,L"ClearCoatNormalTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_Offset_X'' @ 1414353a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture_Offset_X__
          (void)

{
  ::FString::FString(&ClearCoatNormalTexture_Offset_X,L"ClearCoatNormalTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_Offset_Y'' @ 1414353d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture_Offset_Y__
          (void)

{
  ::FString::FString(&ClearCoatNormalTexture_Offset_Y,L"ClearCoatNormalTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_Rotation'' @ 141435400

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture_Rotation__
          (void)

{
  ::FString::FString(&ClearCoatNormalTexture_Rotation,L"ClearCoatNormalTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_Scale_X'' @ 141435430

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture_Scale_X__
          (void)

{
  ::FString::FString(&ClearCoatNormalTexture_Scale_X,L"ClearCoatNormalTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_Scale_Y'' @ 141435460

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture_Scale_Y__
          (void)

{
  ::FString::FString(&ClearCoatNormalTexture_Scale_Y,L"ClearCoatNormalTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_TexCoord'' @ 141435490

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture_TexCoord__
          (void)

{
  ::FString::FString(&ClearCoatNormalTexture_TexCoord,L"ClearCoatNormalTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_TilingMethod'' @ 1414354c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatNormalTexture_TilingMethod__(void)

{
  ::FString::FString(&ClearCoatNormalTexture_TilingMethod,L"ClearCoatNormalTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughness'' @ 1414354f0

void __cdecl
UE::Interchange::Materials::ClearCoat::Parameters::_dynamic_initializer_for__ClearCoatRoughness__
          (void)

{
  ::FName::FName(&ClearCoatRoughness,L"ClearCoatRoughness");
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessFactor'' @ 141435510

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatRoughnessFactor__(void)

{
  ::FString::FString(&ClearCoatRoughnessFactor,L"ClearCoatRoughnessFactor");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessFactor__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture'' @ 141435540

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatRoughnessTexture__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture,L"ClearCoatRoughnessTexture");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_OffsetScale'' @ 141435570

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_OffsetScale__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_OffsetScale,L"ClearCoatRoughnessTexture_OffsetScale"
                    );
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_Offset_X'' @ 1414355a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_Offset_X__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_Offset_X,L"ClearCoatRoughnessTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_Offset_Y'' @ 1414355d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_Offset_Y__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_Offset_Y,L"ClearCoatRoughnessTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_Rotation'' @ 141435600

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_Rotation__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_Rotation,L"ClearCoatRoughnessTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_Scale_X'' @ 141435630

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_Scale_X__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_Scale_X,L"ClearCoatRoughnessTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_Scale_Y'' @ 141435660

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_Scale_Y__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_Scale_Y,L"ClearCoatRoughnessTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_TexCoord'' @ 141435690

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_TexCoord__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_TexCoord,L"ClearCoatRoughnessTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_TilingMethod'' @ 1414356c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_TilingMethod__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_TilingMethod,
                     L"ClearCoatRoughnessTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture'' @ 1414356f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture__(void)

{
  ::FString::FString(&ClearCoatTexture,L"ClearCoatTexture");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_OffsetScale'' @ 141435720

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_OffsetScale__
          (void)

{
  ::FString::FString(&ClearCoatTexture_OffsetScale,L"ClearCoatTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_Offset_X'' @ 141435750

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_Offset_X__(void)

{
  ::FString::FString(&ClearCoatTexture_Offset_X,L"ClearCoatTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_Offset_Y'' @ 141435780

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_Offset_Y__(void)

{
  ::FString::FString(&ClearCoatTexture_Offset_Y,L"ClearCoatTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_Rotation'' @ 1414357b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_Rotation__(void)

{
  ::FString::FString(&ClearCoatTexture_Rotation,L"ClearCoatTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_Scale_X'' @ 1414357e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_Scale_X__(void)

{
  ::FString::FString(&ClearCoatTexture_Scale_X,L"ClearCoatTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_Scale_Y'' @ 141435810

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_Scale_Y__(void)

{
  ::FString::FString(&ClearCoatTexture_Scale_Y,L"ClearCoatTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_TexCoord'' @ 141435840

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_TexCoord__(void)

{
  ::FString::FString(&ClearCoatTexture_TexCoord,L"ClearCoatTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_TilingMethod'' @ 141435870

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_TilingMethod__
          (void)

{
  ::FString::FString(&ClearCoatTexture_TilingMethod,L"ClearCoatTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'Clearcoat'' @ 1414358a0

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::_dynamic_initializer_for__Clearcoat__
          (void)

{
  ::FName::FName(&Clearcoat,L"clearcoat");
  return;
}

// `dynamic_initializer_for_'ClearcoatRoughness'' @ 1414358c0

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::
_dynamic_initializer_for__ClearcoatRoughness__(void)

{
  ::FName::FName(&ClearcoatRoughness,L"clearcoatRoughness");
  return;
}

// `dynamic_initializer_for_'Coat'' @ 1414358e0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__Coat__(void)

{
  ::FName::FName(&Coat,L"coat");
  return;
}

// `dynamic_initializer_for_'CoatAffectColor'' @ 141435900

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__CoatAffectColor__
          (void)

{
  ::FName::FName(&CoatAffectColor,L"coat_affect_color");
  return;
}

// `dynamic_initializer_for_'CoatAffectRoughness'' @ 141435920

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__CoatAffectRoughness__(void)

{
  ::FName::FName(&CoatAffectRoughness,L"coat_affect_roughness");
  return;
}

// `dynamic_initializer_for_'CoatAnisotropy'' @ 141435940

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__CoatAnisotropy__
          (void)

{
  ::FName::FName(&CoatAnisotropy,L"coat_anisotropy");
  return;
}

// `dynamic_initializer_for_'CoatAnisotropy'' @ 141435960

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__CoatAnisotropy__
          (void)

{
  ::FName::FName(&CoatAnisotropy,L"coat_anisotropy");
  return;
}

// `dynamic_initializer_for_'CoatColor'' @ 141435980

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__CoatColor__(void)

{
  ::FName::FName(&CoatColor,L"coat_color");
  return;
}

// `dynamic_initializer_for_'CoatColor'' @ 1414359a0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__CoatColor__(void)

{
  ::FName::FName(&CoatColor,L"coat_color");
  return;
}

// `dynamic_initializer_for_'CoatIOR'' @ 1414359c0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__CoatIOR__(void)

{
  ::FName::FName(&CoatIOR,L"coat_ior");
  return;
}

// `dynamic_initializer_for_'CoatIOR'' @ 1414359e0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__CoatIOR__(void)

{
  ::FName::FName(&CoatIOR,L"coat_IOR");
  return;
}

// `dynamic_initializer_for_'CoatIORLevel'' @ 141435a00

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__CoatIORLevel__
          (void)

{
  ::FName::FName(&CoatIORLevel,L"coat_ior_level");
  return;
}

// `dynamic_initializer_for_'CoatNormal'' @ 141435a20

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__CoatNormal__
          (void)

{
  ::FName::FName(&CoatNormal,L"coat_normal");
  return;
}

// `dynamic_initializer_for_'CoatRotation'' @ 141435a40

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__CoatRotation__
          (void)

{
  ::FName::FName(&CoatRotation,L"coat_rotation");
  return;
}

// `dynamic_initializer_for_'CoatRotation'' @ 141435a60

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__CoatRotation__
          (void)

{
  ::FName::FName(&CoatRotation,L"coat_rotation");
  return;
}

// `dynamic_initializer_for_'CoatRoughness'' @ 141435a80

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__CoatRoughness__
          (void)

{
  ::FName::FName(&CoatRoughness,L"coat_roughness");
  return;
}

// `dynamic_initializer_for_'CoatRoughness'' @ 141435aa0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__CoatRoughness__
          (void)

{
  ::FName::FName(&CoatRoughness,L"coat_roughness");
  return;
}

// `dynamic_initializer_for_'CoatWeight'' @ 141435ac0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__CoatWeight__(void)

{
  ::FName::FName(&CoatWeight,L"coat_weight");
  return;
}

// `dynamic_initializer_for_'Color_A'' @ 141435ae0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__Color_A__(void)

{
  ::FString::FString(&Color_A,L"_A");
  atexit(_dynamic_atexit_destructor_for__Color_A__);
  return;
}

// `dynamic_initializer_for_'Color_RGB'' @ 141435b10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__Color_RGB__(void)

{
  ::FString::FString(&Color_RGB,L"_RGB");
  atexit(_dynamic_atexit_destructor_for__Color_RGB__);
  return;
}

// `dynamic_initializer_for_'ConvertedFromRigidAnimationPrefixIdentifier'' @ 141435b40

void __cdecl
UE::Interchange::Private::_dynamic_initializer_for__ConvertedFromRigidAnimationPrefixIdentifier__
          (void)

{
  ::FString::FString(&ConvertedFromRigidAnimationPrefixIdentifier,
                     L"\\SkeletalAnimation\\ConvertedFromRigidAnimation\\");
  atexit(_dynamic_atexit_destructor_for__ConvertedFromRigidAnimationPrefixIdentifier__);
  return;
}

// `dynamic_initializer_for_'Coordinate'' @ 141435b70

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Rotator::Inputs::_dynamic_initializer_for__Coordinate__
          (void)

{
  ::FName::FName(&Coordinate,L"Coordinate");
  return;
}

// `dynamic_initializer_for_'Coordinates'' @ 141435b90

void __cdecl
UE::Interchange::Materials::Standard::Nodes::NormalFromHeightMap::Inputs::
_dynamic_initializer_for__Coordinates__(void)

{
  ::FName::FName(&Coordinates,L"Coordinates");
  return;
}

// `dynamic_initializer_for_'Coordinates'' @ 141435bb0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSample::Inputs::
_dynamic_initializer_for__Coordinates__(void)

{
  ::FName::FName(&Coordinates,L"Coordinates");
  return;
}

// `dynamic_initializer_for_'Default'' @ 141435bd0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Switch::Inputs::_dynamic_initializer_for__Default__
          (void)

{
  ::FName::FName(&Default,L"SwitchDefault");
  return;
}

// `dynamic_initializer_for_'DefaultValue'' @ 141435bf0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::ScalarParameter::Attributes::
_dynamic_initializer_for__DefaultValue__(void)

{
  ::FName::FName(&DefaultValue,L"DefaultValue");
  return;
}

// `dynamic_initializer_for_'DefaultValue'' @ 141435c10

void __cdecl
UE::Interchange::Materials::Standard::Nodes::StaticBoolParameter::Attributes::
_dynamic_initializer_for__DefaultValue__(void)

{
  ::FName::FName(&DefaultValue,L"DefaultValue");
  return;
}

// `dynamic_initializer_for_'DefaultValue'' @ 141435c30

void __cdecl
UE::Interchange::Materials::Standard::Nodes::VectorParameter::Attributes::
_dynamic_initializer_for__DefaultValue__(void)

{
  ::FName::FName(&DefaultValue,L"DefaultValue");
  return;
}

// `dynamic_initializer_for_'DensityGridName'' @ 141435c50

void __cdecl UE::Interchange::Volume::_dynamic_initializer_for__DensityGridName__(void)

{
  ::FString::FString(&DensityGridName,L"density");
  atexit(_dynamic_atexit_destructor_for__DensityGridName__);
  return;
}

// `dynamic_initializer_for_'DiffuseAlbedo'' @ 141435c80

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::
_dynamic_initializer_for__DiffuseAlbedo__(void)

{
  ::FName::FName(&DiffuseAlbedo,L"DiffuseAlbedo");
  return;
}

// `dynamic_initializer_for_'DiffuseColor'' @ 141435ca0

void __cdecl
UE::Interchange::Materials::Lambert::Parameters::_dynamic_initializer_for__DiffuseColor__(void)

{
  ::FName::FName(&DiffuseColor,L"DiffuseColor");
  return;
}

// `dynamic_initializer_for_'DiffuseColor'' @ 141435cc0

void __cdecl
UE::Interchange::Materials::PBRSG::Parameters::_dynamic_initializer_for__DiffuseColor__(void)

{
  ::FName::FName(&DiffuseColor,L"DiffuseColor");
  return;
}

// `dynamic_initializer_for_'DiffuseColor'' @ 141435ce0

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::_dynamic_initializer_for__DiffuseColor__
          (void)

{
  ::FName::FName(&DiffuseColor,L"diffuseColor");
  return;
}

// `dynamic_initializer_for_'DiffuseFactor'' @ 141435d00

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseFactor__(void)

{
  ::FString::FString(&DiffuseFactor,L"DiffuseFactor");
  atexit(_dynamic_atexit_destructor_for__DiffuseFactor__);
  return;
}

// `dynamic_initializer_for_'DiffuseFactor_A'' @ 141435d30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseFactor_A__(void)

{
  ::FString::ConcatFF(&DiffuseFactor_A,&DiffuseFactor,&PostFix::Color_A);
  atexit(_dynamic_atexit_destructor_for__DiffuseFactor_A__);
  return;
}

// `dynamic_initializer_for_'DiffuseFactor_RGB'' @ 141435d70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseFactor_RGB__(void)

{
  ::FString::ConcatFF(&DiffuseFactor_RGB,&DiffuseFactor,&PostFix::Color_RGB);
  atexit(_dynamic_atexit_destructor_for__DiffuseFactor_RGB__);
  return;
}

// `dynamic_initializer_for_'DiffuseRoughness'' @ 141435db0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__DiffuseRoughness__(void)

{
  ::FName::FName(&DiffuseRoughness,L"diffuse_roughness");
  return;
}

// `dynamic_initializer_for_'DiffuseTexture'' @ 141435dd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture__(void)

{
  ::FString::FString(&DiffuseTexture,L"DiffuseTexture");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_OffsetScale'' @ 141435e00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_OffsetScale__(void)

{
  ::FString::FString(&DiffuseTexture_OffsetScale,L"DiffuseTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_Offset_X'' @ 141435e30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_Offset_X__(void)

{
  ::FString::FString(&DiffuseTexture_Offset_X,L"DiffuseTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_Offset_Y'' @ 141435e60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_Offset_Y__(void)

{
  ::FString::FString(&DiffuseTexture_Offset_Y,L"DiffuseTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_Rotation'' @ 141435e90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_Rotation__(void)

{
  ::FString::FString(&DiffuseTexture_Rotation,L"DiffuseTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_Scale_X'' @ 141435ec0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_Scale_X__(void)

{
  ::FString::FString(&DiffuseTexture_Scale_X,L"DiffuseTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_Scale_Y'' @ 141435ef0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_Scale_Y__(void)

{
  ::FString::FString(&DiffuseTexture_Scale_Y,L"DiffuseTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_TexCoord'' @ 141435f20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_TexCoord__(void)

{
  ::FString::FString(&DiffuseTexture_TexCoord,L"DiffuseTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_TilingMethod'' @ 141435f50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_TilingMethod__
          (void)

{
  ::FString::FString(&DiffuseTexture_TilingMethod,L"DiffuseTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'Displacement'' @ 141435f80

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::SubstrateMaterial::Outputs::
_dynamic_initializer_for__Displacement__(void)

{
  ::FName::FName(&Displacement,L"Displacement");
  return;
}

// `dynamic_initializer_for_'Displacement'' @ 141435fa0

void __cdecl
UE::Interchange::Materials::Common::Parameters::_dynamic_initializer_for__Displacement__(void)

{
  ::FName::FName(&Displacement,L"Displacement");
  return;
}

// `dynamic_initializer_for_'Displacement'' @ 141435fc0

void __cdecl
UE::Interchange::Materials::SubstrateMaterial::Parameters::_dynamic_initializer_for__Displacement__
          (void)

{
  ::FName::FName(&Displacement,L"Displacement");
  return;
}

// `dynamic_initializer_for_'Displacement'' @ 141435fe0

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::_dynamic_initializer_for__Displacement__
          (void)

{
  ::FName::FName(&Displacement,L"displacement");
  return;
}

// `dynamic_initializer_for_'EDF'' @ 141436000

void __cdecl UE::Interchange::Materials::Surface::Parameters::_dynamic_initializer_for__EDF__(void)

{
  ::FName::FName(&EDF,L"edf");
  return;
}

// `dynamic_initializer_for_'Emission'' @ 141436020

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__Emission__(void)

{
  ::FName::FName(&Emission,L"emission");
  return;
}

// `dynamic_initializer_for_'Emission'' @ 141436040

void __cdecl
UE::Interchange::Materials::SurfaceUnlit::Parameters::_dynamic_initializer_for__Emission__(void)

{
  ::FName::FName(&Emission,L"emission");
  return;
}

// `dynamic_initializer_for_'EmissionColor'' @ 141436060

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__EmissionColor__
          (void)

{
  ::FName::FName(&EmissionColor,L"emission_color");
  return;
}

// `dynamic_initializer_for_'EmissionColor'' @ 141436080

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__EmissionColor__
          (void)

{
  ::FName::FName(&EmissionColor,L"emission_color");
  return;
}

// `dynamic_initializer_for_'EmissionColor'' @ 1414360a0

void __cdecl
UE::Interchange::Materials::SurfaceUnlit::Parameters::_dynamic_initializer_for__EmissionColor__
          (void)

{
  ::FName::FName(&EmissionColor,L"emission_color");
  return;
}

// `dynamic_initializer_for_'EmissionLuminance'' @ 1414360c0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__EmissionLuminance__(void)

{
  ::FName::FName(&EmissionLuminance,L"emission_luminance");
  return;
}

// `dynamic_initializer_for_'EmissiveColor'' @ 1414360e0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::
_dynamic_initializer_for__EmissiveColor__(void)

{
  ::FName::FName(&EmissiveColor,L"EmissiveColor");
  return;
}

// `dynamic_initializer_for_'EmissiveColor'' @ 141436100

void __cdecl
UE::Interchange::Materials::Common::Parameters::_dynamic_initializer_for__EmissiveColor__(void)

{
  ::FName::FName(&EmissiveColor,L"EmissiveColor");
  return;
}

// `dynamic_initializer_for_'EmissiveColor'' @ 141436120

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::_dynamic_initializer_for__EmissiveColor__
          (void)

{
  ::FName::FName(&EmissiveColor,L"emissiveColor");
  return;
}

// `dynamic_initializer_for_'EmissiveFactor'' @ 141436140

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveFactor__(void)

{
  ::FString::FString(&EmissiveFactor,L"EmissiveFactor");
  atexit(_dynamic_atexit_destructor_for__EmissiveFactor__);
  return;
}

// `dynamic_initializer_for_'EmissiveStrength'' @ 141436170

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveStrength__(void)

{
  ::FString::FString(&EmissiveStrength,L"EmissiveStrength");
  atexit(_dynamic_atexit_destructor_for__EmissiveStrength__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture'' @ 1414361a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture__(void)

{
  ::FString::FString(&EmissiveTexture,L"EmissiveTexture");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_OffsetScale'' @ 1414361d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_OffsetScale__
          (void)

{
  ::FString::FString(&EmissiveTexture_OffsetScale,L"EmissiveTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_Offset_X'' @ 141436200

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_Offset_X__(void)

{
  ::FString::FString(&EmissiveTexture_Offset_X,L"EmissiveTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_Offset_Y'' @ 141436230

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_Offset_Y__(void)

{
  ::FString::FString(&EmissiveTexture_Offset_Y,L"EmissiveTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_Rotation'' @ 141436260

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_Rotation__(void)

{
  ::FString::FString(&EmissiveTexture_Rotation,L"EmissiveTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_Scale_X'' @ 141436290

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_Scale_X__(void)

{
  ::FString::FString(&EmissiveTexture_Scale_X,L"EmissiveTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_Scale_Y'' @ 1414362c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_Scale_Y__(void)

{
  ::FString::FString(&EmissiveTexture_Scale_Y,L"EmissiveTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_TexCoord'' @ 1414362f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_TexCoord__(void)

{
  ::FString::FString(&EmissiveTexture_TexCoord,L"EmissiveTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_TilingMethod'' @ 141436320

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_TilingMethod__
          (void)

{
  ::FString::FString(&EmissiveTexture_TilingMethod,L"EmissiveTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'F0'' @ 141436350

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::_dynamic_initializer_for__F0__(void)

{
  ::FName::FName(&F0,L"F0");
  return;
}

// `dynamic_initializer_for_'F90'' @ 141436370

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::_dynamic_initializer_for__F90__(void)

{
  ::FName::FName(&F90,L"F90");
  return;
}

// `dynamic_initializer_for_'Factor'' @ 141436390

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Lerp::Inputs::_dynamic_initializer_for__Factor__(void)

{
  ::FName::FName(&Factor,L"Factor");
  return;
}

// `dynamic_initializer_for_'Filter'' @ 1414363b0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSampleBlur::Attributes::
_dynamic_initializer_for__Filter__(void)

{
  ::FName::FName(&Filter,L"Filter");
  return;
}

// `dynamic_initializer_for_'FilterOffset'' @ 1414363d0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSampleBlur::Attributes::
_dynamic_initializer_for__FilterOffset__(void)

{
  ::FName::FName(&FilterOffset,L"FilterOffset");
  return;
}

// `dynamic_initializer_for_'FilterSize'' @ 1414363f0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSampleBlur::Attributes::
_dynamic_initializer_for__FilterSize__(void)

{
  ::FName::FName(&FilterSize,L"FilterSize");
  return;
}

// `dynamic_initializer_for_'FilterWidth'' @ 141436410

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::Inputs::_dynamic_initializer_for__FilterWidth__
          (void)

{
  ::FName::FName(&FilterWidth,L"FilterWidth");
  return;
}

// `dynamic_initializer_for_'Flatness'' @ 141436430

void __cdecl
UE::Interchange::Materials::Standard::Nodes::FlattenNormal::Inputs::
_dynamic_initializer_for__Flatness__(void)

{
  ::FName::FName(&Flatness,L"Flatness");
  return;
}

// `dynamic_initializer_for_'FrontMaterial'' @ 141436450

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::SubstrateMaterial::Outputs::
_dynamic_initializer_for__FrontMaterial__(void)

{
  ::FName::FName(&FrontMaterial,L"OpenPBR_FrontMaterial");
  return;
}

// `dynamic_initializer_for_'FrontMaterial'' @ 141436470

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::SubstrateMaterial::Outputs::
_dynamic_initializer_for__FrontMaterial__(void)

{
  ::FName::FName(&FrontMaterial,L"Substrate UsdPreviewSurface");
  return;
}

// `dynamic_initializer_for_'FrontMaterial'' @ 141436490

void __cdecl
UE::Interchange::Materials::SubstrateMaterial::Parameters::_dynamic_initializer_for__FrontMaterial__
          (void)

{
  ::FName::FName(&FrontMaterial,L"Front Material");
  return;
}

// `dynamic_initializer_for_'Function'' @ 1414364b0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::_dynamic_initializer_for__Function__
          (void)

{
  ::FName::FName(&Function,L"NoiseFunction");
  return;
}

// `dynamic_initializer_for_'Function'' @ 1414364d0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::VectorNoise::Attributes::
_dynamic_initializer_for__Function__(void)

{
  ::FName::FName(&Function,L"NoiseFunction");
  return;
}

// `dynamic_initializer_for_'FuzzAmount'' @ 1414364f0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::
_dynamic_initializer_for__FuzzAmount__(void)

{
  ::FName::FName(&FuzzAmount,L"FuzzAmount");
  return;
}

// `dynamic_initializer_for_'FuzzColor'' @ 141436510

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::_dynamic_initializer_for__FuzzColor__
          (void)

{
  ::FName::FName(&FuzzColor,L"FuzzColor");
  return;
}

// `dynamic_initializer_for_'FuzzColor'' @ 141436530

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__FuzzColor__(void)

{
  ::FName::FName(&FuzzColor,L"fuzz_color");
  return;
}

// `dynamic_initializer_for_'FuzzRoughness'' @ 141436550

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::
_dynamic_initializer_for__FuzzRoughness__(void)

{
  ::FName::FName(&FuzzRoughness,L"FuzzRoughness");
  return;
}

// `dynamic_initializer_for_'FuzzRoughness'' @ 141436570

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__FuzzRoughness__
          (void)

{
  ::FName::FName(&FuzzRoughness,L"fuzz_roughness");
  return;
}

// `dynamic_initializer_for_'FuzzWeight'' @ 141436590

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__FuzzWeight__(void)

{
  ::FName::FName(&FuzzWeight,L"fuzz_weight");
  return;
}

// `dynamic_initializer_for_'G'' @ 1414365b0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Mask::Attributes::_dynamic_initializer_for__G__(void)

{
  ::FName::FName(&G,L"G");
  return;
}

// `dynamic_initializer_for_'G'' @ 1414365d0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSample::Outputs::_dynamic_initializer_for__G__
          (void)

{
  ::FName::FName(&G,L"G");
  return;
}

// `dynamic_initializer_for_'GRegisterInterchangePipelineObjectVersion'' @ 1414365f0

void __cdecl _dynamic_initializer_for__GRegisterInterchangePipelineObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FFortniteMainInterchangePipelineObjectVersion::GUID;
  local_38 = FFortniteMainInterchangePipelineObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,1,L"FN-Main-InterchangePipeline",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterInterchangePipelineObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GeometryCoatNormal'' @ 141436650

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__GeometryCoatNormal__(void)

{
  ::FName::FName(&GeometryCoatNormal,L"geometry_coat_normal");
  return;
}

// `dynamic_initializer_for_'GeometryNormal'' @ 141436670

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__GeometryNormal__
          (void)

{
  ::FName::FName(&GeometryNormal,L"geometry_normal");
  return;
}

// `dynamic_initializer_for_'GeometryOpacity'' @ 141436690

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__GeometryOpacity__
          (void)

{
  ::FName::FName(&GeometryOpacity,L"geometry_opacity");
  return;
}

// `dynamic_initializer_for_'GeometryTangent'' @ 1414366b0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__GeometryTangent__
          (void)

{
  ::FName::FName(&GeometryTangent,L"geometry_tangent");
  return;
}

// `dynamic_initializer_for_'GeometryThinWalled'' @ 1414366d0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__GeometryThinWalled__(void)

{
  ::FName::FName(&GeometryThinWalled,L"geometry_thin_walled");
  return;
}

// `dynamic_initializer_for_'GlintUV'' @ 1414366f0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::_dynamic_initializer_for__GlintUV__
          (void)

{
  ::FName::FName(&GlintUV,L"GlintUV");
  return;
}

// `dynamic_initializer_for_'GlintValue'' @ 141436710

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::
_dynamic_initializer_for__GlintValue__(void)

{
  ::FName::FName(&GlintValue,L"GlintValue");
  return;
}

// `dynamic_initializer_for_'GlobalOffsetTransform'' @ 141436730

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_initializer_for__GlobalOffsetTransform__(void)

{
  ::FString::FString(&GlobalOffsetTransform,L"__Payload__GlobalOffsetTransform");
  atexit(_dynamic_atexit_destructor_for__GlobalOffsetTransform__);
  return;
}

// `dynamic_initializer_for_'Glossiness'' @ 141436760

void __cdecl
UE::Interchange::Materials::PBRSG::Parameters::_dynamic_initializer_for__Glossiness__(void)

{
  ::FName::FName(&Glossiness,L"Glossiness");
  return;
}

// `dynamic_initializer_for_'GlossinessFactor'' @ 141436780

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__GlossinessFactor__(void)

{
  ::FString::FString(&GlossinessFactor,L"GlossinessFactor");
  atexit(_dynamic_atexit_destructor_for__GlossinessFactor__);
  return;
}

// `dynamic_initializer_for_'GridNameAndComponentIndexSeparator'' @ 1414367b0

void __cdecl
UE::Interchange::Volume::_dynamic_initializer_for__GridNameAndComponentIndexSeparator__(void)

{
  ::FString::FString(&GridNameAndComponentIndexSeparator,L"_");
  atexit(_dynamic_atexit_destructor_for__GridNameAndComponentIndexSeparator__);
  return;
}

// `dynamic_initializer_for_'HeightMap'' @ 1414367e0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::NormalFromHeightMap::Inputs::
_dynamic_initializer_for__HeightMap__(void)

{
  ::FName::FName(&HeightMap,L"Height Map");
  return;
}

// `dynamic_initializer_for_'IOR'' @ 141436800

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IOR__(void)

{
  ::FString::FString(&IOR,L"IOR");
  atexit(_dynamic_atexit_destructor_for__IOR__);
  return;
}

// `dynamic_initializer_for_'IOR'' @ 141436830

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::_dynamic_initializer_for__IOR__(void)

{
  ::FName::FName(&IOR,L"ior");
  return;
}

// `dynamic_initializer_for_'IgnorePause'' @ 141436850

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Time::Attributes::
_dynamic_initializer_for__IgnorePause__(void)

{
  ::FName::FName(&IgnorePause,L"bIgnorePause");
  return;
}

// `dynamic_initializer_for_'Index'' @ 141436870

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs::
_dynamic_initializer_for__Index__(void)

{
  ::FName::FName(&Index,L"Index");
  return;
}

// `dynamic_initializer_for_'IndexOfRefraction'' @ 141436890

void __cdecl
UE::Interchange::Materials::Common::Parameters::_dynamic_initializer_for__IndexOfRefraction__(void)

{
  ::FName::FName(&IndexOfRefraction,L"IOR");
  return;
}

// `dynamic_initializer_for_'Input'' @ 1414368b0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Mask::Inputs::_dynamic_initializer_for__Input__(void)

{
  ::FName::FName(&Input,L"Input");
  return;
}

// `dynamic_initializer_for_'Input'' @ 1414368d0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::OneMinus::Inputs::_dynamic_initializer_for__Input__
          (void)

{
  ::FName::FName(&Input,L"Input");
  return;
}

// `dynamic_initializer_for_'Input'' @ 1414368f0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TransformPosition::Inputs::
_dynamic_initializer_for__Input__(void)

{
  ::FName::FName(&Input,L"Input");
  return;
}

// `dynamic_initializer_for_'Input'' @ 141436910

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TransformVector::Inputs::
_dynamic_initializer_for__Input__(void)

{
  ::FName::FName(&Input,L"Input");
  return;
}

// `dynamic_initializer_for_'Input'' @ 141436930

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Trigonometry::Inputs::_dynamic_initializer_for__Input__
          (void)

{
  ::FName::FName(&Input,L"Input");
  return;
}

// `dynamic_initializer_for_'InputCount'' @ 141436950

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Switch::Attributes::
_dynamic_initializer_for__InputCount__(void)

{
  ::FName::FName(&InputCount,L"SwitchInputCount");
  return;
}

// `dynamic_initializer_for_'InputName'' @ 141436970

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Switch::Inputs::_dynamic_initializer_for__InputName__
          (void)

{
  ::FName::FName(&InputName,L"SwitchInputName");
  return;
}

// `dynamic_initializer_for_'Intensity'' @ 141436990

void __cdecl
UE::Interchange::Materials::Standard::Nodes::NormalFromHeightMap::Inputs::
_dynamic_initializer_for__Intensity__(void)

{
  ::FName::FName(&Intensity,L"Normal Map Intensity");
  return;
}

// `dynamic_initializer_for_'IridescenceFactor'' @ 1414369b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceFactor__(void)

{
  ::FString::FString(&IridescenceFactor,L"IridescenceFactor");
  atexit(_dynamic_atexit_destructor_for__IridescenceFactor__);
  return;
}

// `dynamic_initializer_for_'IridescenceIOR'' @ 1414369e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceIOR__(void)

{
  ::FString::FString(&IridescenceIOR,L"IridescenceIOR");
  atexit(_dynamic_atexit_destructor_for__IridescenceIOR__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture'' @ 141436a10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture__(void)

{
  ::FString::FString(&IridescenceTexture,L"IridescenceTexture");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_OffsetScale'' @ 141436a40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_OffsetScale__
          (void)

{
  ::FString::FString(&IridescenceTexture_OffsetScale,L"IridescenceTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_Offset_X'' @ 141436a70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_Offset_X__
          (void)

{
  ::FString::FString(&IridescenceTexture_Offset_X,L"IridescenceTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_Offset_Y'' @ 141436aa0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_Offset_Y__
          (void)

{
  ::FString::FString(&IridescenceTexture_Offset_Y,L"IridescenceTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_Rotation'' @ 141436ad0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_Rotation__
          (void)

{
  ::FString::FString(&IridescenceTexture_Rotation,L"IridescenceTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_Scale_X'' @ 141436b00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_Scale_X__(void)

{
  ::FString::FString(&IridescenceTexture_Scale_X,L"IridescenceTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_Scale_Y'' @ 141436b30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_Scale_Y__(void)

{
  ::FString::FString(&IridescenceTexture_Scale_Y,L"IridescenceTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_TexCoord'' @ 141436b60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_TexCoord__
          (void)

{
  ::FString::FString(&IridescenceTexture_TexCoord,L"IridescenceTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_TilingMethod'' @ 141436b90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_TilingMethod__
          (void)

{
  ::FString::FString(&IridescenceTexture_TilingMethod,L"IridescenceTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessMaximum'' @ 141436bc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceThicknessMaximum__
          (void)

{
  ::FString::FString(&IridescenceThicknessMaximum,L"IridescenceThicknessMaximum");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessMaximum__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessMinimum'' @ 141436bf0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceThicknessMinimum__
          (void)

{
  ::FString::FString(&IridescenceThicknessMinimum,L"IridescenceThicknessMinimum");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessMinimum__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture'' @ 141436c20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceThicknessTexture__
          (void)

{
  ::FString::FString(&IridescenceThicknessTexture,L"IridescenceThicknessTexture");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_OffsetScale'' @ 141436c50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_OffsetScale__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_OffsetScale,
                     L"IridescenceThicknessTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_Offset_X'' @ 141436c80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_Offset_X__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_Offset_X,L"IridescenceThicknessTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_Offset_Y'' @ 141436cb0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_Offset_Y__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_Offset_Y,L"IridescenceThicknessTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_Rotation'' @ 141436ce0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_Rotation__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_Rotation,L"IridescenceThicknessTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_Scale_X'' @ 141436d10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_Scale_X__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_Scale_X,L"IridescenceThicknessTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_Scale_Y'' @ 141436d40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_Scale_Y__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_Scale_Y,L"IridescenceThicknessTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_TexCoord'' @ 141436d70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_TexCoord__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_TexCoord,L"IridescenceThicknessTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_TilingMethod'' @ 141436da0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_TilingMethod__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_TilingMethod,
                     L"IridescenceThicknessTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'KernelSize'' @ 141436dd0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSampleBlur::Attributes::
_dynamic_initializer_for__KernelSize__(void)

{
  ::FName::FName(&KernelSize,L"KernelSize");
  return;
}

// `dynamic_initializer_for_'LevelScale'' @ 141436df0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::
_dynamic_initializer_for__LevelScale__(void)

{
  ::FName::FName(&LevelScale,L"LevelScale");
  return;
}

// `dynamic_initializer_for_'Levels'' @ 141436e10

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::_dynamic_initializer_for__Levels__
          (void)

{
  ::FName::FName(&Levels,L"Levels");
  return;
}

// `dynamic_initializer_for_'LogInterchangePipeline'' @ 141436e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInterchangePipeline__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInterchangePipeline,L"LogInterchangePipeline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogInterchangePipeline__);
  return;
}

// `dynamic_initializer_for_'MeshGlobalTransform'' @ 141436e70

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_initializer_for__MeshGlobalTransform__(void)

{
  ::FString::FString(&MeshGlobalTransform,L"__Payload__MeshGlobalTransform");
  atexit(_dynamic_atexit_destructor_for__MeshGlobalTransform__);
  return;
}

// `dynamic_initializer_for_'Metallic'' @ 141436ea0

void __cdecl
UE::Interchange::Materials::PBRMR::Parameters::_dynamic_initializer_for__Metallic__(void)

{
  ::FName::FName(&Metallic,L"Metallic");
  return;
}

// `dynamic_initializer_for_'Metallic'' @ 141436ec0

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::_dynamic_initializer_for__Metallic__
          (void)

{
  ::FName::FName(&Metallic,L"metallic");
  return;
}

// `dynamic_initializer_for_'MetallicFactor'' @ 141436ee0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__MetallicFactor__(void)

{
  ::FString::FString(&MetallicFactor,L"MetallicFactor");
  atexit(_dynamic_atexit_destructor_for__MetallicFactor__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture'' @ 141436f10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__MetallicRoughnessTexture__(void)

{
  ::FString::FString(&MetallicRoughnessTexture,L"MetallicRoughnessTexture");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_OffsetScale'' @ 141436f40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__MetallicRoughnessTexture_OffsetScale__(void)

{
  ::FString::FString(&MetallicRoughnessTexture_OffsetScale,L"MetallicRoughnessTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_Offset_X'' @ 141436f70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__MetallicRoughnessTexture_Offset_X__(void)

{
  ::FString::FString(&MetallicRoughnessTexture_Offset_X,L"MetallicRoughnessTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_Offset_Y'' @ 141436fa0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__MetallicRoughnessTexture_Offset_Y__(void)

{
  ::FString::FString(&MetallicRoughnessTexture_Offset_Y,L"MetallicRoughnessTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_Rotation'' @ 141436fd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__MetallicRoughnessTexture_Rotation__(void)

{
  ::FString::FString(&MetallicRoughnessTexture_Rotation,L"MetallicRoughnessTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_Scale_X'' @ 141437000

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__MetallicRoughnessTexture_Scale_X__
          (void)

{
  ::FString::FString(&MetallicRoughnessTexture_Scale_X,L"MetallicRoughnessTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_Scale_Y'' @ 141437030

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__MetallicRoughnessTexture_Scale_Y__
          (void)

{
  ::FString::FString(&MetallicRoughnessTexture_Scale_Y,L"MetallicRoughnessTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_TexCoord'' @ 141437060

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__MetallicRoughnessTexture_TexCoord__(void)

{
  ::FString::FString(&MetallicRoughnessTexture_TexCoord,L"MetallicRoughnessTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_TilingMethod'' @ 141437090

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__MetallicRoughnessTexture_TilingMethod__(void)

{
  ::FString::FString(&MetallicRoughnessTexture_TilingMethod,L"MetallicRoughnessTexture_TilingMethod"
                    );
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'Metalness'' @ 1414370c0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__Metalness__(void)

{
  ::FName::FName(&Metalness,L"metalness");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1414370e0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantInterchangePipelines'' @ 141437100

void __cdecl _dynamic_initializer_for__ModuleRegistrantInterchangePipelines__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "InterchangePipelines";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"InterchangePipelines",0x14);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FInterchangePipelinesModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437150

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Add::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"Add");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437170

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Cosine::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"Cosine");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437190

void __cdecl
UE::Interchange::Materials::Standard::Nodes::FlattenNormal::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"FlattenNormal");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1414371b0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Lerp::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"Lerp");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1414371d0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::MakeFloat3::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"MakeFloat3");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1414371f0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Mask::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"ComponentMask");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437210

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Multiply::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"Multiply");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437230

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"Noise");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437250

void __cdecl
UE::Interchange::Materials::Standard::Nodes::NormalFromHeightMap::_dynamic_initializer_for__Name__
          (void)

{
  ::FName::FName(&Name,L"NormalFromHeightMap");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437270

void __cdecl
UE::Interchange::Materials::Standard::Nodes::OneMinus::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"OneMinus");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437290

void __cdecl UE::Interchange::Materials::OpenPBRSurface::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"open_pbr_surface");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1414372b0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::RotateAboutAxis::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"RotateAboutAxis");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1414372d0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Rotator::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"Rotator");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1414372f0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::ScalarParameter::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"ScalarParameter");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437310

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Sine::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"Sine");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437330

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"SubstrateSlabBSDF");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437350

void __cdecl UE::Interchange::Materials::StandardSurface::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"standard_surface");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437370

void __cdecl
UE::Interchange::Materials::Standard::Nodes::StaticBoolParameter::_dynamic_initializer_for__Name__
          (void)

{
  ::FName::FName(&Name,L"StaticBoolParameter");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437390

void __cdecl UE::Interchange::Materials::Surface::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"surface");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1414373b0

void __cdecl UE::Interchange::Materials::SurfaceUnlit::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"surface_unlit");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1414373d0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Switch::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"Switch");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1414373f0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Tangent::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"Tangent");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437410

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::_dynamic_initializer_for__Name__
          (void)

{
  ::FName::FName(&Name,L"TextureCoordinate");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437430

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureObject::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"TextureObject");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437450

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSample::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"TextureSample");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437470

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Time::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"Time");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437490

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TransformPosition::_dynamic_initializer_for__Name__
          (void)

{
  ::FName::FName(&Name,L"TransformPosition");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1414374b0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TransformVector::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"Transform");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1414374d0

void __cdecl UE::Interchange::Materials::UsdPreviewSurface::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"UsdPreviewSurface");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1414374f0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::VectorNoise::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"VectorNoise");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437510

void __cdecl
UE::Interchange::Materials::Standard::Nodes::VectorParameter::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"VectorParameter");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141437530

void __cdecl
UE::Interchange::Materials::Standard::Nodes::VertexColor::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,L"VertexColor");
  return;
}

// `dynamic_initializer_for_'Normal'' @ 141437550

void __cdecl
UE::Interchange::Materials::Standard::Nodes::FlattenNormal::Inputs::
_dynamic_initializer_for__Normal__(void)

{
  ::FName::FName(&Normal,L"Normal");
  return;
}

// `dynamic_initializer_for_'Normal'' @ 141437570

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::_dynamic_initializer_for__Normal__
          (void)

{
  ::FName::FName(&Normal,L"Normal");
  return;
}

// `dynamic_initializer_for_'Normal'' @ 141437590

void __cdecl
UE::Interchange::Materials::Common::Parameters::_dynamic_initializer_for__Normal__(void)

{
  ::FName::FName(&Normal,L"Normal");
  return;
}

// `dynamic_initializer_for_'Normal'' @ 1414375b0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__Normal__(void)

{
  ::FName::FName(&Normal,L"normal");
  return;
}

// `dynamic_initializer_for_'Normal'' @ 1414375d0

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::_dynamic_initializer_for__Normal__(void)

{
  ::FName::FName(&Normal,L"normal");
  return;
}

// `dynamic_initializer_for_'NormalScale'' @ 1414375f0

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalScale__(void)

{
  ::FString::FString(&NormalScale,L"NormalScale");
  atexit(_dynamic_atexit_destructor_for__NormalScale__);
  return;
}

// `dynamic_initializer_for_'NormalTexture'' @ 141437620

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture__(void)

{
  ::FString::FString(&NormalTexture,L"NormalTexture");
  atexit(_dynamic_atexit_destructor_for__NormalTexture__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_OffsetScale'' @ 141437650

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_OffsetScale__(void)

{
  ::FString::FString(&NormalTexture_OffsetScale,L"NormalTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_Offset_X'' @ 141437680

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_Offset_X__(void)

{
  ::FString::FString(&NormalTexture_Offset_X,L"NormalTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_Offset_Y'' @ 1414376b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_Offset_Y__(void)

{
  ::FString::FString(&NormalTexture_Offset_Y,L"NormalTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_Rotation'' @ 1414376e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_Rotation__(void)

{
  ::FString::FString(&NormalTexture_Rotation,L"NormalTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_Scale_X'' @ 141437710

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_Scale_X__(void)

{
  ::FString::FString(&NormalTexture_Scale_X,L"NormalTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_Scale_Y'' @ 141437740

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_Scale_Y__(void)

{
  ::FString::FString(&NormalTexture_Scale_Y,L"NormalTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_TexCoord'' @ 141437770

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_TexCoord__(void)

{
  ::FString::FString(&NormalTexture_TexCoord,L"NormalTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_TilingMethod'' @ 1414377a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_TilingMethod__(void)

{
  ::FString::FString(&NormalTexture_TilingMethod,L"NormalTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'NormalizedRotationAxis'' @ 1414377d0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::RotateAboutAxis::Inputs::
_dynamic_initializer_for__NormalizedRotationAxis__(void)

{
  ::FName::FName(&NormalizedRotationAxis,L"NormalizedRotationAxis");
  return;
}

// `dynamic_initializer_for_'Occlusion'' @ 1414377f0

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::SubstrateMaterial::Outputs::
_dynamic_initializer_for__Occlusion__(void)

{
  ::FName::FName(&Occlusion,L"Occlusion");
  return;
}

// `dynamic_initializer_for_'Occlusion'' @ 141437810

void __cdecl
UE::Interchange::Materials::Common::Parameters::_dynamic_initializer_for__Occlusion__(void)

{
  ::FName::FName(&Occlusion,L"Occlusion");
  return;
}

// `dynamic_initializer_for_'Occlusion'' @ 141437830

void __cdecl
UE::Interchange::Materials::SubstrateMaterial::Parameters::_dynamic_initializer_for__Occlusion__
          (void)

{
  ::FName::FName(&Occlusion,L"Occlusion");
  return;
}

// `dynamic_initializer_for_'Occlusion'' @ 141437850

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::_dynamic_initializer_for__Occlusion__
          (void)

{
  ::FName::FName(&Occlusion,L"occlusion");
  return;
}

// `dynamic_initializer_for_'OcclusionStrength'' @ 141437870

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionStrength__(void)

{
  ::FString::FString(&OcclusionStrength,L"OcclusionStrength");
  atexit(_dynamic_atexit_destructor_for__OcclusionStrength__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture'' @ 1414378a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture__(void)

{
  ::FString::FString(&OcclusionTexture,L"OcclusionTexture");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_OffsetScale'' @ 1414378d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_OffsetScale__
          (void)

{
  ::FString::FString(&OcclusionTexture_OffsetScale,L"OcclusionTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_Offset_X'' @ 141437900

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_Offset_X__(void)

{
  ::FString::FString(&OcclusionTexture_Offset_X,L"OcclusionTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_Offset_Y'' @ 141437930

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_Offset_Y__(void)

{
  ::FString::FString(&OcclusionTexture_Offset_Y,L"OcclusionTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_Rotation'' @ 141437960

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_Rotation__(void)

{
  ::FString::FString(&OcclusionTexture_Rotation,L"OcclusionTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_Scale_X'' @ 141437990

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_Scale_X__(void)

{
  ::FString::FString(&OcclusionTexture_Scale_X,L"OcclusionTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_Scale_Y'' @ 1414379c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_Scale_Y__(void)

{
  ::FString::FString(&OcclusionTexture_Scale_Y,L"OcclusionTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_TexCoord'' @ 1414379f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_TexCoord__(void)

{
  ::FString::FString(&OcclusionTexture_TexCoord,L"OcclusionTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_TilingMethod'' @ 141437a20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_TilingMethod__
          (void)

{
  ::FString::FString(&OcclusionTexture_TilingMethod,L"OcclusionTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'Offset'' @ 141437a50

void __cdecl
UE::Interchange::Materials::Standard::Nodes::NormalFromHeightMap::Inputs::
_dynamic_initializer_for__Offset__(void)

{
  ::FName::FName(&Offset,L"Height Map UV Offset");
  return;
}

// `dynamic_initializer_for_'Offset'' @ 141437a70

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs::
_dynamic_initializer_for__Offset__(void)

{
  ::FName::FName(&Offset,L"Offset");
  return;
}

// `dynamic_initializer_for_'OffsetScale'' @ 141437a90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__OffsetScale__(void)

{
  ::FString::FString(&OffsetScale,L"_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__OffsetScale__);
  return;
}

// `dynamic_initializer_for_'OffsetX'' @ 141437ac0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__OffsetX__(void)

{
  ::FString::FString(&OffsetX,L"_Offset_X");
  atexit(_dynamic_atexit_destructor_for__OffsetX__);
  return;
}

// `dynamic_initializer_for_'OffsetY'' @ 141437af0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__OffsetY__(void)

{
  ::FString::FString(&OffsetY,L"_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__OffsetY__);
  return;
}

// `dynamic_initializer_for_'Opacity'' @ 141437b20

void __cdecl
UE::Interchange::Materials::Surface::Substrate::Outputs::_dynamic_initializer_for__Opacity__(void)

{
  ::FName::FName(&Opacity,L"Opacity");
  return;
}

// `dynamic_initializer_for_'Opacity'' @ 141437b40

void __cdecl
UE::Interchange::Materials::StandardSurface::SubstrateMaterial::Outputs::
_dynamic_initializer_for__Opacity__(void)

{
  ::FName::FName(&Opacity,L"Geometry Opacity");
  return;
}

// `dynamic_initializer_for_'Opacity'' @ 141437b60

void __cdecl
UE::Interchange::Materials::Common::Parameters::_dynamic_initializer_for__Opacity__(void)

{
  ::FName::FName(&Opacity,L"Opacity");
  return;
}

// `dynamic_initializer_for_'Opacity'' @ 141437b80

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__Opacity__(void)

{
  ::FName::FName(&Opacity,L"opacity");
  return;
}

// `dynamic_initializer_for_'Opacity'' @ 141437ba0

void __cdecl
UE::Interchange::Materials::Surface::Parameters::_dynamic_initializer_for__Opacity__(void)

{
  ::FName::FName(&Opacity,L"opacity");
  return;
}

// `dynamic_initializer_for_'Opacity'' @ 141437bc0

void __cdecl
UE::Interchange::Materials::SurfaceUnlit::Parameters::_dynamic_initializer_for__Opacity__(void)

{
  ::FName::FName(&Opacity,L"opacity");
  return;
}

// `dynamic_initializer_for_'Opacity'' @ 141437be0

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::_dynamic_initializer_for__Opacity__(void)

{
  ::FName::FName(&Opacity,L"opacity");
  return;
}

// `dynamic_initializer_for_'OpacityMask'' @ 141437c00

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::SubstrateMaterial::Outputs::
_dynamic_initializer_for__OpacityMask__(void)

{
  ::FName::FName(&OpacityMask,L"OpacityMask");
  return;
}

// `dynamic_initializer_for_'OpacityMask'' @ 141437c20

void __cdecl
UE::Interchange::Materials::SurfaceUnlit::Outputs::_dynamic_initializer_for__OpacityMask__(void)

{
  ::FName::FName(&OpacityMask,L"OpacityMask");
  return;
}

// `dynamic_initializer_for_'OpacityMask'' @ 141437c40

void __cdecl
UE::Interchange::Materials::Common::Parameters::_dynamic_initializer_for__OpacityMask__(void)

{
  ::FName::FName(&OpacityMask,L"OpacityMask");
  return;
}

// `dynamic_initializer_for_'OpacityMask'' @ 141437c60

void __cdecl
UE::Interchange::Materials::SubstrateMaterial::Parameters::_dynamic_initializer_for__OpacityMask__
          (void)

{
  ::FName::FName(&OpacityMask,L"Opacity Mask");
  return;
}

// `dynamic_initializer_for_'OpacityThreshold'' @ 141437c80

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::
_dynamic_initializer_for__OpacityThreshold__(void)

{
  ::FName::FName(&OpacityThreshold,L"opacityThreshold");
  return;
}

// `dynamic_initializer_for_'Opaque'' @ 141437ca0

void __cdecl
UE::Interchange::Materials::StandardSurface::SubstrateMaterial::Outputs::
_dynamic_initializer_for__Opaque__(void)

{
  ::FName::FName(&Opaque,L"Substrate StandardSurface Opaque");
  return;
}

// `dynamic_initializer_for_'OutputMax'' @ 141437cc0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::
_dynamic_initializer_for__OutputMax__(void)

{
  ::FName::FName(&OutputMax,L"OutputMax");
  return;
}

// `dynamic_initializer_for_'OutputMin'' @ 141437ce0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::
_dynamic_initializer_for__OutputMin__(void)

{
  ::FName::FName(&OutputMin,L"OutputMin");
  return;
}

// `dynamic_initializer_for_'OverridePeriod'' @ 141437d00

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Time::Attributes::
_dynamic_initializer_for__OverridePeriod__(void)

{
  ::FName::FName(&OverridePeriod,L"bOverride_Period");
  return;
}

// `dynamic_initializer_for_'Path'' @ 141437d20

void __cdecl UE::Interchange::Materials::Factory::Expression::_dynamic_initializer_for__Path__(void)

{
  ::FName::FName(&Path,L"MaterialExpressionPath");
  return;
}

// `dynamic_initializer_for_'Period'' @ 141437d40

void __cdecl
UE::Interchange::Materials::Standard::Nodes::RotateAboutAxis::Attributes::
_dynamic_initializer_for__Period__(void)

{
  ::FName::FName(&Period,L"Period");
  return;
}

// `dynamic_initializer_for_'Period'' @ 141437d60

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Time::Attributes::_dynamic_initializer_for__Period__
          (void)

{
  ::FName::FName(&Period,L"Period");
  return;
}

// `dynamic_initializer_for_'Period'' @ 141437d80

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Trigonometry::Attributes::
_dynamic_initializer_for__Period__(void)

{
  ::FName::FName(&Period,L"Period");
  return;
}

// `dynamic_initializer_for_'PivotPoint'' @ 141437da0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::RotateAboutAxis::Inputs::
_dynamic_initializer_for__PivotPoint__(void)

{
  ::FName::FName(&PivotPoint,L"PivotPoint");
  return;
}

// `dynamic_initializer_for_'Position'' @ 141437dc0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::Inputs::_dynamic_initializer_for__Position__
          (void)

{
  ::FName::FName(&Position,L"Position");
  return;
}

// `dynamic_initializer_for_'Position'' @ 141437de0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::RotateAboutAxis::Inputs::
_dynamic_initializer_for__Position__(void)

{
  ::FName::FName(&Position,L"Position");
  return;
}

// `dynamic_initializer_for_'Position'' @ 141437e00

void __cdecl
UE::Interchange::Materials::Standard::Nodes::VectorNoise::Inputs::
_dynamic_initializer_for__Position__(void)

{
  ::FName::FName(&Position,L"Position");
  return;
}

// `dynamic_initializer_for_'Quality'' @ 141437e20

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::_dynamic_initializer_for__Quality__
          (void)

{
  ::FName::FName(&Quality,L"Quality");
  return;
}

// `dynamic_initializer_for_'Quality'' @ 141437e40

void __cdecl
UE::Interchange::Materials::Standard::Nodes::VectorNoise::Attributes::
_dynamic_initializer_for__Quality__(void)

{
  ::FName::FName(&Quality,L"Quality");
  return;
}

// `dynamic_initializer_for_'R'' @ 141437e60

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Mask::Attributes::_dynamic_initializer_for__R__(void)

{
  ::FName::FName(&R,L"R");
  return;
}

// `dynamic_initializer_for_'R'' @ 141437e80

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSample::Outputs::_dynamic_initializer_for__R__
          (void)

{
  ::FName::FName(&R,L"R");
  return;
}

// `dynamic_initializer_for_'RGB'' @ 141437ea0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSample::Outputs::_dynamic_initializer_for__RGB__
          (void)

{
  ::FName::FName(&RGB,L"RGB");
  return;
}

// `dynamic_initializer_for_'RGBA'' @ 141437ec0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSample::Outputs::
_dynamic_initializer_for__RGBA__(void)

{
  ::FName::FName(&RGBA,L"RGBA");
  return;
}

// `dynamic_initializer_for_'Refraction'' @ 141437ee0

void __cdecl
UE::Interchange::Materials::Common::Parameters::_dynamic_initializer_for__Refraction__(void)

{
  ::FName::FName(&Refraction,L"Refraction");
  return;
}

// `dynamic_initializer_for_'RepeatSize'' @ 141437f00

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::
_dynamic_initializer_for__RepeatSize__(void)

{
  ::FName::FName(&RepeatSize,L"RepeatSize");
  return;
}

// `dynamic_initializer_for_'RootJointGlobalTransform'' @ 141437f20

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_initializer_for__RootJointGlobalTransform__(void)

{
  ::FString::FString(&RootJointGlobalTransform,L"__Payload__RootJointGlobalTransform");
  atexit(_dynamic_atexit_destructor_for__RootJointGlobalTransform__);
  return;
}

// `dynamic_initializer_for_'Rotate'' @ 141437f50

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs::
_dynamic_initializer_for__Rotate__(void)

{
  ::FName::FName(&Rotate,L"Rotate");
  return;
}

// `dynamic_initializer_for_'Rotation'' @ 141437f70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__Rotation__(void)

{
  ::FString::FString(&Rotation,L"_Rotation");
  atexit(_dynamic_atexit_destructor_for__Rotation__);
  return;
}

// `dynamic_initializer_for_'RotationAngle'' @ 141437fa0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::RotateAboutAxis::Inputs::
_dynamic_initializer_for__RotationAngle__(void)

{
  ::FName::FName(&RotationAngle,L"RotationAngle");
  return;
}

// `dynamic_initializer_for_'RotationCenter'' @ 141437fc0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs::
_dynamic_initializer_for__RotationCenter__(void)

{
  ::FName::FName(&RotationCenter,L"RotationCenter");
  return;
}

// `dynamic_initializer_for_'Roughness'' @ 141437fe0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::_dynamic_initializer_for__Roughness__
          (void)

{
  ::FName::FName(&Roughness,L"Roughness");
  return;
}

// `dynamic_initializer_for_'Roughness'' @ 141438000

void __cdecl
UE::Interchange::Materials::PBRMR::Parameters::_dynamic_initializer_for__Roughness__(void)

{
  ::FName::FName(&Roughness,L"Roughness");
  return;
}

// `dynamic_initializer_for_'Roughness'' @ 141438020

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::_dynamic_initializer_for__Roughness__
          (void)

{
  ::FName::FName(&Roughness,L"roughness");
  return;
}

// `dynamic_initializer_for_'RoughnessFactor'' @ 141438040

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__RoughnessFactor__(void)

{
  ::FString::FString(&RoughnessFactor,L"RoughnessFactor");
  atexit(_dynamic_atexit_destructor_for__RoughnessFactor__);
  return;
}

// `dynamic_initializer_for_'SSSMFP'' @ 141438070

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::_dynamic_initializer_for__SSSMFP__
          (void)

{
  ::FName::FName(&SSSMFP,L"SSSMFP");
  return;
}

// `dynamic_initializer_for_'SSSMFPScale'' @ 141438090

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::
_dynamic_initializer_for__SSSMFPScale__(void)

{
  ::FName::FName(&SSSMFPScale,L"SSSMFPScale");
  return;
}

// `dynamic_initializer_for_'SSSPhaseAnisotropy'' @ 1414380b0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::
_dynamic_initializer_for__SSSPhaseAnisotropy__(void)

{
  ::FName::FName(&SSSPhaseAnisotropy,L"SSSPhaseAnisotropy");
  return;
}

// `dynamic_initializer_for_'Scale'' @ 1414380d0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::_dynamic_initializer_for__Scale__
          (void)

{
  ::FName::FName(&Scale,L"Scale");
  return;
}

// `dynamic_initializer_for_'Scale'' @ 1414380f0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs::
_dynamic_initializer_for__Scale__(void)

{
  ::FName::FName(&Scale,L"Scale");
  return;
}

// `dynamic_initializer_for_'ScaleX'' @ 141438110

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__ScaleX__(void)

{
  ::FString::FString(&ScaleX,L"_Scale_X");
  atexit(_dynamic_atexit_destructor_for__ScaleX__);
  return;
}

// `dynamic_initializer_for_'ScaleY'' @ 141438140

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__ScaleY__(void)

{
  ::FString::FString(&ScaleY,L"_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__ScaleY__);
  return;
}

// `dynamic_initializer_for_'SecondRoughness'' @ 141438170

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::
_dynamic_initializer_for__SecondRoughness__(void)

{
  ::FName::FName(&SecondRoughness,L"SecondRoughness");
  return;
}

// `dynamic_initializer_for_'SecondRoughnessWeight'' @ 141438190

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::
_dynamic_initializer_for__SecondRoughnessWeight__(void)

{
  ::FName::FName(&SecondRoughnessWeight,L"SecondRoughnessWeight");
  return;
}

// `dynamic_initializer_for_'ShadingModelToMaterialInformation'' @ 1414381b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Interchange::GLTFMaterials::_dynamic_initializer_for__ShadingModelToMaterialInformation__(void)

{
  ulonglong *puVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  FString *pFVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStackY_678 [32];
  EShadingModel local_638 [8];
  ForAnyElementType local_630;
  int local_628;
  int local_624;
  ForAnyElementType local_620;
  int local_618;
  int local_614;
  ForAnyElementType local_610;
  int local_608;
  int local_604;
  ForAnyElementType local_600;
  int local_5f8;
  int local_5f4;
  ForAnyElementType local_5f0;
  int local_5e8;
  int local_5e4;
  ForAnyElementType local_5e0;
  int local_5d8;
  int local_5d4;
  ForAnyElementType local_5d0;
  int local_5c4;
  ForAnyElementType local_5c0;
  int local_5b4;
  ForAnyElementType local_5b0;
  int local_5a8;
  int local_5a4;
  ForAnyElementType local_5a0;
  int local_594;
  ForAnyElementType local_590;
  int local_584;
  ForAnyElementType local_580;
  int local_578;
  int local_574;
  ForAnyElementType local_570;
  int local_564;
  ForAnyElementType local_560;
  int local_554;
  ForAnyElementType local_550;
  int local_548;
  int local_544;
  ForAnyElementType local_540;
  int local_534;
  ForAnyElementType local_530;
  int local_524;
  ForAnyElementType local_520;
  int local_518;
  int local_514;
  ForAnyElementType local_510;
  int local_504;
  ForAnyElementType local_500;
  int local_4f4;
  ForAnyElementType local_4f0;
  int local_4e8;
  int local_4e4;
  FGLTFMaterialInformation local_4e0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  initializer_list<TPairInitializer<UE::Interchange::GLTFMaterials::EShadingModel_const_&,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation_const_&>_>
  local_3e8;
  TPairInitializer<UE::Interchange::GLTFMaterials::EShadingModel_const_&,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation_const_&>
  local_3d8;
  EShadingModel *local_3c8;
  ForAnyElementType *local_3c0;
  EShadingModel *local_3b8;
  ForAnyElementType *local_3b0;
  EShadingModel *local_3a8;
  ForAnyElementType *local_3a0;
  EShadingModel *local_398;
  ForAnyElementType *local_390;
  EShadingModel *local_388;
  ForAnyElementType *local_380;
  TPairInitializer<UE::Interchange::GLTFMaterials::EShadingModel_const_&,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation_const_&>
  local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_678;
  local_638[0] = DEFAULT;
  ::FString::FString(&local_238,L"BaseColor");
  ::FString::FString(&local_228,L"Metallic");
  ::FString::FString(&local_218,L"Specular");
  ::FString::FString(&local_208,L"Roughness");
  ::FString::FString(&local_1f8,L"EmissiveColor");
  ::FString::FString(&local_1e8,L"Opacity");
  ::FString::FString(&local_1d8,L"OpacityMask");
  ::FString::FString(&local_1c8,L"Normal");
  ::FString::FString(&local_1b8,L"Occlusion");
  lVar8 = 9;
  lVar5 = 8;
  local_5e0.Data = (FScriptContainerElement *)0x0;
  local_5d8 = 9;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,9,0,&local_5e0,9,&local_5d4);
  ConstructItems<FString,FString,int>(local_5e0.Data,&local_238,9);
  ::FString::FString(&local_460,L"/InterchangeAssets/gltf/M_Default.M_Default");
  ::FString::FString(&local_470,
                     L"/InterchangeAssets/gltf/MaterialBodies/MF_Default_Body.MF_Default_Body");
  FVar3.Data = local_470.Data.AllocatorInstance.Data;
  local_4e0.MaterialFunctionPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_470.Data.ArrayNum == 0) {
    local_4e0.MaterialFunctionPath.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_470.Data.ArrayNum,0,(ForAnyElementType *)&local_4e0,local_470.Data.ArrayNum
               ,&local_4e0.MaterialFunctionPath.Data.ArrayMax);
    memcpy(local_4e0.MaterialFunctionPath.Data.AllocatorInstance.Data,FVar3.Data,
           (longlong)local_470.Data.ArrayNum * 2);
  }
  FVar3.Data = local_460.Data.AllocatorInstance.Data;
  local_4e0.MaterialPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_460.Data.ArrayNum == 0) {
    local_4e0.MaterialPath.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_460.Data.ArrayNum,0,(ForAnyElementType *)&local_4e0.MaterialPath,
               local_460.Data.ArrayNum,&local_4e0.MaterialPath.Data.ArrayMax);
    memcpy(local_4e0.MaterialPath.Data.AllocatorInstance.Data,FVar3.Data,
           (longlong)local_460.Data.ArrayNum * 2);
  }
  iVar4 = local_5d8;
  FVar3.Data = local_5e0.Data;
  local_4e0.MaterialFunctionOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4e0.MaterialFunctionOutputs.ArrayNum = local_5d8;
  if (local_5d8 == 0) {
    local_4e0.MaterialFunctionOutputs.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_5d8,0,&local_4e0.MaterialFunctionOutputs.AllocatorInstance,local_5d8,
               &local_4e0.MaterialFunctionOutputs.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_4e0.MaterialFunctionOutputs.AllocatorInstance.Data,(FString *)FVar3.Data,iVar4)
    ;
  }
  local_3d8.Key = local_638;
  local_638[1] = 1;
  local_3d8.Value = &local_4e0;
  ::FString::FString((FString *)&local_378,L"UnlitColor");
  ::FString::FString(&local_368,L"Opacity");
  ::FString::FString(&local_358,L"OpacityMask");
  lVar10 = 3;
  local_5f0.Data = (FScriptContainerElement *)0x0;
  local_5e8 = 3;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_5f0,3,&local_5e4);
  ConstructItems<FString,FString,int>(local_5f0.Data,(FString *)&local_378,3);
  ::FString::FString(&local_480,L"/InterchangeAssets/gltf/M_Unlit.M_Unlit");
  ::FString::FString(&local_490,
                     L"/InterchangeAssets/gltf/MaterialBodies/MF_Unlit_Body.MF_Unlit_Body");
  FVar3.Data = local_490.Data.AllocatorInstance.Data;
  local_510.Data = (FScriptContainerElement *)0x0;
  if (local_490.Data.ArrayNum == 0) {
    local_504 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_490.Data.ArrayNum,0,&local_510,local_490.Data.ArrayNum,&local_504);
    memcpy(local_510.Data,FVar3.Data,(longlong)local_490.Data.ArrayNum * 2);
  }
  FVar3.Data = local_480.Data.AllocatorInstance.Data;
  local_500.Data = (FScriptContainerElement *)0x0;
  if (local_480.Data.ArrayNum == 0) {
    local_4f4 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_480.Data.ArrayNum,0,&local_500,local_480.Data.ArrayNum,&local_4f4);
    memcpy(local_500.Data,FVar3.Data,(longlong)local_480.Data.ArrayNum * 2);
  }
  iVar4 = local_5e8;
  FVar3.Data = local_5f0.Data;
  local_4f0.Data = (FScriptContainerElement *)0x0;
  local_4e8 = local_5e8;
  if (local_5e8 == 0) {
    local_4e4 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_5e8,0,&local_4f0,local_5e8,&local_4e4);
    ConstructItems<FString,FString,int>(local_4f0.Data,(FString *)FVar3.Data,iVar4);
  }
  local_3c8 = local_638 + 1;
  local_638[2] = 2;
  local_3c0 = &local_510;
  ::FString::FString(&local_f8,L"ClearCoatNormal");
  ::FString::FString(&local_e8,L"BaseColor");
  ::FString::FString(&local_d8,L"Metallic");
  ::FString::FString(&local_c8,L"Specular");
  ::FString::FString(&local_b8,L"Roughness");
  ::FString::FString(&local_a8,L"EmissiveColor");
  ::FString::FString(&local_98,L"Opacity");
  ::FString::FString(&local_88,L"OpacityMask");
  ::FString::FString(&local_78,L"Normal");
  ::FString::FString(&local_68,L"ClearCoat");
  ::FString::FString(&local_58,L"ClearCoatRoughness");
  ::FString::FString(&local_48,L"Occlusion");
  lVar9 = 0xc;
  local_600.Data = (FScriptContainerElement *)0x0;
  local_5f8 = 0xc;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0xc,0,&local_600,0xc,&local_5f4);
  ConstructItems<FString,FString,int>(local_600.Data,&local_f8,0xc);
  ::FString::FString(&local_4a0,L"/InterchangeAssets/gltf/M_ClearCoat.M_ClearCoat");
  ::FString::FString(&local_4b0,
                     L"/InterchangeAssets/gltf/MaterialBodies/MF_ClearCoat_Body.MF_ClearCoat_Body");
  FVar3.Data = local_4b0.Data.AllocatorInstance.Data;
  local_540.Data = (FScriptContainerElement *)0x0;
  if (local_4b0.Data.ArrayNum == 0) {
    local_534 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_4b0.Data.ArrayNum,0,&local_540,local_4b0.Data.ArrayNum,&local_534);
    memcpy(local_540.Data,FVar3.Data,(longlong)local_4b0.Data.ArrayNum * 2);
  }
  FVar3.Data = local_4a0.Data.AllocatorInstance.Data;
  local_530.Data = (FScriptContainerElement *)0x0;
  if (local_4a0.Data.ArrayNum == 0) {
    local_524 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_4a0.Data.ArrayNum,0,&local_530,local_4a0.Data.ArrayNum,&local_524);
    memcpy(local_530.Data,FVar3.Data,(longlong)local_4a0.Data.ArrayNum * 2);
  }
  iVar4 = local_5f8;
  FVar3.Data = local_600.Data;
  local_520.Data = (FScriptContainerElement *)0x0;
  local_518 = local_5f8;
  if (local_5f8 == 0) {
    local_514 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_5f8,0,&local_520,local_5f8,&local_514);
    ConstructItems<FString,FString,int>(local_520.Data,(FString *)FVar3.Data,iVar4);
  }
  local_3b8 = local_638 + 2;
  local_638[3] = 3;
  local_3b0 = &local_540;
  ::FString::FString(&local_1a8,L"BaseColor");
  ::FString::FString(&local_198,L"Metallic");
  ::FString::FString(&local_188,L"Specular");
  ::FString::FString(&local_178,L"Roughness");
  ::FString::FString(&local_168,L"EmissiveColor");
  ::FString::FString(&local_158,L"Opacity");
  ::FString::FString(&local_148,L"OpacityMask");
  ::FString::FString(&local_138,L"Normal");
  ::FString::FString(&local_128,L"SheenColor");
  ::FString::FString(&local_118,L"SheenRoughness");
  ::FString::FString(&local_108,L"Occlusion");
  lVar11 = 0xb;
  local_610.Data = (FScriptContainerElement *)0x0;
  local_608 = 0xb;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0xb,0,&local_610,0xb,&local_604);
  ConstructItems<FString,FString,int>(local_610.Data,&local_1a8,0xb);
  ::FString::FString(&local_400,L"/InterchangeAssets/gltf/M_Sheen.M_Sheen");
  ::FString::FString(&local_410,
                     L"/InterchangeAssets/gltf/MaterialBodies/MF_Sheen_Body.MF_Sheen_Body");
  FVar3.Data = local_410.Data.AllocatorInstance.Data;
  local_570.Data = (FScriptContainerElement *)0x0;
  if (local_410.Data.ArrayNum == 0) {
    local_564 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_410.Data.ArrayNum,0,&local_570,local_410.Data.ArrayNum,&local_564);
    memcpy(local_570.Data,FVar3.Data,(longlong)local_410.Data.ArrayNum * 2);
  }
  FVar3.Data = local_400.Data.AllocatorInstance.Data;
  local_560.Data = (FScriptContainerElement *)0x0;
  if (local_400.Data.ArrayNum == 0) {
    local_554 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_400.Data.ArrayNum,0,&local_560,local_400.Data.ArrayNum,&local_554);
    memcpy(local_560.Data,FVar3.Data,(longlong)local_400.Data.ArrayNum * 2);
  }
  iVar4 = local_608;
  FVar3.Data = local_610.Data;
  local_550.Data = (FScriptContainerElement *)0x0;
  local_548 = local_608;
  if (local_608 == 0) {
    local_544 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_608,0,&local_550,local_608,&local_544);
    ConstructItems<FString,FString,int>(local_550.Data,(FString *)FVar3.Data,iVar4);
  }
  local_3a8 = local_638 + 3;
  local_638[4] = 4;
  local_3a0 = &local_570;
  ::FString::FString(&local_2c8,L"TransmissionColor");
  ::FString::FString(&local_2b8,L"BaseColor");
  ::FString::FString(&local_2a8,L"Metallic");
  ::FString::FString(&local_298,L"Specular");
  ::FString::FString(&local_288,L"Roughness");
  ::FString::FString(&local_278,L"EmissiveColor");
  ::FString::FString(&local_268,L"Opacity");
  ::FString::FString(&local_258,L"Normal");
  ::FString::FString(&local_248,L"Occlusion");
  local_620.Data = (FScriptContainerElement *)0x0;
  local_618 = 9;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,9,0,&local_620,9,&local_614);
  ConstructItems<FString,FString,int>(local_620.Data,&local_2c8,9);
  ::FString::FString(&local_420,L"/InterchangeAssets/gltf/M_Transmission.M_Transmission");
  ::FString::FString(&local_430,
                     L"/InterchangeAssets/gltf/MaterialBodies/MF_Transmission_Body.MF_Transmission_Body"
                    );
  FVar3.Data = local_430.Data.AllocatorInstance.Data;
  local_5a0.Data = (FScriptContainerElement *)0x0;
  if (local_430.Data.ArrayNum == 0) {
    local_594 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_430.Data.ArrayNum,0,&local_5a0,local_430.Data.ArrayNum,&local_594);
    memcpy(local_5a0.Data,FVar3.Data,(longlong)local_430.Data.ArrayNum * 2);
  }
  FVar3.Data = local_420.Data.AllocatorInstance.Data;
  local_590.Data = (FScriptContainerElement *)0x0;
  if (local_420.Data.ArrayNum == 0) {
    local_584 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_420.Data.ArrayNum,0,&local_590,local_420.Data.ArrayNum,&local_584);
    memcpy(local_590.Data,FVar3.Data,(longlong)local_420.Data.ArrayNum * 2);
  }
  iVar4 = local_618;
  FVar3.Data = local_620.Data;
  local_580.Data = (FScriptContainerElement *)0x0;
  local_578 = local_618;
  if (local_618 == 0) {
    local_574 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_618,0,&local_580,local_618,&local_574);
    ConstructItems<FString,FString,int>(local_580.Data,(FString *)FVar3.Data,iVar4);
  }
  local_398 = local_638 + 4;
  local_638[5] = 5;
  local_390 = &local_5a0;
  ::FString::FString(&local_348,L"BaseColor");
  ::FString::FString(&local_338,L"Metallic");
  ::FString::FString(&local_328,L"Roughness");
  ::FString::FString(&local_318,L"EmissiveColor");
  ::FString::FString(&local_308,L"Opacity");
  ::FString::FString(&local_2f8,L"OpacityMask");
  ::FString::FString(&local_2e8,L"Normal");
  ::FString::FString(&local_2d8,L"Occlusion");
  local_630.Data = (FScriptContainerElement *)0x0;
  local_628 = 8;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,8,0,&local_630,8,&local_624);
  ConstructItems<FString,FString,int>(local_630.Data,&local_348,8);
  ::FString::FString(&local_440,L"/InterchangeAssets/gltf/M_SpecularGlossiness.M_SpecularGlossiness"
                    );
  ::FString::FString(&local_450,
                     L"/InterchangeAssets/gltf/MaterialBodies/MF_SpecularGlossiness_Body.MF_SpecularGlossiness_Body"
                    );
  FVar3.Data = local_450.Data.AllocatorInstance.Data;
  local_5d0.Data = (FScriptContainerElement *)0x0;
  if (local_450.Data.ArrayNum == 0) {
    local_5c4 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_450.Data.ArrayNum,0,&local_5d0,local_450.Data.ArrayNum,&local_5c4);
    memcpy(local_5d0.Data,FVar3.Data,(longlong)local_450.Data.ArrayNum * 2);
  }
  FVar3.Data = local_440.Data.AllocatorInstance.Data;
  local_5c0.Data = (FScriptContainerElement *)0x0;
  if (local_440.Data.ArrayNum == 0) {
    local_5b4 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_440.Data.ArrayNum,0,&local_5c0,local_440.Data.ArrayNum,&local_5b4);
    memcpy(local_5c0.Data,FVar3.Data,(longlong)local_440.Data.ArrayNum * 2);
  }
  iVar4 = local_628;
  FVar3.Data = local_630.Data;
  local_5b0.Data = (FScriptContainerElement *)0x0;
  local_5a8 = local_628;
  if (local_628 == 0) {
    local_5a4 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_628,0,&local_5b0,local_628,&local_5a4);
    ConstructItems<FString,FString,int>(local_5b0.Data,(FString *)FVar3.Data,iVar4);
  }
  local_388 = local_638 + 5;
  local_380 = &local_5d0;
  local_3e8._First = &local_3d8;
  local_3e8._Last = &local_378;
  TMap<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,0>_>
  ::
  TMap<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,0>_>
            (&ShadingModelToMaterialInformation,&local_3e8);
  DestructItems<FString,int>((FString *)local_5b0.Data,local_5a8);
  if (local_5b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Data);
  }
  if (local_5c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.Data);
  }
  if (local_5d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Data);
  }
  if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.Data.AllocatorInstance.Data);
  }
  if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_630.Data,local_628);
  if (local_630.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_630.Data);
  }
  pFVar7 = &local_2c8;
  do {
    pFVar2 = pFVar7[-1].Data.AllocatorInstance.Data;
    pFVar7 = pFVar7 + -1;
    lVar5 = lVar5 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar5 != 0);
  DestructItems<FString,int>((FString *)local_580.Data,local_578);
  if (local_580.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_580.Data);
  }
  if (local_590.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.Data);
  }
  if (local_5a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0.Data);
  }
  if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data.AllocatorInstance.Data);
  }
  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_620.Data,local_618);
  if (local_620.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_620.Data);
  }
  pFVar7 = &local_238;
  lVar5 = 9;
  do {
    pFVar2 = pFVar7[-1].Data.AllocatorInstance.Data;
    pFVar7 = pFVar7 + -1;
    lVar5 = lVar5 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar5 != 0);
  DestructItems<FString,int>((FString *)local_550.Data,local_548);
  if (local_550.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_550.Data);
  }
  if (local_560.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.Data);
  }
  if (local_570.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_570.Data);
  }
  if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Data.AllocatorInstance.Data);
  }
  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_610.Data,local_608);
  if (local_610.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_610.Data);
  }
  pFVar7 = &local_f8;
  do {
    pFVar2 = pFVar7[-1].Data.AllocatorInstance.Data;
    pFVar7 = pFVar7 + -1;
    lVar11 = lVar11 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar11 != 0);
  DestructItems<FString,int>((FString *)local_520.Data,local_518);
  if (local_520.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data);
  }
  if (local_530.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data);
  }
  if (local_540.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.Data);
  }
  if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
  }
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_600.Data,local_5f8);
  if (local_600.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_600.Data);
  }
  puVar6 = local_38;
  do {
    puVar1 = puVar6 + -2;
    puVar6 = puVar6 + -2;
    lVar9 = lVar9 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar9 != 0);
  DestructItems<FString,int>((FString *)local_4f0.Data,local_4e8);
  if (local_4f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data);
  }
  if (local_500.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.Data);
  }
  if (local_510.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_510.Data);
  }
  if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_490.Data.AllocatorInstance.Data);
  }
  if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_5f0.Data,local_5e8);
  if (local_5f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.Data);
  }
  pFVar7 = &local_348;
  do {
    pFVar2 = pFVar7[-1].Data.AllocatorInstance.Data;
    pFVar7 = pFVar7 + -1;
    lVar10 = lVar10 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar10 != 0);
  DestructItems<FString,int>
            ((FString *)local_4e0.MaterialFunctionOutputs.AllocatorInstance.Data,
             local_4e0.MaterialFunctionOutputs.ArrayNum);
  if (local_4e0.MaterialFunctionOutputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.MaterialFunctionOutputs.AllocatorInstance.Data);
  }
  if (local_4e0.MaterialPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.MaterialPath.Data.AllocatorInstance.Data);
  }
  if (local_4e0.MaterialFunctionPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_4e0.MaterialFunctionPath.Data.AllocatorInstance.Data);
  }
  if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Data.AllocatorInstance.Data);
  }
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_5e0.Data,local_5d8);
  if (local_5e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e0.Data);
  }
  pFVar7 = &local_1a8;
  do {
    pFVar2 = pFVar7[-1].Data.AllocatorInstance.Data;
    pFVar7 = pFVar7 + -1;
    lVar8 = lVar8 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar8 != 0);
  atexit(_dynamic_atexit_destructor_for__ShadingModelToMaterialInformation__);
  return;
}

// `dynamic_initializer_for_'Sheen'' @ 1414393c0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__Sheen__(void)

{
  ::FName::FName(&Sheen,L"sheen");
  return;
}

// `dynamic_initializer_for_'SheenColor'' @ 1414393e0

void __cdecl
UE::Interchange::Materials::Sheen::Parameters::_dynamic_initializer_for__SheenColor__(void)

{
  ::FName::FName(&SheenColor,L"SheenColor");
  return;
}

// `dynamic_initializer_for_'SheenColor'' @ 141439400

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__SheenColor__
          (void)

{
  ::FName::FName(&SheenColor,L"sheen_color");
  return;
}

// `dynamic_initializer_for_'SheenColorFactor'' @ 141439420

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorFactor__(void)

{
  ::FString::FString(&SheenColorFactor,L"SheenColorFactor");
  atexit(_dynamic_atexit_destructor_for__SheenColorFactor__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture'' @ 141439450

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture__(void)

{
  ::FString::FString(&SheenColorTexture,L"SheenColorTexture");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_OffsetScale'' @ 141439480

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_OffsetScale__
          (void)

{
  ::FString::FString(&SheenColorTexture_OffsetScale,L"SheenColorTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_Offset_X'' @ 1414394b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_Offset_X__(void)

{
  ::FString::FString(&SheenColorTexture_Offset_X,L"SheenColorTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_Offset_Y'' @ 1414394e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_Offset_Y__(void)

{
  ::FString::FString(&SheenColorTexture_Offset_Y,L"SheenColorTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_Rotation'' @ 141439510

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_Rotation__(void)

{
  ::FString::FString(&SheenColorTexture_Rotation,L"SheenColorTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_Scale_X'' @ 141439540

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_Scale_X__(void)

{
  ::FString::FString(&SheenColorTexture_Scale_X,L"SheenColorTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_Scale_Y'' @ 141439570

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_Scale_Y__(void)

{
  ::FString::FString(&SheenColorTexture_Scale_Y,L"SheenColorTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_TexCoord'' @ 1414395a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_TexCoord__(void)

{
  ::FString::FString(&SheenColorTexture_TexCoord,L"SheenColorTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_TilingMethod'' @ 1414395d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_TilingMethod__
          (void)

{
  ::FString::FString(&SheenColorTexture_TilingMethod,L"SheenColorTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'SheenRoughness'' @ 141439600

void __cdecl
UE::Interchange::Materials::Sheen::Parameters::_dynamic_initializer_for__SheenRoughness__(void)

{
  ::FName::FName(&SheenRoughness,L"SheenRoughness");
  return;
}

// `dynamic_initializer_for_'SheenRoughness'' @ 141439620

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__SheenRoughness__
          (void)

{
  ::FName::FName(&SheenRoughness,L"sheen_roughness");
  return;
}

// `dynamic_initializer_for_'SheenRoughnessFactor'' @ 141439640

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessFactor__(void)

{
  ::FString::FString(&SheenRoughnessFactor,L"SheenRoughnessFactor");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessFactor__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture'' @ 141439670

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture__(void)

{
  ::FString::FString(&SheenRoughnessTexture,L"SheenRoughnessTexture");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_OffsetScale'' @ 1414396a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SheenRoughnessTexture_OffsetScale__(void)

{
  ::FString::FString(&SheenRoughnessTexture_OffsetScale,L"SheenRoughnessTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_Offset_X'' @ 1414396d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture_Offset_X__
          (void)

{
  ::FString::FString(&SheenRoughnessTexture_Offset_X,L"SheenRoughnessTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_Offset_Y'' @ 141439700

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture_Offset_Y__
          (void)

{
  ::FString::FString(&SheenRoughnessTexture_Offset_Y,L"SheenRoughnessTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_Rotation'' @ 141439730

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture_Rotation__
          (void)

{
  ::FString::FString(&SheenRoughnessTexture_Rotation,L"SheenRoughnessTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_Scale_X'' @ 141439760

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture_Scale_X__
          (void)

{
  ::FString::FString(&SheenRoughnessTexture_Scale_X,L"SheenRoughnessTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_Scale_Y'' @ 141439790

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture_Scale_Y__
          (void)

{
  ::FString::FString(&SheenRoughnessTexture_Scale_Y,L"SheenRoughnessTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_TexCoord'' @ 1414397c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture_TexCoord__
          (void)

{
  ::FString::FString(&SheenRoughnessTexture_TexCoord,L"SheenRoughnessTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_TilingMethod'' @ 1414397f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SheenRoughnessTexture_TilingMethod__(void)

{
  ::FString::FString(&SheenRoughnessTexture_TilingMethod,L"SheenRoughnessTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'Shininess'' @ 141439820

void __cdecl
UE::Interchange::Materials::Phong::Parameters::_dynamic_initializer_for__Shininess__(void)

{
  ::FName::FName(&Shininess,L"Shininess");
  return;
}

// `dynamic_initializer_for_'SpecFactor'' @ 141439840

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecFactor__(void)

{
  ::FString::FString(&SpecFactor,L"SpecFactor");
  atexit(_dynamic_atexit_destructor_for__SpecFactor__);
  return;
}

// `dynamic_initializer_for_'Specular'' @ 141439870

void __cdecl
UE::Interchange::Materials::PBRMR::Parameters::_dynamic_initializer_for__Specular__(void)

{
  ::FName::FName(&Specular,L"Specular");
  return;
}

// `dynamic_initializer_for_'Specular'' @ 141439890

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__Specular__(void)

{
  ::FName::FName(&Specular,L"specular");
  return;
}

// `dynamic_initializer_for_'SpecularAnisotropy'' @ 1414398b0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__SpecularAnisotropy__(void)

{
  ::FName::FName(&SpecularAnisotropy,L"specular_anisotropy");
  return;
}

// `dynamic_initializer_for_'SpecularAnisotropy'' @ 1414398d0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__SpecularAnisotropy__(void)

{
  ::FName::FName(&SpecularAnisotropy,L"specular_anisotropy");
  return;
}

// `dynamic_initializer_for_'SpecularColor'' @ 1414398f0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__SpecularColor__
          (void)

{
  ::FName::FName(&SpecularColor,L"specular_color");
  return;
}

// `dynamic_initializer_for_'SpecularColor'' @ 141439910

void __cdecl
UE::Interchange::Materials::PBRSG::Parameters::_dynamic_initializer_for__SpecularColor__(void)

{
  ::FName::FName(&SpecularColor,L"SpecularColor");
  return;
}

// `dynamic_initializer_for_'SpecularColor'' @ 141439930

void __cdecl
UE::Interchange::Materials::Phong::Parameters::_dynamic_initializer_for__SpecularColor__(void)

{
  ::FName::FName(&SpecularColor,L"SpecularColor");
  return;
}

// `dynamic_initializer_for_'SpecularColor'' @ 141439950

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__SpecularColor__
          (void)

{
  ::FName::FName(&SpecularColor,L"specular_color");
  return;
}

// `dynamic_initializer_for_'SpecularColor'' @ 141439970

void __cdecl
UE::Interchange::Materials::UsdPreviewSurface::Parameters::_dynamic_initializer_for__SpecularColor__
          (void)

{
  ::FName::FName(&SpecularColor,L"specularColor");
  return;
}

// `dynamic_initializer_for_'SpecularFactor'' @ 141439990

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularFactor__(void)

{
  ::FString::FString(&SpecularFactor,L"SpecularFactor");
  atexit(_dynamic_atexit_destructor_for__SpecularFactor__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture'' @ 1414399c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularGlossinessTexture__(void)

{
  ::FString::FString(&SpecularGlossinessTexture,L"SpecularGlossinessTexture");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_OffsetScale'' @ 1414399f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_OffsetScale__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_OffsetScale,L"SpecularGlossinessTexture_OffsetScale"
                    );
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_Offset_X'' @ 141439a20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_Offset_X__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_Offset_X,L"SpecularGlossinessTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_Offset_Y'' @ 141439a50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_Offset_Y__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_Offset_Y,L"SpecularGlossinessTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_Rotation'' @ 141439a80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_Rotation__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_Rotation,L"SpecularGlossinessTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_Scale_X'' @ 141439ab0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_Scale_X__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_Scale_X,L"SpecularGlossinessTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_Scale_Y'' @ 141439ae0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_Scale_Y__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_Scale_Y,L"SpecularGlossinessTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_TexCoord'' @ 141439b10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_TexCoord__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_TexCoord,L"SpecularGlossinessTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_TilingMethod'' @ 141439b40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_TilingMethod__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_TilingMethod,
                     L"SpecularGlossinessTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'SpecularIOR'' @ 141439b70

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__SpecularIOR__
          (void)

{
  ::FName::FName(&SpecularIOR,L"specular_ior");
  return;
}

// `dynamic_initializer_for_'SpecularIOR'' @ 141439b90

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__SpecularIOR__
          (void)

{
  ::FName::FName(&SpecularIOR,L"specular_IOR");
  return;
}

// `dynamic_initializer_for_'SpecularIORLevel'' @ 141439bb0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__SpecularIORLevel__
          (void)

{
  ::FName::FName(&SpecularIORLevel,L"specular_ior_level");
  return;
}

// `dynamic_initializer_for_'SpecularProfile'' @ 141439bd0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Attributes::
_dynamic_initializer_for__SpecularProfile__(void)

{
  ::FName::FName(&SpecularProfile,L"SpecularProfile");
  return;
}

// `dynamic_initializer_for_'SpecularProfile'' @ 141439bf0

void __cdecl
UE::Interchange::Materials::SubstrateMaterial::_dynamic_initializer_for__SpecularProfile__(void)

{
  ::FName::FName(&SpecularProfile,L"SpecularProfile");
  return;
}

// `dynamic_initializer_for_'SpecularRotation'' @ 141439c10

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__SpecularRotation__
          (void)

{
  ::FName::FName(&SpecularRotation,L"specular_rotation");
  return;
}

// `dynamic_initializer_for_'SpecularRotation'' @ 141439c30

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__SpecularRotation__(void)

{
  ::FName::FName(&SpecularRotation,L"specular_rotation");
  return;
}

// `dynamic_initializer_for_'SpecularRoughness'' @ 141439c50

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__SpecularRoughness__(void)

{
  ::FName::FName(&SpecularRoughness,L"specular_roughness");
  return;
}

// `dynamic_initializer_for_'SpecularRoughness'' @ 141439c70

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__SpecularRoughness__(void)

{
  ::FName::FName(&SpecularRoughness,L"specular_roughness");
  return;
}

// `dynamic_initializer_for_'SpecularTexture'' @ 141439c90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture__(void)

{
  ::FString::FString(&SpecularTexture,L"SpecularTexture");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_OffsetScale'' @ 141439cc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_OffsetScale__
          (void)

{
  ::FString::FString(&SpecularTexture_OffsetScale,L"SpecularTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_Offset_X'' @ 141439cf0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_Offset_X__(void)

{
  ::FString::FString(&SpecularTexture_Offset_X,L"SpecularTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_Offset_Y'' @ 141439d20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_Offset_Y__(void)

{
  ::FString::FString(&SpecularTexture_Offset_Y,L"SpecularTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_Rotation'' @ 141439d50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_Rotation__(void)

{
  ::FString::FString(&SpecularTexture_Rotation,L"SpecularTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_Scale_X'' @ 141439d80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_Scale_X__(void)

{
  ::FString::FString(&SpecularTexture_Scale_X,L"SpecularTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_Scale_Y'' @ 141439db0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_Scale_Y__(void)

{
  ::FString::FString(&SpecularTexture_Scale_Y,L"SpecularTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_TexCoord'' @ 141439de0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_TexCoord__(void)

{
  ::FString::FString(&SpecularTexture_TexCoord,L"SpecularTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_TilingMethod'' @ 141439e10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_TilingMethod__
          (void)

{
  ::FString::FString(&SpecularTexture_TilingMethod,L"SpecularTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'SpecularWeight'' @ 141439e40

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__SpecularWeight__
          (void)

{
  ::FName::FName(&SpecularWeight,L"specular_weight");
  return;
}

// `dynamic_initializer_for_'Speed'' @ 141439e60

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Rotator::Attributes::_dynamic_initializer_for__Speed__
          (void)

{
  ::FName::FName(&Speed,L"Speed");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 141439e80

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 141439f10

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 141439fa0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 14143a030

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 14143a0c0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 14143a150

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 14143a1e0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 14143a270

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 14143a300

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 14143a390

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

// `dynamic_initializer_for_'Subsurface'' @ 14143a420

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__Subsurface__
          (void)

{
  ::FName::FName(&Subsurface,L"subsurface");
  return;
}

// `dynamic_initializer_for_'SubsurfaceAnisotropy'' @ 14143a440

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__SubsurfaceAnisotropy__(void)

{
  ::FName::FName(&SubsurfaceAnisotropy,L"subsurface_anisotropy");
  return;
}

// `dynamic_initializer_for_'SubsurfaceAnisotropy'' @ 14143a460

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__SubsurfaceAnisotropy__(void)

{
  ::FName::FName(&SubsurfaceAnisotropy,L"subsurface_anisotropy");
  return;
}

// `dynamic_initializer_for_'SubsurfaceColor'' @ 14143a480

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__SubsurfaceColor__
          (void)

{
  ::FName::FName(&SubsurfaceColor,L"subsurface_color");
  return;
}

// `dynamic_initializer_for_'SubsurfaceColor'' @ 14143a4a0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__SubsurfaceColor__
          (void)

{
  ::FName::FName(&SubsurfaceColor,L"subsurface_color");
  return;
}

// `dynamic_initializer_for_'SubsurfaceColor'' @ 14143a4c0

void __cdecl
UE::Interchange::Materials::Subsurface::Parameters::_dynamic_initializer_for__SubsurfaceColor__
          (void)

{
  ::FName::FName(&SubsurfaceColor,L"SubsurfaceColor");
  return;
}

// `dynamic_initializer_for_'SubsurfaceRadius'' @ 14143a4e0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__SubsurfaceRadius__
          (void)

{
  ::FName::FName(&SubsurfaceRadius,L"subsurface_radius");
  return;
}

// `dynamic_initializer_for_'SubsurfaceRadius'' @ 14143a500

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__SubsurfaceRadius__(void)

{
  ::FName::FName(&SubsurfaceRadius,L"subsurface_radius");
  return;
}

// `dynamic_initializer_for_'SubsurfaceRadiusScale'' @ 14143a520

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__SubsurfaceRadiusScale__(void)

{
  ::FName::FName(&SubsurfaceRadiusScale,L"subsurface_radius_scale");
  return;
}

// `dynamic_initializer_for_'SubsurfaceScale'' @ 14143a540

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__SubsurfaceScale__
          (void)

{
  ::FName::FName(&SubsurfaceScale,L"subsurface_scale");
  return;
}

// `dynamic_initializer_for_'SubsurfaceWeight'' @ 14143a560

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__SubsurfaceWeight__
          (void)

{
  ::FName::FName(&SubsurfaceWeight,L"subsurface_weight");
  return;
}

// `dynamic_initializer_for_'Surface'' @ 14143a580

void __cdecl UE::Interchange::Materials::Surface::Outputs::_dynamic_initializer_for__Surface__(void)

{
  ::FName::FName(&Surface,L"Surface");
  return;
}

// `dynamic_initializer_for_'SurfaceCoverage'' @ 14143a5a0

void __cdecl
UE::Interchange::Materials::ThinTranslucent::Parameters::_dynamic_initializer_for__SurfaceCoverage__
          (void)

{
  ::FName::FName(&SurfaceCoverage,L"SurfaceCoverage");
  return;
}

// `dynamic_initializer_for_'SurfaceUnlit'' @ 14143a5c0

void __cdecl
UE::Interchange::Materials::SurfaceUnlit::Substrate::Outputs::
_dynamic_initializer_for__SurfaceUnlit__(void)

{
  ::FName::FName(&SurfaceUnlit,L"Surface Unlit");
  return;
}

// `dynamic_initializer_for_'Tangent'' @ 14143a5e0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::SlabBSDF::Inputs::_dynamic_initializer_for__Tangent__
          (void)

{
  ::FName::FName(&Tangent,L"Tangent");
  return;
}

// `dynamic_initializer_for_'Tangent'' @ 14143a600

void __cdecl
UE::Interchange::Materials::Common::Parameters::_dynamic_initializer_for__Tangent__(void)

{
  ::FName::FName(&Tangent,L"Tangent");
  return;
}

// `dynamic_initializer_for_'Tangent'' @ 14143a620

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__Tangent__(void)

{
  ::FName::FName(&Tangent,L"tangent");
  return;
}

// `dynamic_initializer_for_'TexCoord'' @ 14143a640

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__TexCoord__(void)

{
  ::FString::FString(&TexCoord,L"_TexCoord");
  atexit(_dynamic_atexit_destructor_for__TexCoord__);
  return;
}

// `dynamic_initializer_for_'Texture'' @ 14143a670

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureObject::Inputs::
_dynamic_initializer_for__Texture__(void)

{
  ::FName::FName(&Texture,L"TextureUid");
  return;
}

// `dynamic_initializer_for_'Texture'' @ 14143a690

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureSample::Inputs::
_dynamic_initializer_for__Texture__(void)

{
  ::FName::FName(&Texture,L"TextureUid");
  return;
}

// `dynamic_initializer_for_'ThinFilmIOR'' @ 14143a6b0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::_dynamic_initializer_for__ThinFilmIOR__
          (void)

{
  ::FName::FName(&ThinFilmIOR,L"thin_film_ior");
  return;
}

// `dynamic_initializer_for_'ThinFilmIOR'' @ 14143a6d0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__ThinFilmIOR__
          (void)

{
  ::FName::FName(&ThinFilmIOR,L"thin_film_IOR");
  return;
}

// `dynamic_initializer_for_'ThinFilmThickness'' @ 14143a6f0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__ThinFilmThickness__(void)

{
  ::FName::FName(&ThinFilmThickness,L"thin_film_thickness");
  return;
}

// `dynamic_initializer_for_'ThinFilmThickness'' @ 14143a710

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__ThinFilmThickness__(void)

{
  ::FName::FName(&ThinFilmThickness,L"thin_film_thickness");
  return;
}

// `dynamic_initializer_for_'ThinWalled'' @ 14143a730

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__ThinWalled__
          (void)

{
  ::FName::FName(&ThinWalled,L"thin_walled");
  return;
}

// `dynamic_initializer_for_'TileSize'' @ 14143a750

void __cdecl
UE::Interchange::Materials::Standard::Nodes::VectorNoise::Attributes::
_dynamic_initializer_for__TileSize__(void)

{
  ::FName::FName(&TileSize,L"TileSize");
  return;
}

// `dynamic_initializer_for_'Tiling'' @ 14143a770

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::_dynamic_initializer_for__Tiling__
          (void)

{
  ::FName::FName(&Tiling,L"bTiling");
  return;
}

// `dynamic_initializer_for_'Tiling'' @ 14143a790

void __cdecl
UE::Interchange::Materials::Standard::Nodes::VectorNoise::Attributes::
_dynamic_initializer_for__Tiling__(void)

{
  ::FName::FName(&Tiling,L"bTiling");
  return;
}

// `dynamic_initializer_for_'TilingMethod'' @ 14143a7b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__TilingMethod__(void)

{
  ::FString::FString(&TilingMethod,L"_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__TilingMethod__);
  return;
}

// `dynamic_initializer_for_'Time'' @ 14143a7e0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Rotator::Inputs::_dynamic_initializer_for__Time__(void)

{
  ::FName::FName(&Time,L"Time");
  return;
}

// `dynamic_initializer_for_'TransformSourceType'' @ 14143a800

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TransformPosition::Attributes::
_dynamic_initializer_for__TransformSourceType__(void)

{
  ::FName::FName(&TransformSourceType,L"TransformSourceType");
  return;
}

// `dynamic_initializer_for_'TransformSourceType'' @ 14143a820

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TransformVector::Attributes::
_dynamic_initializer_for__TransformSourceType__(void)

{
  ::FName::FName(&TransformSourceType,L"TransformSourceType");
  return;
}

// `dynamic_initializer_for_'TransformType'' @ 14143a840

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TransformPosition::Attributes::
_dynamic_initializer_for__TransformType__(void)

{
  ::FName::FName(&TransformType,L"TransformType");
  return;
}

// `dynamic_initializer_for_'TransformType'' @ 14143a860

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TransformVector::Attributes::
_dynamic_initializer_for__TransformType__(void)

{
  ::FName::FName(&TransformType,L"TransformType");
  return;
}

// `dynamic_initializer_for_'Translucent'' @ 14143a880

void __cdecl
UE::Interchange::Materials::StandardSurface::SubstrateMaterial::Outputs::
_dynamic_initializer_for__Translucent__(void)

{
  ::FName::FName(&Translucent,L"Substrate StandardSurface Translucent");
  return;
}

// `dynamic_initializer_for_'Transmission'' @ 14143a8a0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::_dynamic_initializer_for__Transmission__
          (void)

{
  ::FName::FName(&Transmission,L"transmission");
  return;
}

// `dynamic_initializer_for_'Transmission'' @ 14143a8c0

void __cdecl
UE::Interchange::Materials::SurfaceUnlit::Parameters::_dynamic_initializer_for__Transmission__(void)

{
  ::FName::FName(&Transmission,L"transmission");
  return;
}

// `dynamic_initializer_for_'TransmissionColor'' @ 14143a8e0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__TransmissionColor__(void)

{
  ::FName::FName(&TransmissionColor,L"transmission_color");
  return;
}

// `dynamic_initializer_for_'TransmissionColor'' @ 14143a900

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__TransmissionColor__(void)

{
  ::FName::FName(&TransmissionColor,L"transmission_color");
  return;
}

// `dynamic_initializer_for_'TransmissionColor'' @ 14143a920

void __cdecl
UE::Interchange::Materials::SurfaceUnlit::Parameters::_dynamic_initializer_for__TransmissionColor__
          (void)

{
  ::FName::FName(&TransmissionColor,L"transmission_color");
  return;
}

// `dynamic_initializer_for_'TransmissionColor'' @ 14143a940

void __cdecl
UE::Interchange::Materials::ThinTranslucent::Parameters::
_dynamic_initializer_for__TransmissionColor__(void)

{
  ::FName::FName(&TransmissionColor,L"TransmissionColor");
  return;
}

// `dynamic_initializer_for_'TransmissionDepth'' @ 14143a960

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__TransmissionDepth__(void)

{
  ::FName::FName(&TransmissionDepth,L"transmission_depth");
  return;
}

// `dynamic_initializer_for_'TransmissionDepth'' @ 14143a980

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__TransmissionDepth__(void)

{
  ::FName::FName(&TransmissionDepth,L"transmission_depth");
  return;
}

// `dynamic_initializer_for_'TransmissionDispersion'' @ 14143a9a0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__TransmissionDispersion__(void)

{
  ::FName::FName(&TransmissionDispersion,L"transmission_dispersion");
  return;
}

// `dynamic_initializer_for_'TransmissionDispersionAbbeNumber'' @ 14143a9c0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__TransmissionDispersionAbbeNumber__(void)

{
  ::FName::FName(&TransmissionDispersionAbbeNumber,L"transmission_dispersion_abbe_number");
  return;
}

// `dynamic_initializer_for_'TransmissionDispersionScale'' @ 14143a9e0

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__TransmissionDispersionScale__(void)

{
  ::FName::FName(&TransmissionDispersionScale,L"transmission_dispersion_scale");
  return;
}

// `dynamic_initializer_for_'TransmissionExtraRoughness'' @ 14143aa00

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__TransmissionExtraRoughness__(void)

{
  ::FName::FName(&TransmissionExtraRoughness,L"transmission_extra_roughness");
  return;
}

// `dynamic_initializer_for_'TransmissionFactor'' @ 14143aa20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionFactor__(void)

{
  ::FString::FString(&TransmissionFactor,L"TransmissionFactor");
  atexit(_dynamic_atexit_destructor_for__TransmissionFactor__);
  return;
}

// `dynamic_initializer_for_'TransmissionScatter'' @ 14143aa50

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__TransmissionScatter__(void)

{
  ::FName::FName(&TransmissionScatter,L"transmission_scatter");
  return;
}

// `dynamic_initializer_for_'TransmissionScatter'' @ 14143aa70

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__TransmissionScatter__(void)

{
  ::FName::FName(&TransmissionScatter,L"transmission_scatter");
  return;
}

// `dynamic_initializer_for_'TransmissionScatterAnisotropy'' @ 14143aa90

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__TransmissionScatterAnisotropy__(void)

{
  ::FName::FName(&TransmissionScatterAnisotropy,L"transmission_scatter_anisotropy");
  return;
}

// `dynamic_initializer_for_'TransmissionScatterAnisotropy'' @ 14143aab0

void __cdecl
UE::Interchange::Materials::StandardSurface::Parameters::
_dynamic_initializer_for__TransmissionScatterAnisotropy__(void)

{
  ::FName::FName(&TransmissionScatterAnisotropy,L"transmission_scatter_anisotropy");
  return;
}

// `dynamic_initializer_for_'TransmissionTexture'' @ 14143aad0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture__(void)

{
  ::FString::FString(&TransmissionTexture,L"TransmissionTexture");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_OffsetScale'' @ 14143ab00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_OffsetScale__
          (void)

{
  ::FString::FString(&TransmissionTexture_OffsetScale,L"TransmissionTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_Offset_X'' @ 14143ab30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_Offset_X__
          (void)

{
  ::FString::FString(&TransmissionTexture_Offset_X,L"TransmissionTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_Offset_Y'' @ 14143ab60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_Offset_Y__
          (void)

{
  ::FString::FString(&TransmissionTexture_Offset_Y,L"TransmissionTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_Rotation'' @ 14143ab90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_Rotation__
          (void)

{
  ::FString::FString(&TransmissionTexture_Rotation,L"TransmissionTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_Scale_X'' @ 14143abc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_Scale_X__
          (void)

{
  ::FString::FString(&TransmissionTexture_Scale_X,L"TransmissionTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_Scale_Y'' @ 14143abf0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_Scale_Y__
          (void)

{
  ::FString::FString(&TransmissionTexture_Scale_Y,L"TransmissionTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_TexCoord'' @ 14143ac20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_TexCoord__
          (void)

{
  ::FString::FString(&TransmissionTexture_TexCoord,L"TransmissionTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_TilingMethod'' @ 14143ac50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_TilingMethod__
          (void)

{
  ::FString::FString(&TransmissionTexture_TilingMethod,L"TransmissionTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'TransmissionWeight'' @ 14143ac80

void __cdecl
UE::Interchange::Materials::OpenPBRSurface::Parameters::
_dynamic_initializer_for__TransmissionWeight__(void)

{
  ::FName::FName(&TransmissionWeight,L"transmission_weight");
  return;
}

// `dynamic_initializer_for_'Turbulence'' @ 14143aca0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Noise::Attributes::
_dynamic_initializer_for__Turbulence__(void)

{
  ::FName::FName(&Turbulence,L"bTurbulence");
  return;
}

// `dynamic_initializer_for_'UTiling'' @ 14143acc0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs::
_dynamic_initializer_for__UTiling__(void)

{
  ::FName::FName(&UTiling,L"UTiling");
  return;
}

// `dynamic_initializer_for_'UnlitColor'' @ 14143ace0

void __cdecl
UE::Interchange::Materials::Unlit::Parameters::_dynamic_initializer_for__UnlitColor__(void)

{
  ::FName::FName(&UnlitColor,L"UnlitColor");
  return;
}

// `dynamic_initializer_for_'VTiling'' @ 14143ad00

void __cdecl
UE::Interchange::Materials::Standard::Nodes::TextureCoordinate::Inputs::
_dynamic_initializer_for__VTiling__(void)

{
  ::FName::FName(&VTiling,L"VTiling");
  return;
}

// `dynamic_initializer_for_'Value'' @ 14143ad20

void __cdecl
UE::Interchange::Materials::Standard::Nodes::Switch::Inputs::_dynamic_initializer_for__Value__(void)

{
  ::FName::FName(&Value,L"SwitchValue");
  return;
}

// `dynamic_initializer_for_'VolumetricMaterial'' @ 14143ad40

void __cdecl UE::Interchange::Volume::_dynamic_initializer_for__VolumetricMaterial__(void)

{
  ::FString::FString(&VolumetricMaterial,L"Volumetric_Material");
  atexit(_dynamic_atexit_destructor_for__VolumetricMaterial__);
  return;
}

// `dynamic_initializer_for_'X'' @ 14143ad70

void __cdecl
UE::Interchange::Materials::Standard::Nodes::MakeFloat3::Inputs::_dynamic_initializer_for__X__(void)

{
  ::FName::FName(&X,L"X");
  return;
}

// `dynamic_initializer_for_'Y'' @ 14143ad90

void __cdecl
UE::Interchange::Materials::Standard::Nodes::MakeFloat3::Inputs::_dynamic_initializer_for__Y__(void)

{
  ::FName::FName(&Y,L"Y");
  return;
}

// `dynamic_initializer_for_'Z'' @ 14143adb0

void __cdecl
UE::Interchange::Materials::Standard::Nodes::MakeFloat3::Inputs::_dynamic_initializer_for__Z__(void)

{
  ::FName::FName(&Z,L"Z");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h__Script_InterchangePipelines_3474574676'' @ 14143add0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h__Script_InterchangePipelines_3474574676__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h__Script_InterchangePipelines_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h__Script_InterchangePipelines_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h__Script_InterchangePipelines_542367603'' @ 14143ae20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h__Script_InterchangePipelines_542367603__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h__Script_InterchangePipelines_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h__Script_InterchangePipelines_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipeline_h__Script_InterchangePipelines_2885407535'' @ 14143ae70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipeline_h__Script_InterchangePipelines_2885407535__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipeline_h__Script_InterchangePipelines_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAudioPipeline_h__Script_InterchangePipelines_2101870684'' @ 14143aeb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAudioPipeline_h__Script_InterchangePipelines_2101870684__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAudioPipeline_h__Script_InterchangePipelines_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericGroomPipeline_h__Script_InterchangePipelines_3353520568'' @ 14143aef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericGroomPipeline_h__Script_InterchangePipelines_3353520568__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericGroomPipeline_h__Script_InterchangePipelines_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h__Script_InterchangePipelines_4219714532'' @ 14143af30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h__Script_InterchangePipelines_4219714532__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h__Script_InterchangePipelines_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h__Script_InterchangePipelines_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h__Script_InterchangePipelines_1396158797'' @ 14143af80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h__Script_InterchangePipelines_1396158797__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h__Script_InterchangePipelines_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h__Script_InterchangePipelines_2740526332'' @ 14143afc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h__Script_InterchangePipelines_2740526332__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h__Script_InterchangePipelines_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h__Script_InterchangePipelines_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h__Script_InterchangePipelines_1423106237'' @ 14143b010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h__Script_InterchangePipelines_1423106237__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h__Script_InterchangePipelines_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h__Script_InterchangePipelines_837670720'' @ 14143b050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h__Script_InterchangePipelines_837670720__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h__Script_InterchangePipelines_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h__Script_InterchangePipelines_2739154184'' @ 14143b090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h__Script_InterchangePipelines_2739154184__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h__Script_InterchangePipelines_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h__Script_InterchangePipelines_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeSparseVolumeTexturePipeline_h__Script_InterchangePipelines_2070521315'' @ 14143b0e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeSparseVolumeTexturePipeline_h__Script_InterchangePipelines_2070521315__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeSparseVolumeTexturePipeline_h__Script_InterchangePipelines_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h__Script_InterchangePipelines_564950888'' @ 14143b120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h__Script_InterchangePipelines_564950888__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangePipelines",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h__Script_InterchangePipelines_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_InterchangePipelines'' @ 14143b160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_InterchangePipelines__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x2621bea6;
  local_res8[0].DeclarationsHash = 0xcf1411e8;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_InterchangePipelines,L"/Script/InterchangePipelines",
             &Z_Registration_Info_UPackage__Script_InterchangePipelines,local_res8);
  return;
}

// `dynamic_initializer_for_'bHasAnisotropyTextureAndOrRotation'' @ 14143b1a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasAnisotropyTextureAndOrRotation__(void)

{
  ::FString::FString(&bHasAnisotropyTextureAndOrRotation,L"bHasAnisotropyTextureAndOrRotation");
  atexit(_dynamic_atexit_destructor_for__bHasAnisotropyTextureAndOrRotation__);
  return;
}

// `dynamic_initializer_for_'bHasBaseColorTexture'' @ 14143b1d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasBaseColorTexture__(void)

{
  ::FString::FString(&bHasBaseColorTexture,L"bHasBaseColorTexture");
  atexit(_dynamic_atexit_destructor_for__bHasBaseColorTexture__);
  return;
}

// `dynamic_initializer_for_'bHasClearCoatTexture'' @ 14143b200

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasClearCoatTexture__(void)

{
  ::FString::FString(&bHasClearCoatTexture,L"bHasClearCoatTexture");
  atexit(_dynamic_atexit_destructor_for__bHasClearCoatTexture__);
  return;
}

// `dynamic_initializer_for_'bHasDiffuseSpecGlossTexture'' @ 14143b230

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasDiffuseSpecGlossTexture__(void)

{
  ::FString::FString(&bHasDiffuseSpecGlossTexture,L"bHasDiffuseSpecGlossTexture");
  atexit(_dynamic_atexit_destructor_for__bHasDiffuseSpecGlossTexture__);
  return;
}

// `dynamic_initializer_for_'bHasEmissiveTexture'' @ 14143b260

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasEmissiveTexture__(void)

{
  ::FString::FString(&bHasEmissiveTexture,L"bHasEmissiveTexture");
  atexit(_dynamic_atexit_destructor_for__bHasEmissiveTexture__);
  return;
}

// `dynamic_initializer_for_'bHasIridescence'' @ 14143b290

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::_dynamic_initializer_for__bHasIridescence__
          (void)

{
  ::FString::FString(&bHasIridescence,L"bHasIridescence");
  atexit(_dynamic_atexit_destructor_for__bHasIridescence__);
  return;
}

// `dynamic_initializer_for_'bHasMetallicRoughnessTexture'' @ 14143b2c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasMetallicRoughnessTexture__(void)

{
  ::FString::FString(&bHasMetallicRoughnessTexture,L"bHasMetallicRoughnessTexture");
  atexit(_dynamic_atexit_destructor_for__bHasMetallicRoughnessTexture__);
  return;
}

// `dynamic_initializer_for_'bHasNormalTexture'' @ 14143b2f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::_dynamic_initializer_for__bHasNormalTexture__
          (void)

{
  ::FString::FString(&bHasNormalTexture,L"bHasNormalTexture");
  atexit(_dynamic_atexit_destructor_for__bHasNormalTexture__);
  return;
}

// `dynamic_initializer_for_'bHasOcclusionTexture'' @ 14143b320

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasOcclusionTexture__(void)

{
  ::FString::FString(&bHasOcclusionTexture,L"bHasOcclusionTexture");
  atexit(_dynamic_atexit_destructor_for__bHasOcclusionTexture__);
  return;
}

// `dynamic_initializer_for_'bHasSheenTexture'' @ 14143b350

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::_dynamic_initializer_for__bHasSheenTexture__
          (void)

{
  ::FString::FString(&bHasSheenTexture,L"bHasSheenTexture");
  atexit(_dynamic_atexit_destructor_for__bHasSheenTexture__);
  return;
}

// `dynamic_initializer_for_'bHasSpecularTexture'' @ 14143b380

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasSpecularTexture__(void)

{
  ::FString::FString(&bHasSpecularTexture,L"bHasSpecularTexture");
  atexit(_dynamic_atexit_destructor_for__bHasSpecularTexture__);
  return;
}

// `dynamic_initializer_for_'bHasTransmissionTexture'' @ 14143b3b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasTransmissionTexture__(void)

{
  ::FString::FString(&bHasTransmissionTexture,L"bHasTransmissionTexture");
  atexit(_dynamic_atexit_destructor_for__bHasTransmissionTexture__);
  return;
}

// Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister @ 14e72cc00

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericTexturePipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.InnerSingleton,
               UInterchangeGenericTexturePipeline::
               StaticRegisterNativesUInterchangeGenericTexturePipeline,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericTexturePipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericTexturePipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister @ 14e72ce70

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericCommonMeshesProperties",
               &Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.InnerSingleton,
               UInterchangeGenericCommonMeshesProperties::
               StaticRegisterNativesUInterchangeGenericCommonMeshesProperties,0x140,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeGenericCommonMeshesProperties>,
               InternalVTableHelperCtorCaller<UInterchangeGenericCommonMeshesProperties>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister @ 14e72cf30

UClass * __cdecl
Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",
               L"InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties",
               &Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
                .InnerSingleton,
               UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::
               StaticRegisterNativesUInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties,
               0x138,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>,
               InternalVTableHelperCtorCaller<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>
               ,local_res8,UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.
         InnerSingleton;
}

// Z_Construct_UClass_UInterchangePipelineMeshesUtilities @ 14e72cff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangePipelineMeshesUtilities(void)

{
  if (Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.OuterSingleton,
               &Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.OuterSingleton;
}

// Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer @ 14e72d030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeLodSceneNodeContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeLodSceneNodeContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeLodSceneNodeContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangeLodSceneNodeContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInterchangeMeshGeometry @ 14e72d0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeMeshGeometry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeMeshGeometry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeMeshGeometry.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeMeshGeometry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangeMeshGeometry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInterchangeMeshInstance @ 14e72d130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeMeshInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeMeshInstance.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeMeshInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeMeshInstance.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangeMeshInstance.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext @ 14e72d1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext.
           InnerSingleton;
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

// NewStructOps @ 14e72d230

void * __cdecl
Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeLodSceneNodeContainer,&UE::CoreUObject::Private::Construct<FInterchangeLodSceneNodeContainer>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeLodSceneNodeContainer>,&UE::CoreUObject::Private::Destruct<FInterchangeLodSceneNodeContainer>,&UE::CoreUObject::Private::Copy<FInterchangeLodSceneNodeContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bReferenceSkinnedMesh_SetBit @ 14e72d3f0

void __cdecl
Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bReferenceMorphTarget_SetBit @ 14e72d400

void __cdecl
Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bHasMorphTargets_SetBit @ 14e72d410

void __cdecl
Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bHasMorphTargets_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewProp_bIsAnimated_SetBit @ 14e72d420

void __cdecl
Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bIsAnimated_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  return;
}

// NewStructOps @ 14e72d430

void * __cdecl Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeMeshInstance,&UE::CoreUObject::Private::Construct<FInterchangeMeshInstance>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeMeshInstance>,&UE::CoreUObject::Private::Destruct<FInterchangeMeshInstance>,&UE::CoreUObject::Private::Copy<FInterchangeMeshInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UInterchangeGenericAnimationPipeline @ 14e72d470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericAnimationPipeline(void)

{
  if (Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.OuterSingleton,
               &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.OuterSingleton;
}

// Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange @ 14e72d4b0

UEnum * __cdecl Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange(void)

{
  if (Z_Registration_Info_UEnum_EInterchangeAnimationRange.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterchangeAnimationRange.InnerSingleton,
               &Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EInterchangeAnimationRange.InnerSingleton;
}

// EInterchangeAnimationRange_StaticEnum @ 14e72d4f0

UEnum * __cdecl EInterchangeAnimationRange_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeAnimationRange.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UEnum_EInterchangeAnimationRange.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange,
                       (UObject *)pUVar1,L"EInterchangeAnimationRange");
  }
  return Z_Registration_Info_UEnum_EInterchangeAnimationRange.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties @ 14e72d530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties(void)

{
  if (Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.OuterSingleton,
               &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties @ 14e72d570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl
Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties(void)

{
  if (Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.
      OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
                .OuterSingleton,
               &Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics
                ::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.
         OuterSingleton;
}

// Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType @ 14e72d5b0

UEnum * __cdecl Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType(void)

{
  if (Z_Registration_Info_UEnum_EInterchangeForceMeshType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterchangeForceMeshType.InnerSingleton,
               &Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EInterchangeForceMeshType.InnerSingleton;
}

// Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption @ 14e72d5f0

UEnum * __cdecl Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption(void)

{
  if (Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.InnerSingleton,
               &Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.InnerSingleton;
}

// Z_Construct_UPackage__Script_InterchangePipelines @ 14e72d630

UPackage * __cdecl Z_Construct_UPackage__Script_InterchangePipelines(void)

{
  if (Z_Registration_Info_UPackage__Script_InterchangePipelines.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_InterchangePipelines.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_InterchangePipelines.OuterSingleton;
}

// EInterchangeForceMeshType_StaticEnum @ 14e72d670

UEnum * __cdecl EInterchangeForceMeshType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeForceMeshType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UEnum_EInterchangeForceMeshType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType,
                       (UObject *)pUVar1,L"EInterchangeForceMeshType");
  }
  return Z_Registration_Info_UEnum_EInterchangeForceMeshType.OuterSingleton;
}

// NewProp_bImportAnimations_SetBit @ 14e72d6b0

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportAnimations_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_bImportBoneTracks_SetBit @ 14e72d6c0

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportBoneTracks_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x139) = 1;
  return;
}

// EInterchangeVertexColorImportOption_StaticEnum @ 14e72d6d0

UEnum * __cdecl EInterchangeVertexColorImportOption_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption,
                       (UObject *)pUVar1,L"EInterchangeVertexColorImportOption");
  }
  return Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.OuterSingleton;
}

// NewProp_bUse30HzToBakeBoneAnimation_SetBit @ 14e72d710

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::
NewProp_bUse30HzToBakeBoneAnimation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x144) = 1;
  return;
}

// NewProp_bSnapToClosestFrameBoundary_SetBit @ 14e72d720

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::
NewProp_bSnapToClosestFrameBoundary_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14c) = 1;
  return;
}

// NewProp_bImportCustomAttribute_SetBit @ 14e72d730

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::
NewProp_bImportCustomAttribute_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14d) = 1;
  return;
}

// NewProp_bAddCurveMetadataToSkeleton_SetBit @ 14e72d740

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::
NewProp_bAddCurveMetadataToSkeleton_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14e) = 1;
  return;
}

// NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit @ 14e72d750

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::
NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14f) = 1;
  return;
}

// NewProp_bRemoveCurveRedundantKeys_SetBit @ 14e72d760

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::
NewProp_bRemoveCurveRedundantKeys_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x160) = 1;
  return;
}

// NewProp_bDoNotImportCurveWithZero_SetBit @ 14e72d770

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::
NewProp_bDoNotImportCurveWithZero_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x161) = 1;
  return;
}

// NewProp_bDeleteExistingNonCurveCustomAttributes_SetBit @ 14e72d780

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::
NewProp_bDeleteExistingNonCurveCustomAttributes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x162) = 1;
  return;
}

// NewProp_bDeleteExistingCustomAttributeCurves_SetBit @ 14e72d790

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::
NewProp_bDeleteExistingCustomAttributeCurves_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x163) = 1;
  return;
}

// NewProp_bDeleteExistingMorphTargetCurves_SetBit @ 14e72d7a0

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::
NewProp_bDeleteExistingMorphTargetCurves_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x164) = 1;
  return;
}

// NewStructOps @ 14e72d7b0

void * __cdecl Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeMeshGeometry,&UE::CoreUObject::Private::Construct<FInterchangeMeshGeometry>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeMeshGeometry>,&UE::CoreUObject::Private::Destruct<FInterchangeMeshGeometry>,&UE::CoreUObject::Private::Copy<FInterchangeMeshGeometry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSceneImport_SetBit @ 14e72d7f0

void __cdecl
Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSceneImport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x178) = 1;
  return;
}

// NewProp_bSingleBoneSkeleton_SetBit @ 14e72d800

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::
NewProp_bSingleBoneSkeleton_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x129) = 1;
  return;
}

// NewProp_bAutoDetectMeshType_SetBit @ 14e72d810

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::
NewProp_bAutoDetectMeshType_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12a) = 1;
  return;
}

// NewProp_bImportLods_SetBit @ 14e72d820

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportLods_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 299) = 1;
  return;
}

// NewProp_bBakeMeshes_SetBit @ 14e72d830

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bBakeMeshes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 300) = 1;
  return;
}

// NewProp_bBakePivotMeshes_SetBit @ 14e72d840

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::
NewProp_bBakePivotMeshes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12d) = 1;
  return;
}

// NewProp_bKeepSectionsSeparate_SetBit @ 14e72d850

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::
NewProp_bKeepSectionsSeparate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12e) = 1;
  return;
}

// NewProp_bImportSockets_SetBit @ 14e72d860

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportSockets_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x134) = 1;
  return;
}

// NewProp_bRecomputeNormals_SetBit @ 14e72d870

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::
NewProp_bRecomputeNormals_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x135) = 1;
  return;
}

// NewProp_bRecomputeTangents_SetBit @ 14e72d880

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::
NewProp_bRecomputeTangents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x136) = 1;
  return;
}

// NewProp_bUseMikkTSpace_SetBit @ 14e72d890

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseMikkTSpace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x137) = 1;
  return;
}

// NewProp_bComputeWeightedNormals_SetBit @ 14e72d8a0

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::
NewProp_bComputeWeightedNormals_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_bUseHighPrecisionTangentBasis_SetBit @ 14e72d8b0

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::
NewProp_bUseHighPrecisionTangentBasis_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x139) = 1;
  return;
}

// NewProp_bUseFullPrecisionUVs_SetBit @ 14e72d8c0

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::
NewProp_bUseFullPrecisionUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13a) = 1;
  return;
}

// NewProp_bUseBackwardsCompatibleF16TruncUVs_SetBit @ 14e72d8d0

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::
NewProp_bUseBackwardsCompatibleF16TruncUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13b) = 1;
  return;
}

// NewProp_bRemoveDegenerates_SetBit @ 14e72d8e0

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::
NewProp_bRemoveDegenerates_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13c) = 1;
  return;
}

// NewProp_bConvertStaticMeshToSkeletalMesh_SetBit @ 14e72d8f0

void __cdecl
Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::
NewProp_bConvertStaticMeshToSkeletalMesh_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bConvertSkeletalMeshToStaticMesh_SetBit @ 14e72d900

void __cdecl
Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::
NewProp_bConvertSkeletalMeshToStaticMesh_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit @ 14e72d910

void __cdecl
Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::
NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bImportMeshesInBoneHierarchy_SetBit @ 14e72d920

void __cdecl
Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::
NewProp_bImportMeshesInBoneHierarchy_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bQueryGeometryOnlyIfNoInstance_SetBit @ 14e72d930

void __cdecl
Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::
NewProp_bQueryGeometryOnlyIfNoInstance_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bIgnoreStaticMeshes_SetBit @ 14e72d940

void __cdecl
Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::
NewProp_bIgnoreStaticMeshes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bIgnoreGeometryCaches_SetBit @ 14e72d950

void __cdecl
Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::
NewProp_bIgnoreGeometryCaches_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// NewStructOps @ 14e72d960

void * __cdecl
Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 7;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangePipelineMeshesUtilitiesContext,&UE::CoreUObject::Private::Construct<FInterchangePipelineMeshesUtilitiesContext>,&UE::CoreUObject::Private::ConstructForTests<FInterchangePipelineMeshesUtilitiesContext>,&UE::CoreUObject::Private::Destruct<FInterchangePipelineMeshesUtilitiesContext>,&UE::CoreUObject::Private::Copy<FInterchangePipelineMeshesUtilitiesContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bImportOnlyAnimations_SetBit @ 14e72d9a0

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::
NewProp_bImportOnlyAnimations_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x128) = 1;
  return;
}

// NewProp_bImportMeshesInBoneHierarchy_SetBit @ 14e72d9b0

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::
NewProp_bImportMeshesInBoneHierarchy_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x134) = 1;
  return;
}

// NewProp_bUseT0AsRefPose_SetBit @ 14e72d9c0

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::
NewProp_bUseT0AsRefPose_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x135) = 1;
  return;
}

// NewProp_bAddCurveMetadataToSkeleton_SetBit @ 14e72d9d0

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::
NewProp_bAddCurveMetadataToSkeleton_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x136) = 1;
  return;
}

// NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit @ 14e72d9e0

void __cdecl
Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::
NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x137) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities @ 14e72d9f0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllGeometryCacheGeometry @ 14e72da30

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllGeometryCacheGeometry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllGeometryCacheGeometry_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllGeometryCacheInstance @ 14e72da70

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllGeometryCacheInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllGeometryCacheInstance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry @ 14e72dab0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister @ 14e72daf0

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericAnimationPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.InnerSingleton,
               UInterchangeGenericAnimationPipeline::
               StaticRegisterNativesUInterchangeGenericAnimationPipeline,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericAnimationPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericAnimationPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.InnerSingleton;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced @ 14e72dbb0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids @ 14e72dcb0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid @ 14e72dcf0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry @ 14e72dd30

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance @ 14e72dd70

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry @ 14e72ddb0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance @ 14e72ddf0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid @ 14e72de30

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid @ 14e72de70

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid @ 14e72deb0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid @ 14e72def0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e72df30

void __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid @ 14e72df40

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e72df80

void __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid @ 14e72df90

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext @ 14e72dfd0

UFunction * __cdecl Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInterchangeGenericLevelPipeline @ 14e72e0d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericLevelPipeline(void)

{
  if (Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.OuterSingleton,
               &Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.OuterSingleton;
}

// Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType @ 14e72e110

UEnum * __cdecl Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType(void)

{
  if (Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.InnerSingleton,
               &Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.InnerSingleton;
}

// EInterchangeSceneHierarchyType_StaticEnum @ 14e72e150

UEnum * __cdecl EInterchangeSceneHierarchyType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType,
                       (UObject *)pUVar1,L"EInterchangeSceneHierarchyType");
  }
  return Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.OuterSingleton;
}

// NewProp_bDeleteMissingActors_SetBit @ 14e72e190

void __cdecl
Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingActors_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13a) = 1;
  return;
}

// NewProp_bForceReimportDeletedActors_SetBit @ 14e72e1a0

void __cdecl
Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::
NewProp_bForceReimportDeletedActors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13b) = 1;
  return;
}

// NewProp_bForceReimportDeletedAssets_SetBit @ 14e72e1b0

void __cdecl
Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::
NewProp_bForceReimportDeletedAssets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13c) = 1;
  return;
}

// NewProp_bDeleteMissingAssets_SetBit @ 14e72e1c0

void __cdecl
Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingAssets_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13d) = 1;
  return;
}

// NewProp_bUseHierarchicalISMComponents_SetBit @ 14e72e1d0

void __cdecl
Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::
NewProp_bUseHierarchicalISMComponents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13e) = 1;
  return;
}

// NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_SetBit @ 14e72e1e0

void __cdecl
Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::
NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13f) = 1;
  return;
}

// Z_Construct_UClass_UInterchangeGenericGroomPipeline @ 14e72e340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericGroomPipeline(void)

{
  if (Z_Registration_Info_UClass_UInterchangeGenericGroomPipeline.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeGenericGroomPipeline.OuterSingleton,
               &Z_Construct_UClass_UInterchangeGenericGroomPipeline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericGroomPipeline.OuterSingleton;
}

// NewProp_bEnableGroomTypesImport_SetBit @ 14e72e440

void __cdecl
Z_Construct_UClass_UInterchangeGenericGroomPipeline_Statics::NewProp_bEnableGroomTypesImport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_bImportGrooms_SetBit @ 14e72e450

void __cdecl
Z_Construct_UClass_UInterchangeGenericGroomPipeline_Statics::NewProp_bImportGrooms_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x139) = 1;
  return;
}

// NewProp_bImportGroomCaches_SetBit @ 14e72e460

void __cdecl
Z_Construct_UClass_UInterchangeGenericGroomPipeline_Statics::NewProp_bImportGroomCaches_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x164) = 1;
  return;
}

// NewProp_bOverrideTimeRange_SetBit @ 14e72e470

void __cdecl
Z_Construct_UClass_UInterchangeGenericGroomPipeline_Statics::NewProp_bOverrideTimeRange_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x189) = 1;
  return;
}

// Z_Construct_UClass_UInterchangeGenericMeshPipeline @ 14e72e530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericMeshPipeline(void)

{
  if (Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.OuterSingleton,
               &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeGenericTexturePipeline @ 14e72e570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericTexturePipeline(void)

{
  if (Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.OuterSingleton,
               &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14e72e5b0

void __cdecl
Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bImportTextures_SetBit @ 14e72e5c0

void __cdecl
Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportTextures_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_bAllowNonPowerOfTwo_SetBit @ 14e72e5d0

void __cdecl
Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bAllowNonPowerOfTwo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x150) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes @ 14e72e5e0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInterchangeGenericAudioPipeline @ 14e72e620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericAudioPipeline(void)

{
  if (Z_Registration_Info_UClass_UInterchangeGenericAudioPipeline.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeGenericAudioPipeline.OuterSingleton,
               &Z_Construct_UClass_UInterchangeGenericAudioPipeline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericAudioPipeline.OuterSingleton;
}

// NewProp_InbCombineSkeletalMeshes_SetBit @ 14e72e660

void __cdecl
Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::
NewProp_InbCombineSkeletalMeshes_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes @ 14e72e670

UFunction * __cdecl
Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeGenericAudioPipeline_CreateSoundWaveFactoryNode @ 14e72e6b0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangeGenericAudioPipeline_CreateSoundWaveFactoryNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeGenericAudioPipeline_CreateSoundWaveFactoryNode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bImportStaticMeshes_SetBit @ 14e72e6f0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportStaticMeshes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_bImportSounds_SetBit @ 14e72e700

void __cdecl
Z_Construct_UClass_UInterchangeGenericAudioPipeline_Statics::NewProp_bImportSounds_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_bCombineStaticMeshes_SetBit @ 14e72e710

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineStaticMeshes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x139) = 1;
  return;
}

// Z_Construct_UClass_UInterchangeGenericAssetsPipeline @ 14e72e720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericAssetsPipeline(void)

{
  if (Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.OuterSingleton,
               &Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.OuterSingleton;
}

// NewProp_bAutoComputeLODScreenSizes_SetBit @ 14e72e760

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::
NewProp_bAutoComputeLODScreenSizes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x144) = 1;
  return;
}

// NewProp_bImportCollision_SetBit @ 14e72e770

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollision_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x158) = 1;
  return;
}

// NewProp_bCollision_SetBit @ 14e72e780

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x159) = 1;
  return;
}

// NewProp_bImportCollisionAccordingToMeshName_SetBit @ 14e72e790

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::
NewProp_bImportCollisionAccordingToMeshName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15a) = 1;
  return;
}

// NewProp_bOneConvexHullPerUCX_SetBit @ 14e72e7a0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOneConvexHullPerUCX_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15b) = 1;
  return;
}

// NewProp_bForceCollisionPrimitiveGeneration_SetBit @ 14e72e7b0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::
NewProp_bForceCollisionPrimitiveGeneration_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15d) = 1;
  return;
}

// NewProp_bBuildNanite_SetBit @ 14e72e810

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildNanite_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15e) = 1;
  return;
}

// NewProp_bUseSourceNameForAsset_SetBit @ 14e72e820

void __cdecl
Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bUseSourceNameForAsset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x139) = 1;
  return;
}

// NewProp_bBuildReversedIndexBuffer_SetBit @ 14e72e880

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildReversedIndexBuffer_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x168) = 1;
  return;
}

// NewProp_bSceneNameSubFolder_SetBit @ 14e72e890

void __cdecl
Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bSceneNameSubFolder_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13a) = 1;
  return;
}

// NewProp_bGenerateLightmapUVs_SetBit @ 14e72e8a0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateLightmapUVs_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x169) = 1;
  return;
}

// NewProp_bAssetTypeSubFolders_SetBit @ 14e72e8b0

void __cdecl
Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bAssetTypeSubFolders_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13b) = 1;
  return;
}

// NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit @ 14e72e930

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::
NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x16a) = 1;
  return;
}

// NewProp_bSupportFaceRemap_SetBit @ 14e72e940

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bSupportFaceRemap_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x16b) = 1;
  return;
}

// NewProp_bImportSkeletalMeshes_SetBit @ 14e72e950

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportSkeletalMeshes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a0) = 1;
  return;
}

// NewProp_bImportOnlyAnimationAdjusted_SetBit @ 14e72e960

void __cdecl
Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::
NewProp_bImportOnlyAnimationAdjusted_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e8) = 1;
  return;
}

// NewProp_bCombineSkeletalMeshes_SetBit @ 14e72ea30

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineSkeletalMeshes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a3) = 1;
  return;
}

// NewProp_bImportMorphTargets_SetBit @ 14e72eb30

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportMorphTargets_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 1;
  return;
}

// NewProp_bMergeMorphTargetsWithSameName_SetBit @ 14e72eb40

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::
NewProp_bMergeMorphTargetsWithSameName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a5) = 1;
  return;
}

// NewProp_bImportVertexAttributes_SetBit @ 14e72eb50

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportVertexAttributes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a6) = 1;
  return;
}

// NewProp_bUpdateSkeletonReferencePose_SetBit @ 14e72eb60

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::
NewProp_bUpdateSkeletonReferencePose_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a7) = 1;
  return;
}

// NewProp_bCreatePhysicsAsset_SetBit @ 14e72eb70

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCreatePhysicsAsset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a8) = 1;
  return;
}

// NewProp_bUseHighPrecisionSkinWeights_SetBit @ 14e72eb80

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::
NewProp_bUseHighPrecisionSkinWeights_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b4) = 1;
  return;
}

// NewProp_bImportGeometryCaches_SetBit @ 14e72eb90

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportGeometryCaches_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1cc) = 1;
  return;
}

// NewProp_bFlattenTracks_SetBit @ 14e72eba0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bFlattenTracks_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1cd) = 1;
  return;
}

// NewProp_bOverrideTimeRange_SetBit @ 14e72ebb0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOverrideTimeRange_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d8) = 1;
  return;
}

// NewProp_bApplyConstantTopologyOptimizations_SetBit @ 14e72ebc0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::
NewProp_bApplyConstantTopologyOptimizations_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e5) = 1;
  return;
}

// NewProp_bStoreImportedVertexNumbers_SetBit @ 14e72ebd0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::
NewProp_bStoreImportedVertexNumbers_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e6) = 1;
  return;
}

// NewProp_bOptimizeIndexBuffers_SetBit @ 14e72ebe0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOptimizeIndexBuffers_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e7) = 1;
  return;
}

// Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister @ 14e72ecb0

UClass * __cdecl Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangePipelineMeshesUtilities",
               &Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.InnerSingleton,
               UInterchangePipelineMeshesUtilities::
               StaticRegisterNativesUInterchangePipelineMeshesUtilities,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePipelineMeshesUtilities>,
               InternalVTableHelperCtorCaller<UInterchangePipelineMeshesUtilities>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeMaterialXPipeline @ 14e72eeb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeMaterialXPipeline(void)

{
  if (Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.OuterSingleton,
               &Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.OuterSingleton;
}

// Z_Construct_UClass_UMaterialXPipelineSettings @ 14e72eef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialXPipelineSettings(void)

{
  if (Z_Registration_Info_UClass_UMaterialXPipelineSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialXPipelineSettings.OuterSingleton,
               &Z_Construct_UClass_UMaterialXPipelineSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialXPipelineSettings.OuterSingleton;
}

// NewProp_bVolumetricMaterial_SetBit @ 14e72ef30

void __cdecl
Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::NewProp_bVolumetricMaterial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x130) = 1;
  return;
}

// Z_Construct_UClass_UGLTFPipelineSettings @ 14e72f000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGLTFPipelineSettings(void)

{
  if (Z_Registration_Info_UClass_UGLTFPipelineSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGLTFPipelineSettings.OuterSingleton,
               &Z_Construct_UClass_UGLTFPipelineSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGLTFPipelineSettings.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeGLTFPipeline @ 14e72f040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeGLTFPipeline(void)

{
  if (Z_Registration_Info_UClass_UInterchangeGLTFPipeline.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeGLTFPipeline.OuterSingleton,
               &Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeGLTFPipeline.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeGenericMaterialPipeline @ 14e72f180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericMaterialPipeline(void)

{
  if (Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.OuterSingleton,
               &Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.OuterSingleton;
}

// Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption @ 14e72f1c0

UEnum * __cdecl Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption(void)

{
  if (Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.InnerSingleton,
               &Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.InnerSingleton;
}

// Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation @ 14e72f200

UEnum * __cdecl Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation(void)

{
  if (Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.InnerSingleton,
               &Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.InnerSingleton;
}

// EInterchangeMaterialImportOption_StaticEnum @ 14e72f240

UEnum * __cdecl EInterchangeMaterialImportOption_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption,
                       (UObject *)pUVar1,L"EInterchangeMaterialImportOption");
  }
  return Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.OuterSingleton;
}

// EInterchangeMaterialSearchLocation_StaticEnum @ 14e72f280

UEnum * __cdecl EInterchangeMaterialSearchLocation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation,
                       (UObject *)pUVar1,L"EInterchangeMaterialSearchLocation");
  }
  return Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.OuterSingleton;
}

// NewProp_bImportMaterials_SetBit @ 14e72f2c0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bImportMaterials_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_bIdentifyDuplicateMaterials_SetBit @ 14e72f2d0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::
NewProp_bIdentifyDuplicateMaterials_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x151) = 1;
  return;
}

// NewProp_bCreateMaterialInstanceForParent_SetBit @ 14e72f2e0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::
NewProp_bCreateMaterialInstanceForParent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x152) = 1;
  return;
}

// NewProp_bOverrideDisplacement_SetBit @ 14e72f2f0

void __cdecl
Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bOverrideDisplacement_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x188) = 1;
  return;
}

// Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister @ 14e72f300

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericMeshPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.InnerSingleton,
               UInterchangeGenericMeshPipeline::StaticRegisterNativesUInterchangeGenericMeshPipeline
               ,0x298,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeGenericMeshPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericMeshPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeSparseVolumeTexturePipeline_NoRegister @ 14e72f480

UClass * __cdecl Z_Construct_UClass_UInterchangeSparseVolumeTexturePipeline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSparseVolumeTexturePipeline.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeSparseVolumeTexturePipeline",
               &Z_Registration_Info_UClass_UInterchangeSparseVolumeTexturePipeline.InnerSingleton,
               UInterchangeSparseVolumeTexturePipeline::
               StaticRegisterNativesUInterchangeSparseVolumeTexturePipeline,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSparseVolumeTexturePipeline>
               ,InternalVTableHelperCtorCaller<UInterchangeSparseVolumeTexturePipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSparseVolumeTexturePipeline.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeGenericGroomPipeline_NoRegister @ 14e72f600

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericGroomPipeline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericGroomPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericGroomPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericGroomPipeline.InnerSingleton,
               UInterchangeGenericGroomPipeline::
               StaticRegisterNativesUInterchangeGenericGroomPipeline,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericGroomPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericGroomPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericGroomPipeline.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14e72f780

void * __thiscall
IInterchangePipelinesModule::_scalar_deleting_destructor_
          (IInterchangePipelinesModule *this,uint param_1)

{
  *this = (IInterchangePipelinesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister @ 14e72f7c0

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericMaterialPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.InnerSingleton,
               UInterchangeGenericMaterialPipeline::
               StaticRegisterNativesUInterchangeGenericMaterialPipeline,0x1c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericMaterialPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericMaterialPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14e72f8a0

void * __thiscall
FInterchangePipelinesModule::_scalar_deleting_destructor_
          (FInterchangePipelinesModule *this,uint param_1)

{
  *this = (FInterchangePipelinesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UInterchangeSparseVolumeTexturePipeline @ 14e72f9a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeSparseVolumeTexturePipeline(void)

{
  if (Z_Registration_Info_UClass_UInterchangeSparseVolumeTexturePipeline.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeSparseVolumeTexturePipeline.OuterSingleton,
               &Z_Construct_UClass_UInterchangeSparseVolumeTexturePipeline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeSparseVolumeTexturePipeline.OuterSingleton;
}

// NewProp_bImportSparseVolumeTextures_SetBit @ 14e72f9e0

void __cdecl
Z_Construct_UClass_UInterchangeSparseVolumeTexturePipeline_Statics::
NewProp_bImportSparseVolumeTextures_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_bImportAnimatedSparseVolumeTextures_SetBit @ 14e72f9f0

void __cdecl
Z_Construct_UClass_UInterchangeSparseVolumeTexturePipeline_Statics::
NewProp_bImportAnimatedSparseVolumeTextures_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x139) = 1;
  return;
}

// Cast<UInterchangePhysicalCameraFactoryNode,UInterchangeActorFactoryNode> @ 14e733d00

UInterchangePhysicalCameraFactoryNode * __cdecl
Cast<UInterchangePhysicalCameraFactoryNode,UInterchangeActorFactoryNode>
          (UInterchangeActorFactoryNode *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UInterchangeActorFactoryNode *)0x0) {
    pUVar2 = Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (UInterchangePhysicalCameraFactoryNode *)param_1;
    }
  }
  return (UInterchangePhysicalCameraFactoryNode *)0x0;
}

// Cast<UInterchangeVolumeNode,UInterchangeBaseNode_const_> @ 14e733d50

UInterchangeVolumeNode * __cdecl
Cast<UInterchangeVolumeNode,UInterchangeBaseNode_const_>(UInterchangeBaseNode *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UInterchangeBaseNode *)0x0) {
    pUVar2 = Z_Construct_UClass_UInterchangeVolumeNode_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (UInterchangeVolumeNode *)param_1;
    }
  }
  return (UInterchangeVolumeNode *)0x0;
}

// CastChecked<USkeleton,UObject> @ 14e733da0

USkeleton * __cdecl CastChecked<USkeleton,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<USkeleton>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_USkeleton_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (USkeleton *)param_1;
  }
  pFVar3 = GetTypeName<USkeleton>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TObjectPtr<UInterchangeBaseNode_const_>,TObjectPtr<UInterchangeBaseNode_const_>,int> @ 14e733e60

void __cdecl
ConstructItems<TObjectPtr<UInterchangeBaseNode_const_>,TObjectPtr<UInterchangeBaseNode_const_>,int>
          (void *param_1,TObjectPtr<UInterchangeBaseNode_const_> *param_2,int param_3)

{
  TObjectPtr<UInterchangeBaseNode_const_> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UInterchangeBaseNode_const_>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UInterchangeBaseNode_const_>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UInterchangeBaseNode *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UInterchangeBaseNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,int> @ 14e733ec0

void __cdecl
ConstructItems<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,int>
          (void *param_1,
          TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FListItem **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int> @ 14e733f00

void __cdecl
ConstructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
          (void *param_1,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FSkeletonJoint **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UInterchangeGenericMaterialPipeline::FMaterialExpressionCreationContext,int> @ 14e7343f0

void __cdecl
DefaultConstructItems<UInterchangeGenericMaterialPipeline::FMaterialExpressionCreationContext,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups'::__l5::FLODGroupIIHelper,int> @ 14e734560

void __cdecl
DestructItems<_UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups_::__l5::FLODGroupIIHelper,int>
          (FLODGroupIIHelper *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)&(param_1->Meshes).field_0x48;
    do {
      if (*(void **)(puVar1 + 4) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar1 + 4));
      }
      *puVar1 = 0;
      if (*(void **)(puVar1 + -2) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar1 + -2));
      }
      TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x12));
      puVar1 = puVar1 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UInterchangeGenericMaterialPipeline::FMaterialExpressionCreationContext,int> @ 14e7345d0

void __cdecl
DestructItems<UInterchangeGenericMaterialPipeline::FMaterialExpressionCreationContext,int>
          (FMaterialExpressionCreationContext *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->OutputName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>'::__l2::FOrderHelper,int> @ 14e734610

void __cdecl
DestructItems<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,int>
          (FOrderHelper *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Name;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>'::__l2::FOrderHelper,int> @ 14e734650

void __cdecl
DestructItems<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,int>
          (FOrderHelper *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Name;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`UInterchangeGenericMeshPipeline::ExecutePreImportPipelineGeometryCache'::__l2::FPayloadInfo,int> @ 14e734690

void __cdecl
DestructItems<_UInterchangeGenericMeshPipeline::ExecutePreImportPipelineGeometryCache_::__l2::FPayloadInfo,int>
          (FPayloadInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->PayloadKeyId).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->SceneNodeUid).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,int> @ 14e7346e0

void __cdecl
DestructItems<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,int>
          (TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *param_1,
          int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int> @ 14e734720

void __cdecl
DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
          (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<``GetCollisionMeshType'::__l20::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14e7386f0

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<__GetCollisionMeshType_::__l20::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,undefined8 *param_2)

{
  bool bVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (pFVar2 == pFVar3) {
      if ((void *)*param_2 != (void *)0x0) {
        FMemory::Free((void *)*param_2);
      }
      return (FString *)0x0;
    }
    bVar1 = ``GetCollisionMeshType'::__l20::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
                      (param_2,(FString *)pFVar2);
    if (bVar1) break;
    pFVar2 = pFVar2 + 0x10;
  }
  if ((void *)*param_2 != (void *)0x0) {
    FMemory::Free((void *)*param_2);
  }
  return (FString *)pFVar2;
}

// GetTypeHash<SInterchangeGenericAssetMaterialConflictWidget::FListItem_const_,1> @ 14e73ae00

uint __cdecl
GetTypeHash<SInterchangeGenericAssetMaterialConflictWidget::FListItem_const_,1>
          (TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1> @ 14e73ae30

uint __cdecl
GetTypeHash<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1>
          (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeName<USkeleton> @ 14e73ae60

FString * __cdecl GetTypeName<USkeleton>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_USkeleton_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_> @ 14e757d00

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  int iVar19;
  int iVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar21;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar13 = iVar11 * 2 + 1;
  iVar14 = iVar13;
  iVar20 = iVar11;
  do {
    while (param_2 <= iVar13) {
LAB_14e757e84:
      if (iVar20 == 0) {
        iVar13 = param_2 + -1;
        lVar15 = (longlong)iVar13;
        if (0 < iVar13) {
          pTVar21 = param_1 + lVar15;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 8);
            uVar3 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            TVar6 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar21->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar5;
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x20);
            pTVar21->_s_1 = TVar6;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 8) = uVar7;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x10) = uVar8;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x18) = uVar9;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x20) = uVar3;
            iVar14 = 0;
            if (1 < iVar13) {
              do {
                iVar20 = iVar14 * 2;
                iVar11 = iVar20 + 1;
                if (iVar20 + 2 < iVar13) {
                  lVar16 = (longlong)iVar20;
                  if (*(int *)((longlong)param_1 + (lVar16 + 1) * 0x28 + 8) == 0) {
                    pwVar18 = L"";
                  }
                  else {
                    pwVar18 = *(wchar_t **)&param_1[lVar16 + 1]._s_1;
                  }
                  if (*(int *)((longlong)param_1 + lVar16 * 0x28 + 0x58) == 0) {
                    pwVar17 = L"";
                  }
                  else {
                    pwVar17 = *(wchar_t **)&param_1[lVar16 + 2]._s_1;
                  }
                  iVar19 = FGenericPlatformStricmp::Stricmp(pwVar17,pwVar18);
                  if (iVar19 < 0) {
                    iVar11 = iVar20;
                  }
                  iVar11 = iVar11 + 1;
                }
                pTVar1 = param_1 + iVar14;
                pTVar2 = param_1 + iVar11;
                if (*(int *)((longlong)param_1 + (longlong)iVar11 * 0x28 + 8) == 0) {
                  pwVar18 = L"";
                }
                else {
                  pwVar18 = *(wchar_t **)&pTVar2->_s_1;
                }
                if (*(int *)((pTVar1->ElementData).Pad + 8) == 0) {
                  pwVar17 = L"";
                }
                else {
                  pwVar17 = *(wchar_t **)&pTVar1->_s_1;
                }
                iVar14 = FGenericPlatformStricmp::Stricmp(pwVar17,pwVar18);
                if (-1 < iVar14) break;
                uVar5 = *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 8);
                TVar6 = pTVar1->_s_1;
                uVar7 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar8 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                uVar9 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x18);
                uVar3 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x20);
                pTVar1->_s_1 = pTVar2->_s_1;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar5;
                uVar5 = *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 0x18);
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) =
                     *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 0x10);
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x18) = uVar5;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x20) =
                     *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 0x20);
                pTVar2->_s_1 = TVar6;
                *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 8) = uVar7;
                *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 0x10) = uVar8;
                *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 0x18) = uVar9;
                *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 0x20) = uVar3;
                iVar14 = iVar11;
              } while (iVar11 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar15 = lVar15 + -1;
            pTVar21 = pTVar21 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar11 = iVar20 + -1;
      iVar13 = iVar14 + -2;
      iVar14 = iVar13;
      iVar20 = iVar11;
    }
    iVar13 = iVar11 * 2;
    iVar19 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      lVar15 = (longlong)iVar13;
      if (*(int *)((longlong)param_1 + (lVar15 + 1) * 0x28 + 8) == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = *(wchar_t **)&param_1[lVar15 + 1]._s_1;
      }
      if (*(int *)((longlong)param_1 + lVar15 * 0x28 + 0x58) == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = *(wchar_t **)&param_1[lVar15 + 2]._s_1;
      }
      iVar12 = FGenericPlatformStricmp::Stricmp(pwVar17,pwVar18);
      if (iVar12 < 0) {
        iVar19 = iVar13;
      }
      iVar19 = iVar19 + 1;
    }
    pTVar21 = param_1 + iVar11;
    pTVar1 = param_1 + iVar19;
    if (*(int *)((longlong)param_1 + (longlong)iVar19 * 0x28 + 8) == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = *(wchar_t **)&pTVar1->_s_1;
    }
    if (*(int *)((pTVar21->ElementData).Pad + 8) == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = *(wchar_t **)&pTVar21->_s_1;
    }
    iVar13 = FGenericPlatformStricmp::Stricmp(pwVar17,pwVar18);
    if (-1 < iVar13) goto LAB_14e757e84;
    uVar5 = *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 8);
    iVar13 = iVar19 * 2 + 1;
    uVar3 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x20);
    TVar6 = pTVar21->_s_1;
    uVar7 = *(undefined8 *)((pTVar21->ElementData).Pad + 8);
    uVar8 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x10);
    uVar9 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x18);
    pTVar21->_s_1 = pTVar1->_s_1;
    *(undefined8 *)((pTVar21->ElementData).Pad + 8) = uVar5;
    uVar5 = *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 0x18);
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x10) =
         *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 0x10);
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x18) = uVar5;
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x20) =
         *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 0x20);
    pTVar1->_s_1 = TVar6;
    *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 8) = uVar7;
    *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 0x10) = uVar8;
    *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 0x18) = uVar9;
    *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 0x20) = uVar3;
    iVar11 = iVar19;
  } while( true );
}

// HeapSortInternal<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,int,FIdentityFunctor,TDereferenceWrapper<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l32::<lambda_2>_>_> @ 14e758010

void __cdecl
AlgoImpl::
HeapSortInternal<_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l2::FNodeAndAnimationIndex,int,FIdentityFunctor,TDereferenceWrapper<_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l2::FNodeAndAnimationIndex,_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l32::<lambda_2>_>_>
          (FNodeAndAnimationIndex *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_virtual_void___cdecl_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline(UInterchangeBaseNodeContainer_*,TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_>_const_&,FString_const_&)_::_2_::FNodeAndAnimationIndex,_public:_virtual_void___cdecl_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline(UInterchangeBaseNodeContainer_*,TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_>_const_&,FString_const_&)_::_32_::<lambda_2>_>
          param_4)

{
  code *pcVar1;
  UInterchangeVolumeNode *pUVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  FNodeAndAnimationIndex *pFVar12;
  FNodeAndAnimationIndex *pFVar13;
  int iVar14;
  FNodeAndAnimationIndex *pFVar15;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar10 = iVar8;
  iVar14 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_14e758137:
      if (iVar14 == 0) {
        iVar8 = param_2 + -1;
        lVar11 = (longlong)iVar8;
        if (0 < iVar8) {
          pFVar12 = param_1 + lVar11;
          do {
            iVar10 = pFVar12->Index;
            uVar3 = *(undefined4 *)&pFVar12->field_0xc;
            iVar14 = 0;
            pUVar2 = param_1->Node;
            iVar7 = param_1->Index;
            uVar5 = *(undefined4 *)&param_1->field_0xc;
            param_1->Node = pFVar12->Node;
            param_1->Index = iVar10;
            *(undefined4 *)&param_1->field_0xc = uVar3;
            pFVar12->Node = pUVar2;
            pFVar12->Index = iVar7;
            *(undefined4 *)&pFVar12->field_0xc = uVar5;
            if (1 < iVar8) {
              do {
                iVar7 = iVar14 * 2;
                iVar10 = iVar7 + 1;
                if (iVar7 + 2 < iVar8) {
                  bVar6 = `UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l32::
                          <lambda_2>::operator()
                                    (param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar10);
                  if (bVar6) {
                    iVar10 = iVar7;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar13 = param_1 + iVar10;
                pFVar15 = param_1 + iVar14;
                bVar6 = `UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l32::
                        <lambda_2>::operator()(param_4.Predicate,pFVar15,pFVar13);
                if (!bVar6) break;
                pUVar2 = pFVar15->Node;
                iVar14 = pFVar15->Index;
                uVar5 = *(undefined4 *)&pFVar15->field_0xc;
                iVar7 = pFVar13->Index;
                uVar3 = *(undefined4 *)&pFVar13->field_0xc;
                pFVar15->Node = pFVar13->Node;
                pFVar15->Index = iVar7;
                *(undefined4 *)&pFVar15->field_0xc = uVar3;
                pFVar13->Node = pUVar2;
                pFVar13->Index = iVar14;
                *(undefined4 *)&pFVar13->field_0xc = uVar5;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar11 = lVar11 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar7 = iVar14 + -1;
      iVar8 = iVar10 + -2;
      iVar10 = iVar8;
      iVar14 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar9 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      bVar6 = `UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l32::<lambda_2>::
              operator()(param_4.Predicate,param_1 + (iVar8 + 2),param_1 + iVar9);
      if (bVar6) {
        iVar9 = iVar8;
      }
      iVar9 = iVar9 + 1;
    }
    pFVar12 = param_1 + iVar9;
    pFVar13 = param_1 + iVar7;
    bVar6 = `UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l32::<lambda_2>::
            operator()(param_4.Predicate,pFVar13,pFVar12);
    if (!bVar6) goto LAB_14e758137;
    pUVar2 = pFVar13->Node;
    iVar4 = pFVar13->Index;
    uVar5 = *(undefined4 *)&pFVar13->field_0xc;
    iVar8 = iVar9 * 2 + 1;
    iVar7 = pFVar12->Index;
    uVar3 = *(undefined4 *)&pFVar12->field_0xc;
    pFVar13->Node = pFVar12->Node;
    pFVar13->Index = iVar7;
    *(undefined4 *)&pFVar13->field_0xc = uVar3;
    pFVar12->Node = pUVar2;
    pFVar12->Index = iVar4;
    *(undefined4 *)&pFVar12->field_0xc = uVar5;
    iVar7 = iVar9;
  } while( true );
}

// HeapSortInternal<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>'::__l2::FOrderHelper,int,FIdentityFunctor,TDereferenceWrapper<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>'::__l2::FOrderHelper,`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>'::__l2::<lambda_1>_>_> @ 14e758240

void __cdecl
AlgoImpl::
HeapSortInternal<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,int,FIdentityFunctor,TDereferenceWrapper<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::<lambda_1>_>_>
          (FOrderHelper *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>(UInterchangeSkeletalMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::FOrderHelper,_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>(UInterchangeSkeletalMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  longlong lVar1;
  FOrderHelper *pFVar2;
  FOrderHelper *pFVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  FOrderHelper *pFVar19;
  longlong lVar20;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>(UInterchangeSkeletalMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::FOrderHelper,_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>(UInterchangeSkeletalMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::<lambda_1>_>
              *)&local_res20);
  iVar17 = param_2 + -1;
  lVar20 = (longlong)iVar17;
  if (0 < iVar17) {
    pFVar19 = param_1 + lVar20;
    do {
      uVar7 = *(undefined4 *)&pFVar19->field_0x4;
      pFVar5 = (pFVar19->Name).Data.AllocatorInstance.Data;
      iVar18 = 0;
      iVar9 = (param_1->Name).Data.ArrayNum;
      iVar10 = (param_1->Name).Data.ArrayMax;
      iVar13 = param_1->Index;
      uVar8 = *(undefined4 *)&param_1->field_0x4;
      pFVar6 = (param_1->Name).Data.AllocatorInstance.Data;
      param_1->Index = pFVar19->Index;
      *(undefined4 *)&param_1->field_0x4 = uVar7;
      (param_1->Name).Data.AllocatorInstance.Data = pFVar5;
      iVar16 = (pFVar19->Name).Data.ArrayMax;
      (param_1->Name).Data.ArrayNum = (pFVar19->Name).Data.ArrayNum;
      (param_1->Name).Data.ArrayMax = iVar16;
      pFVar19->Index = iVar13;
      *(undefined4 *)&pFVar19->field_0x4 = uVar8;
      (pFVar19->Name).Data.AllocatorInstance.Data = pFVar6;
      (pFVar19->Name).Data.ArrayNum = iVar9;
      (pFVar19->Name).Data.ArrayMax = iVar10;
      if (1 < iVar17) {
        do {
          iVar13 = iVar18 * 2;
          iVar16 = iVar13 + 1;
          if (iVar13 + 2 < iVar17) {
            lVar14 = (longlong)iVar13;
            lVar1 = lVar14 + 2;
            if (param_1[lVar1].Index == param_1[lVar14 + 1].Index) {
              if (param_1[lVar14 + 1].Name.Data.ArrayNum == 0) {
                pwVar15 = L"";
              }
              else {
                pwVar15 = (wchar_t *)param_1[lVar14 + 1].Name.Data.AllocatorInstance.Data;
              }
              if (param_1[lVar1].Name.Data.ArrayNum == 0) {
                uVar12 = FGenericPlatformStricmp::Stricmp(L"",pwVar15);
                uVar12 = uVar12 >> 0x1f;
              }
              else {
                uVar12 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)param_1[lVar1].Name.Data.AllocatorInstance.Data,
                                    pwVar15);
                uVar12 = uVar12 >> 0x1f;
              }
            }
            else {
              uVar12 = (uint)(param_1[lVar1].Index < param_1[lVar14 + 1].Index);
            }
            if (uVar12 != 0) {
              iVar16 = iVar13;
            }
            iVar16 = iVar16 + 1;
          }
          pFVar2 = param_1 + iVar16;
          pFVar3 = param_1 + iVar18;
          if (param_1[iVar18].Index == param_1[iVar16].Index) {
            if ((pFVar2->Name).Data.ArrayNum == 0) {
              pwVar15 = L"";
            }
            else {
              pwVar15 = (wchar_t *)(pFVar2->Name).Data.AllocatorInstance.Data;
            }
            if ((pFVar3->Name).Data.ArrayNum == 0) {
              iVar13 = FGenericPlatformStricmp::Stricmp(L"",pwVar15);
              bVar11 = SUB41((uint)iVar13 >> 0x1f,0);
            }
            else {
              iVar13 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)(pFVar3->Name).Data.AllocatorInstance.Data,pwVar15);
              bVar11 = SUB41((uint)iVar13 >> 0x1f,0);
            }
          }
          else {
            bVar11 = param_1[iVar18].Index < param_1[iVar16].Index;
          }
          if (bVar11 == false) break;
          iVar9 = pFVar3->Index;
          uVar8 = *(undefined4 *)&pFVar3->field_0x4;
          pFVar5 = (pFVar3->Name).Data.AllocatorInstance.Data;
          iVar10 = (pFVar3->Name).Data.ArrayNum;
          iVar18 = (pFVar3->Name).Data.ArrayMax;
          uVar7 = *(undefined4 *)&pFVar2->field_0x4;
          pFVar6 = (pFVar2->Name).Data.AllocatorInstance.Data;
          pFVar3->Index = pFVar2->Index;
          *(undefined4 *)&pFVar3->field_0x4 = uVar7;
          (pFVar3->Name).Data.AllocatorInstance.Data = pFVar6;
          iVar13 = (pFVar2->Name).Data.ArrayMax;
          (pFVar3->Name).Data.ArrayNum = (pFVar2->Name).Data.ArrayNum;
          (pFVar3->Name).Data.ArrayMax = iVar13;
          pFVar2->Index = iVar9;
          *(undefined4 *)&pFVar2->field_0x4 = uVar8;
          (pFVar2->Name).Data.AllocatorInstance.Data = pFVar5;
          (pFVar2->Name).Data.ArrayNum = iVar10;
          (pFVar2->Name).Data.ArrayMax = iVar18;
          iVar18 = iVar16;
        } while (iVar16 * 2 + 1 < iVar17);
      }
      iVar17 = iVar17 + -1;
      lVar20 = lVar20 + -1;
      pFVar19 = pFVar19 + -1;
    } while (0 < lVar20);
  }
  return;
}

// HeapSortInternal<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>'::__l2::FOrderHelper,int,FIdentityFunctor,TDereferenceWrapper<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>'::__l2::FOrderHelper,`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>'::__l2::<lambda_1>_>_> @ 14e758460

void __cdecl
AlgoImpl::
HeapSortInternal<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,int,FIdentityFunctor,TDereferenceWrapper<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::<lambda_1>_>_>
          (FOrderHelper *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>(UInterchangeStaticMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::FOrderHelper,_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>(UInterchangeStaticMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  longlong lVar1;
  FOrderHelper *pFVar2;
  FOrderHelper *pFVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  FOrderHelper *pFVar19;
  longlong lVar20;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>(UInterchangeStaticMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::FOrderHelper,_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>(UInterchangeStaticMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::<lambda_1>_>
              *)&local_res20);
  iVar17 = param_2 + -1;
  lVar20 = (longlong)iVar17;
  if (0 < iVar17) {
    pFVar19 = param_1 + lVar20;
    do {
      uVar7 = *(undefined4 *)&pFVar19->field_0x4;
      pFVar5 = (pFVar19->Name).Data.AllocatorInstance.Data;
      iVar18 = 0;
      iVar9 = (param_1->Name).Data.ArrayNum;
      iVar10 = (param_1->Name).Data.ArrayMax;
      iVar13 = param_1->Index;
      uVar8 = *(undefined4 *)&param_1->field_0x4;
      pFVar6 = (param_1->Name).Data.AllocatorInstance.Data;
      param_1->Index = pFVar19->Index;
      *(undefined4 *)&param_1->field_0x4 = uVar7;
      (param_1->Name).Data.AllocatorInstance.Data = pFVar5;
      iVar16 = (pFVar19->Name).Data.ArrayMax;
      (param_1->Name).Data.ArrayNum = (pFVar19->Name).Data.ArrayNum;
      (param_1->Name).Data.ArrayMax = iVar16;
      pFVar19->Index = iVar13;
      *(undefined4 *)&pFVar19->field_0x4 = uVar8;
      (pFVar19->Name).Data.AllocatorInstance.Data = pFVar6;
      (pFVar19->Name).Data.ArrayNum = iVar9;
      (pFVar19->Name).Data.ArrayMax = iVar10;
      if (1 < iVar17) {
        do {
          iVar13 = iVar18 * 2;
          iVar16 = iVar13 + 1;
          if (iVar13 + 2 < iVar17) {
            lVar14 = (longlong)iVar13;
            lVar1 = lVar14 + 2;
            if (param_1[lVar1].Index == param_1[lVar14 + 1].Index) {
              if (param_1[lVar14 + 1].Name.Data.ArrayNum == 0) {
                pwVar15 = L"";
              }
              else {
                pwVar15 = (wchar_t *)param_1[lVar14 + 1].Name.Data.AllocatorInstance.Data;
              }
              if (param_1[lVar1].Name.Data.ArrayNum == 0) {
                uVar12 = FGenericPlatformStricmp::Stricmp(L"",pwVar15);
                uVar12 = uVar12 >> 0x1f;
              }
              else {
                uVar12 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)param_1[lVar1].Name.Data.AllocatorInstance.Data,
                                    pwVar15);
                uVar12 = uVar12 >> 0x1f;
              }
            }
            else {
              uVar12 = (uint)(param_1[lVar1].Index < param_1[lVar14 + 1].Index);
            }
            if (uVar12 != 0) {
              iVar16 = iVar13;
            }
            iVar16 = iVar16 + 1;
          }
          pFVar2 = param_1 + iVar16;
          pFVar3 = param_1 + iVar18;
          if (param_1[iVar18].Index == param_1[iVar16].Index) {
            if ((pFVar2->Name).Data.ArrayNum == 0) {
              pwVar15 = L"";
            }
            else {
              pwVar15 = (wchar_t *)(pFVar2->Name).Data.AllocatorInstance.Data;
            }
            if ((pFVar3->Name).Data.ArrayNum == 0) {
              iVar13 = FGenericPlatformStricmp::Stricmp(L"",pwVar15);
              bVar11 = SUB41((uint)iVar13 >> 0x1f,0);
            }
            else {
              iVar13 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)(pFVar3->Name).Data.AllocatorInstance.Data,pwVar15);
              bVar11 = SUB41((uint)iVar13 >> 0x1f,0);
            }
          }
          else {
            bVar11 = param_1[iVar18].Index < param_1[iVar16].Index;
          }
          if (bVar11 == false) break;
          iVar9 = pFVar3->Index;
          uVar8 = *(undefined4 *)&pFVar3->field_0x4;
          pFVar5 = (pFVar3->Name).Data.AllocatorInstance.Data;
          iVar10 = (pFVar3->Name).Data.ArrayNum;
          iVar18 = (pFVar3->Name).Data.ArrayMax;
          uVar7 = *(undefined4 *)&pFVar2->field_0x4;
          pFVar6 = (pFVar2->Name).Data.AllocatorInstance.Data;
          pFVar3->Index = pFVar2->Index;
          *(undefined4 *)&pFVar3->field_0x4 = uVar7;
          (pFVar3->Name).Data.AllocatorInstance.Data = pFVar6;
          iVar13 = (pFVar2->Name).Data.ArrayMax;
          (pFVar3->Name).Data.ArrayNum = (pFVar2->Name).Data.ArrayNum;
          (pFVar3->Name).Data.ArrayMax = iVar13;
          pFVar2->Index = iVar9;
          *(undefined4 *)&pFVar2->field_0x4 = uVar8;
          (pFVar2->Name).Data.AllocatorInstance.Data = pFVar5;
          (pFVar2->Name).Data.ArrayNum = iVar10;
          (pFVar2->Name).Data.ArrayMax = iVar18;
          iVar18 = iVar16;
        } while (iVar16 * 2 + 1 < iVar17);
      }
      iVar17 = iVar17 + -1;
      lVar20 = lVar20 + -1;
      pFVar19 = pFVar19 + -1;
    } while (0 < lVar20);
  }
  return;
}

// HeapifyInternal<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>'::__l2::FOrderHelper,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>'::__l2::FOrderHelper,`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>'::__l2::<lambda_1>_>_>_> @ 14e758680

void __cdecl
AlgoImpl::
HeapifyInternal<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::<lambda_1>_>_>_>
          (FOrderHelper *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>(UInterchangeSkeletalMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::FOrderHelper,_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>(UInterchangeSkeletalMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::<lambda_1>_>_>
          param_4)

{
  longlong lVar1;
  FOrderHelper *pFVar2;
  FOrderHelper *pFVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar15 = iVar13 * 2 + 1;
  iVar5 = iVar15;
  iVar19 = iVar13;
  do {
    while (param_2 <= iVar15) {
LAB_14e75880e:
      if (iVar19 == 0) {
        return;
      }
      iVar13 = iVar19 + -1;
      iVar15 = iVar5 + -2;
      iVar5 = iVar15;
      iVar19 = iVar13;
    }
    iVar15 = iVar13 * 2;
    iVar18 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      lVar16 = (longlong)iVar15;
      lVar1 = lVar16 + 2;
      if (param_1[lVar1].Index == param_1[lVar16 + 1].Index) {
        if (param_1[lVar16 + 1].Name.Data.ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)param_1[lVar16 + 1].Name.Data.AllocatorInstance.Data;
        }
        if (param_1[lVar1].Name.Data.ArrayNum == 0) {
          uVar14 = FGenericPlatformStricmp::Stricmp(L"",pwVar17);
          uVar14 = uVar14 >> 0x1f;
        }
        else {
          uVar14 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)param_1[lVar1].Name.Data.AllocatorInstance.Data,pwVar17);
          uVar14 = uVar14 >> 0x1f;
        }
      }
      else {
        uVar14 = (uint)(param_1[lVar1].Index < param_1[lVar16 + 1].Index);
      }
      if (uVar14 != 0) {
        iVar18 = iVar15;
      }
      iVar18 = iVar18 + 1;
    }
    pFVar2 = param_1 + iVar18;
    pFVar3 = param_1 + iVar13;
    if (param_1[iVar13].Index == param_1[iVar18].Index) {
      if ((pFVar2->Name).Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar2->Name).Data.AllocatorInstance.Data;
      }
      if ((pFVar3->Name).Data.ArrayNum == 0) {
        iVar15 = FGenericPlatformStricmp::Stricmp(L"",pwVar17);
        bVar12 = SUB41((uint)iVar15 >> 0x1f,0);
      }
      else {
        iVar15 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar3->Name).Data.AllocatorInstance.Data,pwVar17);
        bVar12 = SUB41((uint)iVar15 >> 0x1f,0);
      }
    }
    else {
      bVar12 = param_1[iVar13].Index < param_1[iVar18].Index;
    }
    if (bVar12 == false) goto LAB_14e75880e;
    iVar13 = pFVar3->Index;
    uVar9 = *(undefined4 *)&pFVar3->field_0x4;
    pFVar6 = (pFVar3->Name).Data.AllocatorInstance.Data;
    iVar10 = (pFVar3->Name).Data.ArrayNum;
    iVar11 = (pFVar3->Name).Data.ArrayMax;
    uVar8 = *(undefined4 *)&pFVar2->field_0x4;
    pFVar7 = (pFVar2->Name).Data.AllocatorInstance.Data;
    pFVar3->Index = pFVar2->Index;
    *(undefined4 *)&pFVar3->field_0x4 = uVar8;
    (pFVar3->Name).Data.AllocatorInstance.Data = pFVar7;
    iVar15 = (pFVar2->Name).Data.ArrayMax;
    (pFVar3->Name).Data.ArrayNum = (pFVar2->Name).Data.ArrayNum;
    (pFVar3->Name).Data.ArrayMax = iVar15;
    iVar15 = iVar18 * 2 + 1;
    pFVar2->Index = iVar13;
    *(undefined4 *)&pFVar2->field_0x4 = uVar9;
    (pFVar2->Name).Data.AllocatorInstance.Data = pFVar6;
    (pFVar2->Name).Data.ArrayNum = iVar10;
    (pFVar2->Name).Data.ArrayMax = iVar11;
    iVar13 = iVar18;
  } while( true );
}

// HeapifyInternal<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>'::__l2::FOrderHelper,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>'::__l2::FOrderHelper,`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>'::__l2::<lambda_1>_>_>_> @ 14e758850

void __cdecl
AlgoImpl::
HeapifyInternal<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::<lambda_1>_>_>_>
          (FOrderHelper *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>(UInterchangeStaticMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::FOrderHelper,_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>(UInterchangeStaticMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::<lambda_1>_>_>
          param_4)

{
  longlong lVar1;
  FOrderHelper *pFVar2;
  FOrderHelper *pFVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar15 = iVar13 * 2 + 1;
  iVar5 = iVar15;
  iVar19 = iVar13;
  do {
    while (param_2 <= iVar15) {
LAB_14e7589de:
      if (iVar19 == 0) {
        return;
      }
      iVar13 = iVar19 + -1;
      iVar15 = iVar5 + -2;
      iVar5 = iVar15;
      iVar19 = iVar13;
    }
    iVar15 = iVar13 * 2;
    iVar18 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      lVar16 = (longlong)iVar15;
      lVar1 = lVar16 + 2;
      if (param_1[lVar1].Index == param_1[lVar16 + 1].Index) {
        if (param_1[lVar16 + 1].Name.Data.ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)param_1[lVar16 + 1].Name.Data.AllocatorInstance.Data;
        }
        if (param_1[lVar1].Name.Data.ArrayNum == 0) {
          uVar14 = FGenericPlatformStricmp::Stricmp(L"",pwVar17);
          uVar14 = uVar14 >> 0x1f;
        }
        else {
          uVar14 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)param_1[lVar1].Name.Data.AllocatorInstance.Data,pwVar17);
          uVar14 = uVar14 >> 0x1f;
        }
      }
      else {
        uVar14 = (uint)(param_1[lVar1].Index < param_1[lVar16 + 1].Index);
      }
      if (uVar14 != 0) {
        iVar18 = iVar15;
      }
      iVar18 = iVar18 + 1;
    }
    pFVar2 = param_1 + iVar18;
    pFVar3 = param_1 + iVar13;
    if (param_1[iVar13].Index == param_1[iVar18].Index) {
      if ((pFVar2->Name).Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar2->Name).Data.AllocatorInstance.Data;
      }
      if ((pFVar3->Name).Data.ArrayNum == 0) {
        iVar15 = FGenericPlatformStricmp::Stricmp(L"",pwVar17);
        bVar12 = SUB41((uint)iVar15 >> 0x1f,0);
      }
      else {
        iVar15 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar3->Name).Data.AllocatorInstance.Data,pwVar17);
        bVar12 = SUB41((uint)iVar15 >> 0x1f,0);
      }
    }
    else {
      bVar12 = param_1[iVar13].Index < param_1[iVar18].Index;
    }
    if (bVar12 == false) goto LAB_14e7589de;
    iVar13 = pFVar3->Index;
    uVar9 = *(undefined4 *)&pFVar3->field_0x4;
    pFVar6 = (pFVar3->Name).Data.AllocatorInstance.Data;
    iVar10 = (pFVar3->Name).Data.ArrayNum;
    iVar11 = (pFVar3->Name).Data.ArrayMax;
    uVar8 = *(undefined4 *)&pFVar2->field_0x4;
    pFVar7 = (pFVar2->Name).Data.AllocatorInstance.Data;
    pFVar3->Index = pFVar2->Index;
    *(undefined4 *)&pFVar3->field_0x4 = uVar8;
    (pFVar3->Name).Data.AllocatorInstance.Data = pFVar7;
    iVar15 = (pFVar2->Name).Data.ArrayMax;
    (pFVar3->Name).Data.ArrayNum = (pFVar2->Name).Data.ArrayNum;
    (pFVar3->Name).Data.ArrayMax = iVar15;
    iVar15 = iVar18 * 2 + 1;
    pFVar2->Index = iVar13;
    *(undefined4 *)&pFVar2->field_0x4 = uVar9;
    (pFVar2->Name).Data.AllocatorInstance.Data = pFVar6;
    (pFVar2->Name).Data.ArrayNum = iVar10;
    (pFVar2->Name).Data.ArrayMax = iVar11;
    iVar13 = iVar18;
  } while( true );
}

// InternalConstructor<UGLTFPipelineSettings> @ 14e758b70

void __cdecl InternalConstructor<UGLTFPipelineSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UGLTFPipelineSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex.Value = 0;
    this[1].CategoryName.Number = 0x80;
    this[1].SectionName.ComparisonIndex.Value = 0xffffffff;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UInterchangeGLTFPipeline> @ 14e758be0

void __cdecl InternalConstructor<UInterchangeGLTFPipeline>(FObjectInitializer *param_1)

{
  int iVar1;
  UInterchangePipelineBase *this;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  FObjectInitializer *pFVar5;
  UClass *pUVar6;
  
  this = (UInterchangePipelineBase *)param_1->Obj;
  if (this != (UInterchangePipelineBase *)0x0) {
    pFVar5 = FObjectInitializer::Get();
    UInterchangePipelineBase::UInterchangePipelineBase(this,pFVar5);
    this->_padding_ = (longlong)&___7UInterchangeGLTFPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pUVar6 = UGLTFPipelineSettings::StaticClass();
    if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar6);
    }
    pUVar2 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar6 = UGLTFPipelineSettings::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar6->_padding_)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Ret->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x1181,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this[1]._padding_ = (longlong)pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  return;
}

// InternalConstructor<UInterchangeGenericAnimationPipeline> @ 14e758cc0

void __cdecl InternalConstructor<UInterchangeGenericAnimationPipeline>(FObjectInitializer *param_1)

{
  FString *pFVar1;
  UInterchangePipelineBase *this;
  FString local_18;
  
  this = (UInterchangePipelineBase *)param_1->Obj;
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this->_padding_ = (longlong)&___7UInterchangeGenericAnimationPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar1 = &this[1].DestinationName;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x10100;
    FString::FString(&local_18,L"_mat");
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].DestinationName.Data.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,(ForAnyElementType *)pFVar1,1,&this[1].DestinationName.Data.ArrayMax);
    ConstructItems<FString,FString,int>((pFVar1->Data).AllocatorInstance.Data,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    *(undefined4 *)&this[1].ContentImportPath.Data.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[1].ContentImportPath.Data.AllocatorInstance.Data + 4) = 0;
    this[1].ContentImportPath.Data.ArrayNum = 0;
    this[1].ContentImportPath.Data.ArrayMax = 0;
    this[1].bAllowPropertyStatesEdition = false;
    this[1].bIsReimportContext = false;
    this[1].bIsShowEssentials = false;
    this[1].bFromReimportOrOverride = false;
    *(undefined4 *)&this[1].field_0x4c = 0;
    *(undefined1 *)&this[1].Results.field0_0x0 = 0;
    *(undefined8 *)&this[1].PropertiesStates = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x8 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UInterchangeGenericAssetsPipeline> @ 14e758df0

void __cdecl InternalConstructor<UInterchangeGenericAssetsPipeline>(FObjectInitializer *param_1)

{
  UInterchangePipelineBase *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName FStackX_8;
  UObject *pUStackX_10;
  
  this = (UInterchangePipelineBase *)param_1->Obj;
  if (this == (UInterchangePipelineBase *)0x0) {
    return;
  }
  pFVar2 = FObjectInitializer::Get();
  UInterchangePipelineBase::UInterchangePipelineBase(this,pFVar2);
  *(undefined4 *)&this[1]._padding_ = 0x100;
  *(undefined4 *)&this[1].PropertiesStates = 0x3f800000;
  this->_padding_ = (longlong)&___7UInterchangeGenericAssetsPipeline__6B_;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(undefined8 *)&this[1].PropertiesStates.field_0x8 = 0;
  *(undefined8 *)&this[1].PropertiesStates.field_0x10 = 0;
  *(undefined8 *)&this[1].PropertiesStates.field_0x18 = 0;
  *(undefined8 *)&this[1].PropertiesStates.field_0x20 = 0;
  *(undefined8 *)&this[1].PropertiesStates.field_0x28 = 0;
  *(undefined8 *)&this[1].PropertiesStates.field_0x30 = 0;
  *(undefined8 *)&this[1].PropertiesStates.field_0x38 = 0;
  *(undefined8 *)&this[1].PropertiesStates.field_0x40 = 0;
  *(undefined8 *)&this[1].PropertiesStates.field_0x48 = 0;
  *(undefined8 *)&this[1].CachePropertiesStates = 0;
  *(undefined8 *)&this[1].CachePropertiesStates.field_0x8 = 0;
  *(undefined8 *)&this[1].CachePropertiesStates.field_0x10 = 0;
  *(undefined8 *)&this[1].CachePropertiesStates.field_0x20 = 0;
  *(undefined8 *)&this[1].CachePropertiesStates.field_0x28 = 0;
  *(undefined8 *)&this[1].CachePropertiesStates.field_0x30 = 0;
  *(undefined8 *)&this[1].CachePropertiesStates.field_0x38 = 0;
  *(undefined8 *)&this[1].CachePropertiesStates.field_0x40 = 0;
  *(undefined8 *)&this[1].CachePropertiesStates.field_0x48 = 0;
  *(undefined8 *)&this[1].CacheContextParam = 0;
  this[1].CacheContextParam.ImportObjectType.field0_0x0.DebugPtr = (UClass *)0x0;
  this[1].CacheContextParam.ReimportAsset.field0_0x0.DebugPtr = (UObject *)0x0;
  this[1].CachePropertiesStates.field_0x18 = 0;
  FText::AsLocalizable_Advanced_LocText
            ((FText *)&this[1].CacheContextParam.BaseNodeContainer,
             L"UInterchangeGenericAssetsPipeline",L"GetConflictInfos_MaterialTitle",
             L"Material Conflicts");
  UInterchangeGenericAssetsPipeline::FSkeletonConflictData::FSkeletonConflictData
            ((FSkeletonConflictData *)&this[1].ConflictInfos.ArrayNum);
  this[2].PropertiesStates.field_0x18 = 0;
  pFVar3 = FName::FName(&FStackX_8,"MaterialPipeline");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericMaterialPipeline::StaticClass();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)&this[1].PropertiesStates.field_0x28 = pUVar5;
  pFVar3 = FName::FName(&FStackX_8,"CommonMeshesProperties");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericCommonMeshesProperties::StaticClass();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)&this[1].PropertiesStates.field_0x8 = pUVar5;
  pFVar3 = FName::FName(&FStackX_8,"CommonSkeletalMeshesAndAnimationsProperties");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)&this[1].PropertiesStates.field_0x10 = pUVar5;
  pFVar3 = FName::FName(&FStackX_8,"MeshPipeline");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericMeshPipeline::StaticClass();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)&this[1].PropertiesStates.field_0x18 = pUVar5;
  pUVar5 = *(UObject **)&this[1].PropertiesStates.field_0x8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  pUStackX_10 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&FStackX_8,(FObjectPtr)&pUStackX_10);
  *(FName *)(*(longlong *)&this[1].PropertiesStates.field_0x18 + 0x128) = FStackX_8;
  pUVar5 = *(UObject **)&this[1].PropertiesStates.field_0x10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  pUStackX_10 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&FStackX_8,(FObjectPtr)&pUStackX_10);
  *(FName *)(*(longlong *)&this[1].PropertiesStates.field_0x18 + 0x130) = FStackX_8;
  pFVar3 = FName::FName(&FStackX_8,"GroomPipeline");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericGroomPipeline::StaticClass();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)&this[1].PropertiesStates.field_0x30 = pUVar5;
  pFVar3 = FName::FName(&FStackX_8,"AnimationPipeline");
  FVar1 = *pFVar3;
  pUVar4 = UInterchangeGenericAnimationPipeline::StaticClass();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)&this[1].PropertiesStates.field_0x20 = pUVar5;
  pUVar5 = *(UObject **)&this[1].PropertiesStates.field_0x10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  pUStackX_10 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&FStackX_8,(FObjectPtr)&pUStackX_10);
  *(FName *)(*(longlong *)&this[1].PropertiesStates.field_0x20 + 0x128) = FStackX_8;
  pUVar5 = *(UObject **)&this[1].PropertiesStates.field_0x8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  pUStackX_10 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&FStackX_8,(FObjectPtr)&pUStackX_10);
  *(FName *)(*(longlong *)&this[1].PropertiesStates.field_0x20 + 0x130) = FStackX_8;
  return;
}

// InternalConstructor<UInterchangeGenericAudioPipeline> @ 14e758e10

void __cdecl InternalConstructor<UInterchangeGenericAudioPipeline>(FObjectInitializer *param_1)

{
  UInterchangePipelineBase *this;
  
  this = (UInterchangePipelineBase *)param_1->Obj;
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UInterchangeGenericAudioPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].DestinationName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].DestinationName.Data.ArrayNum = 0;
    this[1].DestinationName.Data.ArrayMax = 0;
    this[1].ContentImportPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ContentImportPath.Data.ArrayNum = 0;
    this[1].ContentImportPath.Data.ArrayMax = 0;
    this[1].bAllowPropertyStatesEdition = false;
    this[1].bIsReimportContext = false;
    this[1].bIsShowEssentials = false;
    this[1].bFromReimportOrOverride = false;
    *(undefined4 *)&this[1].field_0x4c = 0;
  }
  return;
}

// InternalConstructor<UInterchangeGenericCommonMeshesProperties> @ 14e758e90

void __cdecl
InternalConstructor<UInterchangeGenericCommonMeshesProperties>(FObjectInitializer *param_1)

{
  UInterchangePipelineBase *this;
  
  this = (UInterchangePipelineBase *)param_1->Obj;
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x1010000;
    this->_padding_ = (longlong)&___7UInterchangeGenericCommonMeshesProperties__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x1010101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties> @ 14e758ef0

void __cdecl
InternalConstructor<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>
          (FObjectInitializer *param_1)

{
  UInterchangePipelineBase *this;
  
  this = (UInterchangePipelineBase *)param_1->Obj;
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&___7UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x10001;
  }
  return;
}

// InternalConstructor<UInterchangeGenericGroomPipeline> @ 14e758f40

void __cdecl InternalConstructor<UInterchangeGenericGroomPipeline>(FObjectInitializer *param_1)

{
  UInterchangePipelineBase *this;
  
  this = (UInterchangePipelineBase *)param_1->Obj;
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x100;
    this->_padding_ = (longlong)&___7UInterchangeGenericGroomPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FHairGroupsInterpolation::FHairGroupsInterpolation
              ((FHairGroupsInterpolation *)((longlong)&this[1]._padding_ + 4));
    this[1].ContentImportPath.Data.ArrayNum = 0;
    this[1].ContentImportPath.Data.ArrayMax = 0;
    this[1].bAllowPropertyStatesEdition = false;
    this[1].bIsReimportContext = false;
    this[1].bIsShowEssentials = false;
    this[1].bFromReimportOrOverride = false;
    *(undefined4 *)&this[1].field_0x4c = 0;
    this[1].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    *(undefined8 *)&this[1].PropertiesStates = 0;
    *(undefined4 *)&this[1].PropertiesStates.field_0xc = 0;
    *(undefined1 *)((longlong)&this[1].ContentImportPath.Data.AllocatorInstance.Data + 4) = 1;
    *(undefined2 *)&this[1].PropertiesStates.field_0x8 = 3;
    *(undefined4 *)&this[1].PropertiesStates.field_0x10 = 1;
  }
  return;
}

// InternalConstructor<UInterchangeGenericLevelPipeline> @ 14e758fe0

void __cdecl InternalConstructor<UInterchangeGenericLevelPipeline>(FObjectInitializer *param_1)

{
  UInterchangePipelineBase *this;
  
  this = (UInterchangePipelineBase *)param_1->Obj;
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x1000000;
    this->_padding_ = (longlong)&___7UInterchangeGenericLevelPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].DestinationName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].DestinationName.Data.ArrayNum = 0;
    this[1].DestinationName.Data.ArrayMax = 0;
  }
  return;
}

// InternalConstructor<UInterchangeGenericMaterialPipeline> @ 14e759050

void __cdecl InternalConstructor<UInterchangeGenericMaterialPipeline>(FObjectInitializer *param_1)

{
  UInterchangePipelineBase *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UInterchangeResultsContainer *pUVar5;
  UObject *pUVar6;
  FName local_res8;
  
  this = (UInterchangePipelineBase *)param_1->Obj;
  if (this != (UInterchangePipelineBase *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UInterchangePipelineBase::UInterchangePipelineBase(this,pFVar2);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UInterchangeGenericMaterialPipeline__6B_;
    *(undefined4 *)&this[1].PropertiesStates.field_0xc = 0x3f000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1].DestinationName.Data.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[1].DestinationName.Data.AllocatorInstance.Data + 2) = 0;
    this[1].DestinationName.Data.ArrayNum = 0;
    this[1].DestinationName.Data.ArrayMax = 0;
    this[1].ContentImportPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ContentImportPath.Data.ArrayNum = 0;
    this[1].ContentImportPath.Data.ArrayMax = 0;
    this[1].bAllowPropertyStatesEdition = false;
    this[1].bIsReimportContext = false;
    this[1].bIsShowEssentials = false;
    this[1].bFromReimportOrOverride = false;
    *(undefined4 *)&this[1].field_0x4c = 0;
    this[1].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    *(undefined8 *)&this[1].PropertiesStates = 0;
    this[1].PropertiesStates.field_0x8 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x10 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x18 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x20 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x30 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x38 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x40 = 0;
    this[1].PropertiesStates.field_0x28 = 1;
    pFVar3 = FName::FName(&local_res8,"TexturePipeline");
    FVar1 = *pFVar3;
    pUVar4 = UInterchangeGenericTexturePipeline::StaticClass();
    pUVar5 = (UInterchangeResultsContainer *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UInterchangeResultsContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    this[1].Results.field0_0x0.DebugPtr = pUVar5;
    pFVar3 = FName::FName(&local_res8,"SparseVolumeTexturePipeline");
    FVar1 = *pFVar3;
    pUVar4 = UInterchangeSparseVolumeTexturePipeline::StaticClass();
    pUVar6 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    *(UObject **)&this[1].PropertiesStates = pUVar6;
  }
  return;
}

// InternalConstructor<UInterchangeGenericMeshPipeline> @ 14e7591e0

void __cdecl InternalConstructor<UInterchangeGenericMeshPipeline>(FObjectInitializer *param_1)

{
  if ((UInterchangeGenericMeshPipeline *)param_1->Obj != (UInterchangeGenericMeshPipeline *)0x0) {
    UInterchangeGenericMeshPipeline::UInterchangeGenericMeshPipeline
              ((UInterchangeGenericMeshPipeline *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UInterchangeGenericTexturePipeline> @ 14e759200

void __cdecl InternalConstructor<UInterchangeGenericTexturePipeline>(FObjectInitializer *param_1)

{
  UInterchangePipelineBase *this;
  
  this = (UInterchangePipelineBase *)param_1->Obj;
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UInterchangeGenericTexturePipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].DestinationName.Data.AllocatorInstance.Data = 0;
    this[1].DestinationName.Data.ArrayNum = 0;
    this[1].DestinationName.Data.ArrayMax = 0;
    this[1].ContentImportPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ContentImportPath.Data.ArrayNum = 0;
    this[1].ContentImportPath.Data.ArrayMax = 0;
    this[1].bAllowPropertyStatesEdition = false;
    this[1].bIsReimportContext = false;
    this[1].bIsShowEssentials = false;
    this[1].bFromReimportOrOverride = false;
    *(undefined4 *)&this[1].field_0x4c = 0;
    this[1].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    *(undefined8 *)&this[1].PropertiesStates = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UInterchangeMaterialXPipeline> @ 14e759290

void __cdecl InternalConstructor<UInterchangeMaterialXPipeline>(FObjectInitializer *param_1)

{
  FTopLevelAssetPath *this;
  ulonglong uVar1;
  UInterchangePipelineBase *this_00;
  UObject *pUVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FObjectInitializer *pFVar11;
  UClass *pUVar12;
  byte bVar13;
  int iVar14;
  char *pcVar15;
  undefined1 *puVar16;
  wchar_t *pwVar17;
  uint uVar18;
  longlong *plVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  int iVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
  TStack_288;
  undefined1 uStack_286;
  undefined1 uStack_285;
  undefined1 uStack_284;
  undefined1 uStack_283;
  undefined1 uStack_282;
  undefined1 uStack_281;
  undefined1 auStack_280 [8];
  longlong *plStack_278;
  undefined8 uStack_270;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_268;
  uint uStack_260;
  int iStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  ulonglong uStack_248;
  FString FStack_240;
  FString FStack_230;
  FString FStack_220;
  FString FStack_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  int iStack_1c0;
  int iStack_1bc;
  undefined1 auStack_1b8 [4];
  int iStack_1b4;
  int iStack_1b0;
  undefined1 auStack_1ac [4];
  int iStack_1a8;
  undefined1 auStack_1a4 [12];
  longlong *plStack_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  longlong *plStack_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  longlong *plStack_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FString *pFStack_d8;
  undefined1 *puStack_d0;
  FString *pFStack_c8;
  undefined1 *puStack_c0;
  FString *pFStack_b8;
  undefined1 *puStack_b0;
  undefined4 uStack_8c;
  undefined4 uStack_6c;
  undefined4 uStack_4c;
  
  this_00 = (UInterchangePipelineBase *)param_1->Obj;
  if (this_00 == (UInterchangePipelineBase *)0x0) {
    return;
  }
  pFVar11 = FObjectInitializer::Get();
  UInterchangePipelineBase::UInterchangePipelineBase(this_00,pFVar11);
  this_00->_padding_ = (longlong)&___7UInterchangeMaterialXPipeline__6B_;
  pUVar12 = UMaterialXPipelineSettings::StaticClass();
  if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar12);
  }
  pUVar2 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar12 = UMaterialXPipelineSettings::StaticClass();
  iVar14 = (int)pUVar12->_padding_;
  if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar14) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
       &pUVar12->_padding_)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00[1]._padding_ = (longlong)pUVar2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(undefined1 *)&this_00[1]._padding_ = 1;
  lVar3 = this_00[1]._padding_;
  plVar19 = (longlong *)(lVar3 + 0x38);
  TStack_1e0._padding_._0_4_ = 0;
  uStack_248 = 1;
  TStack_1e0._padding_._4_4_ = 1;
  TStack_1e0.UnvisitedBitMask = 0xffffffff;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar3 + 0x48);
  TStack_1e0.CurrentBitIndex = 0;
  TStack_1e0.BaseBitIndex = 0;
  TStack_1e0.Array = pTVar20;
  if (*(int *)(lVar3 + 0x60) != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
  }
  uVar10 = *(uint *)(lVar3 + 0x60);
  uStack_270 = CONCAT44(TStack_1e0._padding_._4_4_,(undefined4)TStack_1e0._padding_);
  bVar13 = (byte)uVar10 & 0x1f;
  iStack_250 = *(int *)(lVar3 + 0x40) - *(int *)(lVar3 + 0x6c);
  iStack_25c = TStack_1e0.CurrentBitIndex;
  uStack_260 = TStack_1e0.UnvisitedBitMask;
  uStack_254 = TStack_1e0._28_4_;
  iStack_258 = TStack_1e0.BaseBitIndex;
  TStack_200._padding_._0_4_ = (int)uVar10 >> 5;
  TStack_200._padding_._4_4_ = 1 << bVar13;
  TStack_200.UnvisitedBitMask = -1 << bVar13;
  pTStack_268 = TStack_1e0.Array;
  TStack_200.BaseBitIndex = uVar10 & 0xffffffe0;
  uStack_170 = CONCAT44(uStack_24c,iStack_250);
  TStack_190.Array = TStack_1e0.Array;
  plStack_278 = plVar19;
  TStack_200.Array = pTVar20;
  TStack_200.CurrentBitIndex = uVar10;
  plStack_198 = plVar19;
  TStack_190._padding_ = uStack_270;
  TStack_190._16_8_ = _uStack_260;
  TStack_190._24_8_ = _iStack_258;
  if (((int)uVar10 < 0) || (uVar9 = *(uint *)(lVar3 + 0x60), (int)uVar9 < (int)uVar10)) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = *(uint *)(lVar3 + 0x60);
  }
  if (uVar10 != uVar9) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
    pTVar20 = TStack_200.Array;
    uVar10 = TStack_200.CurrentBitIndex;
  }
  while( true ) {
    plVar7 = plStack_198;
    if ((int)plStack_198[1] - *(int *)((longlong)plStack_198 + 0x34) != (int)uStack_170) {
      auStackX_10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXShaders,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    if (((TStack_190.CurrentBitIndex == uVar10) && (TStack_190.Array == pTVar20)) &&
       (plVar7 == plVar19)) break;
    TStack_288.TypeIndex = '\0';
    pcVar15 = (char *)((longlong)TStack_190.CurrentBitIndex * 0x30 + *plVar7);
    this = (FTopLevelAssetPath *)(pcVar15 + 8);
    TStack_288._padding_ = *pcVar15;
    if (this->PackageName == (FName)0x0) {
      FStack_210.Data.ArrayMax = 0;
      FStack_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_210.Data.ArrayNum = 0;
    }
    else {
      FTopLevelAssetPath::ToString(this,&FStack_210);
    }
    iVar14 = FStack_210.Data.ArrayNum + -1;
    FVar6.Data = FStack_210.Data.AllocatorInstance.Data;
    if (FStack_210.Data.ArrayNum == 0) {
      iVar14 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,(wchar_t *)FVar6.Data);
    TMapBase<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>_>
    ::
    FindOrAddImpl<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>
              (&UInterchangeMaterialXPipeline::PathToEnumMapping,uVar9,&FStack_210,&TStack_288);
    if (FStack_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_210.Data.AllocatorInstance.Data);
    }
    TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
  }
  lVar3 = this_00[1]._padding_;
  iVar21 = 0;
  plVar19 = (longlong *)(lVar3 + 0x88);
  iVar14 = *(int *)(lVar3 + 0xb0);
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar3 + 0x98);
  iStack_258 = 0;
  uVar10 = (uint)uStack_248;
  iStack_25c = 0;
  if (iVar14 != 0) {
    pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0xa8);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0xa8) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = pTVar20;
    }
    uVar9 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
    while (uVar9 == 0) {
      iVar21 = iVar21 + 1;
      iStack_258 = iStack_258 + 0x20;
      iStack_25c = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14e76800b;
      uVar9 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
    }
    uVar10 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_1c0 = (int)lVar4;
    iStack_25c = iStack_1c0 + -1 + iStack_258;
    if (iVar14 < iStack_25c) {
      iStack_25c = iVar14;
    }
  }
LAB_14e76800b:
  uVar9 = *(uint *)(lVar3 + 0xb0);
  uVar18 = uVar9 & 0xffffffe0;
  iStack_250 = *(int *)(lVar3 + 0x90) - *(int *)(lVar3 + 0xbc);
  uStack_270 = CONCAT44(uVar10,iVar21);
  uStack_260 = 0xffffffff;
  uStack_254 = uStack_8c;
  TStack_160._padding_ = uStack_270;
  iVar21 = (int)uVar9 >> 5;
  uStack_140 = CONCAT44(uStack_24c,iStack_250);
  TStack_160.UnvisitedBitMask = 0xffffffff;
  TStack_160.CurrentBitIndex = iStack_25c;
  TStack_160.BaseBitIndex = iStack_258;
  TStack_160._28_4_ = uStack_8c;
  plStack_278 = plVar19;
  pTStack_268 = pTVar20;
  plStack_168 = plVar19;
  TStack_160.Array = pTVar20;
  if ((((int)uVar9 < 0) || (iVar14 < (int)uVar9)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = *(uint *)(lVar3 + 0xb0);
  if (uVar9 != uVar10) {
    pTVar22 = pTVar20;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0xa8) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0xa8);
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) &
            *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
    while (uVar9 == 0) {
      iVar21 = iVar21 + 1;
      uVar18 = uVar18 + 0x20;
      uVar9 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar21)
      goto LAB_14e768110;
      uVar9 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iStack_1bc = (int)lVar3;
    uVar9 = iStack_1bc + -1 + uVar18;
    if ((int)uVar10 < (int)uVar9) {
      uVar9 = uVar10;
    }
  }
LAB_14e768110:
  while( true ) {
    plVar7 = plStack_168;
    if ((int)plStack_168[1] - *(int *)((longlong)plStack_168 + 0x34) != (int)uStack_140) {
      auStackX_18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXBSDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
    }
    if (((TStack_160.CurrentBitIndex == uVar9) && (TStack_160.Array == pTVar20)) &&
       (plVar7 == plVar19)) break;
    uStack_285 = 1;
    puVar16 = (undefined1 *)((longlong)TStack_160.CurrentBitIndex * 0x30 + *plVar7);
    uStack_286 = *puVar16;
    if (*(longlong *)(puVar16 + 8) == 0) {
      FStack_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_240.Data.ArrayNum = 0;
      FStack_240.Data.ArrayMax = 0;
      iVar14 = 0;
    }
    else {
      FTopLevelAssetPath::ToString((FTopLevelAssetPath *)(puVar16 + 8),&FStack_240);
      iVar14 = FStack_240.Data.ArrayNum;
    }
    pwVar17 = L"";
    if (iVar14 == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = iVar14 + -1;
      pwVar17 = (wchar_t *)FStack_240.Data.AllocatorInstance.Data;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar17);
    iVar14 = TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       (&UInterchangeMaterialXPipeline::PathToEnumMapping,uVar10,&FStack_240);
    if ((iVar14 == -1) ||
       ((longlong)iVar14 * 0x20 + UInterchangeMaterialXPipeline::PathToEnumMapping._0_8_ == 0)) {
      pFStack_d8 = &FStack_240;
      puStack_d0 = &uStack_286;
      TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
      ::
      EmplaceByHash<TPairInitializer<FString_&&,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_&&>_>
                (&UInterchangeMaterialXPipeline::PathToEnumMapping,(uint)auStack_1b8,
                 (TPairInitializer<FString_&&,TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>_&&>
                  *)(ulonglong)uVar10,(bool *)&pFStack_d8);
    }
    if (FStack_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_240.Data.AllocatorInstance.Data);
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  }
  iVar21 = 0;
  iStack_258 = 0;
  lVar3 = this_00[1]._padding_;
  plVar19 = (longlong *)(lVar3 + 0xd8);
  iVar14 = *(int *)(lVar3 + 0x100);
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar3 + 0xe8);
  uVar10 = (uint)uStack_248;
  iStack_25c = 0;
  if (iVar14 != 0) {
    pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0xf8);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0xf8) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = pTVar20;
    }
    uVar9 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
    while (uVar9 == 0) {
      iVar21 = iVar21 + 1;
      iStack_258 = iStack_258 + 0x20;
      iStack_25c = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14e7682bd;
      uVar9 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
    }
    uVar10 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_1b4 = (int)lVar4;
    iStack_25c = iStack_258 + -1 + iStack_1b4;
    if (iVar14 < iStack_25c) {
      iStack_25c = iVar14;
    }
  }
LAB_14e7682bd:
  uVar9 = *(uint *)(lVar3 + 0x100);
  uVar18 = uVar9 & 0xffffffe0;
  iStack_250 = *(int *)(lVar3 + 0xe0) - *(int *)(lVar3 + 0x10c);
  uStack_270 = CONCAT44(uVar10,iVar21);
  uStack_260 = 0xffffffff;
  uStack_254 = uStack_6c;
  TStack_130._padding_ = uStack_270;
  iVar21 = (int)uVar9 >> 5;
  uStack_110 = CONCAT44(uStack_24c,iStack_250);
  TStack_130.UnvisitedBitMask = 0xffffffff;
  TStack_130.CurrentBitIndex = iStack_25c;
  TStack_130.BaseBitIndex = iStack_258;
  TStack_130._28_4_ = uStack_6c;
  plStack_278 = plVar19;
  pTStack_268 = pTVar20;
  plStack_138 = plVar19;
  TStack_130.Array = pTVar20;
  if ((((int)uVar9 < 0) || (iVar14 < (int)uVar9)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = *(uint *)(lVar3 + 0x100);
  if (uVar9 != uVar10) {
    pTVar22 = pTVar20;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0xf8) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0xf8);
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) &
            *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
    while (uVar9 == 0) {
      iVar21 = iVar21 + 1;
      uVar18 = uVar18 + 0x20;
      uVar9 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar21)
      goto LAB_14e7683d0;
      uVar9 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iStack_1b0 = (int)lVar3;
    uVar9 = iStack_1b0 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar9) {
      uVar9 = uVar10;
    }
  }
LAB_14e7683d0:
  while( true ) {
    plVar7 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStackX_20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXEDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_20);
    }
    if (((TStack_130.CurrentBitIndex == uVar9) && (TStack_130.Array == pTVar20)) &&
       (plVar7 == plVar19)) break;
    uStack_283 = 2;
    puVar16 = (undefined1 *)((longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar7);
    uStack_284 = *puVar16;
    if (*(longlong *)(puVar16 + 8) == 0) {
      FStack_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_230.Data.ArrayNum = 0;
      FStack_230.Data.ArrayMax = 0;
      iVar14 = 0;
    }
    else {
      FTopLevelAssetPath::ToString((FTopLevelAssetPath *)(puVar16 + 8),&FStack_230);
      iVar14 = FStack_230.Data.ArrayNum;
    }
    pwVar17 = L"";
    if (iVar14 == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = iVar14 + -1;
      pwVar17 = (wchar_t *)FStack_230.Data.AllocatorInstance.Data;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar17);
    iVar14 = TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       (&UInterchangeMaterialXPipeline::PathToEnumMapping,uVar10,&FStack_230);
    if ((iVar14 == -1) ||
       ((longlong)iVar14 * 0x20 + UInterchangeMaterialXPipeline::PathToEnumMapping._0_8_ == 0)) {
      pFStack_c8 = &FStack_230;
      puStack_c0 = &uStack_284;
      TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
      ::
      EmplaceByHash<TPairInitializer<FString_&&,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_&&>_>
                (&UInterchangeMaterialXPipeline::PathToEnumMapping,(uint)auStack_1ac,
                 (TPairInitializer<FString_&&,TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>_&&>
                  *)(ulonglong)uVar10,(bool *)&pFStack_c8);
    }
    if (FStack_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_230.Data.AllocatorInstance.Data);
    }
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  iVar21 = 0;
  iStack_258 = 0;
  lVar3 = this_00[1]._padding_;
  plVar19 = (longlong *)(lVar3 + 0x128);
  iVar14 = *(int *)(lVar3 + 0x150);
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar3 + 0x138);
  iStack_25c = 0;
  if (iVar14 != 0) {
    pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0x148);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0x148) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = pTVar20;
    }
    uVar10 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      iVar21 = iVar21 + 1;
      iStack_258 = iStack_258 + 0x20;
      iStack_25c = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14e76858e;
      uVar10 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
    }
    uStack_248 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uStack_248 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_1a8 = (int)lVar4;
    iStack_25c = iStack_258 + -1 + iStack_1a8;
    if (iVar14 < iStack_25c) {
      iStack_25c = iVar14;
    }
  }
LAB_14e76858e:
  uVar10 = *(uint *)(lVar3 + 0x150);
  uVar9 = uVar10 & 0xffffffe0;
  iStack_250 = *(int *)(lVar3 + 0x130) - *(int *)(lVar3 + 0x15c);
  uStack_260 = 0xffffffff;
  uStack_270 = CONCAT44((int)uStack_248,iVar21);
  uStack_254 = uStack_4c;
  iVar21 = (int)uVar10 >> 5;
  uStack_e0 = CONCAT44(uStack_24c,iStack_250);
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_25c;
  TStack_100.BaseBitIndex = iStack_258;
  TStack_100._28_4_ = uStack_4c;
  plStack_278 = plVar19;
  pTStack_268 = pTVar20;
  plStack_108 = plVar19;
  TStack_100._padding_ = uStack_270;
  TStack_100.Array = pTVar20;
  if ((((int)uVar10 < 0) || (iVar14 < (int)uVar10)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar18 = *(uint *)(lVar3 + 0x150);
  if (uVar10 != uVar18) {
    pTVar22 = pTVar20;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0x148) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0x148);
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
    while (uVar10 == 0) {
      iVar21 = iVar21 + 1;
      uVar9 = uVar9 + 0x20;
      uVar10 = uVar18;
      if ((int)(((int)(uVar18 - 1) >> 0x1f & 0x1fU) + (uVar18 - 1)) >> 5 < iVar21)
      goto LAB_14e7686a0;
      uVar10 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar10 = (uVar9 - 1) + (int)lVar3;
    if ((int)uVar18 < (int)uVar10) {
      uVar10 = uVar18;
    }
  }
LAB_14e7686a0:
  while( true ) {
    plVar7 = plStack_108;
    if ((int)plStack_108[1] - *(int *)((longlong)plStack_108 + 0x34) != (int)uStack_e0) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXVDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_280);
    }
    if (((TStack_100.CurrentBitIndex == uVar10) && (TStack_100.Array == pTVar20)) &&
       (plVar7 == plVar19)) break;
    uStack_281 = 3;
    puVar16 = (undefined1 *)((longlong)TStack_100.CurrentBitIndex * 0x30 + *plVar7);
    uStack_282 = *puVar16;
    if (*(longlong *)(puVar16 + 8) == 0) {
      FStack_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_220.Data.ArrayNum = 0;
      FStack_220.Data.ArrayMax = 0;
      iVar14 = 0;
    }
    else {
      FTopLevelAssetPath::ToString((FTopLevelAssetPath *)(puVar16 + 8),&FStack_220);
      iVar14 = FStack_220.Data.ArrayNum;
    }
    pwVar17 = L"";
    if (iVar14 == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = iVar14 + -1;
      pwVar17 = (wchar_t *)FStack_220.Data.AllocatorInstance.Data;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar17);
    iVar14 = TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       (&UInterchangeMaterialXPipeline::PathToEnumMapping,uVar9,&FStack_220);
    if ((iVar14 == -1) ||
       ((longlong)iVar14 * 0x20 + UInterchangeMaterialXPipeline::PathToEnumMapping._0_8_ == 0)) {
      pFStack_b8 = &FStack_220;
      puStack_b0 = &uStack_282;
      TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
      ::
      EmplaceByHash<TPairInitializer<FString_&&,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_&&>_>
                (&UInterchangeMaterialXPipeline::PathToEnumMapping,(uint)auStack_1a4,
                 (TPairInitializer<FString_&&,TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>_&&>
                  *)(ulonglong)uVar9,(bool *)&pFStack_b8);
    }
    if (FStack_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_220.Data.AllocatorInstance.Data);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  return;
}

// InternalConstructor<UInterchangePipelineMeshesUtilities> @ 14e7592b0

void __cdecl InternalConstructor<UInterchangePipelineMeshesUtilities>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInterchangePipelineMeshesUtilities__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x4 = 0x80;
    *(undefined4 *)&this[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[4].field_0xc = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined4 *)(this + 6) = 0;
    *(undefined4 *)&this[6].field_0x4 = 0x80;
    *(undefined4 *)&this[6].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[6].field_0xc = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined4 *)&this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)&this[8].field_0x4 = 0x80;
    *(undefined4 *)&this[8].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[8].field_0xc = 0;
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined4 *)&this[8].field_0x20 = 0;
    *(undefined4 *)&this[9].field_0x8 = 0x1000000;
    *(undefined2 *)&this[9].field_0xc = 1;
    this[9].field_0xe = 0;
  }
  return;
}

// InternalConstructor<UInterchangeSparseVolumeTexturePipeline> @ 14e7593f0

void __cdecl
InternalConstructor<UInterchangeSparseVolumeTexturePipeline>(FObjectInitializer *param_1)

{
  UInterchangePipelineBase *this;
  
  this = (UInterchangePipelineBase *)param_1->Obj;
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UInterchangeSparseVolumeTexturePipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].DestinationName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  return;
}

// InternalConstructor<UMaterialXPipelineSettings> @ 14e759450

void __cdecl InternalConstructor<UMaterialXPipelineSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UDeveloperSettings::UDeveloperSettings(this,pFVar1);
    this->_padding_ = (longlong)&___7UMaterialXPipelineSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex.Value = 0;
    this[1].CategoryName.Number = 0x80;
    this[1].SectionName.ComparisonIndex.Value = 0xffffffff;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    this[3].CategoryName.ComparisonIndex.Value = 0;
    this[3].SectionName.ComparisonIndex = 0;
    this[3].SectionName.Number = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    this[4].CategoryName.ComparisonIndex.Value = 0xffffffff;
    this[4].CategoryName.Number = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5].SectionName.ComparisonIndex = 0;
    this[5].SectionName.Number = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[6]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UGLTFPipelineSettings> @ 14e759580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGLTFPipelineSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGLTFPipelineSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UGLTFPipelineSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex.Value = 0;
    this[1].CategoryName.Number = 0x80;
    this[1].SectionName.ComparisonIndex.Value = 0xffffffff;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeGLTFPipeline> @ 14e759660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInterchangeGLTFPipeline>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeGLTFPipeline::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    this->_padding_ = (longlong)&___7UInterchangeGLTFPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeGenericAnimationPipeline> @ 14e759720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeGenericAnimationPipeline>(FVTableHelper *param_1)

{
  FString *pFVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UInterchangePipelineBase *this;
  UInterchangePipelineBase *pUVar4;
  FString local_18;
  
  pUVar4 = (UInterchangePipelineBase *)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UInterchangeGenericAnimationPipeline::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UInterchangeGenericAnimationPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar1 = &this[1].DestinationName;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x10100;
    FString::FString(&local_18,L"_mat");
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].DestinationName.Data.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,(ForAnyElementType *)pFVar1,1,&this[1].DestinationName.Data.ArrayMax);
    ConstructItems<FString,FString,int>((pFVar1->Data).AllocatorInstance.Data,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    *(undefined4 *)&this[1].ContentImportPath.Data.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[1].ContentImportPath.Data.AllocatorInstance.Data + 4) = 0;
    this[1].ContentImportPath.Data.ArrayNum = 0;
    this[1].ContentImportPath.Data.ArrayMax = 0;
    this[1].bAllowPropertyStatesEdition = false;
    this[1].bIsReimportContext = false;
    this[1].bIsShowEssentials = false;
    this[1].bFromReimportOrOverride = false;
    *(undefined4 *)&this[1].field_0x4c = 0;
    *(undefined1 *)&this[1].Results.field0_0x0 = 0;
    *(undefined8 *)&this[1].PropertiesStates = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x8 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x10 = 0;
    pUVar4 = this;
  }
  return (UObject *)pUVar4;
}

// InternalVTableHelperCtorCaller<UInterchangeGenericAssetsPipeline> @ 14e7598b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeGenericAssetsPipeline>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeGenericAssetsPipeline::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x100;
    this->_padding_ = (longlong)&___7UInterchangeGenericAssetsPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x8 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x10 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x18 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x20 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x28 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x30 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x38 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x40 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x48 = 0;
    *(undefined8 *)&this[1].CachePropertiesStates = 0;
    *(undefined8 *)&this[1].CachePropertiesStates.field_0x8 = 0;
    *(undefined8 *)&this[1].CachePropertiesStates.field_0x10 = 0;
    *(undefined8 *)&this[1].CachePropertiesStates.field_0x20 = 0;
    *(undefined8 *)&this[1].CachePropertiesStates.field_0x28 = 0;
    *(undefined8 *)&this[1].CachePropertiesStates.field_0x30 = 0;
    *(undefined8 *)&this[1].CachePropertiesStates.field_0x38 = 0;
    *(undefined8 *)&this[1].CachePropertiesStates.field_0x40 = 0;
    *(undefined8 *)&this[1].CachePropertiesStates.field_0x48 = 0;
    *(undefined8 *)&this[1].CacheContextParam = 0;
    this[1].CacheContextParam.ImportObjectType.field0_0x0.DebugPtr = (UClass *)0x0;
    this[1].CacheContextParam.ReimportAsset.field0_0x0.DebugPtr = (UObject *)0x0;
    *(undefined4 *)&this[1].PropertiesStates = 0x3f800000;
    this[1].CachePropertiesStates.field_0x18 = 0;
    FText::AsLocalizable_Advanced_LocText
              ((FText *)&this[1].CacheContextParam.BaseNodeContainer,
               L"UInterchangeGenericAssetsPipeline",L"GetConflictInfos_MaterialTitle",
               L"Material Conflicts");
    UInterchangeGenericAssetsPipeline::FSkeletonConflictData::FSkeletonConflictData
              ((FSkeletonConflictData *)&this[1].ConflictInfos.ArrayNum);
    this[2].PropertiesStates.field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeGenericAudioPipeline> @ 14e759a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeGenericAudioPipeline>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeGenericAudioPipeline::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UInterchangeGenericAudioPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].DestinationName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].DestinationName.Data.ArrayNum = 0;
    this[1].DestinationName.Data.ArrayMax = 0;
    this[1].ContentImportPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ContentImportPath.Data.ArrayNum = 0;
    this[1].ContentImportPath.Data.ArrayMax = 0;
    this[1].bAllowPropertyStatesEdition = false;
    this[1].bIsReimportContext = false;
    this[1].bIsShowEssentials = false;
    this[1].bFromReimportOrOverride = false;
    *(undefined4 *)&this[1].field_0x4c = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeGenericCommonMeshesProperties> @ 14e759b50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeGenericCommonMeshesProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeGenericCommonMeshesProperties::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x1010000;
    this->_padding_ = (longlong)&___7UInterchangeGenericCommonMeshesProperties__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x1010101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties> @ 14e759c20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&___7UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x10001;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeGenericGroomPipeline> @ 14e759cf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeGenericGroomPipeline>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeGenericGroomPipeline::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x100;
    this->_padding_ = (longlong)&___7UInterchangeGenericGroomPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FHairGroupsInterpolation::FHairGroupsInterpolation
              ((FHairGroupsInterpolation *)((longlong)&this[1]._padding_ + 4));
    *(undefined1 *)((longlong)&this[1].ContentImportPath.Data.AllocatorInstance.Data + 4) = 1;
    this[1].ContentImportPath.Data.ArrayNum = 0;
    this[1].ContentImportPath.Data.ArrayMax = 0;
    this[1].bAllowPropertyStatesEdition = false;
    this[1].bIsReimportContext = false;
    this[1].bIsShowEssentials = false;
    this[1].bFromReimportOrOverride = false;
    *(undefined4 *)&this[1].field_0x4c = 0;
    this[1].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    *(undefined8 *)&this[1].PropertiesStates = 0;
    *(undefined2 *)&this[1].PropertiesStates.field_0x8 = 3;
    *(undefined4 *)&this[1].PropertiesStates.field_0xc = 0;
    *(undefined4 *)&this[1].PropertiesStates.field_0x10 = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeGenericLevelPipeline> @ 14e759e00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeGenericLevelPipeline>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeGenericLevelPipeline::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UInterchangeGenericLevelPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].DestinationName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x1000000;
    this[1]._padding_ = 0;
    this[1].DestinationName.Data.ArrayNum = 0;
    this[1].DestinationName.Data.ArrayMax = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeGenericMaterialPipeline> @ 14e759ef0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeGenericMaterialPipeline>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeGenericMaterialPipeline::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UInterchangeGenericMaterialPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].DestinationName.Data.ArrayNum = 0;
    this[1].DestinationName.Data.ArrayMax = 0;
    this[1].ContentImportPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ContentImportPath.Data.ArrayNum = 0;
    this[1].ContentImportPath.Data.ArrayMax = 0;
    this[1].bAllowPropertyStatesEdition = false;
    this[1].bIsReimportContext = false;
    this[1].bIsShowEssentials = false;
    this[1].bFromReimportOrOverride = false;
    *(undefined4 *)&this[1].field_0x4c = 0;
    this[1].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    *(undefined8 *)&this[1].PropertiesStates = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x10 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x18 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x20 = 0;
    this[1].PropertiesStates.field_0x28 = 1;
    *(undefined8 *)&this[1].PropertiesStates.field_0x30 = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x38 = 0;
    *(undefined2 *)&this[1].DestinationName.Data.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[1].DestinationName.Data.AllocatorInstance.Data + 2) = 0;
    this[1].PropertiesStates.field_0x8 = 0;
    *(undefined4 *)&this[1].PropertiesStates.field_0xc = 0x3f000000;
    *(undefined8 *)&this[1].PropertiesStates.field_0x40 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeGenericMeshPipeline> @ 14e75a040

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeGenericMeshPipeline>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeGenericMeshPipeline *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeGenericMeshPipeline::GetPrivateStaticClass();
  pUVar3 = (UInterchangeGenericMeshPipeline *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UInterchangeGenericMeshPipeline *)0x0) {
    pUVar3 = UInterchangeGenericMeshPipeline::UInterchangeGenericMeshPipeline(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeGenericTexturePipeline> @ 14e75a0e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeGenericTexturePipeline>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeGenericTexturePipeline::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UInterchangeGenericTexturePipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].DestinationName.Data.ArrayNum = 0;
    this[1].DestinationName.Data.ArrayMax = 0;
    this[1].ContentImportPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ContentImportPath.Data.ArrayNum = 0;
    this[1].ContentImportPath.Data.ArrayMax = 0;
    this[1].bAllowPropertyStatesEdition = false;
    this[1].bIsReimportContext = false;
    this[1].bIsShowEssentials = false;
    this[1].bFromReimportOrOverride = false;
    *(undefined4 *)&this[1].field_0x4c = 0;
    this[1].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    *(undefined8 *)&this[1].PropertiesStates = 0;
    *(undefined8 *)&this[1].PropertiesStates.field_0x8 = 0;
    *(undefined1 *)&this[1].DestinationName.Data.AllocatorInstance.Data = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeMaterialXPipeline> @ 14e75a1f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeMaterialXPipeline>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeMaterialXPipeline::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UInterchangeMaterialXPipeline__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangePipelineMeshesUtilities> @ 14e75a2b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangePipelineMeshesUtilities>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangePipelineMeshesUtilities::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangePipelineMeshesUtilities__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0xc = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 6) = 0;
    *(undefined4 *)&pUVar1[6].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0xc = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined4 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 8) = 0;
    *(undefined4 *)&pUVar1[8].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[8].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[8].field_0xc = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0;
    *(undefined4 *)&pUVar1[9].field_0x8 = 0x1000000;
    *(undefined2 *)&pUVar1[9].field_0xc = 1;
    pUVar1[9].field_0xe = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeSparseVolumeTexturePipeline> @ 14e75a470

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeSparseVolumeTexturePipeline>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeSparseVolumeTexturePipeline::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UInterchangeSparseVolumeTexturePipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].DestinationName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialXPipelineSettings> @ 14e75a550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMaterialXPipelineSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialXPipelineSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialXPipelineSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex.Value = 0;
    this[1].CategoryName.Number = 0x80;
    this[1].SectionName.ComparisonIndex.Value = 0xffffffff;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    this[3].CategoryName.ComparisonIndex.Value = 0;
    this[3].SectionName.ComparisonIndex = 0;
    this[3].SectionName.Number = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    this[4].CategoryName.ComparisonIndex.Value = 0xffffffff;
    this[4].CategoryName.Number = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5].SectionName.ComparisonIndex = 0;
    this[5].SectionName.Number = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[6]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_> @ 14e75a6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>
          param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  int iVar10;
  wchar_t *pwVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar13;
  int iVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **ppTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar19;
  float fVar20;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar20;
    memset(local_330,0,0x2e8);
    ppTVar15 = &local_348;
    do {
      pTVar12 = ppTVar15[1];
      pTVar19 = *ppTVar15;
      local_358 = ppTVar15[2];
      iVar10 = (int)(((longlong)pTVar12 - (longlong)pTVar19) / 0x28) + 1;
      pTVar18 = pTVar19;
      iVar14 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14e75a7d0:
        if (8 < iVar10) {
          uVar3 = *(undefined8 *)((pTVar18->ElementData).Pad + 8);
          pTVar16 = pTVar12 + 1;
          lVar8 = (longlong)(iVar10 / 2);
          TVar4 = pTVar18[lVar8]._s_1;
          uVar5 = *(undefined8 *)((longlong)pTVar18[lVar8].ElementData.Pad + 8);
          puVar1 = (undefined8 *)((longlong)pTVar18 + lVar8 * 0x28 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          uVar2 = *(undefined8 *)((longlong)pTVar18 + lVar8 * 0x28 + 0x20);
          pTVar18[lVar8]._s_1 = pTVar18->_s_1;
          *(undefined8 *)((longlong)pTVar18[lVar8].ElementData.Pad + 8) = uVar3;
          uVar3 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x18);
          puVar1 = (undefined8 *)((longlong)pTVar18 + lVar8 * 0x28 + 0x10);
          *puVar1 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x10);
          puVar1[1] = uVar3;
          *(undefined8 *)((longlong)pTVar18 + lVar8 * 0x28 + 0x20) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x20);
          pTVar18->_s_1 = TVar4;
          *(undefined8 *)((pTVar18->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x10) = uVar6;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x18) = uVar7;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x20) = uVar2;
          pTVar19 = pTVar18;
LAB_14e75a830:
          pTVar13 = pTVar19;
          pTVar19 = pTVar13 + 1;
          if (pTVar19 <= pTVar12) goto code_r0x00014e75a839;
          goto LAB_14e75a870;
        }
        for (; pTVar16 = pTVar18, pTVar19 = pTVar18, pTVar18 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar13 = pTVar16, pTVar19 = pTVar19 + 1, pTVar19 <= pTVar12) {
            if (*(int *)((pTVar19->ElementData).Pad + 8) == 0) {
              pwVar11 = L"";
            }
            else {
              pwVar11 = *(wchar_t **)&pTVar19->_s_1;
            }
            if (*(int *)((pTVar13->ElementData).Pad + 8) == 0) {
              pwVar9 = L"";
            }
            else {
              pwVar9 = *(wchar_t **)&pTVar13->_s_1;
            }
            iVar14 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar11);
            pTVar16 = pTVar19;
            if (-1 < iVar14) {
              pTVar16 = pTVar13;
            }
          }
          TVar4 = pTVar13->_s_1;
          uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x20);
          uVar5 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          uVar6 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
          uVar7 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar13->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar7;
          uVar7 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar7;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
          pTVar12->_s_1 = TVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar6;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) = uVar2;
        }
        goto LAB_14e75a9f7;
      }
LAB_14e75a9de:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_>
                (pTVar19,iVar10,param_3,param_4);
LAB_14e75a9f7:
      ppTVar15 = ppTVar15 + -3;
    } while (&local_348 <= ppTVar15);
  }
  return;
code_r0x00014e75a839:
  if (*(int *)((longlong)pTVar13 + 0x30) == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = *(wchar_t **)&pTVar19->_s_1;
  }
  if (*(int *)((pTVar18->ElementData).Pad + 8) == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)&pTVar18->_s_1;
  }
  iVar10 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar11);
  if (-1 < iVar10) goto LAB_14e75a830;
LAB_14e75a870:
  do {
    pTVar17 = pTVar16;
    pTVar16 = pTVar17 + -1;
    if (pTVar16 <= pTVar18) break;
    if (*(int *)((pTVar18->ElementData).Pad + 8) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)&pTVar18->_s_1;
    }
    if (*(int *)((longlong)pTVar17 + -0x20) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)&pTVar16->_s_1;
    }
    iVar10 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar11);
  } while (-1 < iVar10);
  uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x20);
  if (pTVar19 <= pTVar16) {
    TVar4 = pTVar19->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar13 + 0x30);
    uVar6 = *(undefined8 *)((longlong)pTVar13 + 0x38);
    uVar7 = *(undefined8 *)((longlong)pTVar13 + 0x40);
    uVar3 = *(undefined8 *)((longlong)pTVar13 + 0x48);
    pTVar19->_s_1 = pTVar16->_s_1;
    *(undefined8 *)((longlong)pTVar13 + 0x30) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x10);
    *(undefined8 *)((longlong)pTVar13 + 0x38) = *(undefined8 *)((longlong)pTVar17 + -0x18);
    *(undefined8 *)((longlong)pTVar13 + 0x40) = uVar2;
    *(undefined8 *)((longlong)pTVar13 + 0x48) = *(undefined8 *)((longlong)pTVar17 + -8);
    pTVar16->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar17 + -0x20) = uVar5;
    *(undefined8 *)((longlong)pTVar17 + -0x18) = uVar6;
    *(undefined8 *)((longlong)pTVar17 + -0x10) = uVar7;
    *(undefined8 *)((longlong)pTVar17 + -8) = uVar3;
    goto LAB_14e75a830;
  }
  TVar4 = pTVar18->_s_1;
  uVar5 = *(undefined8 *)((pTVar18->ElementData).Pad + 8);
  uVar6 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x10);
  uVar7 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x18);
  uVar3 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x20);
  pTVar18->_s_1 = pTVar16->_s_1;
  *(undefined8 *)((pTVar18->ElementData).Pad + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x10);
  iVar14 = iVar14 + -1;
  *(undefined8 *)((pTVar18->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar17 + -0x18);
  *(undefined8 *)((pTVar18->ElementData).Pad + 0x18) = uVar2;
  *(undefined8 *)((pTVar18->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar17 + -8);
  pTVar16->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar17 + -0x20) = uVar5;
  *(undefined8 *)((longlong)pTVar17 + -0x18) = uVar6;
  *(undefined8 *)((longlong)pTVar17 + -0x10) = uVar7;
  *(undefined8 *)((longlong)pTVar17 + -8) = uVar3;
  if (((longlong)pTVar16 + (-0x28 - (longlong)pTVar18)) / 0x28 <
      ((longlong)pTVar12 - (longlong)pTVar19) / 0x28) {
    if (pTVar19 < pTVar12) {
      *ppTVar15 = pTVar19;
      ppTVar15[1] = pTVar12;
      *(int *)(ppTVar15 + 2) = iVar14;
      ppTVar15 = ppTVar15 + 3;
    }
    if (pTVar16 <= pTVar18 + 1) goto LAB_14e75a9f7;
    pTVar12 = pTVar17 + -2;
    pTVar19 = pTVar18;
  }
  else {
    if (pTVar18 + 1 < pTVar16) {
      *ppTVar15 = pTVar18;
      ppTVar15[1] = pTVar17 + -2;
      *(int *)(ppTVar15 + 2) = iVar14;
      ppTVar15 = ppTVar15 + 3;
    }
    if (pTVar12 <= pTVar19) goto LAB_14e75a9f7;
  }
  iVar10 = (int)(((longlong)pTVar12 - (longlong)pTVar19) / 0x28) + 1;
  pTVar18 = pTVar19;
  if (iVar14 == 0) goto LAB_14e75a9de;
  goto LAB_14e75a7d0;
}

// IntroSortInternal<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,int,FIdentityFunctor,TDereferenceWrapper<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l32::<lambda_2>_>_> @ 14e75ab10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l2::FNodeAndAnimationIndex,int,FIdentityFunctor,TDereferenceWrapper<_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l2::FNodeAndAnimationIndex,_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l32::<lambda_2>_>_>
          (FNodeAndAnimationIndex *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_virtual_void___cdecl_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline(UInterchangeBaseNodeContainer_*,TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_>_const_&,FString_const_&)_::_2_::FNodeAndAnimationIndex,_public:_virtual_void___cdecl_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline(UInterchangeBaseNodeContainer_*,TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_>_const_&,FString_const_&)_::_32_::<lambda_2>_>
          param_4)

{
  UInterchangeVolumeNode *pUVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  FNodeAndAnimationIndex *pFVar9;
  FNodeAndAnimationIndex *pFVar10;
  FNodeAndAnimationIndex *pFVar11;
  FNodeAndAnimationIndex **ppFVar12;
  int iVar13;
  FNodeAndAnimationIndex *pFVar14;
  FNodeAndAnimationIndex *pFVar15;
  FNodeAndAnimationIndex *pFVar16;
  float fVar17;
  undefined1 auStack_388 [48];
  FNodeAndAnimationIndex *local_358;
  FNodeAndAnimationIndex *local_348;
  FNodeAndAnimationIndex *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar17;
    memset(local_330,0,0x2e8);
    ppFVar12 = &local_348;
    do {
      pFVar16 = ppFVar12[1];
      pFVar15 = *ppFVar12;
      local_358 = ppFVar12[2];
      iVar8 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
      pFVar14 = pFVar15;
      iVar13 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14e75abd0:
        if (8 < iVar8) {
          iVar3 = pFVar14->Index;
          uVar4 = *(undefined4 *)&pFVar14->field_0xc;
          pFVar9 = pFVar16 + 1;
          pFVar15 = pFVar14 + iVar8 / 2;
          pUVar1 = pFVar15->Node;
          iVar5 = pFVar15->Index;
          uVar6 = *(undefined4 *)&pFVar15->field_0xc;
          pFVar15 = pFVar14 + iVar8 / 2;
          pFVar15->Node = pFVar14->Node;
          pFVar15->Index = iVar3;
          *(undefined4 *)&pFVar15->field_0xc = uVar4;
          pFVar14->Node = pUVar1;
          pFVar14->Index = iVar5;
          *(undefined4 *)&pFVar14->field_0xc = uVar6;
          pFVar15 = pFVar14;
LAB_14e75ac00:
          pFVar11 = pFVar15;
          pFVar15 = pFVar11 + 1;
          if (pFVar15 <= pFVar16) goto code_r0x00014e75ac09;
          goto LAB_14e75ac20;
        }
        for (; pFVar9 = pFVar14, pFVar15 = pFVar14, pFVar14 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar11 = pFVar9, pFVar15 = pFVar15 + 1, pFVar15 <= pFVar16) {
            bVar7 = `UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l32::<lambda_2>::
                    operator()(param_4.Predicate,pFVar11,pFVar15);
            pFVar9 = pFVar15;
            if (!bVar7) {
              pFVar9 = pFVar11;
            }
          }
          pUVar1 = pFVar11->Node;
          iVar8 = pFVar11->Index;
          uVar6 = *(undefined4 *)&pFVar11->field_0xc;
          iVar13 = pFVar16->Index;
          uVar4 = *(undefined4 *)&pFVar16->field_0xc;
          pFVar11->Node = pFVar16->Node;
          pFVar11->Index = iVar13;
          *(undefined4 *)&pFVar11->field_0xc = uVar4;
          pFVar16->Node = pUVar1;
          pFVar16->Index = iVar8;
          *(undefined4 *)&pFVar16->field_0xc = uVar6;
        }
        goto LAB_14e75acef;
      }
LAB_14e75acde:
      HeapSortInternal<_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l2::FNodeAndAnimationIndex,int,FIdentityFunctor,TDereferenceWrapper<_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l2::FNodeAndAnimationIndex,_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l32::<lambda_2>_>_>
                (pFVar15,iVar8,param_3,param_4);
LAB_14e75acef:
      ppFVar12 = ppFVar12 + -3;
    } while (&local_348 <= ppFVar12);
  }
  return;
code_r0x00014e75ac09:
  bVar7 = `UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l32::<lambda_2>::operator()
                    (param_4.Predicate,pFVar14,pFVar15);
  if (!bVar7) goto LAB_14e75ac00;
LAB_14e75ac20:
  do {
    pFVar10 = pFVar9;
    pFVar9 = pFVar10 + -1;
    if (pFVar9 <= pFVar14) break;
    bVar7 = `UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l32::<lambda_2>::
            operator()(param_4.Predicate,pFVar9,pFVar14);
  } while (!bVar7);
  uVar2 = *(undefined8 *)&pFVar10[-1].Index;
  if (pFVar15 <= pFVar9) {
    pUVar1 = pFVar15->Node;
    iVar8 = pFVar11[1].Index;
    uVar4 = *(undefined4 *)&pFVar11[1].field_0xc;
    pFVar15->Node = pFVar9->Node;
    *(undefined8 *)&pFVar11[1].Index = uVar2;
    pFVar9->Node = pUVar1;
    pFVar10[-1].Index = iVar8;
    *(undefined4 *)&pFVar10[-1].field_0xc = uVar4;
    goto LAB_14e75ac00;
  }
  pUVar1 = pFVar14->Node;
  iVar8 = pFVar14->Index;
  uVar4 = *(undefined4 *)&pFVar14->field_0xc;
  iVar13 = iVar13 + -1;
  pFVar14->Node = pFVar9->Node;
  *(undefined8 *)&pFVar14->Index = uVar2;
  pFVar9->Node = pUVar1;
  pFVar10[-1].Index = iVar8;
  *(undefined4 *)&pFVar10[-1].field_0xc = uVar4;
  if ((longlong)((longlong)pFVar9 + (-0x10 - (longlong)pFVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar15 & 0xfffffffffffffff0U)) {
    if (pFVar15 < pFVar16) {
      *ppFVar12 = pFVar15;
      ppFVar12[1] = pFVar16;
      *(int *)(ppFVar12 + 2) = iVar13;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar9 <= pFVar14 + 1) goto LAB_14e75acef;
    pFVar16 = pFVar10 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar9) {
      *ppFVar12 = pFVar14;
      ppFVar12[1] = pFVar10 + -2;
      *(int *)(ppFVar12 + 2) = iVar13;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar16 <= pFVar15) goto LAB_14e75acef;
  }
  iVar8 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
  pFVar14 = pFVar15;
  if (iVar13 == 0) goto LAB_14e75acde;
  goto LAB_14e75abd0;
}

// IntroSortInternal<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>'::__l2::FOrderHelper,int,FIdentityFunctor,TDereferenceWrapper<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>'::__l2::FOrderHelper,`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>'::__l2::<lambda_1>_>_> @ 14e75adb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,int,FIdentityFunctor,TDereferenceWrapper<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::<lambda_1>_>_>
          (FOrderHelper *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>(UInterchangeSkeletalMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::FOrderHelper,_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>(UInterchangeSkeletalMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  wchar_t *pwVar12;
  FOrderHelper *pFVar13;
  FOrderHelper *pFVar14;
  FOrderHelper *pFVar15;
  int iVar16;
  FOrderHelper **ppFVar17;
  FOrderHelper *pFVar18;
  FOrderHelper *pFVar19;
  FOrderHelper *pFVar20;
  float fVar21;
  undefined1 auStack_388 [48];
  FOrderHelper *local_358;
  FOrderHelper *local_348;
  FOrderHelper *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar21;
    memset(local_330,0,0x2e8);
    ppFVar17 = &local_348;
    do {
      pFVar13 = ppFVar17[1];
      pFVar15 = *ppFVar17;
      local_358 = ppFVar17[2];
      iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar15) / 0x18) + 1;
      pFVar14 = pFVar15;
      iVar16 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14e75ae90:
        if (8 < iVar11) {
          uVar3 = *(undefined4 *)&pFVar14->field_0x4;
          pFVar1 = (pFVar14->Name).Data.AllocatorInstance.Data;
          pFVar18 = pFVar13 + 1;
          iVar11 = iVar11 / 2;
          pFVar15 = pFVar14 + iVar11;
          iVar5 = pFVar15->Index;
          uVar6 = *(undefined4 *)&pFVar15->field_0x4;
          pFVar2 = (pFVar15->Name).Data.AllocatorInstance.Data;
          iVar7 = pFVar14[iVar11].Name.Data.ArrayNum;
          iVar8 = pFVar14[iVar11].Name.Data.ArrayMax;
          pFVar15 = pFVar14 + iVar11;
          pFVar15->Index = pFVar14->Index;
          *(undefined4 *)&pFVar15->field_0x4 = uVar3;
          (pFVar15->Name).Data.AllocatorInstance.Data = pFVar1;
          iVar4 = (pFVar14->Name).Data.ArrayMax;
          pFVar14[iVar11].Name.Data.ArrayNum = (pFVar14->Name).Data.ArrayNum;
          pFVar14[iVar11].Name.Data.ArrayMax = iVar4;
          pFVar14->Index = iVar5;
          *(undefined4 *)&pFVar14->field_0x4 = uVar6;
          (pFVar14->Name).Data.AllocatorInstance.Data = pFVar2;
          (pFVar14->Name).Data.ArrayNum = iVar7;
          (pFVar14->Name).Data.ArrayMax = iVar8;
          pFVar15 = pFVar14;
LAB_14e75aed2:
          pFVar20 = pFVar15;
          pFVar15 = pFVar20 + 1;
          if (pFVar15 <= pFVar13) goto code_r0x00014e75aede;
          goto LAB_14e75af24;
        }
        for (; pFVar15 = pFVar14, pFVar18 = pFVar14, pFVar14 < pFVar13; pFVar13 = pFVar13 + -1) {
          while (pFVar20 = pFVar15, pFVar15 = pFVar18 + 1, pFVar15 <= pFVar13) {
            if (pFVar20->Index == pFVar15->Index) {
              if (pFVar18[1].Name.Data.ArrayNum == 0) {
                pwVar12 = L"";
              }
              else {
                pwVar12 = (wchar_t *)pFVar18[1].Name.Data.AllocatorInstance.Data;
              }
              if ((pFVar20->Name).Data.ArrayNum == 0) {
                iVar16 = FGenericPlatformStricmp::Stricmp(L"",pwVar12);
                bVar9 = SUB41((uint)iVar16 >> 0x1f,0);
              }
              else {
                iVar16 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)(pFVar20->Name).Data.AllocatorInstance.Data,pwVar12);
                bVar9 = SUB41((uint)iVar16 >> 0x1f,0);
              }
            }
            else {
              bVar9 = pFVar20->Index < pFVar15->Index;
            }
            pFVar18 = pFVar15;
            if (bVar9 == false) {
              pFVar15 = pFVar20;
            }
          }
          iVar11 = pFVar20->Index;
          uVar6 = *(undefined4 *)&pFVar20->field_0x4;
          pFVar2 = (pFVar20->Name).Data.AllocatorInstance.Data;
          iVar4 = (pFVar20->Name).Data.ArrayNum;
          iVar5 = (pFVar20->Name).Data.ArrayMax;
          uVar3 = *(undefined4 *)&pFVar13->field_0x4;
          pFVar1 = (pFVar13->Name).Data.AllocatorInstance.Data;
          pFVar20->Index = pFVar13->Index;
          *(undefined4 *)&pFVar20->field_0x4 = uVar3;
          (pFVar20->Name).Data.AllocatorInstance.Data = pFVar1;
          iVar16 = (pFVar13->Name).Data.ArrayMax;
          (pFVar20->Name).Data.ArrayNum = (pFVar13->Name).Data.ArrayNum;
          (pFVar20->Name).Data.ArrayMax = iVar16;
          pFVar13->Index = iVar11;
          *(undefined4 *)&pFVar13->field_0x4 = uVar6;
          (pFVar13->Name).Data.AllocatorInstance.Data = pFVar2;
          (pFVar13->Name).Data.ArrayNum = iVar4;
          (pFVar13->Name).Data.ArrayMax = iVar5;
        }
        goto LAB_14e75b09c;
      }
LAB_14e75b083:
      HeapSortInternal<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,int,FIdentityFunctor,TDereferenceWrapper<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::<lambda_1>_>_>
                (pFVar15,iVar11,param_3,param_4);
LAB_14e75b09c:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_348 <= ppFVar17);
  }
  return;
code_r0x00014e75aede:
  if (pFVar14->Index == pFVar15->Index) {
    if (pFVar20[1].Name.Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)pFVar20[1].Name.Data.AllocatorInstance.Data;
    }
    if ((pFVar14->Name).Data.ArrayNum == 0) {
      iVar11 = FGenericPlatformStricmp::Stricmp(L"",pwVar12);
      bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
    }
    else {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar14->Name).Data.AllocatorInstance.Data,pwVar12);
      bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
    }
  }
  else {
    bVar9 = pFVar14->Index < pFVar15->Index;
  }
  if (bVar9 == false) goto LAB_14e75aed2;
LAB_14e75af24:
  do {
    pFVar19 = pFVar18;
    pFVar18 = pFVar19 + -1;
    if (pFVar18 <= pFVar14) break;
    if (pFVar18->Index == pFVar14->Index) {
      if ((pFVar14->Name).Data.ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar14->Name).Data.AllocatorInstance.Data;
      }
      if (pFVar19[-1].Name.Data.ArrayNum == 0) {
        iVar11 = FGenericPlatformStricmp::Stricmp(L"",pwVar12);
        bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
      }
      else {
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)pFVar19[-1].Name.Data.AllocatorInstance.Data,pwVar12);
        bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
      }
    }
    else {
      bVar9 = pFVar18->Index < pFVar14->Index;
    }
  } while (bVar9 == false);
  pFVar1 = pFVar19[-1].Name.Data.AllocatorInstance.Data;
  if (pFVar15 <= pFVar18) {
    iVar4 = pFVar15->Index;
    uVar3 = *(undefined4 *)&pFVar15->field_0x4;
    pFVar2 = pFVar20[1].Name.Data.AllocatorInstance.Data;
    iVar5 = pFVar20[1].Name.Data.ArrayNum;
    iVar7 = pFVar20[1].Name.Data.ArrayMax;
    *(undefined8 *)pFVar15 = *(undefined8 *)pFVar18;
    pFVar20[1].Name.Data.AllocatorInstance.Data = pFVar1;
    iVar11 = pFVar19[-1].Name.Data.ArrayMax;
    pFVar20[1].Name.Data.ArrayNum = pFVar19[-1].Name.Data.ArrayNum;
    pFVar20[1].Name.Data.ArrayMax = iVar11;
    pFVar18->Index = iVar4;
    *(undefined4 *)&pFVar18->field_0x4 = uVar3;
    pFVar19[-1].Name.Data.AllocatorInstance.Data = pFVar2;
    pFVar19[-1].Name.Data.ArrayNum = iVar5;
    pFVar19[-1].Name.Data.ArrayMax = iVar7;
    goto LAB_14e75aed2;
  }
  iVar4 = pFVar14->Index;
  uVar3 = *(undefined4 *)&pFVar14->field_0x4;
  pFVar2 = (pFVar14->Name).Data.AllocatorInstance.Data;
  iVar5 = (pFVar14->Name).Data.ArrayNum;
  iVar7 = (pFVar14->Name).Data.ArrayMax;
  lVar10 = (longlong)pFVar18 + (-0x18 - (longlong)pFVar14);
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  *(undefined8 *)pFVar14 = *(undefined8 *)pFVar18;
  (pFVar14->Name).Data.AllocatorInstance.Data = pFVar1;
  iVar11 = pFVar19[-1].Name.Data.ArrayMax;
  (pFVar14->Name).Data.ArrayNum = pFVar19[-1].Name.Data.ArrayNum;
  (pFVar14->Name).Data.ArrayMax = iVar11;
  iVar16 = iVar16 + -1;
  pFVar18->Index = iVar4;
  *(undefined4 *)&pFVar18->field_0x4 = uVar3;
  pFVar19[-1].Name.Data.AllocatorInstance.Data = pFVar2;
  pFVar19[-1].Name.Data.ArrayNum = iVar5;
  pFVar19[-1].Name.Data.ArrayMax = iVar7;
  if ((lVar10 >> 2) - (lVar10 >> 0x3f) < ((longlong)pFVar13 - (longlong)pFVar15) / 0x18) {
    if (pFVar15 < pFVar13) {
      *ppFVar17 = pFVar15;
      ppFVar17[1] = pFVar13;
      *(int *)(ppFVar17 + 2) = iVar16;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar18 <= pFVar14 + 1) goto LAB_14e75b09c;
    pFVar13 = pFVar19 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar18) {
      *ppFVar17 = pFVar14;
      ppFVar17[1] = pFVar19 + -2;
      *(int *)(ppFVar17 + 2) = iVar16;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar13 <= pFVar15) goto LAB_14e75b09c;
  }
  iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar15) / 0x18) + 1;
  pFVar14 = pFVar15;
  if (iVar16 == 0) goto LAB_14e75b083;
  goto LAB_14e75ae90;
}

// IntroSortInternal<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>'::__l2::FOrderHelper,int,FIdentityFunctor,TDereferenceWrapper<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>'::__l2::FOrderHelper,`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>'::__l2::<lambda_1>_>_> @ 14e75b1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,int,FIdentityFunctor,TDereferenceWrapper<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::<lambda_1>_>_>
          (FOrderHelper *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>(UInterchangeStaticMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::FOrderHelper,_void___cdecl_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>(UInterchangeStaticMeshFactoryNode_&,UInterchangeBaseNodeContainer_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  wchar_t *pwVar12;
  FOrderHelper *pFVar13;
  FOrderHelper *pFVar14;
  FOrderHelper *pFVar15;
  int iVar16;
  FOrderHelper **ppFVar17;
  FOrderHelper *pFVar18;
  FOrderHelper *pFVar19;
  FOrderHelper *pFVar20;
  float fVar21;
  undefined1 auStack_388 [48];
  FOrderHelper *local_358;
  FOrderHelper *local_348;
  FOrderHelper *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar21;
    memset(local_330,0,0x2e8);
    ppFVar17 = &local_348;
    do {
      pFVar13 = ppFVar17[1];
      pFVar15 = *ppFVar17;
      local_358 = ppFVar17[2];
      iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar15) / 0x18) + 1;
      pFVar14 = pFVar15;
      iVar16 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14e75b290:
        if (8 < iVar11) {
          uVar3 = *(undefined4 *)&pFVar14->field_0x4;
          pFVar1 = (pFVar14->Name).Data.AllocatorInstance.Data;
          pFVar18 = pFVar13 + 1;
          iVar11 = iVar11 / 2;
          pFVar15 = pFVar14 + iVar11;
          iVar5 = pFVar15->Index;
          uVar6 = *(undefined4 *)&pFVar15->field_0x4;
          pFVar2 = (pFVar15->Name).Data.AllocatorInstance.Data;
          iVar7 = pFVar14[iVar11].Name.Data.ArrayNum;
          iVar8 = pFVar14[iVar11].Name.Data.ArrayMax;
          pFVar15 = pFVar14 + iVar11;
          pFVar15->Index = pFVar14->Index;
          *(undefined4 *)&pFVar15->field_0x4 = uVar3;
          (pFVar15->Name).Data.AllocatorInstance.Data = pFVar1;
          iVar4 = (pFVar14->Name).Data.ArrayMax;
          pFVar14[iVar11].Name.Data.ArrayNum = (pFVar14->Name).Data.ArrayNum;
          pFVar14[iVar11].Name.Data.ArrayMax = iVar4;
          pFVar14->Index = iVar5;
          *(undefined4 *)&pFVar14->field_0x4 = uVar6;
          (pFVar14->Name).Data.AllocatorInstance.Data = pFVar2;
          (pFVar14->Name).Data.ArrayNum = iVar7;
          (pFVar14->Name).Data.ArrayMax = iVar8;
          pFVar15 = pFVar14;
LAB_14e75b2d2:
          pFVar20 = pFVar15;
          pFVar15 = pFVar20 + 1;
          if (pFVar15 <= pFVar13) goto code_r0x00014e75b2de;
          goto LAB_14e75b324;
        }
        for (; pFVar15 = pFVar14, pFVar18 = pFVar14, pFVar14 < pFVar13; pFVar13 = pFVar13 + -1) {
          while (pFVar20 = pFVar15, pFVar15 = pFVar18 + 1, pFVar15 <= pFVar13) {
            if (pFVar20->Index == pFVar15->Index) {
              if (pFVar18[1].Name.Data.ArrayNum == 0) {
                pwVar12 = L"";
              }
              else {
                pwVar12 = (wchar_t *)pFVar18[1].Name.Data.AllocatorInstance.Data;
              }
              if ((pFVar20->Name).Data.ArrayNum == 0) {
                iVar16 = FGenericPlatformStricmp::Stricmp(L"",pwVar12);
                bVar9 = SUB41((uint)iVar16 >> 0x1f,0);
              }
              else {
                iVar16 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)(pFVar20->Name).Data.AllocatorInstance.Data,pwVar12);
                bVar9 = SUB41((uint)iVar16 >> 0x1f,0);
              }
            }
            else {
              bVar9 = pFVar20->Index < pFVar15->Index;
            }
            pFVar18 = pFVar15;
            if (bVar9 == false) {
              pFVar15 = pFVar20;
            }
          }
          iVar11 = pFVar20->Index;
          uVar6 = *(undefined4 *)&pFVar20->field_0x4;
          pFVar2 = (pFVar20->Name).Data.AllocatorInstance.Data;
          iVar4 = (pFVar20->Name).Data.ArrayNum;
          iVar5 = (pFVar20->Name).Data.ArrayMax;
          uVar3 = *(undefined4 *)&pFVar13->field_0x4;
          pFVar1 = (pFVar13->Name).Data.AllocatorInstance.Data;
          pFVar20->Index = pFVar13->Index;
          *(undefined4 *)&pFVar20->field_0x4 = uVar3;
          (pFVar20->Name).Data.AllocatorInstance.Data = pFVar1;
          iVar16 = (pFVar13->Name).Data.ArrayMax;
          (pFVar20->Name).Data.ArrayNum = (pFVar13->Name).Data.ArrayNum;
          (pFVar20->Name).Data.ArrayMax = iVar16;
          pFVar13->Index = iVar11;
          *(undefined4 *)&pFVar13->field_0x4 = uVar6;
          (pFVar13->Name).Data.AllocatorInstance.Data = pFVar2;
          (pFVar13->Name).Data.ArrayNum = iVar4;
          (pFVar13->Name).Data.ArrayMax = iVar5;
        }
        goto LAB_14e75b49c;
      }
LAB_14e75b483:
      HeapSortInternal<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,int,FIdentityFunctor,TDereferenceWrapper<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::<lambda_1>_>_>
                (pFVar15,iVar11,param_3,param_4);
LAB_14e75b49c:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_348 <= ppFVar17);
  }
  return;
code_r0x00014e75b2de:
  if (pFVar14->Index == pFVar15->Index) {
    if (pFVar20[1].Name.Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)pFVar20[1].Name.Data.AllocatorInstance.Data;
    }
    if ((pFVar14->Name).Data.ArrayNum == 0) {
      iVar11 = FGenericPlatformStricmp::Stricmp(L"",pwVar12);
      bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
    }
    else {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar14->Name).Data.AllocatorInstance.Data,pwVar12);
      bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
    }
  }
  else {
    bVar9 = pFVar14->Index < pFVar15->Index;
  }
  if (bVar9 == false) goto LAB_14e75b2d2;
LAB_14e75b324:
  do {
    pFVar19 = pFVar18;
    pFVar18 = pFVar19 + -1;
    if (pFVar18 <= pFVar14) break;
    if (pFVar18->Index == pFVar14->Index) {
      if ((pFVar14->Name).Data.ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar14->Name).Data.AllocatorInstance.Data;
      }
      if (pFVar19[-1].Name.Data.ArrayNum == 0) {
        iVar11 = FGenericPlatformStricmp::Stricmp(L"",pwVar12);
        bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
      }
      else {
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)pFVar19[-1].Name.Data.AllocatorInstance.Data,pwVar12);
        bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
      }
    }
    else {
      bVar9 = pFVar18->Index < pFVar14->Index;
    }
  } while (bVar9 == false);
  pFVar1 = pFVar19[-1].Name.Data.AllocatorInstance.Data;
  if (pFVar15 <= pFVar18) {
    iVar4 = pFVar15->Index;
    uVar3 = *(undefined4 *)&pFVar15->field_0x4;
    pFVar2 = pFVar20[1].Name.Data.AllocatorInstance.Data;
    iVar5 = pFVar20[1].Name.Data.ArrayNum;
    iVar7 = pFVar20[1].Name.Data.ArrayMax;
    *(undefined8 *)pFVar15 = *(undefined8 *)pFVar18;
    pFVar20[1].Name.Data.AllocatorInstance.Data = pFVar1;
    iVar11 = pFVar19[-1].Name.Data.ArrayMax;
    pFVar20[1].Name.Data.ArrayNum = pFVar19[-1].Name.Data.ArrayNum;
    pFVar20[1].Name.Data.ArrayMax = iVar11;
    pFVar18->Index = iVar4;
    *(undefined4 *)&pFVar18->field_0x4 = uVar3;
    pFVar19[-1].Name.Data.AllocatorInstance.Data = pFVar2;
    pFVar19[-1].Name.Data.ArrayNum = iVar5;
    pFVar19[-1].Name.Data.ArrayMax = iVar7;
    goto LAB_14e75b2d2;
  }
  iVar4 = pFVar14->Index;
  uVar3 = *(undefined4 *)&pFVar14->field_0x4;
  pFVar2 = (pFVar14->Name).Data.AllocatorInstance.Data;
  iVar5 = (pFVar14->Name).Data.ArrayNum;
  iVar7 = (pFVar14->Name).Data.ArrayMax;
  lVar10 = (longlong)pFVar18 + (-0x18 - (longlong)pFVar14);
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  *(undefined8 *)pFVar14 = *(undefined8 *)pFVar18;
  (pFVar14->Name).Data.AllocatorInstance.Data = pFVar1;
  iVar11 = pFVar19[-1].Name.Data.ArrayMax;
  (pFVar14->Name).Data.ArrayNum = pFVar19[-1].Name.Data.ArrayNum;
  (pFVar14->Name).Data.ArrayMax = iVar11;
  iVar16 = iVar16 + -1;
  pFVar18->Index = iVar4;
  *(undefined4 *)&pFVar18->field_0x4 = uVar3;
  pFVar19[-1].Name.Data.AllocatorInstance.Data = pFVar2;
  pFVar19[-1].Name.Data.ArrayNum = iVar5;
  pFVar19[-1].Name.Data.ArrayMax = iVar7;
  if ((lVar10 >> 2) - (lVar10 >> 0x3f) < ((longlong)pFVar13 - (longlong)pFVar15) / 0x18) {
    if (pFVar15 < pFVar13) {
      *ppFVar17 = pFVar15;
      ppFVar17[1] = pFVar13;
      *(int *)(ppFVar17 + 2) = iVar16;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar18 <= pFVar14 + 1) goto LAB_14e75b49c;
    pFVar13 = pFVar19 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar18) {
      *ppFVar17 = pFVar14;
      ppFVar17[1] = pFVar19 + -2;
      *(int *)(ppFVar17 + 2) = iVar16;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar13 <= pFVar15) goto LAB_14e75b49c;
  }
  iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar15) / 0x18) + 1;
  pFVar14 = pFVar15;
  if (iVar16 == 0) goto LAB_14e75b483;
  goto LAB_14e75b290;
}

// IsObjectPtrEqual<UInterchangeBaseNodeContainer,UInterchangeBaseNodeContainer_const_*,0> @ 14e75b8d0

bool __cdecl
ObjectPtr_Private::
IsObjectPtrEqual<UInterchangeBaseNodeContainer,UInterchangeBaseNodeContainer_const_*,0>
          (TObjectPtr<UInterchangeBaseNodeContainer> *param_1,
          UInterchangeBaseNodeContainer **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UInterchangeBaseNodeContainer *)0x0) {
    return *param_2 == (UInterchangeBaseNodeContainer *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UInterchangePipelineBase,UInterchangeGenericAssetsPipeline_*,0> @ 14e75b8f0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UInterchangePipelineBase,UInterchangeGenericAssetsPipeline_*,0>
          (TObjectPtr<UInterchangePipelineBase> *param_1,UInterchangeGenericAssetsPipeline **param_2
          )

{
  if ((UInterchangeGenericAssetsPipeline *)(param_1->field0_0x0).DebugPtr ==
      (UInterchangeGenericAssetsPipeline *)0x0) {
    return *param_2 == (UInterchangeGenericAssetsPipeline *)0x0;
  }
  return (UInterchangeGenericAssetsPipeline *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>,int_&,int_&> @ 14e75d280

T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&,int_&,int_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>,int_&,int_&>
                    (T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&,int_&,int_&>
                     *__return_storage_ptr__,TSharedPtr<ITableRow,1> *param_1,
                    TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
                    *param_2,int *param_3,int *param_4)

{
  __return_storage_ptr__->Arg3 = param_4;
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&> @ 14e75d2a0

T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>
                   (TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
                    *param_1)

{
  STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_> @ 14e75d2b0

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_>
                   (TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
                    *param_1)

{
  SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_> @ 14e75d2c0

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_>
                   (TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
                    *param_1)

{
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_> @ 14e75d2d0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_>
                   (TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
                    *param_1)

{
  STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_> @ 14e75d2e0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_>
                   (TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
                    *param_1)

{
  STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_> @ 14e75d2f0

T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_>
          (TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1> *param_1)

{
  SInterchangeCompareSkeletonTreeViewItem *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&>)param_1;
}

// MakeShared<STableRow<TSharedPtr<FString,1>_>,1> @ 14e75d300

TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> * __cdecl
MakeShared<STableRow<TSharedPtr<FString,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar2 = operator_new(0x408);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_VFString___00_____00_SharedPointerInternals__6B_
    ;
    pTVar2[1]._padding_ = (longlong)&___7ITableRow__6B_;
    SBorder::SBorder((SBorder *)&pTVar2[1].SharedReferenceCount);
    pTVar2[1]._padding_ = (longlong)&STableRow<TSharedPtr<FString,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar2[1].SharedReferenceCount =
         &STableRow<TSharedPtr<FString,1>_>::_vftable__for__SBorder__;
    puVar1 = &pTVar2[4].SharedReferenceCount.field_0x2;
    *puVar1 = *puVar1 | 4;
    pTVar2[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x30]._padding_ = 0;
    pTVar2[0x30].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x31]._padding_ = 0;
    pTVar2[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33]._padding_ = 0;
    pTVar2[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x34]._padding_ = 0;
    pTVar2[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35]._padding_ = 0;
    pTVar2[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x36]._padding_ = 0;
    pTVar2[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x37]._padding_ = 0;
    pTVar2[0x37].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar2[0x38]._padding_ + 4) = 0;
    pTVar2[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x39]._padding_ = 0;
    pTVar2[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a]._padding_ = 0;
    pTVar2[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3b]._padding_ = 0;
    pTVar2[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3c]._padding_ = 0;
    pTVar2[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d]._padding_ = 0;
    pTVar2[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3e]._padding_ = 0;
    pTVar2[0x3f]._padding_ = 0;
    pTVar2[0x3f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar2[0x30].WeakReferenceCount = 1;
    pTVar2[4].SharedReferenceCount.field_0x3 = 2;
  }
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>::TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>
            (__return_storage_ptr__,(STableRow<TSharedPtr<FString,1>_> *)(pTVar2 + 1),pTVar2);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T0RequiredArgs> @ 14e75d470

TSlateDecl<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T0RequiredArgs>
* __cdecl MakeTDecl<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T0RequiredArgs>
                    (TSlateDecl<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T0RequiredArgs>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_> @ 14e75d520

TSlateDecl<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFListItem_SInterchangeGenericAssetMaterialConflictWidget___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
    STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
              ((STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
  ::
  TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
              *)(local_38 + 0x10),
             (STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)
             (pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)
         local_38._16_8_;
    local_38._0_8_ =
         (STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_> @ 14e75d6d0

TSlateDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
    STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
              ((STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
               (pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
              *)(local_38 + 0x10),
             (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
             (pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
         local_38._16_8_;
    local_38._0_8_ =
         (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>_> @ 14e75d880

TSlateDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
    STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
              ((STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
               (pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
              *)(local_38 + 0x10),
             (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
             (pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
         local_38._16_8_;
    local_38._0_8_ =
         (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T0RequiredArgs> @ 14e75da30

TSlateDecl<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T0RequiredArgs>
* __cdecl MakeTDecl<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T0RequiredArgs>
                    (TSlateDecl<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T0RequiredArgs>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_> @ 14e75dae0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_> @ 14e75db90

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&>_> @ 14e75dc40

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SInterchangeCompareSkeletonTreeViewItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 14e75dcf0

TSlateDecl<SInterchangeCompareSkeletonTreeViewItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SInterchangeCompareSkeletonTreeViewItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SInterchangeCompareSkeletonTreeViewItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SInterchangeCompareSkeletonTreeViewItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SInterchangeCompareSkeletonTreeViewItem *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x418);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSInterchangeCompareSkeletonTreeViewItem___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x408);
    STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
    STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
              ((STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
               (pTVar3 + 1));
    pTVar3[1]._padding_ =
         (longlong)&SInterchangeCompareSkeletonTreeViewItem::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SInterchangeCompareSkeletonTreeViewItem::_vftable__for__SBorder__;
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>::
  TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>
            ((TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1> *)(local_48 + 0x10),
             (SInterchangeCompareSkeletonTreeViewItem *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SInterchangeCompareSkeletonTreeViewItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object =
         (SInterchangeCompareSkeletonTreeViewItem *)local_48._16_8_;
    local_48._0_8_ = (SInterchangeCompareSkeletonTreeViewItem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SInterchangeCompareSkeletonTreeViewItem *)0x0)
     && (bVar2 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SInterchangeCompareSkeletonTreeViewItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x408);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SInterchangeGenericAssetMaterialConflictListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 14e75ded0

TSlateDecl<SInterchangeGenericAssetMaterialConflictListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SInterchangeGenericAssetMaterialConflictListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SInterchangeGenericAssetMaterialConflictListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SInterchangeGenericAssetMaterialConflictListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SInterchangeGenericAssetMaterialConflictListRow *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x478);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSInterchangeGenericAssetMaterialConflictListRow___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x468);
    STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
    STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
              ((STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                *)(pTVar3 + 1));
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x44]._padding_ + 4) = 0x80;
    pTVar3[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x46]._padding_ = 0;
    pTVar3[1]._padding_ =
         (longlong)&SInterchangeGenericAssetMaterialConflictListRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SInterchangeGenericAssetMaterialConflictListRow::_vftable__for__SBorder__;
    pTVar3[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SInterchangeGenericAssetMaterialConflictListRow,1>::
  TSharedRef<SInterchangeGenericAssetMaterialConflictListRow,1>
            ((TSharedRef<SInterchangeGenericAssetMaterialConflictListRow,1> *)(local_48 + 0x10),
             (SInterchangeGenericAssetMaterialConflictListRow *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SInterchangeGenericAssetMaterialConflictListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object =
         (SInterchangeGenericAssetMaterialConflictListRow *)local_48._16_8_;
    local_48._0_8_ = (SInterchangeGenericAssetMaterialConflictListRow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object ==
       (SInterchangeGenericAssetMaterialConflictListRow *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SInterchangeGenericAssetMaterialConflictListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x468);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SInterchangeGenericAssetMaterialConflictWidget,RequiredArgs::T0RequiredArgs> @ 14e75e100

TSlateDecl<SInterchangeGenericAssetMaterialConflictWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SInterchangeGenericAssetMaterialConflictWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SInterchangeGenericAssetMaterialConflictWidget,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SInterchangeGenericAssetMaterialConflictWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SInterchangeGenericAssetMaterialConflictWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SInterchangeGenericAssetSkeletonConflictWidget,RequiredArgs::T0RequiredArgs> @ 14e75e1b0

TSlateDecl<SInterchangeGenericAssetSkeletonConflictWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SInterchangeGenericAssetSkeletonConflictWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SInterchangeGenericAssetSkeletonConflictWidget,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SInterchangeGenericAssetSkeletonConflictWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SInterchangeGenericAssetSkeletonConflictWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&,int_&,int_&>_> @ 14e75e260

TSlateDecl<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&,int_&,int_&>_>
* __cdecl MakeTDecl<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&,int_&,int_&>_>
                    (TSlateDecl<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&,int_&,int_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&,int_&,int_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&,int_&,int_&>_>
  ::
  TSlateDecl<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&&,int_&,int_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewIntrusiveReferenceController<1,STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_> @ 14e75e310

TIntrusiveReferenceController<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
* __cdecl SharedPointerInternals::
          NewIntrusiveReferenceController<1,STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>
                    (void)

{
  uchar *puVar1;
  longlong *plVar2;
  char cVar3;
  TIntrusiveReferenceController<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
  *pTVar4;
  undefined8 *local_res8;
  
  pTVar4 = ::operator_new(0xb10);
  if (pTVar4 == (TIntrusiveReferenceController<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
                 *)0x0) {
    return (TIntrusiveReferenceController<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
            *)0x0;
  }
  *(undefined4 *)&pTVar4->_padding_ = 1;
  *(undefined4 *)((longlong)&pTVar4->_padding_ + 4) = 1;
  pTVar4->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_V__STreeView_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00_____00_SharedPointerInternals__6B_
  ;
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
            ((SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
             &pTVar4->ObjectStorage,Tree);
  puVar1 = (pTVar4->ObjectStorage).Pad + 0xa98;
  *(undefined ***)(pTVar4->ObjectStorage).Pad =
       &STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
        _vftable__for__SCompoundWidget__;
  (pTVar4->ObjectStorage).Pad[0xa00] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa01] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa02] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa03] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa04] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa05] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa06] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa07] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa08] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa09] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa10] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa11] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa12] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa13] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa18] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa19] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa20] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa21] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa22] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa23] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa24] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa25] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa26] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa27] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa28] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa29] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa2a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa2b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa38] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa39] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa40] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa41] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa42] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa43] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa44] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa45] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa46] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa47] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa58] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa59] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5f] = '\0';
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x2a8) =
       &STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
        _vftable__for__IScrollableWidget__;
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x588) =
       &___7__STreeView_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00____6B_;
  (pTVar4->ObjectStorage).Pad[0xa60] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa61] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa62] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa63] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa64] = 0x80;
  (pTVar4->ObjectStorage).Pad[0xa65] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa66] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa67] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa68] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa69] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6a] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6b] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa78] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa79] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa80] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa81] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa82] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa83] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa88] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa89] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa90] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa91] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa92] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa93] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa94] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa95] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa96] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa97] = '\0';
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaaa] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaab] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaac] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaad] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaae] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaaf] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaba] = '\0';
  (pTVar4->ObjectStorage).Pad[0xabb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xac8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xac9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaca] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacc] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacd] = '\0';
  (pTVar4->ObjectStorage).Pad[0xace] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacf] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad0] = '\x01';
  (pTVar4->ObjectStorage).Pad[0xad1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad9] = '\x01';
  (pTVar4->ObjectStorage).Pad[0xaf0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaea] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaeb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaec] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaed] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaee] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaef] = '\0';
  if (puVar1 == (uchar *)0x0) {
    `SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SetItemsSource'::
    __l2::<lambda_1>::operator()(&local_res8);
  }
  plVar2 = *(longlong **)((pTVar4->ObjectStorage).Pad + 0x9f8);
  if ((plVar2 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,puVar1), cVar3 != '\0')) {
    return pTVar4;
  }
  if (puVar1 == (uchar *)0x0) {
    local_res8 = (undefined8 *)0x0;
  }
  else {
    local_res8 = ::operator_new(0x10);
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      local_res8[1] = puVar1;
      *local_res8 = &
                    ___7__FArrayPointer_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00___ItemsSource_Slate_UE__6B_
      ;
    }
  }
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SetItemsSource
            ((SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
             &pTVar4->ObjectStorage,
             (IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
             &local_res8);
  return pTVar4;
}

// NewObject<UInterchangeActorFactoryNode> @ 14e75e500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeActorFactoryNode * __cdecl
NewObject<UInterchangeActorFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeActorFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeActorFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeActorFactoryNode *)
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

// NewObject<UInterchangeAnimSequenceFactoryNode> @ 14e75e5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeAnimSequenceFactoryNode * __cdecl
NewObject<UInterchangeAnimSequenceFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeAnimSequenceFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeAnimSequenceFactoryNode *)
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

// NewObject<UInterchangeAssetUserData> @ 14e75e6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeAssetUserData * __cdecl
NewObject<UInterchangeAssetUserData>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeAssetUserData *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeAssetUserData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeAssetUserData *)
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

// NewObject<UInterchangeAudioSoundWaveFactoryNode> @ 14e75e7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeAudioSoundWaveFactoryNode * __cdecl
NewObject<UInterchangeAudioSoundWaveFactoryNode>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeAudioSoundWaveFactoryNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeAudioSoundWaveFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeAudioSoundWaveFactoryNode *)
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

// NewObject<UInterchangeBaseMaterialFactoryNode> @ 14e75e870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeBaseMaterialFactoryNode * __cdecl
NewObject<UInterchangeBaseMaterialFactoryNode>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UInterchangeBaseMaterialFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
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
  pUVar2 = (UInterchangeBaseMaterialFactoryNode *)
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

// NewObject<UInterchangeDecalActorFactoryNode> @ 14e75e970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeDecalActorFactoryNode * __cdecl
NewObject<UInterchangeDecalActorFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeDecalActorFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeDecalActorFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeDecalActorFactoryNode *)
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

// NewObject<UInterchangeDirectionalLightFactoryNode> @ 14e75ea60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeDirectionalLightFactoryNode * __cdecl
NewObject<UInterchangeDirectionalLightFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeDirectionalLightFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeDirectionalLightFactoryNode *)
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

// NewObject<UInterchangeGeometryCacheFactoryNode> @ 14e75eb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeGeometryCacheFactoryNode * __cdecl
NewObject<UInterchangeGeometryCacheFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeGeometryCacheFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeGeometryCacheFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeGeometryCacheFactoryNode *)
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

// NewObject<UInterchangeGroomCacheFactoryNode> @ 14e75ec40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeGroomCacheFactoryNode * __cdecl
NewObject<UInterchangeGroomCacheFactoryNode>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeGroomCacheFactoryNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeGroomCacheFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeGroomCacheFactoryNode *)
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

// NewObject<UInterchangeGroomFactoryNode> @ 14e75ece0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeGroomFactoryNode * __cdecl NewObject<UInterchangeGroomFactoryNode>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeGroomFactoryNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeGroomFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeGroomFactoryNode *)
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

// NewObject<UInterchangeHeterogeneousVolumeActorFactoryNode> @ 14e75ed80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeHeterogeneousVolumeActorFactoryNode * __cdecl
NewObject<UInterchangeHeterogeneousVolumeActorFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeHeterogeneousVolumeActorFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeHeterogeneousVolumeActorFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeHeterogeneousVolumeActorFactoryNode *)
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

// NewObject<UInterchangeInstancedStaticMeshComponentFactoryNode> @ 14e75ee70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeInstancedStaticMeshComponentFactoryNode * __cdecl
NewObject<UInterchangeInstancedStaticMeshComponentFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeInstancedStaticMeshComponentFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeInstancedStaticMeshComponentFactoryNode *)
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

// NewObject<UInterchangeLevelSequenceFactoryNode> @ 14e75ef60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeLevelSequenceFactoryNode * __cdecl
NewObject<UInterchangeLevelSequenceFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeLevelSequenceFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeLevelSequenceFactoryNode *)
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

// NewObject<UInterchangeMaterialExpressionFactoryNode> @ 14e75f050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeMaterialExpressionFactoryNode * __cdecl
NewObject<UInterchangeMaterialExpressionFactoryNode>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeMaterialExpressionFactoryNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeMaterialExpressionFactoryNode *)
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

// NewObject<UInterchangeMaterialExpressionFactoryNode> @ 14e75f0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeMaterialExpressionFactoryNode * __cdecl
NewObject<UInterchangeMaterialExpressionFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeMaterialExpressionFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeMaterialExpressionFactoryNode *)
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

// NewObject<UInterchangeMaterialFunctionCallExpressionFactoryNode> @ 14e75f1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeMaterialFunctionCallExpressionFactoryNode * __cdecl
NewObject<UInterchangeMaterialFunctionCallExpressionFactoryNode>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeMaterialFunctionCallExpressionFactoryNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeMaterialFunctionCallExpressionFactoryNode *)
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

// NewObject<UInterchangeMaterialInstanceFactoryNode> @ 14e75f280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeMaterialInstanceFactoryNode * __cdecl
NewObject<UInterchangeMaterialInstanceFactoryNode>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeMaterialInstanceFactoryNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeMaterialInstanceFactoryNode *)
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

// NewObject<UInterchangeMaterialReferenceFactoryNode> @ 14e75f320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeMaterialReferenceFactoryNode * __cdecl
NewObject<UInterchangeMaterialReferenceFactoryNode>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeMaterialReferenceFactoryNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeMaterialReferenceFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeMaterialReferenceFactoryNode *)
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

// NewObject<UInterchangeMeshActorFactoryNode> @ 14e75f3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeMeshActorFactoryNode * __cdecl
NewObject<UInterchangeMeshActorFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeMeshActorFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeMeshActorFactoryNode *)
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

// NewObject<UInterchangePhysicsAssetFactoryNode> @ 14e75f4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangePhysicsAssetFactoryNode * __cdecl
NewObject<UInterchangePhysicsAssetFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangePhysicsAssetFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangePhysicsAssetFactoryNode *)
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

// NewObject<UInterchangePipelineMeshesUtilities> @ 14e75f5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangePipelineMeshesUtilities * __cdecl
NewObject<UInterchangePipelineMeshesUtilities>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangePipelineMeshesUtilities *pUVar2;
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
  pUVar1 = UInterchangePipelineMeshesUtilities::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangePipelineMeshesUtilities *)
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

// NewObject<UInterchangePointLightFactoryNode> @ 14e75f690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangePointLightFactoryNode * __cdecl
NewObject<UInterchangePointLightFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangePointLightFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangePointLightFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangePointLightFactoryNode *)
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

// NewObject<UInterchangeRectLightFactoryNode> @ 14e75f780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeRectLightFactoryNode * __cdecl
NewObject<UInterchangeRectLightFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeRectLightFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeRectLightFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeRectLightFactoryNode *)
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

// NewObject<UInterchangeSceneComponentFactoryNode> @ 14e75f870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSceneComponentFactoryNode * __cdecl
NewObject<UInterchangeSceneComponentFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeSceneComponentFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeSceneComponentFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeSceneComponentFactoryNode *)
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

// NewObject<UInterchangeSceneVariantSetsFactoryNode> @ 14e75f960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSceneVariantSetsFactoryNode * __cdecl
NewObject<UInterchangeSceneVariantSetsFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeSceneVariantSetsFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeSceneVariantSetsFactoryNode *)
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

// NewObject<UInterchangeSkeletalMeshFactoryNode> @ 14e75fa50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSkeletalMeshFactoryNode * __cdecl
NewObject<UInterchangeSkeletalMeshFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeSkeletalMeshFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeSkeletalMeshFactoryNode *)
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

// NewObject<UInterchangeSkeletalMeshLodDataNode> @ 14e75fb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSkeletalMeshLodDataNode * __cdecl
NewObject<UInterchangeSkeletalMeshLodDataNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeSkeletalMeshLodDataNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeSkeletalMeshLodDataNode *)
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

// NewObject<UInterchangeSkeletonFactoryNode> @ 14e75fc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSkeletonFactoryNode * __cdecl
NewObject<UInterchangeSkeletonFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeSkeletonFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeSkeletonFactoryNode *)
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

// NewObject<UInterchangeSkyLightFactoryNode> @ 14e75fd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSkyLightFactoryNode * __cdecl
NewObject<UInterchangeSkyLightFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeSkyLightFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeSkyLightFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeSkyLightFactoryNode *)
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

// NewObject<UInterchangeSparseVolumeTextureFactoryNode> @ 14e75fe10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSparseVolumeTextureFactoryNode * __cdecl
NewObject<UInterchangeSparseVolumeTextureFactoryNode>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeSparseVolumeTextureFactoryNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeSparseVolumeTextureFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeSparseVolumeTextureFactoryNode *)
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

// NewObject<UInterchangeSpecularProfileFactoryNode> @ 14e75feb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSpecularProfileFactoryNode * __cdecl
NewObject<UInterchangeSpecularProfileFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeSpecularProfileFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeSpecularProfileFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeSpecularProfileFactoryNode *)
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

// NewObject<UInterchangeSpotLightFactoryNode> @ 14e75ffa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSpotLightFactoryNode * __cdecl
NewObject<UInterchangeSpotLightFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeSpotLightFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeSpotLightFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeSpotLightFactoryNode *)
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

// NewObject<UInterchangeStaticMeshFactoryNode> @ 14e760090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeStaticMeshFactoryNode * __cdecl
NewObject<UInterchangeStaticMeshFactoryNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeStaticMeshFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeStaticMeshFactoryNode *)
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

// NewObject<UInterchangeStaticMeshLodDataNode> @ 14e760180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeStaticMeshLodDataNode * __cdecl
NewObject<UInterchangeStaticMeshLodDataNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeStaticMeshLodDataNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeStaticMeshLodDataNode *)
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

// NewObject<UInterchangeTextureFactoryNode> @ 14e760270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeTextureFactoryNode * __cdecl
NewObject<UInterchangeTextureFactoryNode>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UInterchangeTextureFactoryNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeTextureFactoryNode_NoRegister();
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
  pUVar2 = (UInterchangeTextureFactoryNode *)
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

// Reverse<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> @ 14e762890

void __cdecl
AlgoImpl::Reverse<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
          (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FSkeletonJoint *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar4->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar1;
      param_1 = param_1 + 1;
      pTVar4->Object = pFVar2;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// StaticEnum<enum_EInterchangeAnimationRange> @ 14e762b30

UEnum * __cdecl StaticEnum<enum_EInterchangeAnimationRange>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeAnimationRange.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UEnum_EInterchangeAnimationRange.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange,
                       (UObject *)pUVar1,L"EInterchangeAnimationRange");
  }
  return Z_Registration_Info_UEnum_EInterchangeAnimationRange.OuterSingleton;
}

// StaticEnum<enum_EInterchangeForceMeshType> @ 14e762b70

UEnum * __cdecl StaticEnum<enum_EInterchangeForceMeshType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeForceMeshType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UEnum_EInterchangeForceMeshType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType,
                       (UObject *)pUVar1,L"EInterchangeForceMeshType");
  }
  return Z_Registration_Info_UEnum_EInterchangeForceMeshType.OuterSingleton;
}

// StaticEnum<enum_EInterchangeMaterialImportOption> @ 14e762bb0

UEnum * __cdecl StaticEnum<enum_EInterchangeMaterialImportOption>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption,
                       (UObject *)pUVar1,L"EInterchangeMaterialImportOption");
  }
  return Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.OuterSingleton;
}

// StaticEnum<enum_EInterchangeMaterialSearchLocation> @ 14e762bf0

UEnum * __cdecl StaticEnum<enum_EInterchangeMaterialSearchLocation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation,
                       (UObject *)pUVar1,L"EInterchangeMaterialSearchLocation");
  }
  return Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.OuterSingleton;
}

// StaticEnum<enum_EInterchangeSceneHierarchyType> @ 14e762c30

UEnum * __cdecl StaticEnum<enum_EInterchangeSceneHierarchyType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeSceneHierarchyType,
                       (UObject *)pUVar1,L"EInterchangeSceneHierarchyType");
  }
  return Z_Registration_Info_UEnum_EInterchangeSceneHierarchyType.OuterSingleton;
}

// StaticEnum<enum_EInterchangeVertexColorImportOption> @ 14e762c70

UEnum * __cdecl StaticEnum<enum_EInterchangeVertexColorImportOption>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption,
                       (UObject *)pUVar1,L"EInterchangeVertexColorImportOption");
  }
  return Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.OuterSingleton;
}

// ~TFunction_OwnedObject<`SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0> @ 14e769b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget::Construct_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode'::__l2::<lambda_1>,0,1> @ 14e769bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UInterchangeGenericMaterialPipeline::HandlePhongModel'::__l6::<lambda_1>,0,1> @ 14e769bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGenericMaterialPipeline::HandlePhongModel'::__l6::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UInterchangeGenericMaterialPipeline::HandlePhongModel_::__l6::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UInterchangeGenericMaterialPipeline::HandlePhongModel'::`6'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14e76a9b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,TArray<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,TArray<_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l2::FNodeAndAnimationIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator== @ 14e76d5e0

bool __cdecl
operator==(TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
           param_1,TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
                   param_2)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
  *pTVar6;
  TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
  *pTVar7;
  undefined6 in_register_0000000a;
  undefined6 in_register_00000012;
  ulonglong uVar8;
  TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
  local_28;
  TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
  local_26 [7];
  
  pTVar6 = TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>
           ::
           TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>
                     (local_26,(TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
                                *)CONCAT62(in_register_0000000a,param_1));
  bVar1 = pTVar6->TypeIndex;
  pTVar7 = pTVar6;
  if ((((bVar1 != 1) && (bVar1 != 2)) && (bVar1 != 3)) &&
     (pTVar7 = (TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
                *)0x0, bVar1 == 0)) {
    pTVar7 = pTVar6;
  }
  local_28.TypeIndex = *(byte *)(CONCAT62(in_register_00000012,param_2) + 1);
  uVar8 = (ulonglong)local_28.TypeIndex;
  cVar2 = pTVar7->_padding_;
  if ((3 < local_28.TypeIndex) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xec,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[uVar8])(&local_28,CONCAT62(in_register_00000012,param_2));
  bVar4 = local_28.TypeIndex == 1;
  if (((!bVar4) && (bVar4 = local_28.TypeIndex == 2, !bVar4)) &&
     (bVar4 = local_28.TypeIndex == 3, !bVar4)) {
    bVar4 = local_28.TypeIndex == 0;
  }
  pTVar7 = &local_28;
  if (!bVar4) {
    pTVar7 = (TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
              *)0x0;
  }
  if ((bVar1 == local_28.TypeIndex) && (cVar2 == pTVar7->_padding_)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// operator() @ 14e76d880

bool __thiscall
``UE::Private::InterchangeMeshPipeline::IsSceneNodeNestedInSkeleton'::__l2::<lambda_1>::operator()'
::__l2::<lambda_1>::operator()(void *this,FString *param_1,UInterchangeMeshNode *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  ForAnyElementType FVar7;
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  bVar2 = UInterchangeMeshNode::IsSkinnedMesh(param_2);
  if (bVar2) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    UInterchangeMeshNode::GetSkeletonDependencies(param_2,&local_28);
    iVar1 = local_28.ArrayNum;
    pFVar5 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10;
    FVar7.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar7.Data == pFVar5) break;
      puVar4 = (undefined8 *)**(longlong **)this;
      puVar6 = puVar4 + (longlong)(int)(*(longlong **)this)[1] * 2;
      for (; puVar4 != puVar6; puVar4 = puVar4 + 2) {
        iVar3 = *(int *)(puVar4 + 1);
        if (iVar3 == *(int *)(FVar7.Data + 8)) {
          if (iVar3 < 2) goto LAB_14e76d949;
          iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar4,*(wchar_t **)FVar7.Data);
          bVar2 = iVar3 == 0;
        }
        else {
          bVar2 = iVar3 + *(int *)(FVar7.Data + 8) == 1;
        }
        if (bVar2) {
LAB_14e76d949:
          **(undefined1 **)((longlong)this + 8) = 1;
          DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
          if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.AllocatorInstance.Data);
          }
          return true;
        }
      }
      FVar7.Data = FVar7.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return false;
}

// operator() @ 14e76d9b0

bool __thiscall
``GetCollisionMeshType'::__l20::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  int iVar1;
  UInterchangeBaseNodeContainer *pUVar2;
  int iVar3;
  FString *pFVar4;
  bool bVar5;
  UObject *local_res8;
  FString local_18;
  
  pUVar2 = *(UInterchangeBaseNodeContainer **)((longlong)this + 0x18);
  local_res8 = (UObject *)**(undefined8 **)((longlong)this + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pFVar4 = UE::Interchange::Private::GetNodeName
                     (&local_18,(TObjectPtr<UInterchangePipelineMeshesUtilities>)&local_res8,pUVar2,
                      param_1);
  iVar3 = *(int *)((longlong)this + 8);
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      bVar5 = true;
    }
    else {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)this,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
    }
  }
  else {
    bVar5 = iVar1 + iVar3 == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// operator() @ 14e770640

void __thiscall
``UInterchangeGenericLevelPipeline::CacheActiveJointUids'::__l2::<lambda_1>::operator()'::__l5::
<lambda_1>::operator()(void *this,UInterchangeBaseNode *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  UClass *pUVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType *pFVar10;
  bool bVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  if (param_1 != (UInterchangeBaseNode *)0x0) {
    pUVar5 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar5->_padding_)) {
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      UInterchangeSceneNode::GetSpecializedTypes((UInterchangeSceneNode *)param_1,&local_38);
      pFVar6 = UE::Interchange::FSceneNodeStaticData::GetJointSpecializeTypeString();
      pFVar9 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
      for (FVar8.Data = local_38.AllocatorInstance.Data; FVar8.Data != pFVar9;
          FVar8.Data = FVar8.Data + 0x10) {
        iVar4 = *(int *)(FVar8.Data + 8);
        iVar1 = (pFVar6->Data).ArrayNum;
        if (iVar4 == iVar1) {
          if (1 < iVar4) {
            iVar4 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar8.Data,
                               (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
            bVar11 = iVar4 == 0;
            goto LAB_14e770703;
          }
LAB_14e770718:
          lVar2 = *(longlong *)this;
          pFVar10 = (ForAnyElementType *)(lVar2 + 0x148);
          pFVar9 = (FScriptContainerElement *)UInterchangeBaseNode::GetUniqueID(param_1,&local_28);
          if (((pFVar10->Data <= pFVar9) &&
              (pFVar9 < pFVar10->Data + (longlong)*(int *)(lVar2 + 0x154) * 0x10)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar4 = *(int *)(lVar2 + 0x150);
          if (iVar4 == *(int *)(lVar2 + 0x154)) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,pFVar10,(int *)(lVar2 + 0x154));
            *(int *)(lVar2 + 0x150) = iVar4 + 1;
          }
          else {
            *(int *)(lVar2 + 0x150) = iVar4 + 1;
          }
          pFVar7 = pFVar10->Data + (longlong)iVar4 * 0x10;
          *(undefined8 *)pFVar7 = 0;
          *(undefined8 *)pFVar7 = *(undefined8 *)pFVar9;
          *(undefined8 *)pFVar9 = 0;
          *(int *)(pFVar7 + 8) = *(int *)(pFVar9 + 8);
          *(int *)(pFVar7 + 0xc) = *(int *)(pFVar9 + 0xc);
          *(undefined8 *)(pFVar9 + 8) = 0;
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          break;
        }
        bVar11 = iVar1 + iVar4 == 1;
LAB_14e770703:
        if (bVar11) goto LAB_14e770718;
      }
      DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 14e771120

void __thiscall
``UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l41::<lambda_3>::operator()'::__l8::
<lambda_1>::operator()(void *this,UInterchangeBaseNode *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FString local_18;
  
  if (param_1 != (UInterchangeBaseNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      pFVar2 = *(ForAnyElementType **)this;
      pFVar7 = (FScriptContainerElement *)UInterchangeBaseNode::GetUniqueID(param_1,&local_18);
      if ((pFVar2->Data <= pFVar7) &&
         ((pFVar7 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar2,piVar1);
        *(int *)&pFVar2[1].Data = iVar5 + 1;
      }
      else {
        *(int *)&pFVar2[1].Data = iVar5 + 1;
      }
      pFVar8 = pFVar2->Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar8 = 0;
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar7;
      *(undefined8 *)pFVar7 = 0;
      *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)(pFVar7 + 8);
      *(undefined4 *)(pFVar8 + 0xc) = *(undefined4 *)(pFVar7 + 0xc);
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 14e774040

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall `GetCollisionMeshType'::__l62::<lambda_2>::operator()(void *this,FString *param_1)

{
  UInterchangeBaseNodeContainer *pUVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  int iVar9;
  UObject *local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pUVar1 = *(UInterchangeBaseNodeContainer **)((longlong)this + 0x10);
  local_res8 = (UObject *)**(undefined8 **)((longlong)this + 8);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  UE::Interchange::Private::GetNodeName
            (&local_18,(TObjectPtr<UInterchangePipelineMeshesUtilities>)&local_res8,pUVar1,param_1);
  iVar4 = *(int *)(*(undefined8 **)this + 1);
  iVar9 = 0;
  if (iVar4 == 0) {
    pwVar8 = L"";
    iVar4 = iVar9;
  }
  else {
    pwVar8 = (wchar_t *)**(undefined8 **)this;
    iVar4 = iVar4 + -1;
  }
  bVar2 = ::FString::StartsWith(&local_18,pwVar8,iVar4,IgnoreCase);
  if (bVar2) {
    iVar4 = *(int *)(*(longlong *)this + 8) + -1;
    if (*(int *)(*(longlong *)this + 8) == 0) {
      iVar4 = iVar9;
    }
    ::FString::RightChop(&local_18,&local_48,iVar4);
    pFVar5 = ::FString::Replace(&local_48,&local_28,L"ncl",L"",IgnoreCase);
    if (&local_48 != pFVar5) {
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_48.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    iVar4 = local_48.Data.ArrayNum + -1;
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    iVar6 = iVar4;
    if (1 < iVar4) {
      iVar6 = 1;
    }
    iVar3 = 0;
    if (0 < iVar6) {
      iVar3 = iVar6;
    }
    ::FString::FString(&local_38,(wchar_t *)(FVar7.Data + ((longlong)iVar4 - (longlong)iVar3) * 2));
    do {
      bVar2 = ::FString::IsNumeric(&local_38);
      if (!bVar2) {
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar7.Data = local_38.Data.AllocatorInstance.Data;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"_");
        if (iVar4 != 0) goto LAB_14e774261;
      }
      iVar4 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar4 = iVar9;
      }
      if (iVar4 < 1) goto LAB_14e774261;
      if (iVar4 + -1 < iVar4) {
        iVar4 = iVar4 + -1;
      }
      iVar6 = iVar9;
      if (0 < iVar4) {
        iVar6 = iVar4;
      }
      ::FString::RemoveAt(&local_48,iVar6,1,No);
      iVar4 = local_48.Data.ArrayNum + -1;
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
      if (local_48.Data.ArrayNum == 0) {
        iVar4 = 0;
        FVar7.Data = (FScriptContainerElement *)L"";
      }
      iVar6 = iVar4;
      if (1 < iVar4) {
        iVar6 = 1;
      }
      iVar3 = iVar9;
      if (0 < iVar6) {
        iVar3 = iVar6;
      }
      ::FString::FString(&local_28,(wchar_t *)(FVar7.Data + ((longlong)iVar4 - (longlong)iVar3) * 2)
                        );
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      local_38.Data.ArrayNum = local_28.Data.ArrayNum;
      local_38.Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    } while( true );
  }
  bVar2 = false;
LAB_14e77428a:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
LAB_14e774261:
  iVar4 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  bVar2 = iVar4 == 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  goto LAB_14e77428a;
}

// `vcall'{152,{flat}}'_}' @ 14e7776c8

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct
   SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
_vcall__152__flat______
          (STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *this
          )

{
                    /* WARNING: Could not recover jumptable at 0x00014e7776cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 14e7776d8

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct
   UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e7776db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14e7776e8

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> >::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *this
          ,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                       *)&this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14e7776fc

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> >::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *
                      )&this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14e777710

/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiColumnTableRow<class TSharedPtr<struct
   SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> >::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
_vector_deleting_destructor__adjustor_8__
          (SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                       *)&this[-1].ColumnIdToSlotContents.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14e777720

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> >::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *this
          ,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                       *)&this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14e777730

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> >::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *
                      )&this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14e777740

/* [thunk]:public: virtual void * __ptr64 __cdecl STreeView<class TSharedPtr<struct
   UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> >::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
_vector_deleting_destructor__adjustor_680__
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *
                      )&this[-1].field_0x858,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14e777754

/* [thunk]:public: virtual void * __ptr64 __cdecl SInterchangeCompareSkeletonTreeViewItem::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SInterchangeCompareSkeletonTreeViewItem::_vector_deleting_destructor__adjustor_8__
          (SInterchangeCompareSkeletonTreeViewItem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SInterchangeCompareSkeletonTreeViewItem *)
                      &this[-1].SkeletonCompareData.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14e777764

/* [thunk]:public: virtual void * __ptr64 __cdecl
   SInterchangeGenericAssetMaterialConflictListRow::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
SInterchangeGenericAssetMaterialConflictListRow::_vector_deleting_destructor__adjustor_8__
          (SInterchangeGenericAssetMaterialConflictListRow *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SInterchangeGenericAssetMaterialConflictListRow *)
                      &this[-1].Item.SharedReferenceCount,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14e777780

void * __thiscall
UE::Slate::ItemsSource::
FArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7777b0

void * __thiscall
UE::Slate::ItemsSource::
FArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7777e0

void * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFListItem_SInterchangeGenericAssetMaterialConflictWidget___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7778a0

void * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777960

void * __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFListItem_SInterchangeGenericAssetMaterialConflictWidget___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7779f0

void * __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777a80

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777ab0

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777ae0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777b10

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777b40

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777b70

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777ba0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777bd0

void * __thiscall
UE::Slate::ItemsSource::
IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777c00

void * __thiscall
UE::Slate::ItemsSource::
IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777c30

void * __thiscall
SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
_scalar_deleting_destructor_
          (SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *this
          ,uint param_1)

{
  ~SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777c90

void * __thiscall
SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
_scalar_deleting_destructor_
          (SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          uint param_1)

{
  ~SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777cf0

void * __thiscall
SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
_scalar_deleting_destructor_
          (SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ColumnIdToSlotContents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnIdToSlotContents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
  ~STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
            ((STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)
             this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777d90

void * __thiscall
STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
_scalar_deleting_destructor_
          (STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *this
          ,uint param_1)

{
  ~STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777df0

void * __thiscall
STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
_scalar_deleting_destructor_
          (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          uint param_1)

{
  ~STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777e50

void * __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
_scalar_deleting_destructor_
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          uint param_1)

{
  ~STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xb00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777eb0

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777ee0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777f10

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777f40

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777f70

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e777fa0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778000

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778060

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7780c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778120

void * __thiscall
TBaseSPMethodDelegateInstance<1,SInterchangeGenericAssetSkeletonConflictWidget_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,enum_EInterchangeSkeletonCompareSection>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778180

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7781e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778240

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7782a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetMaterialConflictWidget,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetMaterialConflictWidget,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778300

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetMaterialConflictWidget,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetMaterialConflictWidget,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778360

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,enum_EInterchangeSkeletonCompareSection>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7783c0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778420

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FString,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FString,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778480

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7784e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,enum_EInterchangeSkeletonCompareSection>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778540

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7785a0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7785d0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778600

void * __thiscall
TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,enum_EInterchangeSkeletonCompareSection>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778630

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778660

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778690

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,enum_EInterchangeSkeletonCompareSection>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7786c0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7786f0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778720

void * __thiscall
TCommonDelegateInstanceState<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,enum_EInterchangeSkeletonCompareSection>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778750

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778780

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7787b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7787e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGenericMaterialPipeline::HandlePhongModel'::__l6::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UInterchangeGenericMaterialPipeline::HandlePhongModel'::`6'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7788a0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7788e0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778920

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778960

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7789a0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7789e0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778a20

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778a60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SInterchangeCompareSkeletonTreeViewItem,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SInterchangeCompareSkeletonTreeViewItem,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x418);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778aa0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SInterchangeGenericAssetMaterialConflictListRow,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SInterchangeGenericAssetMaterialConflictListRow,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x478);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778ae0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SInterchangeGenericAssetMaterialConflictWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SInterchangeGenericAssetMaterialConflictWidget,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,800);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778b20

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SInterchangeGenericAssetSkeletonConflictWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SInterchangeGenericAssetSkeletonConflictWidget,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778b60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778ba0

void * __thiscall
TTableViewMetadata<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778c10

void * __thiscall
TTableViewMetadata<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778c80

void * __thiscall
SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
FSlateAccessibleListView::_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778cc0

void * __thiscall
SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
FSlateAccessibleListView::_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778d00

void * __thiscall
STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
FSlateAccessibleTableRow::_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778d40

void * __thiscall
STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
FSlateAccessibleTableRow::_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778d80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SInterchangeBaseConflictWidget::_scalar_deleting_destructor_
          (SInterchangeBaseConflictWidget *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetWindow).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778df0

void * __thiscall
SInterchangeCompareSkeletonTreeViewItem::_scalar_deleting_destructor_
          (SInterchangeCompareSkeletonTreeViewItem *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SkeletonCompareData).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
  ~STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
            ((STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778e60

void * __thiscall
SInterchangeGenericAssetMaterialConflictListRow::_scalar_deleting_destructor_
          (SInterchangeGenericAssetMaterialConflictListRow *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Item).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
  ~STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
            ((STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)
             this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x468);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778f10

void * __thiscall
SInterchangeGenericAssetMaterialConflictWidget::_scalar_deleting_destructor_
          (SInterchangeGenericAssetMaterialConflictWidget *this,uint param_1)

{
  ~SInterchangeGenericAssetMaterialConflictWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778f70

void * __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::_scalar_deleting_destructor_
          (SInterchangeGenericAssetSkeletonConflictWidget *this,uint param_1)

{
  ~SInterchangeGenericAssetSkeletonConflictWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e778fd0

void * __thiscall
SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
SListViewPinnedRowWidget::_scalar_deleting_destructor_(SListViewPinnedRowWidget *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinnedItemRow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwnerListView).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e779040

void * __thiscall
UGLTFPipelineSettings::_scalar_deleting_destructor_(UGLTFPipelineSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UGLTFPipelineSettings__6B_;
  *(undefined4 *)&(this->MaterialParents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MaterialParents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialParents);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7790e0

void * __thiscall
UInterchangeGLTFPipeline::_scalar_deleting_destructor_(UInterchangeGLTFPipeline *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGLTFPipeline__6B_;
  pFVar1 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e779160

void * __thiscall
UInterchangeGenericAnimationPipeline::_scalar_deleting_destructor_
          (UInterchangeGenericAnimationPipeline *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericAnimationPipeline__6B_;
  pFVar1 = (this->SourceDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceAnimationName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->MaterialCurveSuffixes).AllocatorInstance.Data,
             (this->MaterialCurveSuffixes).ArrayNum);
  pFVar1 = (this->MaterialCurveSuffixes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e779210

void * __thiscall
UInterchangeGenericAssetsPipeline::_scalar_deleting_destructor_
          (UInterchangeGenericAssetsPipeline *this,uint param_1)

{
  ITextData *pIVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericAssetsPipeline__6B_;
  pIVar1 = (this->SkeletonConflictData).DialogTitle.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  *(undefined4 *)&(this->SkeletonConflictData).Joints.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SkeletonConflictData).Joints.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SkeletonConflictData).Joints);
  FMaterialConflictData::~FMaterialConflictData(&this->MaterialConflictData);
  pFVar3 = (this->ContentPathExistingSkeleton).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SceneNameFolderPrefix).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AssetName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e779310

void * __thiscall
UInterchangeGenericAudioPipeline::_scalar_deleting_destructor_
          (UInterchangeGenericAudioPipeline *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericAudioPipeline__6B_;
  pFVar1 = (this->SoundWaveFactoryNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SoundWaveNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7793c0

void * __thiscall
UInterchangeGenericCommonMeshesProperties::_scalar_deleting_destructor_
          (UInterchangeGenericCommonMeshesProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UInterchangeGenericCommonMeshesProperties__6B_;
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e779420

void * __thiscall
UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::_scalar_deleting_destructor_
          (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties__6B_;
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e779480

void * __thiscall
UInterchangeGenericGroomPipeline::_scalar_deleting_destructor_
          (UInterchangeGenericGroomPipeline *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericGroomPipeline__6B_;
  pFVar1 = (this->GroomAsset).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e779510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UInterchangeGenericLevelPipeline::_scalar_deleting_destructor_
          (UInterchangeGenericLevelPipeline *this,uint param_1)

{
  FPreviewScene *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericLevelPipeline__6B_;
  pFVar1 = this->PreviewScene;
  if (pFVar1 != (FPreviewScene *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->PreviewScene = (FPreviewScene *)0x0;
  }
  DestructItems<FString,int>
            ((FString *)(this->Cached_ActiveJointUids).AllocatorInstance.Data,
             (this->Cached_ActiveJointUids).ArrayNum);
  pFVar2 = (this->Cached_ActiveJointUids).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7795d0

void * __thiscall
UInterchangeGenericMaterialPipeline::_scalar_deleting_destructor_
          (UInterchangeGenericMaterialPipeline *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericMaterialPipeline__6B_;
  DestructItems<UInterchangeGenericMaterialPipeline::FMaterialExpressionCreationContext,int>
            ((FMaterialExpressionCreationContext *)
             (this->MaterialExpressionCreationContextStack).AllocatorInstance.Data,
             (this->MaterialExpressionCreationContextStack).ArrayNum);
  pFVar1 = (this->MaterialExpressionCreationContextStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentMaterial).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7796a0

void * __thiscall
UInterchangeGenericMeshPipeline::_scalar_deleting_destructor_
          (UInterchangeGenericMeshPipeline *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericMeshPipeline__6B_;
  pFVar1 = (this->SourceDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GeometryCacheFactoryNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticMeshFactoryNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkeletalMeshFactoryNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkeletonFactoryNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeMeshFactoryNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeMeshFactoryNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeMeshFactoryNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AssemblyPartMeshUidToFactoryNodeTable);
  pFVar1 = (this->LODScreenSizes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x298);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7797a0

void * __thiscall
UInterchangeGenericTexturePipeline::_scalar_deleting_destructor_
          (UInterchangeGenericTexturePipeline *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericTexturePipeline__6B_;
  pFVar1 = (this->TextureFactoryNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e779860

void * __thiscall
UInterchangeMaterialXPipeline::_scalar_deleting_destructor_
          (UInterchangeMaterialXPipeline *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UInterchangeMaterialXPipeline__6B_;
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7798c0

void * __thiscall
UInterchangePipelineMeshesUtilities::_scalar_deleting_destructor_
          (UInterchangePipelineMeshesUtilities *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInterchangePipelineMeshesUtilities__6B_;
  (this->AssemblyMeshUids).HashSize = 0;
  FVar1 = (this->AssemblyMeshUids).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AssemblyMeshUids).Elements);
  *(undefined4 *)&(this->SkeletonRootUidPerMeshUid).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SkeletonRootUidPerMeshUid).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkeletonRootUidPerMeshUid);
  *(undefined4 *)&(this->MeshInstancesPerMeshInstanceUid).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MeshInstancesPerMeshInstanceUid).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshInstancesPerMeshInstanceUid);
  *(undefined4 *)&(this->MeshGeometriesPerMeshUid).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MeshGeometriesPerMeshUid).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeMeshGeometry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshGeometriesPerMeshUid);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x178);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7799b0

void * __thiscall
UInterchangeSparseVolumeTexturePipeline::_scalar_deleting_destructor_
          (UInterchangeSparseVolumeTexturePipeline *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeSparseVolumeTexturePipeline__6B_;
  pFVar1 = (this->AssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e779a40

void * __thiscall
UMaterialXPipelineSettings::_scalar_deleting_destructor_
          (UMaterialXPipelineSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMaterialXPipelineSettings__6B_;
  *(undefined4 *)&(this->PredefinedVDF).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PredefinedVDF).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXVDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXVDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PredefinedVDF);
  *(undefined4 *)&(this->PredefinedEDF).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PredefinedEDF).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXEDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXEDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PredefinedEDF);
  *(undefined4 *)&(this->PredefinedBSDF).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PredefinedBSDF).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXBSDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXBSDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PredefinedBSDF);
  *(undefined4 *)&(this->PredefinedSurfaceShaders).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PredefinedSurfaceShaders).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXShaders,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXShaders,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PredefinedSurfaceShaders);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x178);
    }
  }
  return this;
}

// BuildMeshToCollisionMeshMap @ 14e782050

void __cdecl
BuildMeshToCollisionMeshMap
          (TObjectPtr<UInterchangePipelineMeshesUtilities> param_1,
          UInterchangeBaseNodeContainer *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_4,bool param_5)

{
  int iVar1;
  ForAnyElementType FVar2;
  undefined8 _Src;
  uint uVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  UObject *local_res18;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_res20;
  FString local_68;
  undefined1 local_58 [32];
  
  iVar1 = param_3->ArrayNum;
  pFVar7 = (param_3->AllocatorInstance).Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
  local_res20 = param_4;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (pFVar7 == pFVar6) break;
    local_res18 = *(UObject **)param_1.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    GetCollisionMeshType
              ((TTuple<EInterchangeMeshCollision,FString> *)local_58,
               (TObjectPtr<UInterchangePipelineMeshesUtilities>)&local_res18,param_2,
               (FString *)pFVar7,param_3,param_5);
    _Src = local_58._8_8_;
    if (local_58[0] != -1) {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar5 = (int)local_58._16_8_;
      local_68.Data.ArrayNum = iVar5;
      if (iVar5 == 0) {
        local_68.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,(ForAnyElementType *)&local_68,iVar5,&local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,(void *)_Src,(longlong)iVar5 * 2);
      }
      iVar5 = local_68.Data.ArrayNum + -1;
      FVar2.Data = local_68.Data.AllocatorInstance.Data;
      if (local_68.Data.ArrayNum == 0) {
        iVar5 = 0;
        FVar2.Data = (FScriptContainerElement *)L"";
      }
      uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
      pTVar4 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
               ::FindOrAddImpl<FString>
                         ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                           *)local_res20,uVar3,&local_68);
      iVar5 = pTVar4->ArrayNum;
      if (iVar5 == pTVar4->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
      }
      pTVar4->ArrayNum = iVar5 + 1;
      FString::FString((FString *)((pTVar4->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                       (FString *)pFVar7);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if ((void *)local_58._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58._8_8_);
    }
    pFVar7 = pFVar7 + 0x10;
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeGenericAnimationPipeline @ 14e7a1660

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeGenericAnimationPipeline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeGenericAssetsPipeline @ 14e7a1670

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeGenericAssetsPipeline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeGenericAssetsPipelineSharedSettings @ 14e7a1680

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeGenericAssetsPipelineSharedSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeGenericAudioPipeline @ 14e7a1690

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeGenericAudioPipeline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeGenericGroomPipeline @ 14e7a16a0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeGenericGroomPipeline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeGenericMaterialPipeline @ 14e7a16b0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeGenericMaterialPipeline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeGenericMeshPipeline @ 14e7a16c0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeGenericMeshPipeline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeGenericScenesPipeline @ 14e7a16d0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeGenericScenesPipeline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeGenericTexturePipeline @ 14e7a16e0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeGenericTexturePipeline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeMaterialXPipeline @ 14e7a16f0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeMaterialXPipeline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangePipelineMeshesUtilities @ 14e7a1700

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangePipelineMeshesUtilities(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangePipelines_init @ 14e7a1710

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangePipelines_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeSparseVolumeTexturePipeline @ 14e7a1720

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeSparseVolumeTexturePipeline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeglTFPipeline @ 14e7a1730

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeglTFPipeline(void)

{
  return;
}

// GetCollisionMeshType @ 14e7b5690

TTuple<EInterchangeMeshCollision,FString> * __cdecl
GetCollisionMeshType
          (TTuple<EInterchangeMeshCollision,FString> *__return_storage_ptr__,
          TObjectPtr<UInterchangePipelineMeshesUtilities> param_1,
          UInterchangeBaseNodeContainer *param_2,FString *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  UInterchangeSceneNode *this;
  UClass *pUVar3;
  UInterchangeSceneNode *pUVar4;
  TTuple<EInterchangeMeshCollision,FString> *pTVar5;
  FString *pFVar6;
  int iVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  EInterchangeMeshCollision local_198 [8];
  FString local_190;
  FString local_180;
  FString local_168;
  undefined1 local_158 [16];
  UInterchangeBaseNodeContainer *local_148;
  FString local_138;
  FString local_128;
  UObject *local_118;
  FString local_110;
  FString local_100;
  TObjectPtr<UInterchangePipelineMeshesUtilities>_u_0 local_f0;
  UInterchangeBaseNodeContainer *local_e8;
  FString local_e0;
  TObjectPtr<UInterchangePipelineMeshesUtilities>_u_0 local_d0;
  UInterchangeBaseNodeContainer *local_c8;
  FString local_c0;
  FScriptContainerElement *local_a8;
  TObjectPtr<UInterchangePipelineMeshesUtilities>_u_0 TStack_a0;
  UInterchangeBaseNodeContainer *local_98;
  FScriptContainerElement *local_88;
  TObjectPtr<UInterchangePipelineMeshesUtilities>_u_0 TStack_80;
  UInterchangeBaseNodeContainer *local_78;
  FString local_68;
  TObjectPtr<UInterchangePipelineMeshesUtilities>_u_0 local_58;
  UInterchangeBaseNodeContainer *local_50;
  FString local_48;
  TObjectPtr<UInterchangePipelineMeshesUtilities>_u_0 local_38;
  UInterchangeBaseNodeContainer *local_30;
  
  local_198[0] = None;
  this = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(param_2,param_3);
  if (this == (UInterchangeSceneNode *)0x0) {
LAB_14e7b570b:
    pUVar4 = (UInterchangeSceneNode *)0x0;
    if (this != (UInterchangeSceneNode *)0x0) {
      pUVar3 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
      iVar7 = (int)pUVar3->_padding_;
      if ((iVar7 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar7 * 8)
          == &pUVar3->_padding_)) {
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.Data.ArrayNum = 0;
        local_138.Data.ArrayMax = 0;
        bVar2 = UInterchangeSceneNode::GetCustomAssetInstanceUid(this,&local_138);
        if (bVar2) {
          pUVar4 = (UInterchangeSceneNode *)
                   UInterchangeBaseNodeContainer::GetNode(param_2,&local_138);
          if (pUVar4 != (UInterchangeSceneNode *)0x0) {
            pUVar3 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
            iVar7 = (int)pUVar3->_padding_;
            if ((iVar7 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
                &pUVar3->_padding_)) goto LAB_14e7b5795;
          }
          pUVar4 = (UInterchangeSceneNode *)0x0;
        }
LAB_14e7b5795:
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        this = pUVar4;
        if (pUVar4 != (UInterchangeSceneNode *)0x0) goto LAB_14e7b57a8;
      }
    }
  }
  else {
    pUVar3 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
    iVar7 = (int)pUVar3->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar3->_padding_)) goto LAB_14e7b570b;
LAB_14e7b57a8:
    bVar2 = UInterchangeMeshNode::GetCustomCollisionType((UInterchangeMeshNode *)this,local_198);
    if ((bVar2) && (local_198[0] != None)) {
      *(EInterchangeMeshCollision *)__return_storage_ptr__ = local_198[0];
      FString::FString((FString *)&__return_storage_ptr__->field_0x8,param_3);
      return __return_storage_ptr__;
    }
  }
  if (param_5) {
    local_118 = *(UObject **)param_1.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_118 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_118);
    }
    UE::Interchange::Private::GetNodeName
              (&local_190,(TObjectPtr<UInterchangePipelineMeshesUtilities>)&local_118,param_2,
               param_3);
    bVar2 = FString::StartsWith(&local_190,L"UBX_",4,IgnoreCase);
    if (bVar2) {
      local_198[0] = Box;
LAB_14e7b58eb:
      for (FVar8.Data = local_190.Data.AllocatorInstance.Data;
          FVar8.Data !=
          local_190.Data.AllocatorInstance.Data + (longlong)local_190.Data.ArrayNum * 2;
          FVar8.Data = FVar8.Data + 2) {
        if (*(short *)FVar8.Data == 0x5f) {
          iVar7 = (int)((longlong)FVar8.Data - (longlong)local_190.Data.AllocatorInstance.Data >> 1)
          ;
          if (iVar7 == -1) goto LAB_14e7b5919;
          goto LAB_14e7b5944;
        }
      }
      iVar7 = -1;
LAB_14e7b5919:
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("MeshName.FindChar(L\'_\', FirstUnderscore)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericStaticMeshPipeline.cpp"
                         ,0x89,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TTuple<EInterchangeMeshCollision,FString> *)(*pcVar1)();
        return pTVar5;
      }
LAB_14e7b5944:
      pFVar10 = local_190.Data.AllocatorInstance.Data + (longlong)local_190.Data.ArrayNum * 2;
      do {
        if (pFVar10 == local_190.Data.AllocatorInstance.Data) {
          iVar9 = -1;
          goto LAB_14e7b5966;
        }
        pFVar10 = pFVar10 + -2;
      } while (*(short *)pFVar10 != 0x5f);
      iVar9 = (int)((longlong)pFVar10 - (longlong)local_190.Data.AllocatorInstance.Data >> 1);
      if (iVar9 == -1) {
LAB_14e7b5966:
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("MeshName.FindLastChar(L\'_\', LastUnderscore)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericStaticMeshPipeline.cpp"
                           ,0x8c,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TTuple<EInterchangeMeshCollision,FString> *)(*pcVar1)();
          return pTVar5;
        }
      }
      FString::RightChop(&local_190,&local_128,iVar7 + 1);
      FVar8.Data = local_128.Data.AllocatorInstance.Data;
      local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.Data.ArrayNum = local_128.Data.ArrayNum;
      if (local_128.Data.ArrayNum == 0) {
        local_168.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_128.Data.ArrayNum,0,(ForAnyElementType *)&local_168,
                   local_128.Data.ArrayNum,&local_168.Data.ArrayMax);
        memcpy(local_168.Data.AllocatorInstance.Data,FVar8.Data,
               (longlong)local_128.Data.ArrayNum * 2);
      }
      FString::FString(&local_100,&local_168);
      local_f0 = param_1.field0_0x0;
      local_e8 = param_2;
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      FString::FString(&local_68,&local_100);
      local_58.DebugPtr = local_f0.DebugPtr;
      local_50 = local_e8;
      pFVar6 = TArray<FString,TSizedDefaultAllocator<32>_>::
               FindByPredicate<__GetCollisionMeshType_::__l20::<lambda_1>::operator()_::__l2::<lambda_1>_>
                         (param_4,&local_68);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (pFVar6 == (FString *)0x0) {
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (iVar7 != iVar9) {
          FString::Mid(&local_190,&local_110,iVar7 + 1,(iVar9 - iVar7) + -1);
          pFVar6 = FString::FString((FString *)local_158,&local_110);
          FString::FString(&local_e0,pFVar6);
          pFVar10 = (pFVar6->Data).AllocatorInstance.Data;
          local_d0 = param_1.field0_0x0;
          local_c8 = param_2;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          FString::FString(&local_48,&local_e0);
          local_38.DebugPtr = local_d0.DebugPtr;
          local_30 = local_c8;
          pFVar6 = TArray<FString,TSizedDefaultAllocator<32>_>::
                   FindByPredicate<__GetCollisionMeshType_::__l20::<lambda_1>::operator()_::__l2::<lambda_1>_>
                             (param_4,&local_48);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (pFVar6 != (FString *)0x0) {
            *(EInterchangeMeshCollision *)__return_storage_ptr__ = local_198[0];
            FString::FString((FString *)&__return_storage_ptr__->field_0x8,pFVar6);
            local_128.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
            goto LAB_14e7b5d07;
          }
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
        }
        FString::RightChop(&local_190,&local_180,iVar7 + 1);
        pFVar10 = (param_4->AllocatorInstance).Data;
        local_158._0_8_ = &local_180;
        pFVar11 = pFVar10 + (longlong)param_4->ArrayNum * 0x10;
        local_a8 = (FScriptContainerElement *)local_158._0_8_;
        local_158._8_8_ = param_1.field0_0x0;
        TStack_a0 = param_1.field0_0x0;
        local_148 = param_2;
        local_98 = param_2;
        for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 0x10) {
          bVar2 = `GetCollisionMeshType'::__l62::<lambda_2>::operator()
                            (&local_a8,(FString *)pFVar10);
          if (bVar2) {
            if (pFVar10 != (FScriptContainerElement *)0x0) goto LAB_14e7b5cee;
            break;
          }
        }
        pFVar6 = FString::Mid(&local_190,&local_c0,iVar7 + 1,(iVar9 - iVar7) + -1);
        if (&local_180 != pFVar6) {
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          local_180.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_180.Data.ArrayNum = (pFVar6->Data).ArrayNum;
          local_180.Data.ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        pFVar10 = (param_4->AllocatorInstance).Data;
        local_158._0_8_ = &local_180;
        pFVar11 = pFVar10 + (longlong)param_4->ArrayNum * 0x10;
        local_88 = (FScriptContainerElement *)local_158._0_8_;
        local_158._8_8_ = param_1.field0_0x0;
        TStack_80 = param_1.field0_0x0;
        local_148 = param_2;
        local_78 = param_2;
        for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 0x10) {
          bVar2 = `GetCollisionMeshType'::__l62::<lambda_2>::operator()
                            (&local_88,(FString *)pFVar10);
          if (bVar2) {
            if (pFVar10 != (FScriptContainerElement *)0x0) goto LAB_14e7b5cee;
            break;
          }
        }
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7b5d24;
      }
      *(EInterchangeMeshCollision *)__return_storage_ptr__ = local_198[0];
      FString::FString((FString *)&__return_storage_ptr__->field_0x8,pFVar6);
LAB_14e7b5d07:
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar2 = FString::StartsWith(&local_190,L"UCX_",4,IgnoreCase);
      if ((bVar2) || (bVar2 = FString::StartsWith(&local_190,L"MCDCX_",6,IgnoreCase), bVar2)) {
        local_198[0] = Convex18DOP;
        goto LAB_14e7b58eb;
      }
      bVar2 = FString::StartsWith(&local_190,L"USP_",4,IgnoreCase);
      if (bVar2) {
        local_198[0] = Sphere;
        goto LAB_14e7b58eb;
      }
      bVar2 = FString::StartsWith(&local_190,L"UCP_",4,IgnoreCase);
      if (bVar2) {
        local_198[0] = Capsule;
        goto LAB_14e7b58eb;
      }
      *(undefined1 *)__return_storage_ptr__ = 0xff;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    }
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  else {
LAB_14e7b5d24:
    *(undefined1 *)__return_storage_ptr__ = 0xff;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  return __return_storage_ptr__;
LAB_14e7b5cee:
  *(EInterchangeMeshCollision *)__return_storage_ptr__ = local_198[0];
  FString::FString((FString *)&__return_storage_ptr__->field_0x8,(FString *)pFVar10);
  local_128.Data.AllocatorInstance.Data = local_180.Data.AllocatorInstance.Data;
  goto LAB_14e7b5d07;
}

// GetTypeHash @ 14e7bb230

uint __cdecl
GetTypeHash(TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
            param_1)

{
  byte bVar1;
  TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
  *pTVar2;
  undefined6 in_register_0000000a;
  TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
  *pTVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_18 [24];
  
  pTVar2 = TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>
           ::
           TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>
                     (local_18,(TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
                                *)CONCAT62(in_register_0000000a,param_1));
  bVar1 = pTVar2->TypeIndex;
  pTVar3 = pTVar2;
  if ((((bVar1 != 1) && (bVar1 != 2)) && (bVar1 != 3)) &&
     (pTVar3 = (TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
                *)0x0, bVar1 == 0)) {
    pTVar3 = pTVar2;
  }
  iVar4 = (uint)bVar1 - (uint)(byte)pTVar3->_padding_;
  uVar6 = 0x9e3779b9 - bVar1 ^ iVar4 * 0x100;
  uVar7 = ((byte)pTVar3->_padding_ - uVar6) - iVar4 ^ uVar6 >> 0xd;
  uVar5 = (iVar4 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 10;
  return (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xf;
}

// IsSceneNodeASocket @ 14e7c7210

bool __cdecl IsSceneNodeASocket(UInterchangeSceneNode *param_1)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  FString local_18;
  
  UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_18);
  pFVar3 = UInterchangeMeshFactoryNode::GetMeshSocketPrefix();
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  bVar2 = FString::StartsWith(&local_18,pwVar4,iVar5,IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// LexToString @ 14e7c9720

FString * __cdecl LexToString(FString *__return_storage_ptr__,EMaterialInputType param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (param_1 == Unknown) {
    FString::FString(__return_storage_ptr__,L"Unknown");
    return __return_storage_ptr__;
  }
  if (param_1 == Color) {
    FString::FString(__return_storage_ptr__,L"Color");
    return __return_storage_ptr__;
  }
  if (param_1 == Vector) {
    FString::FString(__return_storage_ptr__,L"Vector");
    return __return_storage_ptr__;
  }
  if (param_1 != Scalar) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5102957597653204891>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMaterialPipeline.cpp"
                       ,0x65,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  FString::FString(__return_storage_ptr__,L"Scalar");
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UGLTFPipelineSettings_NoRegister @ 14e7e9b90

UClass * __cdecl Z_Construct_UClass_UGLTFPipelineSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFPipelineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"GLTFPipelineSettings",
               &Z_Registration_Info_UClass_UGLTFPipelineSettings.InnerSingleton,
               UGLTFPipelineSettings::StaticRegisterNativesUGLTFPipelineSettings,0x90,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Interchange",
               InternalConstructor<UGLTFPipelineSettings>,
               InternalVTableHelperCtorCaller<UGLTFPipelineSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFPipelineSettings.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeGLTFPipeline_NoRegister @ 14e7e9c50

UClass * __cdecl Z_Construct_UClass_UInterchangeGLTFPipeline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGLTFPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGLTFPipeline",
               &Z_Registration_Info_UClass_UInterchangeGLTFPipeline.InnerSingleton,
               UInterchangeGLTFPipeline::StaticRegisterNativesUInterchangeGLTFPipeline,0x140,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeGLTFPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGLTFPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGLTFPipeline.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeGenericAssetsPipeline_NoRegister @ 14e7e9d10

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericAssetsPipeline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericAssetsPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.InnerSingleton,
               UInterchangeGenericAssetsPipeline::
               StaticRegisterNativesUInterchangeGenericAssetsPipeline,0x2c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericAssetsPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericAssetsPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeGenericAudioPipeline_NoRegister @ 14e7e9dd0

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericAudioPipeline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericAudioPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericAudioPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericAudioPipeline.InnerSingleton,
               UInterchangeGenericAudioPipeline::
               StaticRegisterNativesUInterchangeGenericAudioPipeline,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericAudioPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericAudioPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericAudioPipeline.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeGenericLevelPipeline_NoRegister @ 14e7e9e90

UClass * __cdecl Z_Construct_UClass_UInterchangeGenericLevelPipeline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericLevelPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.InnerSingleton,
               UInterchangeGenericLevelPipeline::
               StaticRegisterNativesUInterchangeGenericLevelPipeline,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericLevelPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericLevelPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeMaterialXPipeline_NoRegister @ 14e7e9f50

UClass * __cdecl Z_Construct_UClass_UInterchangeMaterialXPipeline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeMaterialXPipeline",
               &Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.InnerSingleton,
               UInterchangeMaterialXPipeline::StaticRegisterNativesUInterchangeMaterialXPipeline,
               0x138,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Interchange",
               InternalConstructor<UInterchangeMaterialXPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialXPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.InnerSingleton;
}

// Z_Construct_UClass_UMaterialXPipelineSettings_NoRegister @ 14e7ea010

UClass * __cdecl Z_Construct_UClass_UMaterialXPipelineSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialXPipelineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"MaterialXPipelineSettings",
               &Z_Registration_Info_UClass_UMaterialXPipelineSettings.InnerSingleton,
               UMaterialXPipelineSettings::StaticRegisterNativesUMaterialXPipelineSettings,0x178,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Interchange",
               InternalConstructor<UMaterialXPipelineSettings>,
               InternalVTableHelperCtorCaller<UMaterialXPipelineSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialXPipelineSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_InterchangePipelines @ 14e7eb570

void __cdecl IMPLEMENT_MODULE_InterchangePipelines(void)

{
  return;
}

// ExpectedMaterialInstanceIdentifiers'' @ 15046a700

void __cdecl
`dynamic_atexit_destructor_for_'UGLTFPipelineSettings::ExpectedMaterialInstanceIdentifiers__(void)

{
  DestructItems<FString,int>
            ((FString *)
             UGLTFPipelineSettings::ExpectedMaterialInstanceIdentifiers.AllocatorInstance.Data,
             UGLTFPipelineSettings::ExpectedMaterialInstanceIdentifiers.ArrayNum);
  if (UGLTFPipelineSettings::ExpectedMaterialInstanceIdentifiers.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(UGLTFPipelineSettings::ExpectedMaterialInstanceIdentifiers.AllocatorInstance.Data)
    ;
    return;
  }
  return;
}

// PathToEnumMapping'' @ 15046a740

void __cdecl
`dynamic_atexit_destructor_for_'UInterchangeMaterialXPipeline::PathToEnumMapping__(void)

{
  UInterchangeMaterialXPipeline::PathToEnumMapping._72_4_ = 0;
  if (UInterchangeMaterialXPipeline::PathToEnumMapping._64_8_ != 0) {
    FMemory::Free((void *)UInterchangeMaterialXPipeline::PathToEnumMapping._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&UInterchangeMaterialXPipeline::PathToEnumMapping);
  return;
}

// `dynamic_atexit_destructor_for_'AlphaCutoff'' @ 15046a780

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AlphaCutoff__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AlphaCutoff.Data.AllocatorInstance.Data;
  if (AlphaCutoff.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AlphaCutoff.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AlphaMode'' @ 15046a7a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AlphaMode__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AlphaMode.Data.AllocatorInstance.Data;
  if (AlphaMode.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AlphaMode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AnisotropyRotation'' @ 15046a7c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyRotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyRotation.Data.AllocatorInstance.Data;
  if (AnisotropyRotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyRotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AnisotropyStrength'' @ 15046a7e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyStrength__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyStrength.Data.AllocatorInstance.Data;
  if (AnisotropyStrength.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyStrength.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AnisotropyTexture'' @ 15046a800

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture.Data.AllocatorInstance.Data;
  if (AnisotropyTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AnisotropyTexture_OffsetScale'' @ 15046a820

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__AnisotropyTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AnisotropyTexture_Offset_X'' @ 15046a840

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_Offset_X.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AnisotropyTexture_Offset_Y'' @ 15046a860

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AnisotropyTexture_Rotation'' @ 15046a880

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_Rotation.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AnisotropyTexture_Scale_X'' @ 15046a8a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_Scale_X.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AnisotropyTexture_Scale_Y'' @ 15046a8c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AnisotropyTexture_TexCoord'' @ 15046a8e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_TexCoord.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AnisotropyTexture_TilingMethod'' @ 15046a900

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__AnisotropyTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (AnisotropyTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'AttributeChannelSetters'' @ 15046a920

void __cdecl
`UE::Interchange::Private::SetupDefaultOpenVDBGridAssignment'::__l2::
_dynamic_atexit_destructor_for__AttributeChannelSetters__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AttributeChannelSetters.AllocatorInstance.Data;
  if (AttributeChannelSetters.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AttributeChannelSetters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BakeMeshes'' @ 15046a940

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_atexit_destructor_for__BakeMeshes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BakeMeshes.Data.AllocatorInstance.Data;
  if (BakeMeshes.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BakeMeshes.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseColorFactor'' @ 15046a960

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorFactor.Data.AllocatorInstance.Data;
  if (BaseColorFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseColorFactor_A'' @ 15046a980

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorFactor_A__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorFactor_A.Data.AllocatorInstance.Data;
  if (BaseColorFactor_A.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorFactor_A.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseColorFactor_RGB'' @ 15046a9a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorFactor_RGB__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorFactor_RGB.Data.AllocatorInstance.Data;
  if (BaseColorFactor_RGB.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorFactor_RGB.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseColorTexture'' @ 15046a9c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture.Data.AllocatorInstance.Data;
  if (BaseColorTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseColorTexture_OffsetScale'' @ 15046a9e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__BaseColorTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (BaseColorTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseColorTexture_Offset_X'' @ 15046aa00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_Offset_X.Data.AllocatorInstance.Data;
  if (BaseColorTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseColorTexture_Offset_Y'' @ 15046aa20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (BaseColorTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseColorTexture_Rotation'' @ 15046aa40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_Rotation.Data.AllocatorInstance.Data;
  if (BaseColorTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseColorTexture_Scale_X'' @ 15046aa60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_Scale_X.Data.AllocatorInstance.Data;
  if (BaseColorTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseColorTexture_Scale_Y'' @ 15046aa80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (BaseColorTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseColorTexture_TexCoord'' @ 15046aaa0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_TexCoord.Data.AllocatorInstance.Data;
  if (BaseColorTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BaseColorTexture_TilingMethod'' @ 15046aac0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__BaseColorTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (BaseColorTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatFactor'' @ 15046aae0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatFactor.Data.AllocatorInstance.Data;
  if (ClearCoatFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatNormalScale'' @ 15046ab00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatNormalScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalScale.Data.AllocatorInstance.Data;
  if (ClearCoatNormalScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatNormalScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture'' @ 15046ab20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatNormalTexture__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatNormalTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_OffsetScale'' @ 15046ab40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_OffsetScale.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatNormalTexture_OffsetScale.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_Offset_X'' @ 15046ab60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_Offset_X.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (ClearCoatNormalTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_Offset_Y'' @ 15046ab80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (ClearCoatNormalTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_Rotation'' @ 15046aba0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_Rotation.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (ClearCoatNormalTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_Scale_X'' @ 15046abc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_Scale_X.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (ClearCoatNormalTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_Scale_Y'' @ 15046abe0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (ClearCoatNormalTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_TexCoord'' @ 15046ac00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_TexCoord.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (ClearCoatNormalTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_TilingMethod'' @ 15046ac20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_TilingMethod.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatNormalTexture_TilingMethod.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessFactor'' @ 15046ac40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatRoughnessFactor__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessFactor.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture'' @ 15046ac60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_OffsetScale'' @ 15046ac80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_Offset_X'' @ 15046aca0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_Offset_X.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_Offset_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_Offset_X.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_Offset_Y'' @ 15046acc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_Rotation'' @ 15046ace0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_Rotation.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_Rotation.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_Rotation.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_Scale_X'' @ 15046ad00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_Scale_X.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_Scale_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_Scale_X.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_Scale_Y'' @ 15046ad20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_TexCoord'' @ 15046ad40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_TexCoord.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_TexCoord.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_TexCoord.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_TilingMethod'' @ 15046ad60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'ClearCoatTexture'' @ 15046ad80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture.Data.AllocatorInstance.Data;
  if (ClearCoatTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatTexture_OffsetScale'' @ 15046ada0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatTexture_Offset_X'' @ 15046adc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_Offset_X.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatTexture_Offset_Y'' @ 15046ade0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatTexture_Rotation'' @ 15046ae00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_Rotation.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatTexture_Scale_X'' @ 15046ae20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_Scale_X.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatTexture_Scale_Y'' @ 15046ae40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatTexture_TexCoord'' @ 15046ae60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_TexCoord.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ClearCoatTexture_TilingMethod'' @ 15046ae80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Color_A'' @ 15046aea0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__Color_A__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Color_A.Data.AllocatorInstance.Data;
  if (Color_A.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Color_A.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Color_RGB'' @ 15046aec0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__Color_RGB__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Color_RGB.Data.AllocatorInstance.Data;
  if (Color_RGB.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Color_RGB.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ConvertedFromRigidAnimationPrefixIdentifier'' @ 15046aee0

void __cdecl
UE::Interchange::Private::
_dynamic_atexit_destructor_for__ConvertedFromRigidAnimationPrefixIdentifier__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ConvertedFromRigidAnimationPrefixIdentifier.Data.AllocatorInstance.Data;
  if (ConvertedFromRigidAnimationPrefixIdentifier.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ConvertedFromRigidAnimationPrefixIdentifier.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'DensityGridName'' @ 15046af00

void __cdecl UE::Interchange::Volume::_dynamic_atexit_destructor_for__DensityGridName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DensityGridName.Data.AllocatorInstance.Data;
  if (DensityGridName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DensityGridName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DiffuseFactor'' @ 15046af20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseFactor.Data.AllocatorInstance.Data;
  if (DiffuseFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DiffuseFactor_A'' @ 15046af40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseFactor_A__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseFactor_A.Data.AllocatorInstance.Data;
  if (DiffuseFactor_A.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseFactor_A.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DiffuseFactor_RGB'' @ 15046af60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseFactor_RGB__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseFactor_RGB.Data.AllocatorInstance.Data;
  if (DiffuseFactor_RGB.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseFactor_RGB.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DiffuseTexture'' @ 15046af80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture.Data.AllocatorInstance.Data;
  if (DiffuseTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DiffuseTexture_OffsetScale'' @ 15046afa0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_OffsetScale__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (DiffuseTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DiffuseTexture_Offset_X'' @ 15046afc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_Offset_X.Data.AllocatorInstance.Data;
  if (DiffuseTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DiffuseTexture_Offset_Y'' @ 15046afe0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (DiffuseTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DiffuseTexture_Rotation'' @ 15046b000

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_Rotation.Data.AllocatorInstance.Data;
  if (DiffuseTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DiffuseTexture_Scale_X'' @ 15046b020

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_Scale_X.Data.AllocatorInstance.Data;
  if (DiffuseTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DiffuseTexture_Scale_Y'' @ 15046b040

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (DiffuseTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DiffuseTexture_TexCoord'' @ 15046b060

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_TexCoord.Data.AllocatorInstance.Data;
  if (DiffuseTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DiffuseTexture_TilingMethod'' @ 15046b080

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__DiffuseTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (DiffuseTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmissiveFactor'' @ 15046b0a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveFactor.Data.AllocatorInstance.Data;
  if (EmissiveFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmissiveStrength'' @ 15046b0c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveStrength__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveStrength.Data.AllocatorInstance.Data;
  if (EmissiveStrength.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveStrength.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmissiveTexture'' @ 15046b0e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture.Data.AllocatorInstance.Data;
  if (EmissiveTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmissiveTexture_OffsetScale'' @ 15046b100

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__EmissiveTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (EmissiveTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmissiveTexture_Offset_X'' @ 15046b120

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_Offset_X.Data.AllocatorInstance.Data;
  if (EmissiveTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmissiveTexture_Offset_Y'' @ 15046b140

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (EmissiveTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmissiveTexture_Rotation'' @ 15046b160

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_Rotation.Data.AllocatorInstance.Data;
  if (EmissiveTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmissiveTexture_Scale_X'' @ 15046b180

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_Scale_X.Data.AllocatorInstance.Data;
  if (EmissiveTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmissiveTexture_Scale_Y'' @ 15046b1a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (EmissiveTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmissiveTexture_TexCoord'' @ 15046b1c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_TexCoord.Data.AllocatorInstance.Data;
  if (EmissiveTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmissiveTexture_TilingMethod'' @ 15046b1e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__EmissiveTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (EmissiveTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GRegisterInterchangePipelineObjectVersion'' @ 15046b200

void __cdecl _dynamic_atexit_destructor_for__GRegisterInterchangePipelineObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterInterchangePipelineObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GlobalOffsetTransform'' @ 15046b220

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_atexit_destructor_for__GlobalOffsetTransform__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GlobalOffsetTransform.Data.AllocatorInstance.Data;
  if (GlobalOffsetTransform.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GlobalOffsetTransform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GlossinessFactor'' @ 15046b240

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__GlossinessFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GlossinessFactor.Data.AllocatorInstance.Data;
  if (GlossinessFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GlossinessFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GridNameAndComponentIndexSeparator'' @ 15046b260

void __cdecl
UE::Interchange::Volume::_dynamic_atexit_destructor_for__GridNameAndComponentIndexSeparator__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GridNameAndComponentIndexSeparator.Data.AllocatorInstance.Data;
  if (GridNameAndComponentIndexSeparator.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GridNameAndComponentIndexSeparator.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'IOR'' @ 15046b280

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__IOR__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IOR.Data.AllocatorInstance.Data;
  if (IOR.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IOR.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceFactor'' @ 15046b2a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__IridescenceFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceFactor.Data.AllocatorInstance.Data;
  if (IridescenceFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceIOR'' @ 15046b2c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__IridescenceIOR__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceIOR.Data.AllocatorInstance.Data;
  if (IridescenceIOR.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceIOR.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceTexture'' @ 15046b2e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__IridescenceTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture.Data.AllocatorInstance.Data;
  if (IridescenceTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceTexture_OffsetScale'' @ 15046b300

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (IridescenceTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (IridescenceTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'IridescenceTexture_Offset_X'' @ 15046b320

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_Offset_X.Data.AllocatorInstance.Data;
  if (IridescenceTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceTexture_Offset_Y'' @ 15046b340

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (IridescenceTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceTexture_Rotation'' @ 15046b360

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_Rotation.Data.AllocatorInstance.Data;
  if (IridescenceTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceTexture_Scale_X'' @ 15046b380

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__IridescenceTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_Scale_X.Data.AllocatorInstance.Data;
  if (IridescenceTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceTexture_Scale_Y'' @ 15046b3a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__IridescenceTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (IridescenceTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceTexture_TexCoord'' @ 15046b3c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_TexCoord.Data.AllocatorInstance.Data;
  if (IridescenceTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceTexture_TilingMethod'' @ 15046b3e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (IridescenceTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (IridescenceTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'IridescenceThicknessMaximum'' @ 15046b400

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessMaximum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessMaximum.Data.AllocatorInstance.Data;
  if (IridescenceThicknessMaximum.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessMaximum.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceThicknessMinimum'' @ 15046b420

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessMinimum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessMinimum.Data.AllocatorInstance.Data;
  if (IridescenceThicknessMinimum.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessMinimum.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture'' @ 15046b440

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_OffsetScale'' @ 15046b460

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_OffsetScale.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_OffsetScale.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_Offset_X'' @ 15046b480

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_Offset_X.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_Offset_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_Offset_X.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_Offset_Y'' @ 15046b4a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_Offset_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_Offset_Y.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_Rotation'' @ 15046b4c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_Rotation.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_Rotation.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_Rotation.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_Scale_X'' @ 15046b4e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_Scale_X.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_Scale_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_Scale_X.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_Scale_Y'' @ 15046b500

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_Scale_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_Scale_Y.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_TexCoord'' @ 15046b520

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_TexCoord.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_TexCoord.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_TexCoord.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_TilingMethod'' @ 15046b540

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_TilingMethod.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_TilingMethod.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'LogInterchangePipeline'' @ 15046b560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInterchangePipeline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInterchangePipeline);
  return;
}

// `dynamic_atexit_destructor_for_'MeshGlobalTransform'' @ 15046b580

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_atexit_destructor_for__MeshGlobalTransform__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MeshGlobalTransform.Data.AllocatorInstance.Data;
  if (MeshGlobalTransform.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MeshGlobalTransform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'MetallicFactor'' @ 15046b5a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__MetallicFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicFactor.Data.AllocatorInstance.Data;
  if (MetallicFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture'' @ 15046b5c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__MetallicRoughnessTexture__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_OffsetScale'' @ 15046b5e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_Offset_X'' @ 15046b600

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_Offset_X.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_Offset_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture_Offset_X.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_Offset_Y'' @ 15046b620

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_Rotation'' @ 15046b640

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_Rotation.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_Rotation.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture_Rotation.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_Scale_X'' @ 15046b660

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_Scale_X.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (MetallicRoughnessTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_Scale_Y'' @ 15046b680

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (MetallicRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_TexCoord'' @ 15046b6a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_TexCoord.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_TexCoord.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture_TexCoord.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_TilingMethod'' @ 15046b6c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'Name'' @ 15046b6e0

void __cdecl
`SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
GetDefaultAccessibleText'::__l2::_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Name'' @ 15046b700

void __cdecl
`SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
GetDefaultAccessibleText'::__l2::_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NormalScale'' @ 15046b720

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalScale.Data.AllocatorInstance.Data;
  if (NormalScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NormalTexture'' @ 15046b740

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture.Data.AllocatorInstance.Data;
  if (NormalTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NormalTexture_OffsetScale'' @ 15046b760

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_OffsetScale__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (NormalTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NormalTexture_Offset_X'' @ 15046b780

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_Offset_X.Data.AllocatorInstance.Data;
  if (NormalTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NormalTexture_Offset_Y'' @ 15046b7a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (NormalTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NormalTexture_Rotation'' @ 15046b7c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_Rotation.Data.AllocatorInstance.Data;
  if (NormalTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NormalTexture_Scale_X'' @ 15046b7e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_Scale_X.Data.AllocatorInstance.Data;
  if (NormalTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NormalTexture_Scale_Y'' @ 15046b800

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (NormalTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NormalTexture_TexCoord'' @ 15046b820

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_TexCoord.Data.AllocatorInstance.Data;
  if (NormalTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NormalTexture_TilingMethod'' @ 15046b840

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_TilingMethod__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (NormalTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OcclusionStrength'' @ 15046b860

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionStrength__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionStrength.Data.AllocatorInstance.Data;
  if (OcclusionStrength.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionStrength.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OcclusionTexture'' @ 15046b880

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture.Data.AllocatorInstance.Data;
  if (OcclusionTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OcclusionTexture_OffsetScale'' @ 15046b8a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__OcclusionTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (OcclusionTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OcclusionTexture_Offset_X'' @ 15046b8c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_Offset_X.Data.AllocatorInstance.Data;
  if (OcclusionTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OcclusionTexture_Offset_Y'' @ 15046b8e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (OcclusionTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OcclusionTexture_Rotation'' @ 15046b900

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_Rotation.Data.AllocatorInstance.Data;
  if (OcclusionTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OcclusionTexture_Scale_X'' @ 15046b920

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_Scale_X.Data.AllocatorInstance.Data;
  if (OcclusionTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OcclusionTexture_Scale_Y'' @ 15046b940

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (OcclusionTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OcclusionTexture_TexCoord'' @ 15046b960

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_TexCoord.Data.AllocatorInstance.Data;
  if (OcclusionTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OcclusionTexture_TilingMethod'' @ 15046b980

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__OcclusionTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (OcclusionTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OffsetScale'' @ 15046b9a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OffsetScale.Data.AllocatorInstance.Data;
  if (OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OffsetX'' @ 15046b9c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__OffsetX__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OffsetX.Data.AllocatorInstance.Data;
  if (OffsetX.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OffsetX.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OffsetY'' @ 15046b9e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__OffsetY__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OffsetY.Data.AllocatorInstance.Data;
  if (OffsetY.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OffsetY.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RootJointGlobalTransform'' @ 15046ba00

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_atexit_destructor_for__RootJointGlobalTransform__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RootJointGlobalTransform.Data.AllocatorInstance.Data;
  if (RootJointGlobalTransform.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RootJointGlobalTransform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Rotation'' @ 15046ba20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Rotation.Data.AllocatorInstance.Data;
  if (Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RoughnessFactor'' @ 15046ba40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__RoughnessFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RoughnessFactor.Data.AllocatorInstance.Data;
  if (RoughnessFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RoughnessFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ScaleX'' @ 15046ba60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__ScaleX__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ScaleX.Data.AllocatorInstance.Data;
  if (ScaleX.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ScaleX.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ScaleY'' @ 15046ba80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__ScaleY__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ScaleY.Data.AllocatorInstance.Data;
  if (ScaleY.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ScaleY.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ShadingModelToMaterialInformation'' @ 15046baa0

void __cdecl
UE::Interchange::GLTFMaterials::_dynamic_atexit_destructor_for__ShadingModelToMaterialInformation__
          (void)

{
  ShadingModelToMaterialInformation._72_4_ = 0;
  if (ShadingModelToMaterialInformation._64_8_ != 0) {
    FMemory::Free((void *)ShadingModelToMaterialInformation._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ShadingModelToMaterialInformation);
  return;
}

// `dynamic_atexit_destructor_for_'SheenColorFactor'' @ 15046bae0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorFactor.Data.AllocatorInstance.Data;
  if (SheenColorFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenColorTexture'' @ 15046bb00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture.Data.AllocatorInstance.Data;
  if (SheenColorTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenColorTexture_OffsetScale'' @ 15046bb20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenColorTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (SheenColorTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenColorTexture_Offset_X'' @ 15046bb40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_Offset_X.Data.AllocatorInstance.Data;
  if (SheenColorTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenColorTexture_Offset_Y'' @ 15046bb60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (SheenColorTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenColorTexture_Rotation'' @ 15046bb80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_Rotation.Data.AllocatorInstance.Data;
  if (SheenColorTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenColorTexture_Scale_X'' @ 15046bba0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_Scale_X.Data.AllocatorInstance.Data;
  if (SheenColorTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenColorTexture_Scale_Y'' @ 15046bbc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (SheenColorTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenColorTexture_TexCoord'' @ 15046bbe0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_TexCoord.Data.AllocatorInstance.Data;
  if (SheenColorTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenColorTexture_TilingMethod'' @ 15046bc00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenColorTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (SheenColorTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (SheenColorTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'SheenRoughnessFactor'' @ 15046bc20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenRoughnessFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessFactor.Data.AllocatorInstance.Data;
  if (SheenRoughnessFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenRoughnessFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture'' @ 15046bc40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenRoughnessTexture__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenRoughnessTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_OffsetScale'' @ 15046bc60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_Offset_X'' @ 15046bc80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_Offset_X.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (SheenRoughnessTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_Offset_Y'' @ 15046bca0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (SheenRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_Rotation'' @ 15046bcc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_Rotation.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (SheenRoughnessTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_Scale_X'' @ 15046bce0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_Scale_X.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenRoughnessTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_Scale_Y'' @ 15046bd00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_TexCoord'' @ 15046bd20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_TexCoord.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (SheenRoughnessTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_TilingMethod'' @ 15046bd40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'SpecFactor'' @ 15046bd60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecFactor.Data.AllocatorInstance.Data;
  if (SpecFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SpecularFactor'' @ 15046bd80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularFactor.Data.AllocatorInstance.Data;
  if (SpecularFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture'' @ 15046bda0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularGlossinessTexture__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_OffsetScale'' @ 15046bdc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_OffsetScale.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_OffsetScale.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_Offset_X'' @ 15046bde0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_Offset_X.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_Offset_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_Offset_X.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_Offset_Y'' @ 15046be00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_Offset_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_Offset_Y.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_Rotation'' @ 15046be20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_Rotation.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_Rotation.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_Rotation.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_Scale_X'' @ 15046be40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_Scale_X.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_Scale_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_Scale_X.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_Scale_Y'' @ 15046be60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_Scale_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_Scale_Y.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_TexCoord'' @ 15046be80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_TexCoord.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_TexCoord.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_TexCoord.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_TilingMethod'' @ 15046bea0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_TilingMethod.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_TilingMethod.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'SpecularTexture'' @ 15046bec0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture.Data.AllocatorInstance.Data;
  if (SpecularTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SpecularTexture_OffsetScale'' @ 15046bee0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (SpecularTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SpecularTexture_Offset_X'' @ 15046bf00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_Offset_X.Data.AllocatorInstance.Data;
  if (SpecularTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SpecularTexture_Offset_Y'' @ 15046bf20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (SpecularTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SpecularTexture_Rotation'' @ 15046bf40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_Rotation.Data.AllocatorInstance.Data;
  if (SpecularTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SpecularTexture_Scale_X'' @ 15046bf60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_Scale_X.Data.AllocatorInstance.Data;
  if (SpecularTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SpecularTexture_Scale_Y'' @ 15046bf80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (SpecularTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SpecularTexture_TexCoord'' @ 15046bfa0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_TexCoord.Data.AllocatorInstance.Data;
  if (SpecularTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SpecularTexture_TilingMethod'' @ 15046bfc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (SpecularTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Suffix'' @ 15046bfe0

void __cdecl
`UE::InterchangeGroomPipeline::Private::CreateGroomFactoryNode'::__l7::
_dynamic_atexit_destructor_for__Suffix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Suffix.Data.AllocatorInstance.Data;
  if (Suffix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Suffix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TexCoord'' @ 15046c000

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TexCoord.Data.AllocatorInstance.Data;
  if (TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TilingMethod'' @ 15046c020

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__TilingMethod__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TilingMethod.Data.AllocatorInstance.Data;
  if (TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TransmissionFactor'' @ 15046c040

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__TransmissionFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionFactor.Data.AllocatorInstance.Data;
  if (TransmissionFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TransmissionTexture'' @ 15046c060

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__TransmissionTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture.Data.AllocatorInstance.Data;
  if (TransmissionTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TransmissionTexture_OffsetScale'' @ 15046c080

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (TransmissionTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (TransmissionTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'TransmissionTexture_Offset_X'' @ 15046c0a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_Offset_X.Data.AllocatorInstance.Data;
  if (TransmissionTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TransmissionTexture_Offset_Y'' @ 15046c0c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (TransmissionTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TransmissionTexture_Rotation'' @ 15046c0e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_Rotation.Data.AllocatorInstance.Data;
  if (TransmissionTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TransmissionTexture_Scale_X'' @ 15046c100

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_Scale_X.Data.AllocatorInstance.Data;
  if (TransmissionTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TransmissionTexture_Scale_Y'' @ 15046c120

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (TransmissionTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TransmissionTexture_TexCoord'' @ 15046c140

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_TexCoord.Data.AllocatorInstance.Data;
  if (TransmissionTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TransmissionTexture_TilingMethod'' @ 15046c160

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (TransmissionTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (TransmissionTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'VolumetricMaterial'' @ 15046c180

void __cdecl UE::Interchange::Volume::_dynamic_atexit_destructor_for__VolumetricMaterial__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = VolumetricMaterial.Data.AllocatorInstance.Data;
  if (VolumetricMaterial.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (VolumetricMaterial.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'bHasAnisotropyTextureAndOrRotation'' @ 15046c1a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasAnisotropyTextureAndOrRotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasAnisotropyTextureAndOrRotation.Data.AllocatorInstance.Data;
  if (bHasAnisotropyTextureAndOrRotation.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasAnisotropyTextureAndOrRotation.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'bHasBaseColorTexture'' @ 15046c1c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasBaseColorTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasBaseColorTexture.Data.AllocatorInstance.Data;
  if (bHasBaseColorTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasBaseColorTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'bHasClearCoatTexture'' @ 15046c1e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasClearCoatTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasClearCoatTexture.Data.AllocatorInstance.Data;
  if (bHasClearCoatTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasClearCoatTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'bHasDiffuseSpecGlossTexture'' @ 15046c200

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasDiffuseSpecGlossTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasDiffuseSpecGlossTexture.Data.AllocatorInstance.Data;
  if (bHasDiffuseSpecGlossTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasDiffuseSpecGlossTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'bHasEmissiveTexture'' @ 15046c220

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasEmissiveTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasEmissiveTexture.Data.AllocatorInstance.Data;
  if (bHasEmissiveTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasEmissiveTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'bHasIridescence'' @ 15046c240

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasIridescence__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasIridescence.Data.AllocatorInstance.Data;
  if (bHasIridescence.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasIridescence.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'bHasMetallicRoughnessTexture'' @ 15046c260

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasMetallicRoughnessTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasMetallicRoughnessTexture.Data.AllocatorInstance.Data;
  if (bHasMetallicRoughnessTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasMetallicRoughnessTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'bHasNormalTexture'' @ 15046c280

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasNormalTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasNormalTexture.Data.AllocatorInstance.Data;
  if (bHasNormalTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasNormalTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'bHasOcclusionTexture'' @ 15046c2a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasOcclusionTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasOcclusionTexture.Data.AllocatorInstance.Data;
  if (bHasOcclusionTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasOcclusionTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'bHasSheenTexture'' @ 15046c2c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasSheenTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasSheenTexture.Data.AllocatorInstance.Data;
  if (bHasSheenTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasSheenTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'bHasSpecularTexture'' @ 15046c2e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasSpecularTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasSpecularTexture.Data.AllocatorInstance.Data;
  if (bHasSpecularTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasSpecularTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'bHasTransmissionTexture'' @ 15046c300

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasTransmissionTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasTransmissionTexture.Data.AllocatorInstance.Data;
  if (bHasTransmissionTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasTransmissionTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

