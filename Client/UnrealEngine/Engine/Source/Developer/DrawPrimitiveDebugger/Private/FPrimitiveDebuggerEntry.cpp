// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 3

// FPrimitiveDebuggerEntry @ 146d03630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveDebuggerEntry * __thiscall
SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry::FPrimitiveDebuggerEntry
          (FPrimitiveDebuggerEntry *this,FPrimitiveInfo *param_1)

{
  TSharedRef<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar1;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_28;
  TSharedRef<FViewDebugInfo::FPrimitiveInfo_const_,1> local_18;
  
  pTVar1 = MakeShared<FViewDebugInfo::FPrimitiveInfo_const_,1,FViewDebugInfo::FPrimitiveInfo_const_&>
                     (&local_18,param_1);
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1><FViewDebugInfo::FPrimitiveInfo_const_>
            (&local_28,pTVar1);
  FPrimitiveDebuggerEntry(this,&local_28);
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_28);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_18.SharedReferenceCount);
  return this;
}

// FPrimitiveDebuggerEntry @ 146d036a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveDebuggerEntry * __thiscall
SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry::FPrimitiveDebuggerEntry
          (FPrimitiveDebuggerEntry *this,
          TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1)

{
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&this->Data,param_1);
  this->bHidden = '\0';
  this->bPinned = '\0';
  this->bSelected = '\0';
  this->bShowingDebugBones = '\0';
  this->bShowingDebugBounds = '\0';
  this->bHasForceDisabledNanite = '\0';
  this->bHasForcedLOD = '\0';
  this->bRetainDuringRefresh = '\0';
  this->DesiredForcedLOD = 0;
  this->bDesiredForceDisabledNaniteState = false;
  return this;
}

// ~FPrimitiveDebuggerEntry @ 146d04910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry::~FPrimitiveDebuggerEntry
          (FPrimitiveDebuggerEntry *this)

{
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&this->Data);
  return;
}

