// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FNameEntrySerialized @ 141a6cea0

FNameEntrySerialized * __thiscall
FNameEntrySerialized::FNameEntrySerialized(FNameEntrySerialized *this,FNameEntry *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  FNameEntrySerialized *pFVar4;
  char cVar5;
  ushort uVar6;
  ulonglong uVar7;
  uint uVar8;
  FNameEntrySerialized_u_2 *pFVar9;
  char cVar10;
  wchar_t wVar11;
  ulonglong uVar12;
  
  uVar8 = 0;
  this->bIsWide = false;
  this->NonCasePreservingHash = 0;
  this->CasePreservingHash = 0;
  pFVar9 = &this->field1_0x2;
  bVar3 = param_1.bIsWide;
  this->bIsWide = bVar3;
  if (bVar3 == false) {
    FNameEntry::GetAnsiName(param_1,(char (*) [1024])pFVar9);
    if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CRCTable_DEPRECATED[1] != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                           ,0x94,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNameEntrySerialized *)(*pcVar2)();
      return pFVar4;
    }
    cVar10 = pFVar9->AnsiName[0];
    cVar5 = cVar10;
    if (cVar10 != '\0') {
      do {
        pFVar9 = (FNameEntrySerialized_u_2 *)(pFVar9->AnsiName + 1);
        uVar8 = uVar8 >> 8 ^
                FCrc::CRCTable_DEPRECATED
                [((ulonglong)(byte)(cVar5 - (-((int)cVar5 - 0x61U < 0x1a) & 0x20U)) ^
                 (ulonglong)uVar8) & 0xff];
        cVar5 = pFVar9->AnsiName[0];
      } while (pFVar9->AnsiName[0] != '\0');
      this->NonCasePreservingHash = (ushort)uVar8;
      pFVar9 = &this->field1_0x2;
      uVar7 = 0xffffffff;
      do {
        pFVar9 = (FNameEntrySerialized_u_2 *)(pFVar9->AnsiName + 1);
        uVar7 = (uint)(int)cVar10 ^ uVar7;
        cVar10 = pFVar9->AnsiName[0];
        uVar7 = (ulonglong)
                (FCrc::CRCTablesSB8[1][uVar7 >> 0x10 & 0xff] ^
                 FCrc::CRCTablesSB8[2][uVar7 >> 8 & 0xff] ^ FCrc::CRCTablesSB8[0][uVar7 >> 0x18] ^
                FCrc::CRCTablesSB8[3][uVar7 & 0xff]);
      } while (cVar10 != '\0');
      goto LAB_141a6d124;
    }
  }
  else {
    if ((param_1.bIsWide == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsWide()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0x9a5,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNameEntrySerialized *)(*pcVar2)();
      return pFVar4;
    }
    memcpy(pFVar9,&param_1->field1_0x2,param_1.Len * 2);
    pFVar9->WideName[param_1.Len] = L'\0';
    if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CRCTable_DEPRECATED[1] != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                           ,0xb4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNameEntrySerialized *)(*pcVar2)();
      return pFVar4;
    }
    wVar11 = pFVar9->WideName[0];
    wVar1 = wVar11;
    if (wVar11 != L'\0') {
      do {
        pFVar9 = (FNameEntrySerialized_u_2 *)(pFVar9->WideName + 1);
        uVar6 = wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20);
        uVar8 = uVar8 >> 8 ^ FCrc::CRCTable_DEPRECATED[(byte)((byte)uVar8 ^ (byte)uVar6)];
        uVar8 = uVar8 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar6 >> 8 ^ uVar8) & 0xff];
        wVar1 = pFVar9->WideName[0];
      } while (pFVar9->WideName[0] != L'\0');
      this->NonCasePreservingHash = (ushort)uVar8;
      pFVar9 = &this->field1_0x2;
      uVar7 = 0xffffffff;
      do {
        pFVar9 = (FNameEntrySerialized_u_2 *)(pFVar9->WideName + 1);
        uVar12 = (ulonglong)(ushort)wVar11;
        wVar11 = pFVar9->WideName[0];
        uVar7 = (ulonglong)
                (FCrc::CRCTablesSB8[1][uVar7 >> 0x10 & 0xff] ^
                 FCrc::CRCTablesSB8[2][(uVar12 ^ uVar7) >> 8 & 0xff] ^
                 FCrc::CRCTablesSB8[0][uVar7 >> 0x18] ^
                FCrc::CRCTablesSB8[3][(uVar12 ^ uVar7) & 0xff]);
      } while (wVar11 != L'\0');
      goto LAB_141a6d124;
    }
  }
  uVar7 = 0xffffffff;
  this->NonCasePreservingHash = 0;
LAB_141a6d124:
  this->CasePreservingHash = ~(ushort)uVar7;
  return this;
}

// GetPlainNameString @ 141a811a0

FString * __thiscall
FNameEntrySerialized::GetPlainNameString(FNameEntrySerialized *this,FString *__return_storage_ptr__)

{
  if (this->bIsWide != false) {
    ::FString::FString(__return_storage_ptr__,(this->field1_0x2).WideName);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,(this->field1_0x2).AnsiName);
  return __return_storage_ptr__;
}

