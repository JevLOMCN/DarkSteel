// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1474900e0

UScriptStruct * __cdecl FSlotAnimationTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSlotAnimationTrack.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSlotAnimationTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSlotAnimationTrack,(UObject *)pUVar1,
                         L"SlotAnimationTrack");
  }
  return Z_Registration_Info_UScriptStruct_FSlotAnimationTrack.OuterSingleton;
}

// FSlotAnimationTrack @ 1474b3780

FSlotAnimationTrack * __thiscall FSlotAnimationTrack::FSlotAnimationTrack(FSlotAnimationTrack *this)

{
  this->SlotName = FAnimSlotGroup::DefaultSlotName;
  (this->AnimTrack).AnimSegments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimTrack).AnimSegments.ArrayNum = 0;
  (this->AnimTrack).AnimSegments.ArrayMax = 0;
  return this;
}

