// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147259e10

UScriptStruct * __cdecl FCurveMetaData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCurveMetaData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCurveMetaData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCurveMetaData,(UObject *)pUVar1,L"CurveMetaData"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FCurveMetaData.OuterSingleton;
}

// FCurveMetaData @ 147433ac0

FCurveMetaData * __thiscall FCurveMetaData::FCurveMetaData(FCurveMetaData *this)

{
  this->MaxLOD = 0xff;
  (this->Type).bMaterial = false;
  (this->LinkedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkedBones).ArrayNum = 0;
  (this->LinkedBones).ArrayMax = 0;
  (this->Type).bMorphtarget = false;
  return this;
}

// Serialize @ 1474760b0

bool __thiscall FCurveMetaData::Serialize(FCurveMetaData *this,FArchive *param_1)

{
  uchar *puVar1;
  int iVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
  ::operator<<(param_1,&(this->Type).bMaterial);
  ::operator<<(param_1,&(this->Type).bMorphtarget);
  TArrayPrivateFriend::Serialize<FBoneReference,TSizedDefaultAllocator<32>_>
            (param_1,&this->LinkedBones);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimPhysObjectVersion::GUID);
  if (0xb < iVar2) {
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if (puVar1 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      this->MaxLOD = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      return true;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->MaxLOD,1);
  }
  return true;
}

// FCurveMetaData @ 1475a48a0

FCurveMetaData * __thiscall
FCurveMetaData::FCurveMetaData(FCurveMetaData *this,FCurveMetaData *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->LinkedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LinkedBones).ArrayMax;
  iVar2 = (param_1->LinkedBones).ArrayNum;
  _Src = (param_1->LinkedBones).AllocatorInstance.Data;
  (this->LinkedBones).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->LinkedBones).AllocatorInstance.Data,_Src,(longlong)iVar2 << 4);
  }
  this->MaxLOD = param_1->MaxLOD;
  this->Type = param_1->Type;
  return this;
}

