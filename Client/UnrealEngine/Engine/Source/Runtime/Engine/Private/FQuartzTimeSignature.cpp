// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147335b00

UScriptStruct * __cdecl FQuartzTimeSignature::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FQuartzTimeSignature.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FQuartzTimeSignature.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FQuartzTimeSignature,(UObject *)pUVar1,
                         L"QuartzTimeSignature");
  }
  return Z_Registration_Info_UScriptStruct_FQuartzTimeSignature.OuterSingleton;
}

// FQuartzTimeSignature @ 14733fbf0

FQuartzTimeSignature * __thiscall
FQuartzTimeSignature::FQuartzTimeSignature(FQuartzTimeSignature *this,FQuartzTimeSignature *param_1)

{
  TArray<FQuartzPulseOverrideStep,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->OptionalPulseOverride;
  this->NumBeats = param_1->NumBeats;
  this->BeatType = param_1->BeatType;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->OptionalPulseOverride).ArrayMax;
  iVar3 = (param_1->OptionalPulseOverride).ArrayNum;
  _Src = (param_1->OptionalPulseOverride).AllocatorInstance.Data;
  (this->OptionalPulseOverride).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// operator= @ 147342910

FQuartzTimeSignature * __thiscall
FQuartzTimeSignature::operator=(FQuartzTimeSignature *this,FQuartzTimeSignature *param_1)

{
  TArray<FQuartzPulseOverrideStep,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->OptionalPulseOverride;
  this->NumBeats = param_1->NumBeats;
  this->BeatType = param_1->BeatType;
  if (pTVar1 != &param_1->OptionalPulseOverride) {
    iVar3 = (this->OptionalPulseOverride).ArrayMax;
    piVar2 = &(this->OptionalPulseOverride).ArrayMax;
    _Src = (param_1->OptionalPulseOverride).AllocatorInstance.Data;
    iVar4 = (param_1->OptionalPulseOverride).ArrayNum;
    (this->OptionalPulseOverride).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  return this;
}

// operator== @ 147342ac0

bool __thiscall
FQuartzTimeSignature::operator==(FQuartzTimeSignature *this,FQuartzTimeSignature *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  iVar2 = (this->OptionalPulseOverride).ArrayNum;
  bVar12 = this->BeatType == param_1->BeatType;
  bVar13 = iVar2 == (param_1->OptionalPulseOverride).ArrayNum;
  bVar14 = this->NumBeats == param_1->NumBeats;
  bVar11 = bVar14 && (bVar12 && bVar13);
  if ((!bVar14 || (!bVar12 || !bVar13)) || (iVar2 == 0)) {
    return bVar11;
  }
  uVar8 = 0;
  if (iVar2 < 1) {
    return bVar11;
  }
  lVar9 = 0;
  while( true ) {
    uVar10 = ~uVar8 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar8 < (this->OptionalPulseOverride).ArrayNum) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    iVar3 = *(int *)((this->OptionalPulseOverride).AllocatorInstance.Data + lVar9 * 8);
    uVar7 = 0;
    if ((int)uVar8 < (param_1->OptionalPulseOverride).ArrayNum) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) break;
    iVar4 = *(int *)((param_1->OptionalPulseOverride).AllocatorInstance.Data + lVar9 * 8);
    uVar7 = 0;
    if ((int)uVar8 < (this->OptionalPulseOverride).ArrayNum) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    FVar1 = (this->OptionalPulseOverride).AllocatorInstance.Data[lVar9 * 8 + 4];
    uVar7 = 0;
    if ((int)uVar8 < (param_1->OptionalPulseOverride).ArrayNum) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    if ((iVar3 != iVar4) ||
       (FVar1 != (param_1->OptionalPulseOverride).AllocatorInstance.Data[lVar9 * 8 + 4])) {
      return false;
    }
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 1;
    if (iVar2 <= lVar9) {
      return bVar11;
    }
  }
  pcVar5 = (code *)swi(3);
  uVar6 = (*pcVar5)();
  return (bool)uVar6;
}

