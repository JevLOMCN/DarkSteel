// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// StaticStruct @ 14def0d80

UScriptStruct * __cdecl FIKRigWorkData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigWorkData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigWorkData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigWorkData,(UObject *)pUVar1,L"IKRigWorkData"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FIKRigWorkData.OuterSingleton;
}

// operator= @ 14df1e940

FIKRigWorkData * __thiscall FIKRigWorkData::operator=(FIKRigWorkData *this,FIKRigWorkData *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->CachedRigElements).ArrayMax;
    piVar1 = &(this->CachedRigElements).ArrayMax;
    _Src = (param_1->CachedRigElements).AllocatorInstance.Data;
    iVar3 = (param_1->CachedRigElements).ArrayNum;
    (this->CachedRigElements).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->CachedRigElements).AllocatorInstance.Data,_Src,(longlong)iVar3 << 5);
      }
    }
  }
  FIKRigProcessor::operator=(&this->IKRigProcessor,&param_1->IKRigProcessor);
  return this;
}

