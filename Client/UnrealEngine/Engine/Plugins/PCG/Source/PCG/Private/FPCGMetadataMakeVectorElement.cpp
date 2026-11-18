// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 1499e1380

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
FPCGMetadataMakeVectorElement::DoOperation
          (FPCGMetadataMakeVectorElement *this,FOperationData *param_1)

{
  char cVar1;
  int iVar2;
  UPCGMetadataSettingsBase *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  bool bVar11;
  TTuple<UE::Math::TVector2<double>_(__cdecl&)(double_const_&,double_const_&)> local_res10;
  TTuple<UE::Math::TVector<double>_(__cdecl&)(double_const_&,double_const_&,double_const_&)>
  local_res18;
  TTuple<UE::Math::TVector<double>_(__cdecl&)(UE::Math::TVector2<double>_const_&,double_const_&)>
  local_res20;
  TTuple<UE::Math::TVector4<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,double_const_&)>
  local_68;
  TTuple<UE::Math::TVector4<double>_(__cdecl&)(UE::Math::TVector2<double>_const_&,UE::Math::TVector2<double>_const_&)>
  local_60;
  TTuple<UE::Math::TVector4<double>_(__cdecl&)(UE::Math::TVector2<double>_const_&,double_const_&,double)>
  local_58;
  TTuple<UE::Math::TVector4<double>_(__cdecl&)(double_const_&,double_const_&,double_const_&,double_const_&)>
  local_50;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId271,"FPCGMetadataMakeVectorElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMakeVector.cpp"
               ,0x10f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId271);
  }
  pUVar3 = param_1->Settings;
  if (pUVar3 != (UPCGMetadataSettingsBase *)0x0) {
    pUVar7 = UPCGMetadataMakeVectorSettings::StaticClass();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      cVar1 = pUVar3[1].OutputTarget.field_0x30;
      if (cVar1 == '\x04') {
        local_res10 = (TTuple<UE::Math::TVector2<double>_(__cdecl&)(double_const_&,double_const_&)>)
                      PCGMetadataMakeVectorSettings::MakeVector2;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<double,double,UE::Math::TVector2<double>_(__cdecl&)(double_const_&,double_const_&)>
                          ((FPCGMetadataElementBase *)this,param_1,&local_res10);
      }
      else if (cVar1 == '\x05') {
        if (pUVar3[1].OutputTarget.field_0x31 == '\0') {
          local_res18 = (TTuple<UE::Math::TVector<double>_(__cdecl&)(double_const_&,double_const_&,double_const_&)>
                         )PCGMetadataMakeVectorSettings::MakeVector3;
          bVar5 = FPCGMetadataElementBase::
                  DoNAryOp<double,double,double,UE::Math::TVector<double>_(__cdecl&)(double_const_&,double_const_&,double_const_&)>
                            ((FPCGMetadataElementBase *)this,param_1,&local_res18);
        }
        else {
          local_res20 = (TTuple<UE::Math::TVector<double>_(__cdecl&)(UE::Math::TVector2<double>_const_&,double_const_&)>
                         )PCGMetadataMakeVectorSettings::MakeVector3Vec2;
          bVar5 = FPCGMetadataElementBase::
                  DoNAryOp<UE::Math::TVector2<double>,double,UE::Math::TVector<double>_(__cdecl&)(UE::Math::TVector2<double>_const_&,double_const_&)>
                            ((FPCGMetadataElementBase *)this,param_1,&local_res20);
        }
      }
      else {
        cVar1 = pUVar3[1].OutputTarget.field_0x32;
        if (cVar1 == '\0') {
          local_50 = (TTuple<UE::Math::TVector4<double>_(__cdecl&)(double_const_&,double_const_&,double_const_&,double_const_&)>
                      )PCGMetadataMakeVectorSettings::MakeVector4;
          bVar5 = FPCGMetadataElementBase::
                  DoNAryOp<double,double,double,double,UE::Math::TVector4<double>_(__cdecl&)(double_const_&,double_const_&,double_const_&,double_const_&)>
                            ((FPCGMetadataElementBase *)this,param_1,&local_50);
        }
        else if (cVar1 == '\x01') {
          local_58 = (TTuple<UE::Math::TVector4<double>_(__cdecl&)(UE::Math::TVector2<double>_const_&,double_const_&,double)>
                      )PCGMetadataMakeVectorSettings::MakeVector4Vec2;
          bVar5 = FPCGMetadataElementBase::
                  DoNAryOp<UE::Math::TVector2<double>,double,double,UE::Math::TVector4<double>_(__cdecl&)(UE::Math::TVector2<double>_const_&,double_const_&,double)>
                            ((FPCGMetadataElementBase *)this,param_1,&local_58);
        }
        else if (cVar1 == '\x02') {
          local_60 = (TTuple<UE::Math::TVector4<double>_(__cdecl&)(UE::Math::TVector2<double>_const_&,UE::Math::TVector2<double>_const_&)>
                      )PCGMetadataMakeVectorSettings::MakeVector4TwoVec2;
          bVar5 = FPCGMetadataElementBase::
                  DoNAryOp<UE::Math::TVector2<double>,UE::Math::TVector2<double>,UE::Math::TVector4<double>_(__cdecl&)(UE::Math::TVector2<double>_const_&,UE::Math::TVector2<double>_const_&)>
                            ((FPCGMetadataElementBase *)this,param_1,&local_60);
        }
        else if (cVar1 == '\x03') {
          local_68 = (TTuple<UE::Math::TVector4<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,double_const_&)>
                      )PCGMetadataMakeVectorSettings::MakeVector4Vec3;
          bVar5 = FPCGMetadataElementBase::
                  DoNAryOp<UE::Math::TVector<double>,double,UE::Math::TVector4<double>_(__cdecl&)(UE::Math::TVector<double>_const_&,double_const_&)>
                            ((FPCGMetadataElementBase *)this,param_1,&local_68);
        }
        else {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4332825865051176657>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMakeVector.cpp"
                             ,0x12f,"false");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          bVar5 = true;
        }
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return bVar5;
    }
    pFVar8 = GetTypeName<UPCGMetadataMakeVectorSettings>(&local_38);
    pwVar9 = L"";
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pFVar8 = GetFullNameForCastLogError<UPCGMetadataSettingsBase_const_>(&local_28,pUVar3);
    if ((pFVar8->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar9,pwVar10);
  }
  pFVar8 = GetTypeName<UPCGMetadataMakeVectorSettings>(&local_48);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar9);
}

