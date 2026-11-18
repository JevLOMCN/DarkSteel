// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FNetTraceBunchScope<FInBunch> @ 147fa3200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetTraceBunchScope<FInBunch> * __thiscall
FNetTraceBunchScope<FInBunch>::FNetTraceBunchScope<FInBunch>
          (FNetTraceBunchScope<FInBunch> *this,FInBunch *param_1,uint param_2,uint param_3,
          FNetTraceCollector *param_4)

{
  this->Collector = param_4;
  this->Bunch = param_1;
  this->StartPos = param_2;
  this->HeaderBits = param_3;
  if (param_4 != (FNetTraceCollector *)0x0) {
    FNetTrace::BeginBunch(param_4);
  }
  return this;
}

// ~FNetTraceBunchScope<FInBunch> @ 147fa7640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetTraceBunchScope<FInBunch>::~FNetTraceBunchScope<FInBunch>(FNetTraceBunchScope<FInBunch> *this)

{
  uint uVar1;
  uint uVar2;
  FInBunch *pFVar3;
  longlong lVar4;
  uint uVar5;
  FNetTraceBunchInfo local_res8;
  
  if (this->Collector != (FNetTraceCollector *)0x0) {
    pFVar3 = this->Bunch;
    uVar1 = this->StartPos;
    uVar5 = (uint)(byte)pFVar3->field_0xe8;
    uVar2 = this->HeaderBits;
    local_res8.Value =
         (((((((pFVar3->bHasMustBeMappedGUIDs << 4 | (ulonglong)(uVar5 & 3)) * 2 |
              (ulonglong)((byte)pFVar3->field_0xe8 & 8)) << 2 | (ulonglong)(uVar5 & 4)) * 2 |
             (ulonglong)((byte)pFVar3->field_0xe9 & 2) | (ulonglong)(uVar5 & 0x80)) << 4 |
           (ulonglong)(uVar5 & 0x40)) * 2 | (ulonglong)(pFVar3->CloseReason & 0xf) |
          (ulonglong)(uVar5 & 0x30)) << 0xc | (ulonglong)(pFVar3->ChSequence & 0xfff)) << 0x14 |
         (ulonglong)(pFVar3->ChIndex & 0xfffff);
    lVar4 = pFVar3->_padding_;
    uVar5 = FNetTrace::TraceName(pFVar3->ChName);
    FNetTrace::EndBunch(this->Collector,uVar5,uVar1,uVar2,(uint)lVar4,&local_res8);
  }
  return;
}

