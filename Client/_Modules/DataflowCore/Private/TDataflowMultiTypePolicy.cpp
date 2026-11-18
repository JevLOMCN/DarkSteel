// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 18

// SupportsType @ 144465990

bool __thiscall
TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
::SupportsType(TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
               *this,FName param_1)

{
  bool bVar1;
  
  bVar1 = SupportsTypeStatic(param_1);
  return bVar1;
}

// SupportsType @ 1444659a0

bool __thiscall
TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::SupportsType(TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
               *this,FName param_1)

{
  bool bVar1;
  
  if (((param_1 != TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName) &&
      (param_1 != TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName)) &&
     (param_1 != TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName)) {
    bVar1 = TDataflowMultiTypePolicy<UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
            ::SupportsTypeStatic(param_1);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// SupportsType @ 1444659e0

bool __thiscall
TDataflowMultiTypePolicy<UE::Math::TVector<double>,UE::Math::TQuat<double>,UE::Math::TRotator<double>_>
::SupportsType(TDataflowMultiTypePolicy<UE::Math::TVector<double>,UE::Math::TQuat<double>,UE::Math::TRotator<double>_>
               *this,FName param_1)

{
  if (((param_1 != TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName) &&
      (param_1 != TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName)) &&
     (param_1 != TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName)) {
    return false;
  }
  return true;
}

// SupportsType @ 144465a10

bool __thiscall
TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>
::SupportsType(TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>
               *this,FName param_1)

{
  if ((((param_1 != TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName) &&
       (param_1 != TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName)) &&
      (param_1 != TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName)) &&
     (((param_1 != TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName &&
       (param_1 != TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName)) &&
      (param_1 != TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName)))) {
    return false;
  }
  return true;
}

// SupportsType @ 144465a60

bool __thiscall
TDataflowMultiTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<__int64,TSizedDefaultAllocator<32>_>,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<short,TSizedDefaultAllocator<32>_>,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TArray<signed_char,TSizedDefaultAllocator<32>_>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
::SupportsType(TDataflowMultiTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<__int64,TSizedDefaultAllocator<32>_>,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<short,TSizedDefaultAllocator<32>_>,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TArray<signed_char,TSizedDefaultAllocator<32>_>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
               *this,FName param_1)

{
  bool bVar1;
  
  bVar1 = SupportsTypeStatic(param_1);
  return bVar1;
}

// SupportsType @ 144465a70

bool __thiscall
TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::SupportsType(TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
               *this,FName param_1)

{
  bool bVar1;
  
  if (((param_1 !=
        TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>::
        TypeName) &&
      (param_1 !=
       TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>::
       TypeName)) &&
     (param_1 !=
      TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
      TypeName)) {
    bVar1 = TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
            ::SupportsTypeStatic(param_1);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// SupportsType @ 144465ab0

bool __thiscall
TDataflowMultiTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FName,TSizedDefaultAllocator<32>_>_>
::SupportsType(TDataflowMultiTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FName,TSizedDefaultAllocator<32>_>_>
               *this,FName param_1)

{
  if ((param_1 != TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypeName)
     && (param_1 != TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::TypeName)
     ) {
    return false;
  }
  return true;
}

// SupportsType @ 144465ad0

bool __thiscall
TDataflowMultiTypePolicy<FString,FName,FText>::SupportsType
          (TDataflowMultiTypePolicy<FString,FName,FText> *this,FName param_1)

{
  if (((param_1 != TDataflowSingleTypePolicy<FString>::TypeName) &&
      (param_1 != TDataflowSingleTypePolicy<FName>::TypeName)) &&
     (param_1 != TDataflowSingleTypePolicy<FText>::TypeName)) {
    return false;
  }
  return true;
}

// SupportsTypeStatic @ 144466370

bool __cdecl
TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
::SupportsTypeStatic(FName param_1)

{
  if ((((((param_1 != TDataflowSingleTypePolicy<double>::TypeName) &&
         (param_1 != TDataflowSingleTypePolicy<float>::TypeName)) &&
        (param_1 != TDataflowSingleTypePolicy<__int64>::TypeName)) &&
       ((param_1 != TDataflowSingleTypePolicy<unsigned___int64>::TypeName &&
        (param_1 != TDataflowSingleTypePolicy<int>::TypeName)))) &&
      ((param_1 != TDataflowSingleTypePolicy<unsigned_int>::TypeName &&
       ((param_1 != TDataflowSingleTypePolicy<short>::TypeName &&
        (param_1 != TDataflowSingleTypePolicy<unsigned_short>::TypeName)))))) &&
     ((param_1 != TDataflowSingleTypePolicy<signed_char>::TypeName &&
      (param_1 != TDataflowSingleTypePolicy<unsigned_char>::TypeName)))) {
    return false;
  }
  return true;
}

// SupportsTypeStatic @ 1444663e0

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::SupportsTypeStatic(FName param_1)

{
  if ((((((param_1 != TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName) &&
         (param_1 != TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName)) &&
        (param_1 != TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName)) &&
       ((param_1 != TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName &&
        (param_1 != TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName)))) &&
      ((param_1 != TDataflowSingleTypePolicy<FLinearColor>::TypeName &&
       ((param_1 != TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName &&
        (param_1 != TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName)))))) &&
     ((param_1 != TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName &&
      (param_1 != TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName)))) {
    return false;
  }
  return true;
}

// SupportsTypeStatic @ 144466450

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::SupportsTypeStatic(FName param_1)

{
  bool bVar1;
  
  if (((param_1 != TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName) &&
      (param_1 != TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName)) &&
     (param_1 != TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName)) {
    bVar1 = TDataflowMultiTypePolicy<UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
            ::SupportsTypeStatic(param_1);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// SupportsTypeStatic @ 144466490

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector<double>,UE::Math::TQuat<double>,UE::Math::TRotator<double>_>
::SupportsTypeStatic(FName param_1)

{
  if (((param_1 != TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName) &&
      (param_1 != TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName)) &&
     (param_1 != TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName)) {
    return false;
  }
  return true;
}

// SupportsTypeStatic @ 1444664c0

bool __cdecl
TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>
::SupportsTypeStatic(FName param_1)

{
  if ((((param_1 != TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName) &&
       (param_1 != TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName)) &&
      (param_1 != TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName)) &&
     (((param_1 != TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName &&
       (param_1 != TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName)) &&
      (param_1 != TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName)))) {
    return false;
  }
  return true;
}

// SupportsTypeStatic @ 144466510

bool __cdecl
TDataflowMultiTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<__int64,TSizedDefaultAllocator<32>_>,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<short,TSizedDefaultAllocator<32>_>,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TArray<signed_char,TSizedDefaultAllocator<32>_>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
::SupportsTypeStatic(FName param_1)

{
  if ((((((param_1 !=
           TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::TypeName) &&
         (param_1 != TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::TypeName
         )) && (param_1 !=
                TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::TypeName))
       && ((param_1 !=
            TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
            TypeName &&
           (param_1 != TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::TypeName
           )))) &&
      ((param_1 !=
        TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::TypeName &&
       ((param_1 != TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::TypeName
        && (param_1 !=
            TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::TypeName
           )))))) &&
     ((param_1 !=
       TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::TypeName &&
      (param_1 !=
       TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::TypeName)))) {
    return false;
  }
  return true;
}

// SupportsTypeStatic @ 144466580

bool __cdecl
TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::SupportsTypeStatic(FName param_1)

{
  if ((((((param_1 !=
           TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
           ::TypeName) &&
         (param_1 !=
          TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
          TypeName)) &&
        (param_1 !=
         TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>::
         TypeName)) &&
       ((param_1 !=
         TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>::
         TypeName &&
        (param_1 !=
         TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
         TypeName)))) &&
      ((param_1 !=
        TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::TypeName &&
       ((param_1 !=
         TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>::
         TypeName &&
        (param_1 !=
         TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
         ::TypeName)))))) &&
     ((param_1 !=
       TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>::
       TypeName &&
      (param_1 !=
       TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::
       TypeName)))) {
    return false;
  }
  return true;
}

// SupportsTypeStatic @ 1444665f0

bool __cdecl
TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::SupportsTypeStatic(FName param_1)

{
  bool bVar1;
  
  if (((param_1 !=
        TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>::
        TypeName) &&
      (param_1 !=
       TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>::
       TypeName)) &&
     (param_1 !=
      TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
      TypeName)) {
    bVar1 = TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
            ::SupportsTypeStatic(param_1);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// SupportsTypeStatic @ 144466630

bool __cdecl
TDataflowMultiTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FName,TSizedDefaultAllocator<32>_>_>
::SupportsTypeStatic(FName param_1)

{
  if ((param_1 != TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypeName)
     && (param_1 != TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::TypeName)
     ) {
    return false;
  }
  return true;
}

// SupportsTypeStatic @ 144466650

bool __cdecl TDataflowMultiTypePolicy<FString,FName,FText>::SupportsTypeStatic(FName param_1)

{
  if (((param_1 != TDataflowSingleTypePolicy<FString>::TypeName) &&
      (param_1 != TDataflowSingleTypePolicy<FName>::TypeName)) &&
     (param_1 != TDataflowSingleTypePolicy<FText>::TypeName)) {
    return false;
  }
  return true;
}

