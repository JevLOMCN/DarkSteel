// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 2

// FNetTokenExportScope @ 1441d1f20

FNetTokenExportScope * __thiscall
UE::Net::FNetTokenExportScope::FNetTokenExportScope
          (FNetTokenExportScope *this,FNetBitWriter *param_1,FNetTokenStore *param_2,
          TArray<UE::Net::FNetToken,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3,char *param_4)

{
  (this->ExportContext).NetTokenStore = param_2;
  (this->ExportContext).NetTokensPendingExport = param_3;
  this->NetBitWriter = param_1;
  this->OldExportContext = (param_1->NetTokenExportContext).Ptr;
  this->DebugName = param_4;
  (param_1->NetTokenExportContext).Ptr = &this->ExportContext;
  return this;
}

// ~FNetTokenExportScope @ 1441d4020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Net::FNetTokenExportScope::~FNetTokenExportScope(FNetTokenExportScope *this)

{
  ForElementType<UE::Net::FNetToken> FVar1;
  int iVar2;
  ForElementType<UE::Net::FNetToken> FVar3;
  ForAnyElementType FVar4;
  ForElementType<UE::Net::FNetToken> FVar5;
  undefined1 local_res8 [8];
  FString local_28;
  
  (this->NetBitWriter->NetTokenExportContext).Ptr = this->OldExportContext;
  if ((((this->ExportContext).NetTokensPendingExport)->ArrayNum != 0) &&
     (5 < (byte)LogNetToken._0_1_)) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
    FVar3 = (ForElementType<UE::Net::FNetToken>)(this->ExportContext).NetTokensPendingExport;
    iVar2 = *(int *)((longlong)FVar3 + 0x18);
    FVar5 = *(ForElementType<UE::Net::FNetToken> *)((longlong)FVar3 + 0x10);
    if (*(ForElementType<UE::Net::FNetToken> *)((longlong)FVar3 + 0x10) ==
        (ForElementType<UE::Net::FNetToken>)0x0) {
      FVar5 = FVar3;
    }
    FVar1 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar5 + (longlong)iVar2 * 4);
    while( true ) {
      if (*(int *)((longlong)FVar3 + 0x18) != iVar2) {
        `TCheckedPointerIterator<UE::Net::FNetToken,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar5 == FVar1) break;
      if (5 < (byte)LogNetToken._0_1_) {
        ::FString::PrintfImpl(&local_28,L"NetToken (Auth:%u TypeId=%u Index=%u)");
        FVar4.Data = local_28.Data.AllocatorInstance.Data;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
        if (FVar4.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar4.Data);
        }
      }
      FVar5 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar5 + 4);
    }
  }
  return;
}

