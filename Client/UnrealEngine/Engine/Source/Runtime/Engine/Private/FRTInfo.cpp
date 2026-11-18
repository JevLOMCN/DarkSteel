// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Parse @ 14896eda0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FRTInfo::Parse(FRTInfo *this,FString *param_1)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  FString *pFVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_58.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar7 = (longlong)local_58.Data.ArrayNum;
  bVar5 = false;
  bVar2 = false;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,pFVar1,lVar7 * 2);
  }
  ::FString::operator=(&this->Depth,L"-");
  this_00 = &this->Type;
  ::FString::operator=(this_00,L"-");
  bVar4 = bVar5;
  if (local_58.Data.ArrayNum < 2) {
LAB_14896ee84:
    bVar3 = false;
  }
  else {
    ::FString::FString(&local_38,L" ");
    bVar4 = true;
    bVar3 = ::FString::Split(&local_58,&local_38,&this->Dimensions,&local_58,CaseSensitive,FromStart
                            );
    if (!bVar3) goto LAB_14896ee84;
    bVar3 = true;
  }
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  bVar4 = bVar5;
  if (bVar3) {
    ::FString::RemoveAt(&this->Dimensions,0,1,No);
    bVar3 = ::FString::StartsWith(&this->Dimensions,L"Cube",4,IgnoreCase);
    if (bVar3) {
      ::FString::FString(&local_38,L" ");
      bVar3 = ::FString::Split(&local_58,&local_38,&this->Width,&local_58,CaseSensitive,FromStart);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (!bVar3) goto LAB_14896f1a8;
      iVar6 = (this->Width).Data.ArrayNum;
      iVar8 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange
                (&this->Height,(wchar_t *)(this->Width).Data.AllocatorInstance.Data,iVar8);
    }
    else {
      ::FString::FString(&local_38,L"x");
      bVar4 = ::FString::Split(&local_58,&local_38,&this->Width,&local_58);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        iVar6 = ::FString::Find(&this->Dimensions,L"3",1,IgnoreCase,FromStart,-1);
        if (iVar6 == 0) {
          ::FString::FString(&local_38,L"x");
          bVar3 = ::FString::Split(&local_58,&local_38,&this->Height,&local_58);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          bVar4 = bVar2;
          if (!bVar3) goto LAB_14896f1a8;
          ::FString::FString(&local_38,L" ");
          pFVar9 = &this->Depth;
        }
        else {
          ::FString::FString(&local_38,L" ");
          pFVar9 = &this->Height;
        }
        bVar3 = ::FString::Split(&local_58,&local_38,pFVar9,&local_58,CaseSensitive,FromStart);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        bVar4 = bVar2;
        if (!bVar3) goto LAB_14896f1a8;
      }
    }
    ::FString::FString(&local_38,L") ");
    bVar3 = ::FString::Split(&local_58,&local_38,&this->Format,&local_58,CaseSensitive,FromStart);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar4 = bVar5;
    if (bVar3) {
      ::FString::FString(&local_38,L" ");
      bVar5 = ::FString::Split(&local_58,&local_38,&this->Number,&local_58,CaseSensitive,FromStart);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      bVar4 = bVar2;
      if (bVar5) {
        ::FString::FString(&local_38,L" ");
        bVar5 = ::FString::Split(&local_58,&local_38,&this->Name,&this->Size,CaseSensitive,FromStart
                                );
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          iVar6 = ::FString::Find(&this->Format,L" ",1,CaseSensitive,FromStart,-1);
          if (0 < iVar6) {
            ::FString::RightChop(&this->Format,&local_48,iVar6 + 1);
            if (this_00 != &local_48) {
              pFVar1 = (this_00->Data).AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              (this_00->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
              (this->Type).Data.ArrayNum = local_48.Data.ArrayNum;
              (this->Type).Data.ArrayMax = local_48.Data.ArrayMax;
              local_48.Data.ArrayNum = 0;
              local_48.Data.ArrayMax = 0;
              local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            ::FString::MidInline(&this->Format,0,iVar6,No);
          }
          bVar4 = true;
        }
      }
    }
  }
LAB_14896f1a8:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

