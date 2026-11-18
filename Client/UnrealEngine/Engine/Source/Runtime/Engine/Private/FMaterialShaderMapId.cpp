// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Equals @ 147f76840

bool __thiscall
FMaterialShaderMapId::Equals(FMaterialShaderMapId *this,FMaterialShaderMapId *param_1,bool param_2)

{
  if ((((*(longlong *)(this->CookedShaderMapIdHash).Hash ==
         *(longlong *)(param_1->CookedShaderMapIdHash).Hash) &&
       (*(longlong *)((this->CookedShaderMapIdHash).Hash + 8) ==
        *(longlong *)((param_1->CookedShaderMapIdHash).Hash + 8))) &&
      (*(int *)((this->CookedShaderMapIdHash).Hash + 0x10) ==
       *(int *)((param_1->CookedShaderMapIdHash).Hash + 0x10))) &&
     (((this->QualityLevel == param_1->QualityLevel && (this->FeatureLevel == param_1->FeatureLevel)
       ) && (((this->LayoutParams).Flags == (param_1->LayoutParams).Flags &&
             ((this->LayoutParams).MaxFieldAlignment == (param_1->LayoutParams).MaxFieldAlignment)))
      ))) {
    return true;
  }
  return false;
}

// IsContentValid @ 147f805d0

bool __thiscall FMaterialShaderMapId::IsContentValid(FMaterialShaderMapId *this)

{
  return true;
}

// Serialize @ 147f86750

void __thiscall
FMaterialShaderMapId::Serialize(FMaterialShaderMapId *this,FArchive *param_1,bool param_2)

{
  int iVar1;
  longlong *plVar2;
  Type *pTVar3;
  Type *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  Type *pTVar8;
  undefined8 uVar9;
  Type local_38 [4];
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1165,"FMaterialShaderMapId_Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
               ,0x48d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1165);
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  plVar2 = *(longlong **)&param_1->field_0x8;
  iVar1 = *(int *)&param_1->field_0x40;
  pTVar3 = (Type *)*plVar2;
  if (iVar1 < 0x104) {
    if (pTVar3 + 1 <= (Type *)plVar2[1]) {
      local_38[0] = *pTVar3;
      *plVar2 = *plVar2 + 1;
      goto LAB_147f868a8;
    }
    uVar9 = 1;
    pTVar8 = (Type *)local_38;
  }
  else {
    if ((Type *)plVar2[1] < pTVar3 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->QualityLevel,1);
    }
    else {
      this->QualityLevel = *pTVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    pTVar8 = &this->FeatureLevel;
    pTVar4 = (Type *)**(undefined8 **)&param_1->field_0x8;
    if (pTVar4 + 1 <= (Type *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      *pTVar8 = *pTVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      goto LAB_147f868a8;
    }
    if ((param_1->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(param_1,pTVar8);
      goto LAB_147f868a8;
    }
    uVar9 = 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar8,uVar9);
LAB_147f868a8:
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,0x14);
  local_24 = 0;
  local_34 = 0;
  uStack_2c = 0;
  if (((*(longlong *)(this->CookedShaderMapIdHash).Hash == 0) &&
      (*(longlong *)((this->CookedShaderMapIdHash).Hash + 8) == 0)) &&
     (*(int *)((this->CookedShaderMapIdHash).Hash + 0x10) == 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CookedShaderMapIdHash != FSHAHash()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                       ,0x525,L"Loaded an invalid cooked shadermap id hash");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iVar1 < 0x104) {
    FPlatformTypeLayoutParameters::InitializeForCurrent(&this->LayoutParams);
  }
  else {
    FPlatformTypeLayoutParameters::Serialize(&this->LayoutParams,param_1);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

