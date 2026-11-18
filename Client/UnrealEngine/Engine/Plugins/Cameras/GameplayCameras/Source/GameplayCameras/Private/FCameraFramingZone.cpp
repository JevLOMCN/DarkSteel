// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// StaticStruct @ 14d643f70

UScriptStruct * __cdecl FCameraFramingZone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraFramingZone.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraFramingZone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraFramingZone,(UObject *)pUVar1,
                         L"CameraFramingZone");
  }
  return Z_Registration_Info_UScriptStruct_FCameraFramingZone.OuterSingleton;
}

// ToString @ 14d673940

FString * __thiscall
FCameraFramingZone::ToString(FCameraFramingZone *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"<< %f ^^ %f >> %f vv %f");
  return __return_storage_ptr__;
}

// TypeErasedInterpolate @ 14d674360

void __cdecl FCameraFramingZone::TypeErasedInterpolate(uchar *param_1,uchar *param_2,float param_3)

{
  double dVar1;
  
  dVar1 = (double)param_3;
  *(double *)param_1 = (*(double *)param_2 - *(double *)param_1) * dVar1 + *(double *)param_1;
  *(double *)(param_1 + 8) =
       (*(double *)(param_2 + 8) - *(double *)(param_1 + 8)) * dVar1 + *(double *)(param_1 + 8);
  *(double *)(param_1 + 0x10) =
       (*(double *)(param_2 + 0x10) - *(double *)(param_1 + 0x10)) * dVar1 +
       *(double *)(param_1 + 0x10);
  *(double *)(param_1 + 0x18) =
       (*(double *)(param_2 + 0x18) - *(double *)(param_1 + 0x18)) * dVar1 +
       *(double *)(param_1 + 0x18);
  return;
}

