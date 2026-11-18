// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// FObjectAndNameAsStringProxyArchive @ 141ed3960

FObjectAndNameAsStringProxyArchive * __thiscall
FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
          (FObjectAndNameAsStringProxyArchive *this,FArchive *param_1,bool param_2)

{
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)this,param_1);
  this->bLoadIfFindFails = param_2;
  this->_padding_ = (longlong)&___7FObjectAndNameAsStringProxyArchive__6B_;
  this->bResolveRedirectors = false;
  return this;
}

// ~FObjectAndNameAsStringProxyArchive @ 141ed5bc0

void __thiscall
FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive
          (FObjectAndNameAsStringProxyArchive *this)

{
  this->_padding_ = (longlong)&___7FObjectAndNameAsStringProxyArchive__6B_;
  FNameAsStringProxyArchive::~FNameAsStringProxyArchive((FNameAsStringProxyArchive *)this);
  return;
}

// operator<< @ 141ed7090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __thiscall
FObjectAndNameAsStringProxyArchive::operator<<
          (FObjectAndNameAsStringProxyArchive *this,UObject **param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar5;
  UObject *pUVar6;
  ForAnyElementType FVar7;
  int iVar8;
  int iVar9;
  undefined1 auStackY_118 [32];
  char local_d8;
  FString local_d0;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  UObject *local_98 [2];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  size_t sVar4;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((this->_padding_ & 1) == 0) {
    if ((UObjectBaseUtility *)*param_1 == (UObjectBaseUtility *)0x0) {
      local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.Data.ArrayNum = 0;
      local_d0.Data.ArrayMax = 0;
      ::operator<<((FArchive *)this->_padding_,&local_d0);
      FVar7.Data = local_d0.Data.AllocatorInstance.Data;
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)*param_1,(FString *)&local_b8,(UObject *)0x0);
      ::operator<<((FArchive *)this->_padding_,(FString *)&local_b8);
      FVar7.Data = (FScriptContainerElement *)local_b8.DataPtr;
    }
    goto LAB_141ed73fd;
  }
  iVar9 = 0;
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  ::operator<<((FArchive *)this->_padding_,&local_d0);
  if (local_d0.Data.ArrayNum < 2) {
    *param_1 = (UObject *)0x0;
    FVar7.Data = local_d0.Data.AllocatorInstance.Data;
    goto LAB_141ed73fd;
  }
  iVar8 = 0;
  if (local_d0.Data.ArrayNum == 0) {
    local_a8.DataPtr = L"";
LAB_141ed711d:
    sVar4 = wcslen(local_a8.DataPtr);
    iVar3 = (int)sVar4;
  }
  else {
    local_a8.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
    iVar3 = iVar8;
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_141ed711d;
  }
  local_a8.Size = iVar3;
  pUVar5 = Z_Construct_UClass_UObject_NoRegister();
  local_b8.DataPtr = local_a8.DataPtr;
  local_b8.Size = local_a8.Size;
  local_b8._12_4_ = local_a8._12_4_;
  pUVar6 = StaticFindObject(pUVar5,(UObject *)0x0,&local_b8,None);
  *param_1 = pUVar6;
  if ((pUVar6 == (UObject *)0x0) && (this->bLoadIfFindFails != false)) {
    local_a8.Size = 0;
    local_a8._12_4_ = 0;
    local_a8.DataPtr = (wchar_t *)0x0;
    if (local_d0.Data.ArrayNum == 0) {
      local_b8.DataPtr = L"";
LAB_141ed717a:
      sVar4 = wcslen(local_b8.DataPtr);
      iVar8 = (int)sVar4;
    }
    else {
      local_b8.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_141ed717a;
    }
    local_b8.Size = iVar8;
    pUVar5 = Z_Construct_UClass_UObject_NoRegister();
    pUVar6 = StaticLoadObject(pUVar5,(UObject *)0x0,&local_b8,&local_a8,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
    *param_1 = pUVar6;
  }
  FVar7.Data = local_d0.Data.AllocatorInstance.Data;
  if ((this->bResolveRedirectors != false) && (pUVar6 != (UObject *)0x0)) {
    pUVar5 = UObjectRedirector::GetPrivateStaticClass();
    iVar8 = (int)pUVar5->_padding_;
    FVar7.Data = local_d0.Data.AllocatorInstance.Data;
    if ((iVar8 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       (((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
         &pUVar5->_padding_ && (pUVar6 = *param_1, pUVar6 != (UObject *)0x0)))) {
      do {
        pUVar5 = UObjectRedirector::GetPrivateStaticClass();
        iVar8 = (int)pUVar5->_padding_;
        if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar8) ||
           (((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
             &pUVar5->_padding_ || (iVar9 = iVar9 + 1, 5 < iVar9)))) break;
        pUVar6 = *(UObject **)(*param_1 + 1);
        *param_1 = pUVar6;
      } while (pUVar6 != (UObject *)0x0);
      pUVar6 = *param_1;
      FVar7.Data = local_d0.Data.AllocatorInstance.Data;
      if (pUVar6 != (UObject *)0x0) {
        pUVar5 = UObjectRedirector::GetPrivateStaticClass();
        lVar1 = *(longlong *)&pUVar6->field_0x10;
        iVar9 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar1 + 0x38) < iVar9) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        FVar7.Data = local_d0.Data.AllocatorInstance.Data;
        if (bVar2) {
          local_88._0_8_ = (FScriptContainerElement *)0x0;
          local_88._8_8_ = 0;
          local_68 = (void *)0x0;
          local_60 = 0;
          local_5c = 0x80;
          local_58 = 0xffffffff;
          local_54 = 0;
          local_48 = (ForElementType<FSetElementId>)0x0;
          local_40 = 0;
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
          Emplace<UObject_*_const_&>
                    ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_88,
                     local_98,(bool *)param_1);
          pUVar6 = *param_1;
          while (pUVar6 != (UObject *)0x0) {
            pUVar5 = UObjectRedirector::GetPrivateStaticClass();
            iVar9 = (int)pUVar5->_padding_;
            if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar9) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar5->_padding_)) break;
            *param_1 = *(UObject **)(*param_1 + 1);
            TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
            Emplace<UObject_*_const_&>
                      ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_88
                       ,local_98,(bool *)param_1);
            if (local_d8 != '\0') {
              *param_1 = (UObject *)0x0;
            }
            pUVar6 = *param_1;
          }
          local_40 = 0;
          if (local_48 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_48);
          }
          iVar9 = SUB84(local_88._8_8_,4);
          local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
          if (iVar9 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
          }
          local_58 = 0xffffffff;
          local_54 = 0;
          local_60 = 0;
          if (0x80 < local_5c) {
            local_5c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
          }
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
          }
          FVar7.Data = local_d0.Data.AllocatorInstance.Data;
          if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_88._0_8_);
            FVar7.Data = local_d0.Data.AllocatorInstance.Data;
          }
        }
      }
    }
  }
LAB_141ed73fd:
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return (FArchive *)this;
}

// operator<< @ 141ed7430

FArchive * __thiscall
FObjectAndNameAsStringProxyArchive::operator<<
          (FObjectAndNameAsStringProxyArchive *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FObjectPtr_u_0 FStackX_8;
  
  FStackX_8.Handle = (UObject *)0xfffffefbf1234567;
  if ((this->_padding_ & 1) == 0) {
    FStackX_8 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  }
  (**(code **)(this->_padding_ + 0x168))(this,&FStackX_8);
  FVar1 = FStackX_8;
  if ((((this->_padding_ & 1) != 0) || ((this->_padding_ & 0x2000000) != 0)) &&
     (FStackX_8.Handle != (UObject *)0xfffffefbf1234567)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FStackX_8.Handle != (UObject *)0x0)
       ) {
      UE::GC::MarkAsReachable(FStackX_8.Handle);
    }
    (param_1->field0_0x0).Handle = (UObject *)FVar1;
  }
  return (FArchive *)this;
}

// operator<< @ 141ed7440

FArchive * __thiscall
FObjectAndNameAsStringProxyArchive::operator<<
          (FObjectAndNameAsStringProxyArchive *this,FSoftObjectPath *param_1)

{
  FSoftObjectPath::SerializePath(param_1,(FArchive *)this);
  return (FArchive *)this;
}

// operator<< @ 141ed7470

FArchive * __thiscall
FObjectAndNameAsStringProxyArchive::operator<<
          (FObjectAndNameAsStringProxyArchive *this,FSoftObjectPtr *param_1)

{
  if ((this->_padding_ & 1) != 0) {
    *(undefined8 *)param_1 = 0;
  }
  (**(code **)(this->_padding_ + 0x140))(this,&param_1->field_0x8);
  return (FArchive *)this;
}

// operator<< @ 141ed74a0

FArchive * __thiscall
FObjectAndNameAsStringProxyArchive::operator<<
          (FObjectAndNameAsStringProxyArchive *this,FWeakObjectPtr *param_1)

{
  UObject *pUStackX_8;
  UObject *apUStackX_18 [2];
  
  if ((this->_padding_ & 0x3000000) != 0x1000000) {
    pUStackX_8 = FWeakObjectPtr::Get(param_1,true);
    (**(code **)(this->_padding_ + 0x168))(this,&pUStackX_8);
    if (((this->_padding_ & 1) != 0) || ((this->_padding_ & 0x2000000) != 0)) {
      apUStackX_18[0] = pUStackX_8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUStackX_8);
      }
      FWeakObjectPtr::operator=(param_1,(FObjectPtr)apUStackX_18);
    }
  }
  return (FArchive *)this;
}

