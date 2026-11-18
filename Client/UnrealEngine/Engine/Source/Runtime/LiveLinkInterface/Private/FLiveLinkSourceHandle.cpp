// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 2

// StaticStruct @ 14cfab570

UScriptStruct * __cdecl FLiveLinkSourceHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSourceHandle.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkSourceHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSourceHandle,(UObject *)pUVar1,
                         L"LiveLinkSourceHandle");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkSourceHandle.OuterSingleton;
}

// ~FLiveLinkSourceHandle @ 14cfb6460

void __thiscall FLiveLinkSourceHandle::~FLiveLinkSourceHandle(FLiveLinkSourceHandle *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourcePointer).SharedReferenceCount.ReferenceController);
  return;
}

