// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FTextHistory_Generated @ 141737180

FTextHistory_Generated * __thiscall
FTextHistory_Generated::FTextHistory_Generated(FTextHistory_Generated *this,FString *param_1)

{
  this->_padding_ = 0;
  (this->DisplayString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
  (this->DisplayString).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayString).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->DisplayString).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  FTextHistory::MarkDisplayStringUpToDate((FTextHistory *)this);
  return this;
}

// GetDisplayString @ 14175c950

FString * __thiscall FTextHistory_Generated::GetDisplayString(FTextHistory_Generated *this)

{
  return &this->DisplayString;
}

// GetTextId @ 141761770

FTextId __thiscall FTextHistory_Generated::GetTextId(FTextHistory_Generated *this)

{
  FTextId in_RDX;
  
  *(undefined8 *)in_RDX = 0xffffffffffffffff;
  return in_RDX;
}

// Serialize @ 14177b390

void __thiscall
FTextHistory_Generated::Serialize(FTextHistory_Generated *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if ((pFVar1->field_0x28 & 1) != 0) {
    FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
  }
  return;
}

// UpdateDisplayString @ 141782250

void __thiscall FTextHistory_Generated::UpdateDisplayString(FTextHistory_Generated *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  FString *pFVar3;
  void *local_18 [2];
  
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0xb8))(this,local_18);
  pFVar3 = &this->DisplayString;
  if (pFVar3 != (FString *)puVar2) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar2;
    *puVar2 = 0;
    (this->DisplayString).Data.ArrayNum = *(int *)(puVar2 + 1);
    (this->DisplayString).Data.ArrayMax = *(int *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

