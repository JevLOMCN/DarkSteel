// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FUniqueNetIdWrapper,FRemoteTalkerDataImpl> @ 14ecdaa10

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FUniqueNetIdWrapper,FRemoteTalkerDataImpl>::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FUniqueNetIdWrapper,FRemoteTalkerDataImpl>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FUniqueNetIdWrapper,FRemoteTalkerDataImpl>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  FRemoteTalkerDataImpl::~FRemoteTalkerDataImpl((FRemoteTalkerDataImpl *)&this->field_0x20);
  bVar1 = this->field_0x18;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 1:
    return;
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}

