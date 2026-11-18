// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CanRunInEnvironment @ 148870610

bool __thiscall
FLoadingTests_ZenLoaderOnly_Base::CanRunInEnvironment
          (FLoadingTests_ZenLoaderOnly_Base *this,FString *param_1,FString *param_2,bool *param_3)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  ELoaderType EVar2;
  longlong lVar3;
  FString local_28;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  EVar2 = (*GetLoaderType)();
  if (EVar2 != ZenLoader) {
    if (param_2 != (FString *)0x0) {
      ::LexToString(EVar2);
      local_10 = *(int *)&this->field_0x18;
      lVar3 = (longlong)local_10;
      _Src = *(void **)&this->field_0x10;
      local_18.Data = (FScriptContainerElement *)0x0;
      if (local_10 == 0) {
        local_c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_10,0,&local_18,local_10,&local_c);
        memcpy(local_18.Data,_Src,lVar3 * 2);
      }
      ::FString::PrintfImpl
                (&local_28,
                 L"Test %s is for ZenLoader only. Cannot run on non-compliant loader currently active: %s"
                );
      if (param_2 != &local_28) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_28.Data.ArrayNum;
        (param_2->Data).ArrayMax = local_28.Data.ArrayMax;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data);
      }
    }
    return false;
  }
  return true;
}

