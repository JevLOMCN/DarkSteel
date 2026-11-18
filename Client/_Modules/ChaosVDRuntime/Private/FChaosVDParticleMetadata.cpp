// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436c7e50

UScriptStruct * __cdecl FChaosVDParticleMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDParticleMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleMetadata,(UObject *)pUVar1,
                         L"ChaosVDParticleMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDParticleMetadata.OuterSingleton;
}

// Serialize @ 1436dfae0

bool __thiscall
FChaosVDParticleMetadata::Serialize(FChaosVDParticleMetadata *this,FArchive *param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  int *piVar3;
  ulong64 *puVar4;
  longlong *plVar5;
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->ComponentName);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->BoneName);
  piVar1 = &this->Index;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->MapAssetPath);
  (**(code **)(*plVar5 + 0x178))(plVar5,&(this->MapAssetPath).AssetName);
  plVar5 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->OwnerAssetPath);
  (**(code **)(*plVar5 + 0x178))(plVar5,&(this->OwnerAssetPath).AssetName);
  puVar2 = &this->MetadataID;
  puVar4 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

// ToString @ 1436e1c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FChaosVDParticleMetadata::ToString(FChaosVDParticleMetadata *this,FString *__return_storage_ptr__)

{
  undefined1 auStack_888 [32];
  FString local_868;
  FString local_858;
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_888;
  local_848.Base = local_828;
  local_848.bIsDynamic = false;
  local_848.bIsExternal = false;
  local_848.CurPos = local_828;
  local_848.End = (wchar_t *)local_28;
  ::FName::ToString(&this->ComponentName,&local_868);
  ::FName::ToString(&this->OwnerName,&local_858);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_848,L"%s | %s ");
  if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  if (this->BoneName != (FName)0x0) {
    ::FName::ToString(&this->BoneName,&local_868);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_848,L"| Bone Name: %s ");
    if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
  }
  if (this->Index != -1) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_848,L"| Index: %d ");
  }
  if (local_848.End < local_848.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_848,1);
  }
  *local_848.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_848.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  return __return_storage_ptr__;
}

