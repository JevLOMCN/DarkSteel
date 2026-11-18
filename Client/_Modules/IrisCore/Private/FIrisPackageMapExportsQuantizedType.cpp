// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// ~FIrisPackageMapExportsQuantizedType @ 14422b0a0

void __thiscall
UE::Net::FIrisPackageMapExportsQuantizedType::~FIrisPackageMapExportsQuantizedType
          (FIrisPackageMapExportsQuantizedType *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->NetTokenStorage).AllocatorInstance.SecondaryData.Data != (FNetToken *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetSerializerArrayStorage.h"
                       ,0x1f,L"Data allocated for dynamic states must be explictly freed");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->NameStorage).AllocatorInstance.SecondaryData.Data != (FQuantizedName *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetSerializerArrayStorage.h"
                       ,0x1f,L"Data allocated for dynamic states must be explictly freed");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data !=
      (FObjectNetSerializerQuantizedReferenceStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetSerializerArrayStorage.h"
                       ,0x1f,L"Data allocated for dynamic states must be explictly freed");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

