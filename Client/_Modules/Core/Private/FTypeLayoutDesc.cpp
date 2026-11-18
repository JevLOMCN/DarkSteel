// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// Find @ 1419f8980

FTypeLayoutDesc * __cdecl FTypeLayoutDesc::Find(ulong64 param_1)

{
  bool bVar1;
  FTypeLayoutDesc *pFVar2;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId315,"FTypeLayoutDesc_Find",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
               ,0x13b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId315);
  }
  for (pFVar2 = GTypeLayoutHashBuckets[(uint)((int)param_1 + (int)(param_1 / 0x1105) * -0x1105)];
      pFVar2 != (FTypeLayoutDesc *)0x0; pFVar2 = pFVar2->HashNext) {
    if (pFVar2->NameHash == param_1) goto LAB_1419f8a20;
  }
  pFVar2 = (FTypeLayoutDesc *)0x0;
LAB_1419f8a20:
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar2;
}

// GetInvalidTypeLayout @ 141a00da0

FTypeLayoutDesc * __cdecl FTypeLayoutDesc::GetInvalidTypeLayout(void)

{
  code *pcVar1;
  bool bVar2;
  FTypeLayoutDesc *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                     ,0x123,L"Access to Abstract/Invalid type layout desc");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTypeLayoutDesc *)(*pcVar1)();
    return pFVar3;
  }
  return &InvalidTypeDesc;
}

// GetOffsetToBase @ 141a01350

uint __thiscall FTypeLayoutDesc::GetOffsetToBase(FTypeLayoutDesc *this,FTypeLayoutDesc *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint local_res18 [4];
  
  local_res18[0] = 0;
  bVar2 = TryGetOffsetToBase(this,param_1,local_res18);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                       ,0x175,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return local_res18[0];
}

// Initialize @ 141a068a0

void __cdecl FTypeLayoutDesc::Initialize(FTypeLayoutDesc *param_1)

{
  FPlatformTypeLayoutParameters local_res10 [3];
  
  local_res10[0].Flags = 5;
  local_res10[0].MaxFieldAlignment = 8;
  InitializeSizeFromFields(param_1,local_res10);
  return;
}

// IsDerivedFrom @ 141a07680

bool __thiscall FTypeLayoutDesc::IsDerivedFrom(FTypeLayoutDesc *this,FTypeLayoutDesc *param_1)

{
  bool bVar1;
  uint local_res18 [4];
  
  bVar1 = TryGetOffsetToBase(this,param_1,local_res18);
  return bVar1;
}

// Register @ 141a14a10

void __cdecl FTypeLayoutDesc::Register(FTypeLayoutDesc *param_1)

{
  FName *pFVar1;
  uint uVar2;
  FHashedName local_res8;
  FName local_res10 [3];
  
  pFVar1 = ::FName::FName(local_res10,param_1->Name);
  FHashedName::FHashedName(&local_res8,pFVar1);
  param_1->NameHash = local_res8.Hash;
  uVar2 = (int)local_res8.Hash + (int)(local_res8.Hash / 0x1105) * -0x1105;
  GNumTypeLayoutsRegistered = GNumTypeLayoutsRegistered + 1;
  param_1->HashNext = GTypeLayoutHashBuckets[uVar2];
  GTypeLayoutHashBuckets[uVar2] = param_1;
  return;
}

