// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 149c95fb0

UScriptStruct * __cdecl FPCGGridDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGGridDescriptor.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGGridDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGGridDescriptor,(UObject *)pUVar1,
                         L"PCGGridDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FPCGGridDescriptor.OuterSingleton;
}

// operator== @ 149ca6dd0

bool __thiscall FPCGGridDescriptor::operator==(FPCGGridDescriptor *this,FPCGGridDescriptor *param_1)

{
  if (((this->GridSize == param_1->GridSize) && (this->bIs2DGrid == param_1->bIs2DGrid)) &&
     (this->bIsRuntime == param_1->bIsRuntime)) {
    return this->RuntimeHash == param_1->RuntimeHash;
  }
  return false;
}

// ComputeHash @ 149cb8f50

uint __thiscall FPCGGridDescriptor::ComputeHash(FPCGGridDescriptor *this)

{
  FArchive *pFVar1;
  FArchiveCrc32 local_a8;
  
  FArchiveCrc32::FArchiveCrc32(&local_a8,this->RuntimeHash,(UObject *)0x0);
  if (*(uint **)(local_a8._padding_ + 8) < *(uint **)local_a8._padding_ + 1) {
    if ((local_a8._padding_._2_1_ & 1) == 0) {
      (**(code **)(local_a8._padding_ + 0x188))(&local_a8,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_a8,&this->GridSize);
    }
  }
  else {
    this->GridSize = **(uint **)local_a8._padding_;
    *(longlong *)local_a8._padding_ = *(longlong *)local_a8._padding_ + 4;
  }
  pFVar1 = ::operator<<((FArchive *)&local_a8,&this->bIs2DGrid);
  ::operator<<(pFVar1,&this->bIsRuntime);
  FArchive::~FArchive((FArchive *)&local_a8);
  return local_a8.CRC;
}

// GetPartitionActorName @ 149cca830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FPCGGridDescriptor::GetPartitionActorName
          (FPCGGridDescriptor *this,FString *__return_storage_ptr__,TIntVector3<int> *param_1)

{
  ForAnyElementType FVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  undefined1 auStack_8a8 [32];
  int local_888;
  FString local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8a8;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.End = (wchar_t *)local_48;
  if (this->bIsRuntime == false) {
    pvVar2 = FGenericPlatformString::Memcpy(local_848,L"PCGPartitionGridActor_",0x2c);
    local_868.CurPos = (wchar_t *)((longlong)pvVar2 + 0x2c);
  }
  else {
    pvVar2 = FGenericPlatformString::Memcpy(local_848,L"PCGRuntimePartitionGridActor_",0x3a);
    local_868.CurPos = (wchar_t *)((longlong)pvVar2 + 0x3a);
  }
  ::FString::PrintfImpl(&local_878,L"%d_");
  FVar1.Data = local_878.Data.AllocatorInstance.Data;
  iVar4 = local_878.Data.ArrayNum + -1;
  if (local_878.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar3 = (ulong64)iVar4;
  if (local_868.End < local_868.CurPos + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_868.CurPos,FVar1.Data,uVar3 * 2);
    local_868.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  if (this->bIs2DGrid == false) {
    local_888 = (param_1->field0_0x0)._s_0.Z;
    ::FString::PrintfImpl(&local_878,L"%d_%d_%d");
    FVar1.Data = local_878.Data.AllocatorInstance.Data;
    iVar4 = local_878.Data.ArrayNum + -1;
    if (local_878.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    uVar3 = (ulong64)iVar4;
    if (local_868.End < local_868.CurPos + uVar3) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar3);
    }
    if (iVar4 != 0) {
      pvVar2 = FGenericPlatformString::Memcpy(local_868.CurPos,FVar1.Data,uVar3 * 2);
      local_868.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
    }
  }
  else {
    ::FString::PrintfImpl(&local_878,L"%d_%d");
    FVar1.Data = local_878.Data.AllocatorInstance.Data;
    iVar4 = local_878.Data.ArrayNum + -1;
    if (local_878.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    uVar3 = (ulong64)iVar4;
    if (local_868.End < local_868.CurPos + uVar3) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar3);
    }
    if (iVar4 != 0) {
      pvVar2 = FGenericPlatformString::Memcpy(local_868.CurPos,FVar1.Data,uVar3 * 2);
      local_868.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
    }
  }
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  if (local_868.End < local_868.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  *local_868.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_868.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return __return_storage_ptr__;
}

