// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 2

// operator= @ 14d2a30a0

FDragonData_MultiInput * __thiscall
FDragonData_MultiInput::operator=(FDragonData_MultiInput *this,FDragonData_MultiInput *param_1)

{
  TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FDragonData_FootData *pFVar4;
  
  this->Start_Spine = param_1->Start_Spine;
  pTVar1 = &this->FeetBones;
  this->Pelvis = param_1->Pelvis;
  if (pTVar1 != &param_1->FeetBones) {
    DestructItems<FDragonData_FootData,int>
              ((FDragonData_FootData *)(pTVar1->AllocatorInstance).Data,(this->FeetBones).ArrayNum);
    iVar3 = (param_1->FeetBones).ArrayNum;
    piVar2 = &(this->FeetBones).ArrayMax;
    pFVar4 = (FDragonData_FootData *)(param_1->FeetBones).AllocatorInstance.Data;
    (this->FeetBones).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FDragonData_FootData,FDragonData_FootData,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

// StaticStruct @ 14d2ae2c0

UScriptStruct * __cdecl FDragonData_MultiInput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDragonData_MultiInput.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FDragonData_MultiInput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_MultiInput,(UObject *)pUVar1,
                         L"DragonData_MultiInput");
  }
  return Z_Registration_Info_UScriptStruct_FDragonData_MultiInput.OuterSingleton;
}

