// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Restore @ 141f9a710

void __thiscall FRestoreClassInfo::Restore(FRestoreClassInfo *this)

{
  int *piVar1;
  EClassFlags *pEVar2;
  EClassCastFlags *pEVar3;
  int iVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FScriptContainerElement *_Src;
  TArray<FNativeFunctionLookup,TSizedDefaultAllocator<32>_> *pTVar8;
  
  pUVar5 = this->Within;
  pUVar6 = this->Target;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (pUVar6->ClassWithin).field0_0x0.DebugPtr = pUVar5;
  pUVar7 = this->DefaultObject;
  pUVar5 = this->Target;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr = pUVar7;
  pEVar2 = &this->Target->ClassFlags;
  *pEVar2 = *pEVar2 | this->Flags;
  pEVar3 = &this->Target->ClassCastFlags;
  *pEVar3 = *pEVar3 | this->CastFlags;
  this->Target->ClassConstructor = this->Constructor;
  this->Target->ClassVTableHelperCtorCaller = this->ClassVTableHelperCtorCaller;
  (this->Target->CppClassStaticFunctions).AddReferencedObjects =
       (this->CppClassStaticFunctions).AddReferencedObjects;
  pUVar5 = this->Target;
  pTVar8 = &pUVar5->NativeFunctionLookupTable;
  if (pTVar8 != &this->NativeFunctionLookupTable) {
    iVar4 = (this->NativeFunctionLookupTable).ArrayNum;
    piVar1 = &(pUVar5->NativeFunctionLookupTable).ArrayMax;
    _Src = (this->NativeFunctionLookupTable).AllocatorInstance.Data;
    (pUVar5->NativeFunctionLookupTable).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,*piVar1,&pTVar8->AllocatorInstance,iVar4,piVar1);
    if (iVar4 != 0) {
      memcpy((pTVar8->AllocatorInstance).Data,_Src,(longlong)iVar4 << 4);
    }
  }
  return;
}

