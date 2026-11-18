// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 4

// BindToBuffer @ 142b85580

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::Impl::FClassInheritanceContext::BindToBuffer
          (FClassInheritanceContext *this,FClassInheritanceBuffer *param_1,
          FAssetRegistryImpl *param_2,bool param_3,bool param_4)

{
  this->bCodeGeneratorClassesUpToDate = param_4;
  this->AssetRegistryImpl = param_2;
  this->Buffer = param_1;
  this->bInheritanceMapUpToDate = param_3;
  return;
}

// ConditionalUpdate @ 142b89d10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::Impl::FClassInheritanceContext::ConditionalUpdate(FClassInheritanceContext *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Buffer == (FClassInheritanceBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x25dc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bInheritanceMapUpToDate == false) {
    if (this->bCodeGeneratorClassesUpToDate == false) {
      FAssetRegistryImpl::CollectCodeGeneratorClasses(this->AssetRegistryImpl);
      this->bCodeGeneratorClassesUpToDate = true;
    }
    FAssetRegistryImpl::UpdateInheritanceBuffer(this->AssetRegistryImpl,this->Buffer);
    this->bInheritanceMapUpToDate = true;
  }
  return;
}

// OnLockReentered @ 142b9fdd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::Impl::FClassInheritanceContext::OnLockReentered
          (FClassInheritanceContext *this,FAssetRegistryImpl *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = GetRegisteredNativeClassesVersionNumber();
  uVar2 = GetRegisteredClassesVersionNumber();
  SelectBuffer(this,param_1,uVar1,uVar2);
  return;
}

// SelectBuffer @ 142bac420

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
          (FClassInheritanceContext *this,FAssetRegistryImpl *param_1,ulong64 param_2,
          ulong64 param_3)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  FClassInheritanceBuffer *pFVar4;
  
  if ((param_1->bIsTempCachingAlwaysEnabled != false) && (param_1->bIsTempCachingEnabled == false))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GuardedData.IsTempCachingAlwaysEnabled() || GuardedData.IsTempCachingEnabled()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x25ef,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = param_1->SavedGeneratorClassesVersionNumber;
  if (param_1->bIsTempCachingEnabled == false) {
    if (this->StackBuffer == (FClassInheritanceBuffer *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StackBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0x25fc,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = this->StackBuffer;
  }
  else {
    pFVar4 = &param_1->TempCachedInheritanceBuffer;
    if (((param_1->TempCachedInheritanceBuffer).bDirty == false) &&
       ((param_1->TempCachedInheritanceBuffer).SavedAllClassesVersionNumber == param_3)) {
      bVar3 = true;
      goto LAB_142bac4dc;
    }
  }
  bVar3 = false;
LAB_142bac4dc:
  this->AssetRegistryImpl = param_1;
  this->Buffer = pFVar4;
  this->bInheritanceMapUpToDate = bVar3;
  this->bCodeGeneratorClassesUpToDate = uVar1 == param_2;
  return;
}

