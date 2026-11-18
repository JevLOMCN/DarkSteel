// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FCopyOnWriteContents @ 1422571a0

FCopyOnWriteContents * __thiscall
Verse::FNativeString::FCopyOnWriteContents::FCopyOnWriteContents
          (FCopyOnWriteContents *this,FUtf8String *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->String).Data.ArrayMax;
  (this->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->String).Data.ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    this->CachedHash = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->String).Data.AllocatorInstance.Data,_Src,(longlong)iVar2);
    this->CachedHash = 0;
  }
  return this;
}

