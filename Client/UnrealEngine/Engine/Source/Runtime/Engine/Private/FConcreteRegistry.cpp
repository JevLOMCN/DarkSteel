// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Register @ 147607b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`IAudioInfoFactoryRegistry::Get'::__l2::FConcreteRegistry::Register
          (void *this,IAudioInfoFactory *param_1,FName param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  TKeyInitializer<FName_const_&> local_res8;
  FName *local_res10;
  FName local_res18;
  FString local_28;
  
  local_res18 = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)((longlong)this + 8));
  if (3 < (byte)LogAudio._0_1_) {
    ::FName::ToString(&local_res18,&local_28);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  FVar2 = local_res18;
  uVar4 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  if (*(int *)((longlong)this + 0x18) != *(int *)((longlong)this + 0x44)) {
    lVar6 = *(longlong *)((longlong)this + 0x50);
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      lVar6 = (longlong)this + 0x48;
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)((longlong)this + 0x58) - 1U & FVar2.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)((longlong)this + 0x10) + (longlong)iVar5 * 0x18) == FVar2) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Factories.Contains(InFormatName)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                             ,0x3af,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          break;
        }
        iVar5 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  local_res10 = &local_res18;
  TSet<TTuple<FName,IAudioInfoFactory_*>,TDefaultMapHashableKeyFuncs<FName,IAudioInfoFactory_*,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,IAudioInfoFactory_*>,TDefaultMapHashableKeyFuncs<FName,IAudioInfoFactory_*,0>,FDefaultSetAllocator>
              *)((longlong)this + 0x10),&local_res8,(bool *)&local_res10);
  *(IAudioInfoFactory **)
   (*(longlong *)((longlong)this + 0x10) + 8 + (longlong)(int)local_res8.Key * 0x18) = param_1;
  ReleaseSRWLockExclusive((PSRWLOCK)((longlong)this + 8));
  return;
}

// Unregister @ 147607c70

void __thiscall
`IAudioInfoFactoryRegistry::Get'::__l2::FConcreteRegistry::Unregister
          (void *this,IAudioInfoFactory *param_1,FName param_2)

{
  uint uVar1;
  FName local_res8;
  uint uStackX_1c;
  
  AcquireSRWLockExclusive((PSRWLOCK)((longlong)this + 8));
  local_res8 = param_2;
  if (*(int *)((longlong)this + 0x18) != *(int *)((longlong)this + 0x44)) {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    uStackX_1c = param_2.Number;
    TSet<TTuple<FName,IAudioInfoFactory_*>,TDefaultMapHashableKeyFuncs<FName,IAudioInfoFactory_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,IAudioInfoFactory_*>,TDefaultMapHashableKeyFuncs<FName,IAudioInfoFactory_*,0>,FDefaultSetAllocator>
                         *)((longlong)this + 0x10),uStackX_1c + uVar1,&local_res8);
  }
                    /* WARNING: Could not recover jumptable at 0x000147607ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)((longlong)this + 8));
  return;
}

// Find @ 147607ce0

IAudioInfoFactory * __thiscall
`IAudioInfoFactoryRegistry::Get'::__l2::FConcreteRegistry::Find(void *this,FName param_1)

{
  IAudioInfoFactory **ppIVar1;
  IAudioInfoFactory *pIVar2;
  
  AcquireSRWLockShared((PSRWLOCK)((longlong)this + 8));
  ppIVar1 = TMapBase<FName,IAudioInfoFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IAudioInfoFactory_*,0>_>
            ::Find((TMapBase<FName,IAudioInfoFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IAudioInfoFactory_*,0>_>
                    *)((longlong)this + 0x10),param_1);
  if (ppIVar1 == (IAudioInfoFactory **)0x0) {
    pIVar2 = (IAudioInfoFactory *)0x0;
  }
  else {
    pIVar2 = *ppIVar1;
  }
  ReleaseSRWLockShared((PSRWLOCK)((longlong)this + 8));
  return pIVar2;
}

// ~FConcreteRegistry @ 147621500

void __thiscall
`IAudioInfoFactoryRegistry::Get'::__l2::FConcreteRegistry::~FConcreteRegistry(void *this)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  *(undefined4 *)((longlong)this + 0x58) = 0;
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,IAudioInfoFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,IAudioInfoFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,IAudioInfoFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x10));
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)((longlong)this + 8));
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147621547. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)((longlong)this + 8));
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

