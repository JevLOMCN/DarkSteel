// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 3

// StaticStruct @ 14a86d310

UScriptStruct * __cdecl FAnimCurveOverrideList::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimCurveOverrideList.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FAnimCurveOverrideList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveOverrideList,(UObject *)pUVar1,
                         L"AnimCurveOverrideList");
  }
  return Z_Registration_Info_UScriptStruct_FAnimCurveOverrideList.OuterSingleton;
}

// operator= @ 14a87f020

FAnimCurveOverrideList * __thiscall
FAnimCurveOverrideList::operator=(FAnimCurveOverrideList *this,FAnimCurveOverrideList *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Values).ArrayMax;
    piVar1 = &(this->Values).ArrayMax;
    _Src = (param_1->Values).AllocatorInstance.Data;
    iVar3 = (param_1->Values).ArrayNum;
    (this->Values).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Values).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0xc);
      }
    }
  }
  this->Hash = param_1->Hash;
  return this;
}

// ComputeHash @ 14a883500

void __thiscall FAnimCurveOverrideList::ComputeHash(FAnimCurveOverrideList *this)

{
  uint uVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FAnimCurveOverrideList.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FAnimCurveOverrideList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveOverrideList,(UObject *)pUVar2,
                         L"AnimCurveOverrideList");
  }
  uVar1 = UE::StructUtils::GetStructCrc32
                    (Z_Registration_Info_UScriptStruct_FAnimCurveOverrideList.OuterSingleton,
                     (uchar *)this,0);
  this->Hash = uVar1;
  return;
}

