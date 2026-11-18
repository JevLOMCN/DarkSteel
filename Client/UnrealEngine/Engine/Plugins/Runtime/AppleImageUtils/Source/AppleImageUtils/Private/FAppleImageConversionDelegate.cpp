// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleImageUtils
// Functions: 1

// Broadcast @ 14cfa8810

void __thiscall
FAppleImageConversionDelegate::Broadcast
          (FAppleImageConversionDelegate *this,FAppleImageUtilsImageConversionResult *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FString local_28;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  ::FString::operator=(&local_28,&param_1->Error);
  if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_18 != &param_1->ImageData) {
    iVar1 = (param_1->ImageData).ArrayNum;
    _Src = (param_1->ImageData).AllocatorInstance.Data;
    local_10 = CONCAT44(local_10._4_4_,iVar1);
    if ((iVar1 == 0) && (local_10._4_4_ == 0)) {
      local_10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,local_10._4_4_,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
      if (iVar1 != 0) {
        memcpy(local_18.Data,_Src,(longlong)iVar1);
      }
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

