// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// GetRawIp @ 147aa8de0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FInternetAddrDemo::GetRawIp
          (FInternetAddrDemo *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// SetRawIp @ 147aa8eb0

void __thiscall
FInternetAddrDemo::SetRawIp
          (FInternetAddrDemo *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// SetIp @ 147aa8ec0

void __thiscall FInternetAddrDemo::SetIp(FInternetAddrDemo *this,uint param_1)

{
  return;
}

// SetIp @ 147aa8ed0

void __thiscall FInternetAddrDemo::SetIp(FInternetAddrDemo *this,wchar_t *param_1,bool *param_2)

{
  return;
}

// GetIp @ 147aa8ee0

void __thiscall FInternetAddrDemo::GetIp(FInternetAddrDemo *this,uint *param_1)

{
  *param_1 = 0;
  return;
}

// SetPort @ 147aa8f30

void __thiscall FInternetAddrDemo::SetPort(FInternetAddrDemo *this,int param_1)

{
  return;
}

// GetPort @ 147aa8f40

void __thiscall FInternetAddrDemo::GetPort(FInternetAddrDemo *this,int *param_1)

{
  *param_1 = 0;
  return;
}

// GetPort @ 147aa8f50

int __thiscall FInternetAddrDemo::GetPort(FInternetAddrDemo *this)

{
  return 0;
}

// SetAnyAddress @ 147aa8f60

void __thiscall FInternetAddrDemo::SetAnyAddress(FInternetAddrDemo *this)

{
  return;
}

// SetBroadcastAddress @ 147aa8f70

void __thiscall FInternetAddrDemo::SetBroadcastAddress(FInternetAddrDemo *this)

{
  return;
}

// SetLoopbackAddress @ 147aa8f80

void __thiscall FInternetAddrDemo::SetLoopbackAddress(FInternetAddrDemo *this)

{
  return;
}

// ToString @ 147aa8f90

FString * __thiscall
FInternetAddrDemo::ToString(FInternetAddrDemo *this,FString *__return_storage_ptr__,bool param_1)

{
  ::FString::FString(__return_storage_ptr__,L"Demo Internet Address");
  return __return_storage_ptr__;
}

// operator== @ 147aa8fc0

bool __thiscall FInternetAddrDemo::operator==(FInternetAddrDemo *this,FInternetAddr *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  void *local_28 [2];
  void *local_18 [2];
  
  puVar2 = (undefined8 *)(**(code **)((longlong)*this + 0x80))(this,local_18,1);
  puVar3 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x80))(param_1,local_28,1);
  iVar1 = *(int *)(puVar3 + 1);
  if (iVar1 == *(int *)(puVar2 + 1)) {
    if (iVar1 < 2) {
      bVar4 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar3,(wchar_t *)*puVar2);
      bVar4 = iVar1 == 0;
    }
  }
  else {
    bVar4 = *(int *)(puVar2 + 1) + iVar1 == 1;
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return bVar4;
}

// GetTypeHash @ 147aa9060

uint __thiscall FInternetAddrDemo::GetTypeHash(FInternetAddrDemo *this)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  wchar_t *pwVar4;
  void *local_18 [2];
  
  puVar2 = (undefined8 *)(**(code **)((longlong)*this + 0x80))(this,local_18,1);
  iVar3 = *(int *)(puVar2 + 1) + -1;
  if (*(int *)(puVar2 + 1) == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)*puVar2;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return uVar1;
}

// IsValid @ 147aa90c0

bool __thiscall FInternetAddrDemo::IsValid(FInternetAddrDemo *this)

{
  return true;
}

// Clone @ 147aa90d0

TSharedRef<FInternetAddr,1> * __thiscall
FInternetAddrDemo::Clone
          (FInternetAddrDemo *this,TSharedRef<FInternetAddr,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  TSharedRef<FInternetAddr,1> *pTVar5;
  
  if (DemoInternetAddr.Object == (FInternetAddr *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FInternetAddr,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object = DemoInternetAddr.Object;
  FVar3 = DemoInternetAddr.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       DemoInternetAddr.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FInternetAddr *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FInternetAddr,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

