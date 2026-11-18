// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// operator() @ 141f26ff0

void __thiscall
`FLinkerLoadPackageStoreBackend::OnAssetsRemoved'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  PSRWLOCK SRWLock;
  FName local_res8;
  
  uVar3 = 0;
  if (param_1 < *(int *)(*(longlong *)((longlong)this + 8) + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPackageId::FromName(&local_res8);
  SRWLock = (PSRWLOCK)
            (*(longlong *)this + 8 + (ulonglong)(local_res8.ComparisonIndex.Value & 0x1f) * 0x58);
  if (SRWLock == (PSRWLOCK)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive(SRWLock);
  TSet<TTuple<FPackageId,FPackageStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FDefaultSetAllocator>
  ::RemoveByHash<FPackageId>
            ((TSet<TTuple<FPackageId,FPackageStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FDefaultSetAllocator>
              *)(SRWLock + 1),local_res8.ComparisonIndex.Value,(FPackageId *)&local_res8);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  return;
}

// operator() @ 141f27110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  IAssetRegistryInterface *pIVar2;
  undefined ***pppuVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  code *local_48 [2];
  undefined **local_38;
  longlong local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pIVar2 = IAssetRegistryInterface::GetPtr();
  if ((pIVar2 == (IAssetRegistryInterface *)0x0) &&
     (bVar1 = ``FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()'::__l2::
              <lambda_1>::operator()(local_58), !bVar1)) {
    return;
  }
  local_30 = *(longlong *)this;
  local_38 = &
             ___7__TFunction_OwnedObject_V<lambda_2>__4___R<lambda_1>__1__OnMounted_FLinkerLoadPackageStoreBackend__UEAAXV__TSharedRef___CBVFPackageStoreBackendContext___00___Z_QEBA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,void,TArrayView<FAssetData_const_,int>_>
                ::Call;
  local_20 = (undefined ***)0x0;
  (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,local_48,local_30 + 0xb08);
  if (local_48[0] != (code *)0x0) {
    pppuVar3 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar3 = local_20;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  return;
}

// BeginRead @ 141f29700

void __thiscall FLinkerLoadPackageStoreBackend::BeginRead(FLinkerLoadPackageStoreBackend *this)

{
  return;
}

// EndRead @ 141f2e3d0

void __thiscall FLinkerLoadPackageStoreBackend::EndRead(FLinkerLoadPackageStoreBackend *this)

{
  return;
}

// GetPackageRedirectInfo @ 141f353d0

bool __thiscall
FLinkerLoadPackageStoreBackend::GetPackageRedirectInfo
          (FLinkerLoadPackageStoreBackend *this,FPackageId param_1,FName *param_2,
          FPackageId *param_3)

{
  return false;
}

// GetPackageStoreEntry @ 141f35950

EPackageStoreEntryStatus __thiscall
FLinkerLoadPackageStoreBackend::GetPackageStoreEntry
          (FLinkerLoadPackageStoreBackend *this,FPackageId param_1,FName param_2,
          FPackageStoreEntry *param_3)

{
  EPackageStoreEntryStatus EVar1;
  
  EVar1 = GetPackageStoreEntryEx(this,param_1,param_2,param_3,(FPackagePath *)0x0);
  return EVar1;
}

// GetPackageStoreEntryEx @ 141f35a40

/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

EPackageStoreEntryStatus __thiscall
FLinkerLoadPackageStoreBackend::GetPackageStoreEntryEx
          (FLinkerLoadPackageStoreBackend *this,FPackageId param_1,FName param_2,
          FPackageStoreEntry *param_3,FPackagePath *param_4)

{
  code *pcVar1;
  undefined3 uVar2;
  FPackageId FVar3;
  bool bVar4;
  EPackageLocationFilter EVar5;
  EPackageExtension EVar6;
  EPackageStoreEntryStatus EVar7;
  FPackagePath *pFVar8;
  FPackagePath *this_00;
  PSRWLOCK SRWLock;
  EPackageStoreEntryStatus local_res8 [2];
  FPackageId local_res10;
  FName local_res18;
  undefined1 local_res20 [8];
  FPackagePath local_88;
  FPackagePath local_78;
  FPackageId *local_68;
  FPackageStoreEntry **local_60;
  FPackageId *local_58;
  FPackageStoreEntry *local_50;
  FPackageStoreEntry *local_48;
  FPackagePath **local_40;
  FName *local_38;
  EPackageStoreEntryStatus *local_30;
  
  local_40 = &param_4;
  local_res8[0] = Missing;
  local_38 = &local_res18;
  local_30 = local_res8;
  local_68 = &local_res10;
  local_60 = &local_48;
  local_res10.Id = param_1.Id;
  local_res18 = param_2;
  local_48 = param_3;
  bVar4 = TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
          ::
          Apply<UE::TWriteScopeLock<UE::FPlatformRWLock>,_TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>::FindAndApply<_FLinkerLoadPackageStoreBackend::GetPackageStoreEntryEx_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    ((TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
                      *)&this->PackageStoreCache,&local_res10,(<lambda_1> *)&local_68);
  if (bVar4) {
    return local_res8[0];
  }
  if (local_res18 != (FName)0x0) {
    local_88.PackageName.ComparisonIndex.Value = 0;
    local_88.PackageName.Number = 0;
    local_88.HeaderExtension = Unspecified;
    this_00 = &local_88;
    if (param_4 != (FPackagePath *)0x0) {
      this_00 = param_4;
    }
    pFVar8 = FPackagePath::FromPackageNameUnchecked(&local_78,local_res18);
    this_00->PackageName = pFVar8->PackageName;
    uVar2 = *(undefined3 *)&pFVar8->field_0x9;
    this_00->HeaderExtension = pFVar8->HeaderExtension;
    *(undefined3 *)&this_00->field_0x9 = uVar2;
    EVar5 = FPackageName::DoesPackageExistEx(this_00,FileSystem,false,this_00);
    if (EVar5 != None) {
      param_3->LoaderType = LinkerLoad;
      EVar6 = FPackagePath::GetHeaderExtension(this_00);
      param_3->PackageExtension = EVar6;
      if ((EVar6 == Unspecified) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutPackageStoreEntry.PackageExtension != EPackageExtension::Unspecified"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageStore.cpp"
                             ,0x8e,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        EVar7 = (*pcVar1)();
        return EVar7;
      }
      FVar3.Id = local_res10.Id;
      SRWLock = (PSRWLOCK)
                (&(this->PackageStoreCache).field_0x0 +
                (ulonglong)((uint)local_res10.Id & 0x1f) * 0x58);
      if ((SRWLock == (PSRWLOCK)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0x43,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        EVar7 = (*pcVar1)();
        return EVar7;
      }
      AcquireSRWLockExclusive(SRWLock);
      local_58 = &local_res10;
      local_50 = param_3;
      TSet<TTuple<FPackageId,FPackageStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TPairInitializer<FPackageId_const_&,FPackageStoreEntry_const_&>_>
                ((TSet<TTuple<FPackageId,FPackageStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FDefaultSetAllocator>
                  *)(SRWLock + 1),(uint)local_res20,
                 (TPairInitializer<FPackageId_const_&,FPackageStoreEntry_const_&> *)
                 (FVar3.Id & 0xffffffff),(bool *)&local_58);
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
      return Ok;
    }
  }
  return Missing;
}

// GetSupportedLoaders @ 141f36dd0

EPackageLoader __thiscall
FLinkerLoadPackageStoreBackend::GetSupportedLoaders(FLinkerLoadPackageStoreBackend *this)

{
  return LinkerLoad;
}

// OnMounted @ 141f3f350

void __thiscall
FLinkerLoadPackageStoreBackend::OnMounted
          (FLinkerLoadPackageStoreBackend *this,
          TSharedRef<FPackageStoreBackendContext_const_,1> *param_1)

{
  <lambda_1> local_res10 [3];
  
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FLinkerLoadPackageStoreBackend::OnMounted_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnFEngineLoopInitComplete,local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

