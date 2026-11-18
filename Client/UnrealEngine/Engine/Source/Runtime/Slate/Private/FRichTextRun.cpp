// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FRichTextRun @ 1428449f0

FRichTextRun * __thiscall
IRichTextMarkupWriter::FRichTextRun::FRichTextRun(FRichTextRun *this,FRichTextRun *param_1)

{
  (this->Info).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).Name.Data.AllocatorInstance.Data = (param_1->Info).Name.Data.AllocatorInstance.Data;
  (param_1->Info).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).Name.Data.ArrayNum = (param_1->Info).Name.Data.ArrayNum;
  (this->Info).Name.Data.ArrayMax = (param_1->Info).Name.Data.ArrayMax;
  (param_1->Info).Name.Data.ArrayNum = 0;
  (param_1->Info).Name.Data.ArrayMax = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&(this->Info).MetaData,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&(param_1->Info).MetaData);
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.AllocatorInstance.Data = (param_1->Text).Data.AllocatorInstance.Data;
  (param_1->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = (param_1->Text).Data.ArrayNum;
  (this->Text).Data.ArrayMax = (param_1->Text).Data.ArrayMax;
  (param_1->Text).Data.ArrayNum = 0;
  (param_1->Text).Data.ArrayMax = 0;
  return this;
}

