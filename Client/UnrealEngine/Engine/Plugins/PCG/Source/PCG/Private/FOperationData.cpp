// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// Validate<1,1> @ 1499c0fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall PCGMetadataOps::FOperationData::Validate<1,1>(FOperationData *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->OutputKeys).ArrayNum != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys.Num() == NbOutputs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1cc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputAccessors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->InputAccessors).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAccessors[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputKeys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->InputKeys).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputKeys[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputAccessors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->OutputAccessors).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputAccessors[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputKeys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->OutputKeys).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Validate<1,3> @ 1499c11a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall PCGMetadataOps::FOperationData::Validate<1,3>(FOperationData *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->OutputKeys).ArrayNum != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys.Num() == NbOutputs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1cc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputAccessors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->InputAccessors).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAccessors[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputKeys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->InputKeys).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputKeys[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputAccessors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->OutputAccessors).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputAccessors[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputKeys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->OutputKeys).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputAccessors).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->OutputAccessors).AllocatorInstance.Data + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputAccessors[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputKeys).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->OutputKeys).AllocatorInstance.Data + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputAccessors).ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->OutputAccessors).AllocatorInstance.Data + 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputAccessors[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputKeys).ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->OutputKeys).AllocatorInstance.Data + 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Validate<1,4> @ 1499c1540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall PCGMetadataOps::FOperationData::Validate<1,4>(FOperationData *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->OutputKeys).ArrayNum != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys.Num() == NbOutputs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1cc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputAccessors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->InputAccessors).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAccessors[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputKeys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->InputKeys).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputKeys[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputAccessors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->OutputAccessors).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputAccessors[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputKeys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->OutputKeys).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputAccessors).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->OutputAccessors).AllocatorInstance.Data + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputAccessors[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputKeys).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->OutputKeys).AllocatorInstance.Data + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputAccessors).ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->OutputAccessors).AllocatorInstance.Data + 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputAccessors[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputKeys).ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->OutputKeys).AllocatorInstance.Data + 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputAccessors).ArrayNum < 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->OutputAccessors).AllocatorInstance.Data + 0x18) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputAccessors[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputKeys).ArrayNum < 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->OutputKeys).AllocatorInstance.Data + 0x18) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Validate<2,1> @ 1499c19c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall PCGMetadataOps::FOperationData::Validate<2,1>(FOperationData *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->OutputKeys).ArrayNum != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys.Num() == NbOutputs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1cc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputAccessors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->InputAccessors).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAccessors[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputKeys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->InputKeys).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputKeys[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputAccessors).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->InputAccessors).AllocatorInstance.Data + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAccessors[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputKeys).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->InputKeys).AllocatorInstance.Data + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputKeys[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputAccessors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->OutputAccessors).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputAccessors[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputKeys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->OutputKeys).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Validate<3,1> @ 1499c1c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall PCGMetadataOps::FOperationData::Validate<3,1>(FOperationData *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->OutputKeys).ArrayNum != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys.Num() == NbOutputs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1cc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputAccessors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->InputAccessors).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAccessors[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputKeys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->InputKeys).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputKeys[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputAccessors).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->InputAccessors).AllocatorInstance.Data + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAccessors[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputKeys).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->InputKeys).AllocatorInstance.Data + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputKeys[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputAccessors).ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->InputAccessors).AllocatorInstance.Data + 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAccessors[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputKeys).ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->InputKeys).AllocatorInstance.Data + 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputKeys[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputAccessors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->OutputAccessors).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputAccessors[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputKeys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->OutputKeys).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Validate<4,1> @ 1499c2030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall PCGMetadataOps::FOperationData::Validate<4,1>(FOperationData *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->OutputKeys).ArrayNum != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys.Num() == NbOutputs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1cc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputAccessors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->InputAccessors).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAccessors[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputKeys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->InputKeys).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputKeys[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputAccessors).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->InputAccessors).AllocatorInstance.Data + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAccessors[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputKeys).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->InputKeys).AllocatorInstance.Data + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputKeys[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputAccessors).ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->InputAccessors).AllocatorInstance.Data + 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAccessors[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputKeys).ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->InputKeys).AllocatorInstance.Data + 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputKeys[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputAccessors).ArrayNum < 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->InputAccessors).AllocatorInstance.Data + 0x18) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAccessors[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->InputKeys).ArrayNum < 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)((this->InputKeys).AllocatorInstance.Data + 0x18) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputKeys[i].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputAccessors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->OutputAccessors).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputAccessors[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->OutputKeys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->OutputKeys).AllocatorInstance.Data == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputKeys[j].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~FOperationData @ 1499c6050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall PCGMetadataOps::FOperationData::~FOperationData(FOperationData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>,int>
            ((TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *)
             (this->OutputAccessors).AllocatorInstance.Data,(this->OutputAccessors).ArrayNum);
  pFVar1 = (this->OutputAccessors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int>
            ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
              *)(this->InputAccessors).AllocatorInstance.Data,(this->InputAccessors).ArrayNum);
  pFVar1 = (this->InputAccessors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>,int>
            ((TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> *)
             (this->OutputKeys).AllocatorInstance.Data,(this->OutputKeys).ArrayNum);
  pFVar1 = (this->OutputKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,int>
            ((TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
              *)(this->InputKeys).AllocatorInstance.Data,(this->InputKeys).ArrayNum);
  pFVar1 = (this->InputKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGAttributePropertyInputSelector,int>
            ((FPCGAttributePropertyInputSelector *)(this->InputSources).AllocatorInstance.Data,
             (this->InputSources).ArrayNum);
  pFVar1 = (this->InputSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

