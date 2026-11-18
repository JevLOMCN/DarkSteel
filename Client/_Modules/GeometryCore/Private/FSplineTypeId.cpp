// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// CheckTypeIdConflict @ 1435794c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Geometry::Spline::FSplineTypeId::CheckTypeIdConflict
          (uint param_1,FString *param_2,FString *param_3,FString *param_4,FString *param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar2 = (param_2->Data).ArrayNum;
  iVar1 = (param_4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      bVar3 = false;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                         (wchar_t *)(param_4->Data).AllocatorInstance.Data);
      bVar3 = iVar2 != 0;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 != 1;
  }
  iVar2 = (param_3->Data).ArrayNum;
  iVar1 = (param_5->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_3->Data).AllocatorInstance.Data,
                         (wchar_t *)(param_5->Data).AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + iVar1 == 1;
  }
  if ((bVar3) || (!bVar4)) {
    if ((1 < (byte)Spline::LogSpline._0_1_) &&
       (Logging::Private::BasicLog<2>
                  (&`public:_static_bool___cdecl_UE::Geometry::Spline::FSplineTypeId::CheckTypeIdConflict(unsigned_int,FString_const&___ptr64,FString_const&___ptr64,FString_const&___ptr64,FString_const&___ptr64)'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
       1 < (byte)Spline::LogSpline._0_1_)) {
      Logging::Private::BasicLog<2>
                (&`public:_static_bool___cdecl_UE::Geometry::Spline::FSplineTypeId::CheckTypeIdConflict(unsigned_int,FString_const&___ptr64,FString_const&___ptr64,FString_const&___ptr64,FString_const&___ptr64)'
                  ::__l24::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
    if ((1 < (byte)Spline::LogSpline._0_1_) &&
       (Logging::Private::BasicLog<2>
                  (&`public:_static_bool___cdecl_UE::Geometry::Spline::FSplineTypeId::CheckTypeIdConflict(unsigned_int,FString_const&___ptr64,FString_const&___ptr64,FString_const&___ptr64,FString_const&___ptr64)'
                    ::__l42::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline),
       1 < (byte)Spline::LogSpline._0_1_)) {
      Logging::Private::BasicLog<2>
                (&`public:_static_bool___cdecl_UE::Geometry::Spline::FSplineTypeId::CheckTypeIdConflict(unsigned_int,FString_const&___ptr64,FString_const&___ptr64,FString_const&___ptr64,FString_const&___ptr64)'
                  ::__l60::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// GenerateTypeId @ 1435ad500

uint __cdecl UE::Geometry::Spline::FSplineTypeId::GenerateTypeId(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x811c9dc5;
  uVar3 = 0x811c9dc5;
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    param_1 = param_1 + 1;
    uVar3 = ((ushort)wVar1 ^ uVar3) * 0x1000193;
    wVar1 = *param_1;
  }
  wVar1 = *param_2;
  while (wVar1 != L'\0') {
    param_2 = param_2 + 1;
    uVar2 = ((ushort)wVar1 ^ uVar2) * 0x1000193;
    wVar1 = *param_2;
  }
  return uVar3 << 0x10 | uVar2 & 0xffff;
}

