// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 2

// StaticStruct @ 14d67c9a0

UScriptStruct * __cdecl FDistortionInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDistortionInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FDistortionInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDistortionInfo,(UObject *)pUVar1,
                         L"DistortionInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDistortionInfo.OuterSingleton;
}

// FDistortionInfo @ 14d6a76e0

FDistortionInfo * __thiscall
FDistortionInfo::FDistortionInfo(FDistortionInfo *this,FDistortionInfo *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Parameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Parameters).ArrayMax;
  iVar2 = (param_1->Parameters).ArrayNum;
  _Src = (param_1->Parameters).AllocatorInstance.Data;
  (this->Parameters).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Parameters).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  return this;
}

