// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 1

// operator<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry> @ 146cfaff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry> * __thiscall
TPairInitializer<FPrimitiveComponentId_const_&,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry_&&>::
operator<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>
          (TPairInitializer<FPrimitiveComponentId_const_&,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry_&&>
           *this,TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>
                 *__return_storage_ptr__)

{
  FPrimitiveDebuggerEntry *pFVar1;
  byte bVar2;
  
  pFVar1 = this->Value;
  *(uint *)__return_storage_ptr__ = this->Key->PrimIDValue;
  *(FPrimitiveInfo **)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar1->Data).SharedReferenceCount.ReferenceController;
  (pFVar1->Data).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar1->Data).Object = (FPrimitiveInfo *)0x0;
  bVar2 = (__return_storage_ptr__->field_0x18 ^ pFVar1->bHidden) & 1 ^
          __return_storage_ptr__->field_0x18;
  __return_storage_ptr__->field_0x18 = bVar2;
  bVar2 = (bVar2 ^ pFVar1->field_0x10) & 2 ^ bVar2;
  __return_storage_ptr__->field_0x18 = bVar2;
  bVar2 = (bVar2 ^ pFVar1->field_0x10) & 4 ^ bVar2;
  __return_storage_ptr__->field_0x18 = bVar2;
  bVar2 = (bVar2 ^ pFVar1->field_0x10) & 8 ^ bVar2;
  __return_storage_ptr__->field_0x18 = bVar2;
  bVar2 = (bVar2 ^ pFVar1->field_0x10) & 0x10 ^ bVar2;
  __return_storage_ptr__->field_0x18 = bVar2;
  bVar2 = (bVar2 ^ pFVar1->field_0x10) & 0x20 ^ bVar2;
  __return_storage_ptr__->field_0x18 = bVar2;
  bVar2 = (bVar2 ^ pFVar1->field_0x10) & 0x40 ^ bVar2;
  __return_storage_ptr__->field_0x18 = bVar2;
  __return_storage_ptr__->field_0x18 = (bVar2 ^ pFVar1->field_0x10) & 0x7f ^ pFVar1->field_0x10;
  *(int *)&__return_storage_ptr__->field_0x1c = pFVar1->DesiredForcedLOD;
  __return_storage_ptr__->field_0x20 = pFVar1->bDesiredForceDisabledNaniteState;
  return __return_storage_ptr__;
}

