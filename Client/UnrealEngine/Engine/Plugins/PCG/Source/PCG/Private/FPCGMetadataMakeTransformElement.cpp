// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 1499e0fc0

/* WARNING: Removing unreachable block (ram,0x0001499e11eb) */
/* WARNING: Removing unreachable block (ram,0x0001499e125e) */
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
FPCGMetadataMakeTransformElement::DoOperation
          (FPCGMetadataMakeTransformElement *this,FOperationData *param_1)

{
  int iVar1;
  UPCGMetadataSettingsBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  bool bVar10;
  TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_res10;
  TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_res18;
  TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_res20;
  TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_108;
  TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector2<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector2<double>_const_&)>
  local_100;
  TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_f8;
  TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector4<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector4<double>_const_&)>
  local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId202,"FPCGMetadataMakeTransformElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMakeTransform.cpp"
               ,0xca);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId202);
  }
  pUVar2 = param_1->Settings;
  if (pUVar2 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar7 = GetTypeName<UPCGMetadataMakeTransformSettings>(&local_80);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar6 = UPCGMetadataMakeTransformSettings::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    pFVar7 = GetTypeName<UPCGMetadataMakeTransformSettings>(&local_70);
    pwVar8 = L"";
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar7 = GetFullNameForCastLogError<UPCGMetadataSettingsBase_const_>(&local_60,pUVar2);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar8,pwVar9);
  }
  switch(param_1->MostComplexInputType) {
  case 0:
    local_res20 = (TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
                   )PCGMetadataMakeTransformSettings::MakeTransform<UE::Math::TVector<double>_>;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector<double>,UE::Math::TQuat<double>,UE::Math::TVector<double>,UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
                      ((FPCGMetadataElementBase *)this,param_1,&local_res20);
    break;
  case 1:
    local_108 = (TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
                 )PCGMetadataMakeTransformSettings::MakeTransform<UE::Math::TVector<double>_>;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector<double>,UE::Math::TQuat<double>,UE::Math::TVector<double>,UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
                      ((FPCGMetadataElementBase *)this,param_1,&local_108);
    break;
  case 2:
    local_res10 = (TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
                   )PCGMetadataMakeTransformSettings::MakeTransform<UE::Math::TVector<double>_>;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector<double>,UE::Math::TQuat<double>,UE::Math::TVector<double>,UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
                      ((FPCGMetadataElementBase *)this,param_1,&local_res10);
    break;
  case 3:
    local_res18 = (TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
                   )PCGMetadataMakeTransformSettings::MakeTransform<UE::Math::TVector<double>_>;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector<double>,UE::Math::TQuat<double>,UE::Math::TVector<double>,UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
                      ((FPCGMetadataElementBase *)this,param_1,&local_res18);
    break;
  case 4:
    local_100 = (TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector2<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector2<double>_const_&)>
                 )PCGMetadataMakeTransformSettings::MakeTransform<UE::Math::TVector2<double>_>;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector2<double>,UE::Math::TQuat<double>,UE::Math::TVector2<double>,UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector2<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector2<double>_const_&)>
                      ((FPCGMetadataElementBase *)this,param_1,&local_100);
    break;
  case 5:
    local_f8 = (TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
                )PCGMetadataMakeTransformSettings::MakeTransform<UE::Math::TVector<double>_>;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector<double>,UE::Math::TQuat<double>,UE::Math::TVector<double>,UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector<double>_const_&)>
                      ((FPCGMetadataElementBase *)this,param_1,&local_f8);
    break;
  case 6:
    local_f0 = (TTuple<UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector4<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector4<double>_const_&)>
                )PCGMetadataMakeTransformSettings::MakeTransform<UE::Math::TVector4<double>_>;
    bVar4 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector4<double>,UE::Math::TQuat<double>,UE::Math::TVector4<double>,UE::Math::TTransform<double>_(__cdecl&)(UE::Math::TVector4<double>_const_&,UE::Math::TQuat<double>_const_&,UE::Math::TVector4<double>_const_&)>
                      ((FPCGMetadataElementBase *)this,param_1,&local_f0);
    break;
  case 7:
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
  case 8:
  case 10:
  case 0xc:
    goto switchD_1499e1070_caseD_8;
  case 9:
    local_e8 = 0;
    local_e0 = 0;
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3063024706748678362>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMakeTransform.cpp"
                       ,0xda,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    goto LAB_1499e11a0;
  case 0xb:
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    goto switchD_1499e1070_caseD_8;
  case 0xd:
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3063024706748678362>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMakeTransform.cpp"
                       ,0xda,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    goto LAB_1499e11a0;
  case 0xe:
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3063024706748678362>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMakeTransform.cpp"
                       ,0xda,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
LAB_1499e11a0:
    bVar4 = true;
    break;
  default:
    bVar4 = false;
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
switchD_1499e1070_caseD_8:
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3063024706748678362>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMakeTransform.cpp"
                     ,0xda,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  goto LAB_1499e11a0;
}

