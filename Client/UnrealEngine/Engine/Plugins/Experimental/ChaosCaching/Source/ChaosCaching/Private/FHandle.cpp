// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 2

// GetConst<FEnableStateEvent> @ 14dae3eb0

FEnableStateEvent * __thiscall FCacheEventTrack::FHandle::GetConst<FEnableStateEvent>(FHandle *this)

{
  uint uVar1;
  FCacheEventTrack *pFVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  UPackage *pUVar5;
  FEnableStateEvent *pFVar6;
  uint uVar7;
  bool bVar8;
  
  uVar1 = this->Index;
  if ((((uVar1 != 0xffffffff) && (pFVar2 = this->Track, pFVar2 != (FCacheEventTrack *)0x0)) &&
      (pFVar2->TransientVersion == this->Version)) &&
     (((-1 < (int)uVar1 && ((int)uVar1 < (pFVar2->EventData).ArrayNum)) &&
      ((pFVar2->Struct).field0_0x0.DebugPtr != (UScriptStruct *)0x0)))) {
    if (Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
      Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FEnableStateEvent,(UObject *)pUVar5,
                           L"EnableStateEvent");
    }
    pUVar3 = (pFVar2->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar8 = Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton ==
              (UScriptStruct *)0x0;
    }
    else {
      bVar8 = pUVar3 == Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton;
    }
    if (!bVar8) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("T::StaticStruct() == Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\CacheEvents.h"
                         ,0x6e,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FEnableStateEvent *)(*pcVar4)();
        return pFVar6;
      }
    }
    uVar7 = 0;
    if ((int)uVar1 < (pFVar2->EventData).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FEnableStateEvent *)(*pcVar4)();
        return pFVar6;
      }
    }
    return *(FEnableStateEvent **)
            ((pFVar2->EventData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  }
  return (FEnableStateEvent *)0x0;
}

// IsAlive @ 14dafa6b0

bool __thiscall FCacheEventTrack::FHandle::IsAlive(FHandle *this)

{
  if (((this->Index != -1) && (this->Track != (FCacheEventTrack *)0x0)) &&
     (this->Track->TransientVersion == this->Version)) {
    return true;
  }
  return false;
}

