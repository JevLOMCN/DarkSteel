// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 2

// SupportsType @ 144466350

bool __thiscall
FDataflowStringConvertibleTypePolicy::SupportsType
          (FDataflowStringConvertibleTypePolicy *this,FName param_1)

{
  bool bVar1;
  
  bVar1 = SupportsTypeStatic(param_1);
  return bVar1;
}

// SupportsTypeStatic @ 144466780

bool __cdecl FDataflowStringConvertibleTypePolicy::SupportsTypeStatic(FName param_1)

{
  bool bVar1;
  
  if (((param_1 != TDataflowSingleTypePolicy<FString>::TypeName) &&
      (param_1 != TDataflowSingleTypePolicy<FName>::TypeName)) &&
     (param_1 != TDataflowSingleTypePolicy<FText>::TypeName)) {
    bVar1 = TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
            ::SupportsTypeStatic(param_1);
    if (((!bVar1) && (param_1 != TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName))
       && ((param_1 != TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName &&
           (param_1 != TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName)))) {
      bVar1 = TDataflowMultiTypePolicy<UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
              ::SupportsTypeStatic(param_1);
      if (((!bVar1) && (param_1 != TDataflowSingleTypePolicy<bool>::TypeName)) &&
         (param_1 != TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName)) {
        return false;
      }
    }
  }
  return true;
}

