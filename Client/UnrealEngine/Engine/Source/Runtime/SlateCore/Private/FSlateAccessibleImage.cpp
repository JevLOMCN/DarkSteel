// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// ~FSlateAccessibleImage @ 1425c16b0

void __thiscall FSlateAccessibleImage::~FSlateAccessibleImage(FSlateAccessibleImage *this)

{
  *(undefined ***)this = &___7FSlateAccessibleImage__6B_;
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  return;
}

// GetHelpText @ 1425e1290

FString * __thiscall
FSlateAccessibleImage::GetHelpText(FSlateAccessibleImage *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

