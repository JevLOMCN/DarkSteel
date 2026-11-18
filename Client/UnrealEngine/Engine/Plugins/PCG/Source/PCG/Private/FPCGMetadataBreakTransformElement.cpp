// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 1499e04d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGMetadataBreakTransformElement::DoOperation
          (FPCGMetadataBreakTransformElement *this,FOperationData *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  code *local_28;
  code *local_20;
  code *local_18;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId132,"FPCGMetadataBreakTransformElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataBreakTransform.cpp"
               ,0x84);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId132);
  }
  if ((param_1->Settings == (UPCGMetadataSettingsBase *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataBreakTransform.cpp"
                         ,0x87,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_28 = PCGMetadataBreakTransformSettings::GetTranslation;
  local_20 = PCGMetadataBreakTransformSettings::GetRotation;
  local_18 = PCGMetadataBreakTransformSettings::GetScale;
  bVar2 = FPCGMetadataElementBase::
          DoNAryOp<UE::Math::TTransform<double>,UE::Math::TVector<double>_(__cdecl&)(UE::Math::TTransform<double>_const_&),UE::Math::TQuat<double>_(__cdecl&)(UE::Math::TTransform<double>_const_&),UE::Math::TVector<double>_(__cdecl&)(UE::Math::TTransform<double>_const_&)>
                    ((FPCGMetadataElementBase *)this,param_1,
                     (TTuple<UE::Math::TVector<double>_(__cdecl&)(UE::Math::TTransform<double>_const_&),UE::Math::TQuat<double>_(__cdecl&)(UE::Math::TTransform<double>_const_&),UE::Math::TVector<double>_(__cdecl&)(UE::Math::TTransform<double>_const_&)>
                      *)&local_28);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

