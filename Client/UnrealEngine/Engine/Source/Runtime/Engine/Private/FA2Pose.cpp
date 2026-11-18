// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147423f00

UScriptStruct * __cdecl FA2Pose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FA2Pose.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FA2Pose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FA2Pose,(UObject *)pUVar1,L"A2Pose");
  }
  return Z_Registration_Info_UScriptStruct_FA2Pose.OuterSingleton;
}

// operator= @ 147438060

FA2Pose * __thiscall FA2Pose::operator=(FA2Pose *this,FA2Pose *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Bones).ArrayMax;
    piVar1 = &(this->Bones).ArrayMax;
    _Src = (param_1->Bones).AllocatorInstance.Data;
    iVar3 = (param_1->Bones).ArrayNum;
    (this->Bones).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Bones).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x60);
    }
  }
  return this;
}

