// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 35

// StaticClass @ 141fadbd0

UClass * __cdecl UPackage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPackage.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Package",&Z_Registration_Info_UClass_UPackage.InnerSingleton
               ,StaticRegisterNativesUPackage,0x60,8,CLASS_Intrinsic,CASTCLASS_UPackage,L"Engine",
               InternalConstructor<UPackage>,InternalVTableHelperCtorCaller<UPackage>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPackage.InnerSingleton;
}

// SetFileSize @ 1420d9b70

void __thiscall UPackage::SetFileSize(UPackage *this,long64 param_1)

{
  FWorldTileInfo *pFVar1;
  FScriptContainerElement *pFVar2;
  TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> TVar3;
  FAdditionalInfo *pFVar4;
  FLLMScope local_res8 [2];
  TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> local_res18;
  FMemScope local_res20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_UPackage::SetFileSize(__int64)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_UPackage::SetFileSize(__int64)___ptr64'::__l2::
                           _thread_safe_static_guard_0__),
     `private:_void___cdecl_UPackage::SetFileSize(__int64)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`private:_void___cdecl_UPackage::SetFileSize(__int64)___ptr64'::__l2::
                    LLMScope_Name548,L"Package/AdditionalInfo");
    _Init_thread_footer(&`private:_void___cdecl_UPackage::SetFileSize(__int64)___ptr64'::__l2::
                         _thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `private:_void___cdecl_UPackage::SetFileSize(__int64)___ptr64'::__l2::LLMScope_Name548,
             false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`private:_void___cdecl_UPackage::SetFileSize(__int64)___ptr64'::__l2::LLMScope_Name548
             ,true);
  pFVar4 = (this->AdditionalInfo).Ptr;
  if (pFVar4 == (FAdditionalInfo *)0x0) {
    if (param_1 == 0) goto LAB_1420d9ccb;
    pFVar4 = ::operator_new(0x38);
    local_res18.Ptr = (FAdditionalInfo *)0x0;
    if (pFVar4 != (FAdditionalInfo *)0x0) {
      *(undefined4 *)&pFVar4->field_0xc = 0;
      pFVar4->LinkerPackageVersion = GPackageFileUEVersion;
      pFVar4->LinkerLicenseeVersion = GPackageFileLicenseeUEVersion;
      (pFVar4->LinkerCustomVersion).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      (pFVar4->LinkerCustomVersion).Versions.ArrayNum = 0;
      (pFVar4->LinkerCustomVersion).Versions.ArrayMax = 0;
      pFVar4->LinkerLoad = (FLinkerLoad *)0x0;
      pFVar4->FileSize = 0;
      (pFVar4->WorldTileInfo).Ptr = (FWorldTileInfo *)0x0;
      local_res18.Ptr = pFVar4;
    }
    TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_>::operator=
              (&this->AdditionalInfo,&local_res18);
    TVar3.Ptr = local_res18.Ptr;
    if (local_res18.Ptr != (FAdditionalInfo *)0x0) {
      pFVar1 = ((local_res18.Ptr)->WorldTileInfo).Ptr;
      if (pFVar1 != (FWorldTileInfo *)0x0) {
        pFVar2 = (pFVar1->LODList).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar1->ParentTilePackageName).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar1->Layer).Name.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar1,0xa8);
      }
      pFVar2 = ((TVar3.Ptr)->LinkerCustomVersion).Versions.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(TVar3.Ptr,0x38);
    }
    pFVar4 = (this->AdditionalInfo).Ptr;
  }
  pFVar4->FileSize = param_1;
LAB_1420d9ccb:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetLinker @ 1420d9d30

void __thiscall UPackage::SetLinker(UPackage *this,FLinkerLoad *param_1)

{
  FWorldTileInfo *pFVar1;
  FScriptContainerElement *pFVar2;
  TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> TVar3;
  FAdditionalInfo *pFVar4;
  FLLMScope local_res8 [2];
  TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> local_res18;
  FMemScope local_res20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'::__l2
                    ::LLMScope_Name492,L"Package/AdditionalInfo");
    _Init_thread_footer(&`private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'::
                         __l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'::__l2::
             LLMScope_Name492,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'::__l2::
              LLMScope_Name492,true);
  pFVar4 = (this->AdditionalInfo).Ptr;
  if (pFVar4 == (FAdditionalInfo *)0x0) {
    if (param_1 == (FLinkerLoad *)0x0) goto LAB_1420d9e8b;
    pFVar4 = ::operator_new(0x38);
    local_res18.Ptr = (FAdditionalInfo *)0x0;
    if (pFVar4 != (FAdditionalInfo *)0x0) {
      *(undefined4 *)&pFVar4->field_0xc = 0;
      pFVar4->LinkerPackageVersion = GPackageFileUEVersion;
      pFVar4->LinkerLicenseeVersion = GPackageFileLicenseeUEVersion;
      (pFVar4->LinkerCustomVersion).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      (pFVar4->LinkerCustomVersion).Versions.ArrayNum = 0;
      (pFVar4->LinkerCustomVersion).Versions.ArrayMax = 0;
      pFVar4->LinkerLoad = (FLinkerLoad *)0x0;
      pFVar4->FileSize = 0;
      (pFVar4->WorldTileInfo).Ptr = (FWorldTileInfo *)0x0;
      local_res18.Ptr = pFVar4;
    }
    TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_>::operator=
              (&this->AdditionalInfo,&local_res18);
    TVar3.Ptr = local_res18.Ptr;
    if (local_res18.Ptr != (FAdditionalInfo *)0x0) {
      pFVar1 = ((local_res18.Ptr)->WorldTileInfo).Ptr;
      if (pFVar1 != (FWorldTileInfo *)0x0) {
        pFVar2 = (pFVar1->LODList).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar1->ParentTilePackageName).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar1->Layer).Name.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar1,0xa8);
      }
      pFVar2 = ((TVar3.Ptr)->LinkerCustomVersion).Versions.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(TVar3.Ptr,0x38);
    }
    pFVar4 = (this->AdditionalInfo).Ptr;
  }
  pFVar4->LinkerLoad = param_1;
LAB_1420d9e8b:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetLinkerCustomVersions @ 1420d9ef0

void __thiscall UPackage::SetLinkerCustomVersions(UPackage *this,FCustomVersionContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  FWorldTileInfo *pFVar2;
  TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> TVar3;
  FAdditionalInfo *pFVar4;
  FCustomVersionContainer *pFVar5;
  FLLMScope local_res8 [2];
  TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> local_res10;
  FMemScope local_res18 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_UPackage::SetLinkerCustomVersions(FCustomVersionContainer)___ptr64'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_UPackage::SetLinkerCustomVersions(FCustomVersionContainer)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_UPackage::SetLinkerCustomVersions(FCustomVersionContainer)___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`private:_void___cdecl_UPackage::SetLinkerCustomVersions(FCustomVersionContainer)___ptr64'
                    ::__l2::LLMScope_Name534,L"Package/AdditionalInfo");
    _Init_thread_footer(&`private:_void___cdecl_UPackage::SetLinkerCustomVersions(FCustomVersionContainer)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `private:_void___cdecl_UPackage::SetLinkerCustomVersions(FCustomVersionContainer)___ptr64'
             ::__l2::LLMScope_Name534,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`private:_void___cdecl_UPackage::SetLinkerCustomVersions(FCustomVersionContainer)___ptr64'
              ::__l2::LLMScope_Name534,true);
  pFVar4 = (this->AdditionalInfo).Ptr;
  if (pFVar4 == (FAdditionalInfo *)0x0) {
    if ((param_1->Versions).ArrayNum != 0) {
      pFVar4 = ::operator_new(0x38);
      local_res10.Ptr = (FAdditionalInfo *)0x0;
      if (pFVar4 != (FAdditionalInfo *)0x0) {
        *(undefined4 *)&pFVar4->field_0xc = 0;
        pFVar4->LinkerPackageVersion = GPackageFileUEVersion;
        pFVar4->LinkerLicenseeVersion = GPackageFileLicenseeUEVersion;
        (pFVar4->LinkerCustomVersion).Versions.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (pFVar4->LinkerCustomVersion).Versions.ArrayNum = 0;
        (pFVar4->LinkerCustomVersion).Versions.ArrayMax = 0;
        pFVar4->LinkerLoad = (FLinkerLoad *)0x0;
        pFVar4->FileSize = 0;
        (pFVar4->WorldTileInfo).Ptr = (FWorldTileInfo *)0x0;
        local_res10.Ptr = pFVar4;
      }
      TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_>::operator=
                (&this->AdditionalInfo,&local_res10);
      TVar3.Ptr = local_res10.Ptr;
      if (local_res10.Ptr != (FAdditionalInfo *)0x0) {
        pFVar2 = ((local_res10.Ptr)->WorldTileInfo).Ptr;
        if (pFVar2 != (FWorldTileInfo *)0x0) {
          pFVar1 = (pFVar2->LODList).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          pFVar1 = (pFVar2->ParentTilePackageName).Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          pFVar1 = (pFVar2->Layer).Name.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          ::operator_delete(pFVar2,0xa8);
        }
        pFVar1 = ((TVar3.Ptr)->LinkerCustomVersion).Versions.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        ::operator_delete(TVar3.Ptr,0x38);
      }
      pFVar4 = (this->AdditionalInfo).Ptr;
      pFVar5 = &pFVar4->LinkerCustomVersion;
      if (pFVar5 != param_1) {
        pFVar1 = (pFVar5->Versions).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar5->Versions).AllocatorInstance.Data = (param_1->Versions).AllocatorInstance.Data;
        (param_1->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->LinkerCustomVersion).Versions.ArrayNum = (param_1->Versions).ArrayNum;
        (pFVar4->LinkerCustomVersion).Versions.ArrayMax = (param_1->Versions).ArrayMax;
        (param_1->Versions).ArrayNum = 0;
        (param_1->Versions).ArrayMax = 0;
      }
    }
  }
  else {
    pFVar5 = &pFVar4->LinkerCustomVersion;
    if (pFVar5 != param_1) {
      pFVar1 = (pFVar5->Versions).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar5->Versions).AllocatorInstance.Data = (param_1->Versions).AllocatorInstance.Data;
      (param_1->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->LinkerCustomVersion).Versions.ArrayNum = (param_1->Versions).ArrayNum;
      (pFVar4->LinkerCustomVersion).Versions.ArrayMax = (param_1->Versions).ArrayMax;
      (param_1->Versions).ArrayNum = 0;
      (param_1->Versions).ArrayMax = 0;
    }
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pFVar1 = (param_1->Versions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetLinkerLicenseeVersion @ 1420da140

void __thiscall UPackage::SetLinkerLicenseeVersion(UPackage *this,int param_1)

{
  FWorldTileInfo *pFVar1;
  FScriptContainerElement *pFVar2;
  TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> TVar3;
  FAdditionalInfo *pFVar4;
  FLLMScope local_res8 [2];
  TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> local_res18;
  FMemScope local_res20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_UPackage::SetLinkerLicenseeVersion(int)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_UPackage::SetLinkerLicenseeVersion(int)___ptr64'::
                           __l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_UPackage::SetLinkerLicenseeVersion(int)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`private:_void___cdecl_UPackage::SetLinkerLicenseeVersion(int)___ptr64'::__l2::
                    LLMScope_Name520,L"Package/AdditionalInfo");
    _Init_thread_footer(&`private:_void___cdecl_UPackage::SetLinkerLicenseeVersion(int)___ptr64'::
                         __l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `private:_void___cdecl_UPackage::SetLinkerLicenseeVersion(int)___ptr64'::__l2::
             LLMScope_Name520,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`private:_void___cdecl_UPackage::SetLinkerLicenseeVersion(int)___ptr64'::__l2::
              LLMScope_Name520,true);
  pFVar4 = (this->AdditionalInfo).Ptr;
  if (pFVar4 == (FAdditionalInfo *)0x0) {
    if (param_1 == GPackageFileLicenseeUEVersion) goto LAB_1420da29c;
    pFVar4 = ::operator_new(0x38);
    local_res18.Ptr = (FAdditionalInfo *)0x0;
    if (pFVar4 != (FAdditionalInfo *)0x0) {
      *(undefined4 *)&pFVar4->field_0xc = 0;
      pFVar4->LinkerPackageVersion = GPackageFileUEVersion;
      pFVar4->LinkerLicenseeVersion = GPackageFileLicenseeUEVersion;
      (pFVar4->LinkerCustomVersion).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      (pFVar4->LinkerCustomVersion).Versions.ArrayNum = 0;
      (pFVar4->LinkerCustomVersion).Versions.ArrayMax = 0;
      pFVar4->LinkerLoad = (FLinkerLoad *)0x0;
      pFVar4->FileSize = 0;
      (pFVar4->WorldTileInfo).Ptr = (FWorldTileInfo *)0x0;
      local_res18.Ptr = pFVar4;
    }
    TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_>::operator=
              (&this->AdditionalInfo,&local_res18);
    TVar3.Ptr = local_res18.Ptr;
    if (local_res18.Ptr != (FAdditionalInfo *)0x0) {
      pFVar1 = ((local_res18.Ptr)->WorldTileInfo).Ptr;
      if (pFVar1 != (FWorldTileInfo *)0x0) {
        pFVar2 = (pFVar1->LODList).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar1->ParentTilePackageName).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar1->Layer).Name.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar1,0xa8);
      }
      pFVar2 = ((TVar3.Ptr)->LinkerCustomVersion).Versions.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(TVar3.Ptr,0x38);
    }
    pFVar4 = (this->AdditionalInfo).Ptr;
  }
  pFVar4->LinkerLicenseeVersion = param_1;
LAB_1420da29c:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetLinkerPackageVersion @ 1420da300

void __thiscall UPackage::SetLinkerPackageVersion(UPackage *this,FPackageFileVersion param_1)

{
  FWorldTileInfo *pFVar1;
  FScriptContainerElement *pFVar2;
  FPackageFileVersion FVar3;
  TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> TVar4;
  FAdditionalInfo *pFVar5;
  FLLMScope local_res8 [2];
  FPackageFileVersion local_res10;
  TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> local_res18;
  FMemScope local_res20;
  
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_UPackage::SetLinkerPackageVersion(FPackageFileVersion)___ptr64'::__l2
       ::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_UPackage::SetLinkerPackageVersion(FPackageFileVersion)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_UPackage::SetLinkerPackageVersion(FPackageFileVersion)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`private:_void___cdecl_UPackage::SetLinkerPackageVersion(FPackageFileVersion)___ptr64'
                    ::__l2::LLMScope_Name506,L"Package/AdditionalInfo");
    _Init_thread_footer(&`private:_void___cdecl_UPackage::SetLinkerPackageVersion(FPackageFileVersion)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `private:_void___cdecl_UPackage::SetLinkerPackageVersion(FPackageFileVersion)___ptr64'
             ::__l2::LLMScope_Name506,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`private:_void___cdecl_UPackage::SetLinkerPackageVersion(FPackageFileVersion)___ptr64'
              ::__l2::LLMScope_Name506,true);
  pFVar5 = (this->AdditionalInfo).Ptr;
  if (pFVar5 == (FAdditionalInfo *)0x0) {
    if ((param_1.FileVersionUE4 == GPackageFileUEVersion.FileVersionUE4) &&
       (local_res10.FileVersionUE5 == GPackageFileUEVersion.FileVersionUE5)) goto LAB_1420da46c;
    pFVar5 = ::operator_new(0x38);
    local_res18.Ptr = (FAdditionalInfo *)0x0;
    if (pFVar5 != (FAdditionalInfo *)0x0) {
      *(undefined4 *)&pFVar5->field_0xc = 0;
      FVar3.FileVersionUE5 = GPackageFileUEVersion.FileVersionUE5;
      FVar3.FileVersionUE4 = GPackageFileUEVersion.FileVersionUE4;
      pFVar5->LinkerPackageVersion = FVar3;
      pFVar5->LinkerLicenseeVersion = GPackageFileLicenseeUEVersion;
      (pFVar5->LinkerCustomVersion).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      (pFVar5->LinkerCustomVersion).Versions.ArrayNum = 0;
      (pFVar5->LinkerCustomVersion).Versions.ArrayMax = 0;
      pFVar5->LinkerLoad = (FLinkerLoad *)0x0;
      pFVar5->FileSize = 0;
      (pFVar5->WorldTileInfo).Ptr = (FWorldTileInfo *)0x0;
      local_res18.Ptr = pFVar5;
    }
    TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_>::operator=
              (&this->AdditionalInfo,&local_res18);
    TVar4.Ptr = local_res18.Ptr;
    if (local_res18.Ptr != (FAdditionalInfo *)0x0) {
      pFVar1 = ((local_res18.Ptr)->WorldTileInfo).Ptr;
      if (pFVar1 != (FWorldTileInfo *)0x0) {
        pFVar2 = (pFVar1->LODList).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar1->ParentTilePackageName).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar1->Layer).Name.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar1,0xa8);
      }
      pFVar2 = ((TVar4.Ptr)->LinkerCustomVersion).Versions.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(TVar4.Ptr,0x38);
    }
    pFVar5 = (this->AdditionalInfo).Ptr;
  }
  pFVar5->LinkerPackageVersion = param_1;
LAB_1420da46c:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GetLinkerCustomVersions @ 1420fac10

FCustomVersionContainer * __thiscall UPackage::GetLinkerCustomVersions(UPackage *this)

{
  FAdditionalInfo *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UPackage::GetLinkerCustomVersions'::__l2::
             _dynamic_atexit_destructor_for__EmptyVersions__);
      _Init_thread_footer(&`public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar1 = (this->AdditionalInfo).Ptr;
  if (pFVar1 != (FAdditionalInfo *)0x0) {
    return &pFVar1->LinkerCustomVersion;
  }
  return &`public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
          ::__l2::EmptyVersions;
}

// operator() @ 14212f560

bool __thiscall
`UPackage::FindAssetInPackage'::__l2::<lambda_1>::operator()(void *this,UObject *param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x1c0))(param_1);
  if (((cVar2 != '\0') && (bVar3 = UE::AssetRegistry::FFiltering::ShouldSkipAsset(param_1), !bVar3))
     && ((*(uint *)((longlong)this + 0x10) == 0 ||
         ((*(uint *)&param_1->field_0x8 & *(uint *)((longlong)this + 0x10)) != 0)))) {
    uVar4 = *(uint *)&param_1->field_0x8 & 0x40000000;
    bVar3 = FAssetData::IsUAsset(param_1);
    plVar1 = *(longlong **)this;
    if (*plVar1 == 0) {
      *plVar1 = (longlong)param_1;
      *(bool *)*(undefined8 *)((longlong)this + 8) = uVar4 == 0;
      if ((uVar4 == 0) && (bVar3)) {
        return false;
      }
    }
    else if (uVar4 == 0) {
      if ((**(char **)((longlong)this + 8) == '\0') || (bVar3)) {
        *plVar1 = (longlong)param_1;
        **(undefined1 **)((longlong)this + 8) = 1;
      }
      return !bVar3;
    }
  }
  return true;
}

// operator() @ 14212fc00

void __thiscall
`UPackage::GetExternalPackages'::__l6::<lambda_1>::operator()(void *this,UObject *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *local_18 [2];
  
  local_18[0] = UObjectBase::GetExternalPackage((UObjectBase *)param_1);
  if ((local_18[0] != (UPackage *)0x0) && (local_18[0] != *(UPackage **)((longlong)this + 8))) {
    pFVar2 = *(ForAnyElementType **)this;
    if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(UPackage **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
  }
  return;
}

// FindAssetInPackage @ 142139810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall UPackage::FindAssetInPackage(UPackage *this,EObjectFlags param_1)

{
  undefined1 local_res10 [8];
  UObject *local_res18 [2];
  code *local_38;
  undefined8 **local_30;
  UObject **local_28;
  undefined1 *local_20;
  EObjectFlags local_18;
  
  local_28 = local_res18;
  local_20 = local_res10;
  local_res18[0] = (UObject *)0x0;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPackage::FindAssetInPackage'::__l2::<lambda_1>,bool,UObject_*>::
             Call;
  local_res10[0] = 0;
  local_18 = param_1;
  ForEachObjectWithPackage
            (this,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_38,false,RF_NoFlags,Borrowed);
  return local_res18[0];
}

// FinishDestroy @ 14213ba60

void __thiscall UPackage::FinishDestroy(UPackage *this)

{
  FAdditionalInfo *pFVar1;
  FLinkerLoad *this_00;
  FLinkerManager *this_01;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  pFVar1 = (this->AdditionalInfo).Ptr;
  if ((pFVar1 != (FAdditionalInfo *)0x0) &&
     (this_00 = pFVar1->LinkerLoad, this_00 != (FLinkerLoad *)0x0)) {
    FLinkerLoad::Detach(this_00);
    this_01 = FLinkerManager::Get();
    FLinkerManager::RemoveLinker(this_01,this_00);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'::
                      __l2::LLMScope_Name492,L"Package/AdditionalInfo");
      _Init_thread_footer(&`private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_res8,
               `private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'::__l2::
               LLMScope_Name492,false,None,Default,true);
    FMemScope::FMemScope
              (&local_res10,
               &`private:_void___cdecl_UPackage::SetLinker(FLinkerLoad*___ptr64)___ptr64'::__l2::
                LLMScope_Name492,true);
    pFVar1 = (this->AdditionalInfo).Ptr;
    if (pFVar1 != (FAdditionalInfo *)0x0) {
      pFVar1->LinkerLoad = (FLinkerLoad *)0x0;
    }
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope(local_res8);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// FullyLoad @ 14213be50

void __thiscall UPackage::FullyLoad(UPackage *this)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->_padding_ != 0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuter()==nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Package.cpp"
                       ,0x12e,L"Package is not topmost. Name:%s Path: %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsFullyLoaded(this);
  if (!bVar2) {
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
    }
    LoadPackage((UPackage *)0x0,(wchar_t *)FVar3.Data,0,(FArchive *)0x0,
                (FLinkerInstancingContext *)0x0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetExternalPackages @ 14213d710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UPackage_*,TSizedDefaultAllocator<32>_> * __thiscall
UPackage::GetExternalPackages
          (UPackage *this,TArray<UPackage_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res10 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_68;
  TArray<UPackage_*,TSizedDefaultAllocator<32>_> *local_58;
  UPackage *local_50;
  code *local_48;
  TArray<UPackage_*,TSizedDefaultAllocator<32>_> **local_40;
  code *local_38;
  code **local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  GetObjectsWithPackage(this,&local_68,false,RF_NoFlags,Borrowed);
  iVar2 = local_68.ArrayNum;
  uVar3 = (ulonglong)local_68.ArrayNum;
  pFVar1 = local_68.AllocatorInstance.Data + uVar3 * 8;
  FVar4.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar4.Data == pFVar1) break;
    local_40 = &local_58;
    local_30 = &local_48;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPackage::GetExternalPackages'::__l6::<lambda_1>,void,UObject_*>
               ::Call;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call;
    local_58 = __return_storage_ptr__;
    local_50 = this;
    ForEachObjectWithOuterBreakable
              (*(UObjectBase **)FVar4.Data,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_38,true,
               RF_NoFlags,Borrowed);
    uVar3 = local_68._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLoadedPath @ 14213d9c0

FPackagePath * __thiscall UPackage::GetLoadedPath(UPackage *this)

{
  return &this->LoadedPath;
}

// GetPrivateStaticClass @ 14213e490

UClass * __cdecl UPackage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPackage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Package",&Z_Registration_Info_UClass_UPackage.InnerSingleton
               ,StaticRegisterNativesUPackage,0x60,8,CLASS_Intrinsic,CASTCLASS_UPackage,L"Engine",
               InternalConstructor<UPackage>,InternalVTableHelperCtorCaller<UPackage>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPackage.InnerSingleton;
}

// IsAsset @ 1421431f0

bool __thiscall UPackage::IsAsset(UPackage *this)

{
  return false;
}

// IsFullyLoaded @ 1421432d0

bool __thiscall UPackage::IsFullyLoaded(UPackage *this)

{
  FAdditionalInfo *pFVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  FPackagePath *pFVar4;
  int iVar5;
  FName local_res8;
  FPackagePath local_58;
  FPackagePath local_48;
  FPackagePath local_3c;
  FString local_30;
  TStringView<wchar_t> local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (this->bHasBeenFullyLoaded != '\0') {
    return true;
  }
  pFVar1 = (this->AdditionalInfo).Ptr;
  if (((pFVar1 == (FAdditionalInfo *)0x0) || (pFVar1->FileSize == 0)) &&
     (pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4))
     , ((pFVar3->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0)) {
    if (((uint)this->PackageFlagsPrivate & 0x10) == 0) {
      bVar2 = FPackagePath::IsEmpty(&this->LoadedPath);
      if (bVar2) {
        local_res8 = (FName)this->_padding_;
        ::FName::ToString(&local_res8,&local_30);
        iVar5 = local_30.Data.ArrayNum + -1;
        if (local_30.Data.ArrayNum == 0) {
          iVar5 = 0;
        }
        local_18.Size = iVar5;
        local_18.DataPtr = (wchar_t *)local_30.Data.AllocatorInstance.Data;
        pFVar4 = FPackagePath::FromPackageNameChecked(&local_3c,&local_18);
        FPackagePath::FPackagePath(&local_58,pFVar4);
        if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar4 = FPackagePath::FPackagePath(&local_48,&this->LoadedPath);
        FPackagePath::FPackagePath(&local_58,pFVar4);
      }
      bVar2 = FPackageName::DoesPackageExist(&local_58,&local_58);
      if (bVar2) {
        return false;
      }
    }
    this->bHasBeenFullyLoaded = '\x01';
    return true;
  }
  return false;
}

// IsNameStableForNetworking @ 1421434e0

bool __thiscall UPackage::IsNameStableForNetworking(UPackage *this)

{
  return true;
}

// IsPostLoadThreadSafe @ 142143570

bool __thiscall UPackage::IsPostLoadThreadSafe(UPackage *this)

{
  return true;
}

// NeedsLoadForClient @ 142144f80

bool __thiscall UPackage::NeedsLoadForClient(UPackage *this)

{
  return true;
}

// NeedsLoadForServer @ 142144f90

bool __thiscall UPackage::NeedsLoadForServer(UPackage *this)

{
  return true;
}

// PostInitProperties @ 142146a20

void __thiscall UPackage::PostInitProperties(UPackage *this)

{
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) == 0) {
    this->bDirty = '\0';
  }
  SetLinkerPackageVersion(this,GPackageFileUEVersion);
  SetLinkerLicenseeVersion(this,GPackageFileLicenseeUEVersion);
  return;
}

// Rename @ 14214aa50

bool __thiscall UPackage::Rename(UPackage *this,wchar_t *param_1,UObject *param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = UObject::Rename((UObject *)this,param_1,param_2,param_3);
  return bVar1;
}

// Serialize @ 14214cdb0

void __thiscall UPackage::Serialize(UPackage *this,FArchive *param_1)

{
  FAdditionalInfo *pFVar1;
  FLinkerLoad *this_00;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((((param_1->field_0x2b & 4) != 0) &&
      (pFVar1 = (this->AdditionalInfo).Ptr, pFVar1 != (FAdditionalInfo *)0x0)) &&
     (this_00 = pFVar1->LinkerLoad, this_00 != (FLinkerLoad *)0x0)) {
    FLinker::Serialize((FLinker *)this_00,param_1);
  }
  return;
}

// Serialize @ 14214ce00

void __thiscall UPackage::Serialize(UPackage *this,FStructuredArchiveRecord param_1)

{
  FAdditionalInfo *pFVar1;
  FLinkerLoad *this_00;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar2);
  if ((((pFVar2->field_0x2b & 4) != 0) &&
      (pFVar1 = (this->AdditionalInfo).Ptr, pFVar1 != (FAdditionalInfo *)0x0)) &&
     (this_00 = pFVar1->LinkerLoad, this_00 != (FLinkerLoad *)0x0)) {
    FLinker::Serialize((FLinker *)this_00,pFVar2);
  }
  return;
}

// SetDirtyFlag @ 142150000

void __thiscall UPackage::SetDirtyFlag(UPackage *this,bool param_1)

{
  UPackage *pUVar1;
  UPackage *pUVar2;
  
  if (this->bDirty != param_1) {
    pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    pUVar2 = GetTransientPackage();
    if (pUVar1 != pUVar2) {
      if (GUndo != (ITransaction *)0x0) {
        pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
        if (((uint)pUVar1->PackageFlagsPrivate & 0x300010) == 0) {
          UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
          (**(code **)((longlong)*GUndo + 0x40))(GUndo,this);
        }
      }
      this->bDirty = '\0';
      this->field_0x28 = this->field_0x28 | param_1;
    }
  }
  return;
}

// SetLoadedPath @ 142150150

void __thiscall UPackage::SetLoadedPath(UPackage *this,FPackagePath *param_1)

{
  FPackagePath::operator=(&this->LoadedPath,param_1);
  return;
}

// StaticRegisterNativesUPackage @ 142152bf0

void __cdecl UPackage::StaticRegisterNativesUPackage(void)

{
  return;
}

// Save2 @ 1421e1c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FSavePackageResultStruct * __cdecl
UPackage::Save2(FSavePackageResultStruct *__return_storage_ptr__,UPackage *param_1,UObject *param_2,
               wchar_t *param_3,FSavePackageArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  FFeedbackContext *pFVar3;
  bool bVar4;
  FText *pFVar5;
  FSavePackageResultStruct *pFVar6;
  FTextFormat *pFVar7;
  undefined1 auStackY_8f8 [32];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_8c8
  ;
  FString local_8b0;
  FString local_8a0;
  FString local_890;
  FText local_880;
  FFormatArgumentValue local_870;
  FText local_850;
  FText local_840;
  FText local_830;
  FSlowTask local_818;
  FTextFormat local_7b8;
  FSaveContext local_7a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8f8;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3970,"UPackage_Save2",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0xf82);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3970);
  }
  FSaveContext::FSaveContext(&local_7a8,param_1,param_2,param_3,param_4);
  pFVar3 = GWarn;
  ::FString::FString(&local_8b0,local_7a8.Filename);
  FPaths::GetCleanFilename(&local_890,&local_8b0);
  if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
  }
  local_8c8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.Pairs.ArrayNum = 0;
  local_8c8.Pairs.ArrayMax = 0;
  pFVar5 = FText::FromString(&local_850,&local_890);
  local_870.Type = Text;
  FText::FText((FText *)&local_870.TextValue,pFVar5);
  if (local_870.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FSavePackageResultStruct *)(*pcVar1)();
      return pFVar6;
    }
  }
  ::FString::FString(&local_8a0,L"CleanFilename");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_8c8,&local_8a0,&local_870);
  if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
  }
  if (local_870.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_870.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_850.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_850.TextData.Reference + 0x10))();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_840,L"Core",L"SavingFile",L"Saving file: {CleanFilename}...");
  pFVar7 = FTextFormat::FTextFormat(&local_7b8,pFVar5,Default);
  FText::Format(&local_880,pFVar7,&local_8c8);
  if (local_840.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_840.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_8c8.Pairs.AllocatorInstance.Data,
             local_8c8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_8c8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_8c8.Pairs.AllocatorInstance.Data);
  }
  if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_890.Data.AllocatorInstance.Data);
  }
  FSlowTask::FSlowTask(&local_818,__real_41000000,&local_880,local_7a8.SaveArgs.bSlowTask,pFVar3);
  FSlowTask::Initialize(&local_818);
  if (local_880.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_880.TextData.Reference + 0x10))();
  }
  FSlowTask::MakeDialogDelayed
            (&local_818,__real_40400000,(bool)((byte)(local_7a8.SaveArgs.SaveFlags >> 1) & 1),false)
  ;
  pFVar5 = FText::FText(&local_830);
  FSlowTask::EnterProgressFrame(&local_818,__real_3f800000,pFVar5);
  if (local_830.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_830.TextData.Reference + 0x10))();
  }
  if ((-1 < CpuChannel->Enabled) && (-1 < SaveTimeChannel->Enabled)) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`ValidatePackage'::`2'::__CpuProfilerEventSpecId102,"UPackage_ValidatePackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x66);
    FCpuProfilerTrace::OutputBeginEvent(`ValidatePackage'::`2'::__CpuProfilerEventSpecId102);
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_7a8.Result = Error;
  FSavePackageResultStruct::FSavePackageResultStruct(__return_storage_ptr__,Error);
  FSlowTask::Destroy(&local_818);
  if (local_818.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_818.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_818.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_818.DefaultMessage.TextData.Reference + 0x10))();
  }
  FSaveContext::~FSaveContext(&local_7a8);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// Save @ 1421e1ff0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FSavePackageResultStruct * __cdecl
UPackage::Save(FSavePackageResultStruct *__return_storage_ptr__,UPackage *param_1,UObject *param_2,
              wchar_t *param_3,FSavePackageArgs *param_4)

{
  if (CpuChannel->Enabled < 0) {
    Save2(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId18,"UPackage::Save",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage.cpp"
               ,0x12);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId18);
    Save2(__return_storage_ptr__,param_1,param_2,param_3,param_4);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// SaveConcurrent @ 1421e20b0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

ESavePackageResult __cdecl
UPackage::SaveConcurrent
          (TArrayView<FPackageSaveInfo,int> *param_1,FSavePackageArgs *param_2,
          TArray<FSavePackageResultStruct,TSizedDefaultAllocator<32>_> *param_3)

{
  FSaveContext *this;
  uint uVar1;
  FPackageSaveInfo *pFVar2;
  FSavePackageResultStruct *pFVar3;
  code *pcVar4;
  uint uVar5;
  float fVar6;
  FFeedbackContext *pFVar7;
  FSavePackageArgs *pFVar8;
  bool bVar9;
  int iVar10;
  ESavePackageResult EVar11;
  int iVar12;
  FText *pFVar13;
  UObject *pUVar14;
  FSaveContext *pFVar15;
  FSavePackageResultStruct *pFVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  FPackageSaveInfo *pFVar19;
  int *piVar20;
  uint local_res8 [2];
  FSavePackageArgs *local_res10;
  TArray<FSavePackageResultStruct,TSizedDefaultAllocator<32>_> *local_res18;
  ForAnyElementType *local_res20;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  FPackageSaveInfo *local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  code *local_198;
  ForAnyElementType **local_190;
  TArrayView<FPackageSaveInfo_const_,int> local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FSlowTask local_128;
  FSavePackageResultStruct local_c8;
  
  pFVar7 = GWarn;
  bVar9 = param_2->bSlowTask;
  local_res10 = param_2;
  local_res18 = param_3;
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_178,L"Core",L"SavingFiles",L"Saving files...");
  FSlowTask::FSlowTask(&local_128,__real_40800000,pFVar13,bVar9,pFVar7);
  FSlowTask::Initialize(&local_128);
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
  }
  FSlowTask::MakeDialogDelayed
            (&local_128,__real_40400000,(bool)((byte)(param_2->SaveFlags >> 1) & 1),false);
  pFVar13 = FText::FText(&local_168);
  fVar6 = __real_3f800000;
  FSlowTask::EnterProgressFrame(&local_128,__real_3f800000,pFVar13);
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4081,"UPackage_SaveConcurrent_PreSave",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0xff1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4081);
  }
  pFVar8 = local_res10;
  pFVar2 = param_1->DataPtr;
  uVar1 = param_1->ArrayNum;
  uVar5 = uVar1;
  for (pFVar19 = pFVar2; local_res8[0] = uVar5, pFVar19 != pFVar2 + (int)uVar1;
      pFVar19 = pFVar19 + 1) {
    if ((pFVar19->Filename).Data.ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar19->Filename).Data.AllocatorInstance.Data;
    }
    pUVar14 = FindAssetInPackage(pFVar19->Package,RF_NoFlags);
    iVar10 = (int)local_1b0;
    if ((int)local_1b0 == local_1b0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x760,8,&local_1b8,(int *)((longlong)&local_1b0 + 4));
    }
    local_1b0 = CONCAT44(local_1b0._4_4_,iVar10 + 1);
    pFVar15 = FSaveContext::FSaveContext
                        ((FSaveContext *)(local_1b8.Data + (longlong)iVar10 * 0x760),
                         pFVar19->Package,pUVar14,pwVar17,pFVar8);
    if ((-1 < CpuChannel->Enabled) && (-1 < SaveTimeChannel->Enabled)) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`ValidatePackage'::`2'::__CpuProfilerEventSpecId102,"UPackage_ValidatePackage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                 ,0x66);
      FCpuProfilerTrace::OutputBeginEvent(`ValidatePackage'::`2'::__CpuProfilerEventSpecId102);
      FCpuProfilerTrace::OutputEndEvent();
    }
    pFVar15->Result = Error;
    uVar5 = local_res8[0];
    param_3 = local_res18;
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar13 = FText::FText(&local_158);
  FSlowTask::EnterProgressFrame(&local_128,fVar6,pFVar13);
  if (local_158.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  local_1a8 = pFVar2;
  uStack_1a0 = uVar5;
  local_188.DataPtr = pFVar2;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    local_188._12_4_ = uStack_19c;
    local_188.ArrayNum = uVar5;
    ResetLoadersForSave(&local_188);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4119,"UPackage_SaveConcurrent_ResetLoadersForSave",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x1017);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4119);
    local_188._12_4_ = uStack_19c;
    local_188.ArrayNum = uVar5;
    ResetLoadersForSave(&local_188);
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar13 = FText::FText(&local_148);
  FSlowTask::EnterProgressFrame(&local_128,fVar6,pFVar13);
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    local_res20 = &local_1b8;
    local_190 = &local_res20;
    local_198 = UE::Core::Private::Function::
                TFunctionRefCaller<`UPackage::SaveConcurrent'::__l18::<lambda_1>,void,int>::Call;
    ParallelFor((int)local_1b0,(TFunctionRef<void___cdecl(int)> *)&local_198,None);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4125,"UPackage_SaveConcurrent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x101d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4125);
    local_res20 = &local_1b8;
    local_190 = &local_res20;
    local_198 = UE::Core::Private::Function::
                TFunctionRefCaller<`UPackage::SaveConcurrent'::__l18::<lambda_1>,void,int>::Call;
    ParallelFor((int)local_1b0,(TFunctionRef<void___cdecl(int)> *)&local_198,None);
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar13 = FText::FText(&local_138);
  FSlowTask::EnterProgressFrame(&local_128,fVar6,pFVar13);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    local_res10 = (FSavePackageArgs *)((ulonglong)local_res10._1_7_ << 8);
  }
  else {
    local_res10 = (FSavePackageArgs *)CONCAT71(local_res10._1_7_,1);
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4140,"UPackage_SaveConcurrent_PostSave",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x102c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4140);
  }
  iVar10 = (int)local_1b0;
  pFVar18 = local_1b8.Data + 0x5a5;
  pFVar15 = (FSaveContext *)(local_1b8.Data + (longlong)(int)local_1b0 * 0x760);
  while( true ) {
    if ((int)local_1b0 != iVar10) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<FSaveContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    this = (FSaveContext *)(pFVar18 + -0x5a5);
    if (this == pFVar15) {
      if ((char)local_res10 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      DestructItems<FSaveContext,int>((FSaveContext *)local_1b8.Data,(int)local_1b0);
      if ((FSaveContext *)local_1b8.Data != (FSaveContext *)0x0) {
        FMemory::Free(local_1b8.Data);
      }
      FSlowTask::Destroy(&local_128);
      if (local_128.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_128.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.DefaultMessage.TextData.Reference + 0x10))();
      }
      return Success;
    }
    if (*(UObject **)(pFVar18 + -0x12d) != (UObject *)0x0) {
      UE::SavePackageUtilities::CallPostSaveRoot
                (*(UObject **)(pFVar18 + -0x12d),(FObjectSaveContextData *)(pFVar18 + -0xcd),
                 (bool)*pFVar18);
      *pFVar18 = (FScriptContainerElement)0x0;
    }
    piVar20 = &param_3->ArrayMax;
    ::`anonymous_namespace'::PostSavePackage(this);
    pFVar16 = FSaveContext::GetFinalResult(this,&local_c8);
    pFVar3 = (FSavePackageResultStruct *)(param_3->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + *piVar20)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    iVar12 = param_3->ArrayNum;
    if (iVar12 == *piVar20) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x870,&param_3->AllocatorInstance,piVar20);
    }
    param_3->ArrayNum = iVar12 + 1;
    FSavePackageResultStruct::FSavePackageResultStruct
              ((FSavePackageResultStruct *)
               ((param_3->AllocatorInstance).Data + (longlong)iVar12 * 0x70),pFVar16);
    FSavePackageResultStruct::~FSavePackageResultStruct(&local_c8);
    pFVar18 = pFVar18 + 0x760;
  }
  pcVar4 = (code *)swi(3);
  EVar11 = (*pcVar4)();
  return EVar11;
}

// SavePackage @ 1421e3270

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __cdecl
UPackage::SavePackage(UPackage *param_1,UObject *param_2,wchar_t *param_3,FSavePackageArgs *param_4)

{
  FSavePackageResultStruct local_e8;
  FSavePackageResultStruct local_78;
  
  if (CpuChannel->Enabled < 0) {
    Save2(&local_e8,param_1,param_2,param_3,param_4);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId18,"UPackage::Save",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage.cpp"
               ,0x12);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId18);
    Save2(&local_e8,param_1,param_2,param_3,param_4);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FSavePackageResultStruct::FSavePackageResultStruct(&local_78,Success);
  FSavePackageResultStruct::~FSavePackageResultStruct(&local_78);
  FSavePackageResultStruct::~FSavePackageResultStruct(&local_e8);
  return local_e8.Result == local_78.Result;
}

// HasAsyncFileWrites @ 1422107b0

bool __cdecl UPackage::HasAsyncFileWrites(void)

{
  return 0 < OutstandingAsyncWrites.Counter;
}

// IsEmptyPackage @ 1422121b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl UPackage::IsEmptyPackage(UPackage *param_1,UObject *param_2)

{
  bool bVar1;
  undefined1 local_res8 [8];
  UObject *local_28;
  undefined1 *local_20;
  code *local_18;
  UObject **local_10;
  
  if (param_1 != (UPackage *)0x0) {
    bVar1 = IsFullyLoaded(param_1);
    if (!bVar1) {
      FullyLoad(param_1);
    }
    local_20 = local_res8;
    local_res8[0] = 1;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPackage::IsEmptyPackage'::__l5::<lambda_1>,bool,UObject_*>::Call
    ;
    local_28 = param_2;
    ForEachObjectWithPackage
              (param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_18,false,
               RF_Transient|RF_ClassDefaultObject,Garbage);
    return (bool)local_res8[0];
  }
  return false;
}

// WaitForAsyncFileWrites @ 142234530

void __cdecl UPackage::WaitForAsyncFileWrites(void)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1605,"UPackage::WaitForAsyncFileWrites",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SavePackageUtilities.cpp"
               ,0x645);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1605);
  }
  while (OutstandingAsyncWrites.Counter != 0) {
    FWindowsPlatformProcess::Sleep(0.0);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

