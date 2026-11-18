// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CCSAIServicePlugin
// Functions: 2

// StaticStruct @ 14ac83620

UScriptStruct * __cdecl FCCS_AICmd::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCCS_AICmd.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CCSAIServicePlugin();
    Z_Registration_Info_UScriptStruct_FCCS_AICmd.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCCS_AICmd,(UObject *)pUVar1,L"CCS_AICmd");
  }
  return Z_Registration_Info_UScriptStruct_FCCS_AICmd.OuterSingleton;
}

// operator= @ 14ac85e60

FCCS_AICmd * __thiscall FCCS_AICmd::operator=(FCCS_AICmd *this,FCCS_AICmd *param_1)

{
  TArray<FCCS_AIInput,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  double dVar5;
  
  dVar5 = (param_1->moveInputVector).field0_0x0._s_0.Y;
  pTVar1 = &this->inputList;
  (this->moveInputVector).field0_0x0._s_0.X = (param_1->moveInputVector).field0_0x0._s_0.X;
  (this->moveInputVector).field0_0x0._s_0.Y = dVar5;
  this->cameraYaw = param_1->cameraYaw;
  if (pTVar1 != &param_1->inputList) {
    iVar3 = (this->inputList).ArrayMax;
    piVar2 = &(this->inputList).ArrayMax;
    _Src = (param_1->inputList).AllocatorInstance.Data;
    iVar4 = (param_1->inputList).ArrayNum;
    (this->inputList).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 2);
      }
    }
  }
  return this;
}

