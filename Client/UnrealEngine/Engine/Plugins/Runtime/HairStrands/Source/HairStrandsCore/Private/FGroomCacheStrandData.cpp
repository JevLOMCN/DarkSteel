// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// FGroomCacheStrandData @ 14dfeddb0

FGroomCacheStrandData * __thiscall
FGroomCacheStrandData::FGroomCacheStrandData
          (FGroomCacheStrandData *this,FHairStrandsCurves *param_1,float param_2,float param_3)

{
  (this->CurvesLength).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurvesLength).AllocatorInstance.Data = (param_1->CurvesLength).AllocatorInstance.Data;
  (param_1->CurvesLength).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurvesLength).ArrayNum = (param_1->CurvesLength).ArrayNum;
  (this->CurvesLength).ArrayMax = (param_1->CurvesLength).ArrayMax;
  (param_1->CurvesLength).ArrayNum = 0;
  (param_1->CurvesLength).ArrayMax = 0;
  this->MaxLength = param_2;
  this->MaxRadius = param_3;
  return this;
}

// Serialize @ 14e027e10

void __thiscall
FGroomCacheStrandData::Serialize
          (FGroomCacheStrandData *this,FArchive *param_1,int param_2,EGroomCacheAttributes param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined7 in_register_00000089;
  
  pfVar1 = &this->MaxLength;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,pfVar1,4,CONCAT71(in_register_00000089,param_3));
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->MaxRadius;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&this->CurvesLength);
  return;
}

