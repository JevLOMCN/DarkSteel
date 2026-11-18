// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 1499e05c0

/* WARNING: Removing unreachable block (ram,0x0001499e0819) */
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
FPCGMetadataBreakVectorElement::DoOperation
          (FPCGMetadataBreakVectorElement *this,FOperationData *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  code *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId185,"FPCGMetadataBreakVectorElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataBreakVector.cpp"
               ,0xb9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId185);
  }
  if ((param_1->Settings == (UPCGMetadataSettingsBase *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataBreakVector.cpp"
                         ,0xbc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  switch(param_1->MostComplexInputType) {
  case 4:
    local_a8 = PCGMetadataBreakVectorSettings::GetFirstIndex<UE::Math::TVector2<double>_>;
    local_a0 = PCGMetadataBreakVectorSettings::GetSecondIndex<UE::Math::TVector2<double>_>;
    local_98 = PCGMetadataBreakVectorSettings::GetThirdIndex<UE::Math::TVector2<double>_>;
    local_90 = PCGMetadataBreakVectorSettings::GetFourthIndex<UE::Math::TVector2<double>_>;
    bVar2 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector2<double>,double_(__cdecl&)(UE::Math::TVector2<double>_const_&),double_(__cdecl&)(UE::Math::TVector2<double>_const_&),double_(__cdecl&)(UE::Math::TVector2<double>_const_&),double_(__cdecl&)(UE::Math::TVector2<double>_const_&)>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<double_(__cdecl&)(UE::Math::TVector2<double>_const_&),double_(__cdecl&)(UE::Math::TVector2<double>_const_&),double_(__cdecl&)(UE::Math::TVector2<double>_const_&),double_(__cdecl&)(UE::Math::TVector2<double>_const_&)>
                        *)&local_a8);
    break;
  case 5:
    local_88 = PCGMetadataBreakVectorSettings::GetFirstIndex<UE::Math::TVector<double>_>;
    local_80 = PCGMetadataBreakVectorSettings::GetSecondIndex<UE::Math::TVector<double>_>;
    local_78 = PCGMetadataBreakVectorSettings::GetThirdIndex<UE::Math::TVector<double>_>;
    local_70 = PCGMetadataBreakVectorSettings::GetFourthIndex<UE::Math::TVector<double>_>;
    bVar2 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector<double>,double_(__cdecl&)(UE::Math::TVector<double>_const_&),double_(__cdecl&)(UE::Math::TVector<double>_const_&),double_(__cdecl&)(UE::Math::TVector<double>_const_&),double_(__cdecl&)(UE::Math::TVector<double>_const_&)>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<double_(__cdecl&)(UE::Math::TVector<double>_const_&),double_(__cdecl&)(UE::Math::TVector<double>_const_&),double_(__cdecl&)(UE::Math::TVector<double>_const_&),double_(__cdecl&)(UE::Math::TVector<double>_const_&)>
                        *)&local_88);
    break;
  case 6:
    local_68 = PCGMetadataBreakVectorSettings::GetFirstIndex<UE::Math::TVector4<double>_>;
    local_60 = PCGMetadataBreakVectorSettings::GetSecondIndex<UE::Math::TVector4<double>_>;
    local_58 = PCGMetadataBreakVectorSettings::GetThirdIndex<UE::Math::TVector4<double>_>;
    local_50 = PCGMetadataBreakVectorSettings::GetFourthIndex<UE::Math::TVector4<double>_>;
    bVar2 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector4<double>,double_(__cdecl&)(UE::Math::TVector4<double>_const_&),double_(__cdecl&)(UE::Math::TVector4<double>_const_&),double_(__cdecl&)(UE::Math::TVector4<double>_const_&),double_(__cdecl&)(UE::Math::TVector4<double>_const_&)>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<double_(__cdecl&)(UE::Math::TVector4<double>_const_&),double_(__cdecl&)(UE::Math::TVector4<double>_const_&),double_(__cdecl&)(UE::Math::TVector4<double>_const_&),double_(__cdecl&)(UE::Math::TVector4<double>_const_&)>
                        *)&local_68);
    break;
  case 7:
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
  case 0:
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
  case 0xc:
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_717501723047886654>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataBreakVector.cpp"
                       ,0xc2,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    goto LAB_1499e06a1;
  case 0xb:
    local_48 = PCGMetadataBreakVectorSettings::GetFirstIndex<UE::Math::TRotator<double>_>;
    local_40 = PCGMetadataBreakVectorSettings::GetSecondIndex<UE::Math::TRotator<double>_>;
    local_38 = PCGMetadataBreakVectorSettings::GetThirdIndex<UE::Math::TRotator<double>_>;
    local_30 = PCGMetadataBreakVectorSettings::GetFourthIndex<UE::Math::TRotator<double>_>;
    bVar2 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TRotator<double>,double_(__cdecl&)(UE::Math::TRotator<double>_const_&),double_(__cdecl&)(UE::Math::TRotator<double>_const_&),double_(__cdecl&)(UE::Math::TRotator<double>_const_&),double_(__cdecl&)(UE::Math::TRotator<double>_const_&)>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<double_(__cdecl&)(UE::Math::TRotator<double>_const_&),double_(__cdecl&)(UE::Math::TRotator<double>_const_&),double_(__cdecl&)(UE::Math::TRotator<double>_const_&),double_(__cdecl&)(UE::Math::TRotator<double>_const_&)>
                        *)&local_48);
    break;
  case 0xd:
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_717501723047886654>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataBreakVector.cpp"
                       ,0xc2,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    goto LAB_1499e06a1;
  case 0xe:
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_717501723047886654>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataBreakVector.cpp"
                       ,0xc2,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
LAB_1499e06a1:
    bVar2 = true;
    break;
  default:
    bVar2 = false;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

