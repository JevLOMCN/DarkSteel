// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 6

// GetDataSize @ 14aaccc90

int __thiscall UE::Mutable::Private::FExtensionData::GetDataSize(FExtensionData *this)

{
  return 0x10;
}

// Hash @ 14aad6fe0

uint __thiscall UE::Mutable::Private::FExtensionData::Hash(FExtensionData *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)this->Index - (uint)this->Origin;
  uVar3 = 0x9e3779b9U - (int)this->Index ^ iVar1 * 0x100;
  uVar4 = (this->Origin - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// Serialise @ 14aaf3ea0

void __thiscall
UE::Mutable::Private::FExtensionData::Serialise(FExtensionData *this,FOutputArchive *param_1)

{
  EOrigin local_res8 [8];
  
  Private::operator<<(param_1,&this->Index);
  local_res8[0] = this->Origin;
  Private::operator<<(param_1,local_res8);
  return;
}

// Serialise @ 14aaf3ef0

void __cdecl
UE::Mutable::Private::FExtensionData::Serialise(FExtensionData *param_1,FOutputArchive *param_2)

{
  EOrigin local_res8 [8];
  
  Private::operator<<(param_2,&param_1->Index);
  local_res8[0] = param_1->Origin;
  Private::operator<<(param_2,local_res8);
  return;
}

// StaticUnserialise @ 14aafa050

TSharedPtr<UE::Mutable::Private::FExtensionData,1> * __cdecl
UE::Mutable::Private::FExtensionData::StaticUnserialise
          (TSharedPtr<UE::Mutable::Private::FExtensionData,1> *__return_storage_ptr__,
          FInputArchive *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FExtensionData *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<UE::Mutable::Private::FExtensionData,1> *pTVar5;
  TSharedPtr<UE::Mutable::Private::FExtensionData,1> *pTVar6;
  bool bVar7;
  EOrigin local_res8 [8];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  TSharedRef<UE::Mutable::Private::FExtensionData,1> local_28;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId22,"Mutable_ExtensionDataUnserialise",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ExtensionData.cpp"
               ,0x16);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId22);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name23,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name23,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name23,true);
  pTVar5 = MakeShared<UE::Mutable::Private::FExtensionData,1>(&local_28);
  __return_storage_ptr__->Object = pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if ((__return_storage_ptr__->Object == (FExtensionData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedPtr<UE::Mutable::Private::FExtensionData,1> *)(*pcVar3)();
    return pTVar6;
  }
  pFVar2 = __return_storage_ptr__->Object;
  Private::operator>>(param_1,&pFVar2->Index);
  Private::operator>>(param_1,local_res8);
  pFVar2->Origin = local_res8[0];
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// Unserialise @ 14aafcc00

void __thiscall
UE::Mutable::Private::FExtensionData::Unserialise(FExtensionData *this,FInputArchive *param_1)

{
  EOrigin local_res8 [8];
  
  Private::operator>>(param_1,&this->Index);
  Private::operator>>(param_1,local_res8);
  this->Origin = local_res8[0];
  return;
}

