// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 2

// TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_> @ 145fe5780

TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_>::
TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_> @ 145fe9270

void __thiscall
TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_>::
~TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int>
            ((TSharedPtr<FSlateDynamicImageBrush,1> *)(this->AllocatorInstance).Data,this->ArrayNum)
  ;
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

