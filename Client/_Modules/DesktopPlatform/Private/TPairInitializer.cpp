// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 1

// operator<FString,FUProjectDictionary>_TTuple<FString,FUProjectDictionary> @ 142d1a2b0

TTuple<FString,FUProjectDictionary> * __thiscall
TPairInitializer<FString_const_&,FUProjectDictionary_&&>::
operator<FString,FUProjectDictionary>_TTuple<FString,FUProjectDictionary>
          (TPairInitializer<FString_const_&,FUProjectDictionary_&&> *this,
          TTuple<FString,FUProjectDictionary> *__return_storage_ptr__)

{
  FUProjectDictionary *pFVar1;
  
  pFVar1 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x10 =
       (pFVar1->RootDir).Data.AllocatorInstance.Data;
  (pFVar1->RootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x18 = (pFVar1->RootDir).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x1c = (pFVar1->RootDir).Data.ArrayMax;
  (pFVar1->RootDir).Data.ArrayNum = 0;
  (pFVar1->RootDir).Data.ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x20 =
       (pFVar1->ProjectRootDirs).AllocatorInstance.Data;
  (pFVar1->ProjectRootDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x28 = (pFVar1->ProjectRootDirs).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x2c = (pFVar1->ProjectRootDirs).ArrayMax;
  (pFVar1->ProjectRootDirs).ArrayNum = 0;
  (pFVar1->ProjectRootDirs).ArrayMax = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x30,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ShortProjectNameDictionary);
  return __return_storage_ptr__;
}

