// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 1

// ToString @ 143120100

FString * __thiscall
UE::Cook::FCookOnTheFlyMessageHeader::ToString
          (FCookOnTheFlyMessageHeader *this,FString *__return_storage_ptr__)

{
  switch(this->MessageType & ~TypeFlags) {
  case None:
    break;
  default:
    break;
  case CookPackage:
    break;
  case GetCookedPackages:
    break;
  case RecompileShaders:
    break;
  case PackagesCooked:
    break;
  case FilesAdded:
    break;
  case RecookPackages:
    break;
  case NetworkPlatformFile:
  }
  ::FString::PrintfImpl
            (__return_storage_ptr__,L"Message=\'%s\', Status=\'%s\', CorrelationId=\'%u\'");
  return __return_storage_ptr__;
}

