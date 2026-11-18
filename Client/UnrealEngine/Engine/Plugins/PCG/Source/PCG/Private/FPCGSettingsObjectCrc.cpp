// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// PCGCrc @ 149f575f0

FPCGCrc __cdecl FPCGSettingsObjectCrc::PCGCrc(UPCGSettings *param_1)

{
  ushort uVar1;
  UPackage *pUVar2;
  UPackage *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  UObject *in_RDX;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  UObjectBaseUtility *this;
  ulonglong local_res8;
  FString local_1a8;
  FArchiveObjectCrc32 local_198;
  
  bVar8 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  this = (UObjectBaseUtility *)in_RDX;
  if (*(UObjectBaseUtility **)&in_RDX[2].field_0x8 != (UObjectBaseUtility *)0x0) {
    this = *(UObjectBaseUtility **)&in_RDX[2].field_0x8;
  }
  pUVar2 = UObjectBaseUtility::GetPackage(this);
  if (((uint)pUVar2->PackageFlagsPrivate & 0x40008001) == 0) {
    pUVar2 = UObjectBaseUtility::GetPackage(this);
    pUVar3 = GetTransientPackage();
    if (pUVar2 != pUVar3) {
      pFVar4 = UObjectBaseUtility::GetPathName(this,&local_1a8,(UObject *)0x0);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      uVar7 = 0xffffffff;
      uVar6 = 0xffffffff;
      uVar1 = *pwVar5;
      while (uVar1 != 0) {
        pwVar5 = (wchar_t *)((longlong)pwVar5 + 2);
        uVar6 = FCrc::CRCTablesSB8[1][uVar7 >> 0x10 & 0xff] ^
                FCrc::CRCTablesSB8[2][(uVar1 ^ uVar7) >> 8 & 0xff] ^
                FCrc::CRCTablesSB8[0][uVar7 >> 0x18] ^ FCrc::CRCTablesSB8[3][(uVar1 ^ uVar7) & 0xff]
        ;
        uVar7 = (ulonglong)uVar6;
        uVar1 = *pwVar5;
      }
      uVar6 = ~uVar6;
      bVar8 = true;
      goto LAB_149f5771d;
    }
  }
  if (*(UObjectBaseUtility **)&this[2].field_0x8 != (UObjectBaseUtility *)0x0) {
    this = *(UObjectBaseUtility **)&this[2].field_0x8;
  }
  local_res8 = *(ulonglong *)(this + 1);
  uVar6 = (*FCrc::MemCrc32Func)(&local_res8,8,0);
LAB_149f5771d:
  if ((bVar8) && (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  FArchiveObjectCrc32::FArchiveObjectCrc32(&local_198);
  local_198._padding_ = (longlong)&___7FPCGSettingsObjectCrc__6B_;
  uVar6 = FArchiveObjectCrc32::Crc32(&local_198,in_RDX,uVar6);
  *(uint *)&param_1->_padding_ = uVar6;
  *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 1;
  FArchiveObjectCrc32::~FArchiveObjectCrc32(&local_198);
  return (FPCGCrc)param_1;
}

