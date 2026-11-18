// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// IsValid @ 148fc5e30

bool __thiscall FNiagaraVariableBase::IsValid(FNiagaraVariableBase *this)

{
  FNiagaraTypeDefinition *pFVar1;
  
  if (this->Name != (FName)0x0) {
    pFVar1 = FNiagaraTypeDefinitionHandle::Resolve(&this->TypeDefHandle);
    if ((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      return true;
    }
  }
  return false;
}

// IsInNameSpace @ 149059c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FNiagaraVariableBase::IsInNameSpace(TStringView<wchar_t> *param_1,FName param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FName local_res10;
  undefined1 auStack_898 [32];
  int local_878;
  int local_870;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_898;
  local_868.Base = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.CurPos = local_848;
  local_868.End = local_32;
  local_res10 = param_2;
  ::FName::ToString(&local_res10,&local_868);
  pwVar2 = local_868.Base;
  iVar7 = param_1->Size;
  iVar6 = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
  if (iVar7 < 2) {
LAB_149059d60:
    iVar7 = param_1->Size;
    if (iVar7 + 1 < iVar6) {
      if ((iVar7 < 0) || (iVar6 <= iVar7)) {
        local_878 = iVar7;
        local_870 = iVar6;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      if (pwVar2[iVar7] == L'.') goto LAB_149059da9;
    }
  }
  else {
    iVar5 = iVar7 + -1;
    if ((iVar5 < 0) || (iVar7 <= iVar5)) {
      local_878 = iVar5;
      local_870 = iVar7;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    if (param_1->DataPtr[(longlong)iVar7 + -1] != L'.') goto LAB_149059d60;
    if (param_1->Size < iVar6) {
LAB_149059da9:
      iVar7 = (int)*(undefined8 *)&param_1->Size;
      if (iVar7 < iVar6) {
        iVar6 = iVar7;
      }
      iVar5 = 0;
      if (0 < iVar6) {
        iVar5 = iVar6;
      }
      if (iVar7 == iVar5) {
        if ((iVar7 != 0) && (iVar5 != 0)) {
          iVar6 = iVar5;
          if (iVar7 < iVar5) {
            iVar6 = iVar7;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,pwVar2,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_149059d2e;
        }
        if (iVar7 == iVar5) {
          bVar3 = true;
          goto LAB_149059d30;
        }
      }
    }
  }
LAB_149059d2e:
  bVar3 = false;
LAB_149059d30:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return bVar3;
}

// IsUObject @ 14905ad70

bool __thiscall FNiagaraVariableBase::IsUObject(FNiagaraVariableBase *this)

{
  int iVar1;
  bool bVar2;
  FNiagaraTypeDefinition *this_00;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(&this->TypeDefHandle);
  pUVar4 = FNiagaraTypeDefinition::IntStruct;
  if (this_00->UnderlyingType != 3) {
    if ((this_00->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UStruct_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
      if (bVar2) {
        pUVar4 = (UScriptStruct *)(this_00->ClassStructOrEnum).field0_0x0.DebugPtr;
        goto LAB_14905adb3;
      }
    }
    pUVar4 = (UScriptStruct *)0x0;
  }
LAB_14905adb3:
  if ((pUVar4 != (UScriptStruct *)0x0) &&
     (pUVar3 = Z_Construct_UClass_UObject_NoRegister(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= (int)pUVar4->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) == &pUVar3->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// AppendCompileHash @ 1492db230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FNiagaraVariableBase::AppendCompileHash
          (FNiagaraVariableBase *this,FNiagaraCompileHashVisitor *param_1)

{
  bool bVar1;
  FNiagaraTypeRegistry *this_00;
  undefined1 auStack_888 [32];
  TStringView<wchar_t> local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_868.DataPtr = *(wchar_t **)&this->Name;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = local_22;
  ::FName::AppendString((FName *)&local_868,&local_858);
  local_868.Size = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
  local_868.DataPtr = local_858.Base;
  bVar1 = FNiagaraCompileHashVisitor::UpdateString(param_1,L"NiagaraVariable.Name",&local_868);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  if (bVar1) {
    this_00 = FNiagaraTypeRegistry::Get();
    FNiagaraTypeRegistry::GetRegisteredType(this_00,(this->TypeDefHandle).RegisteredTypeIndex);
  }
  return false;
}

// IsDataInterface @ 1492f86a0

bool __thiscall FNiagaraVariableBase::IsDataInterface(FNiagaraVariableBase *this)

{
  int iVar1;
  bool bVar2;
  FNiagaraTypeRegistry *this_00;
  FNiagaraTypeDefinition *this_01;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  
  this_00 = FNiagaraTypeRegistry::Get();
  this_01 = FNiagaraTypeRegistry::GetRegisteredType
                      (this_00,(this->TypeDefHandle).RegisteredTypeIndex);
  pUVar4 = FNiagaraTypeDefinition::IntStruct;
  if (this_01->UnderlyingType != 3) {
    if ((this_01->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UStruct_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar3);
      if (bVar2) {
        pUVar4 = (UScriptStruct *)(this_01->ClassStructOrEnum).field0_0x0.DebugPtr;
        goto LAB_1492f86ed;
      }
    }
    pUVar4 = (UScriptStruct *)0x0;
  }
LAB_1492f86ed:
  if ((pUVar4 != (UScriptStruct *)0x0) &&
     (pUVar3 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= (int)pUVar4->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) == &pUVar3->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// Serialize @ 149305480

bool __thiscall FNiagaraVariableBase::Serialize(FNiagaraVariableBase *this,FArchive *param_1)

{
  int iVar1;
  UScriptStruct *this_00;
  FNiagaraTypeRegistry *pFVar2;
  FNiagaraTypeDefinition *pFVar3;
  TObjectPtr<UObject>_u_0 local_28;
  ushort local_20;
  uchar local_1e;
  undefined8 local_1c;
  uint local_14;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) && (iVar1 < 0x40)) {
    return false;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  this_00 = FNiagaraTypeDefinition::StaticStruct();
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      local_1c = 0xffffffffffffffff;
      local_28.DebugPtr = (UObject *)0x0;
      local_20 = 0;
      local_1e = 0;
      local_14 = 0xffffffff;
      iVar1 = -1;
      UScriptStruct::SerializeItem(this_00,param_1,&local_28,(void *)0x0);
      if (local_28.DebugPtr != (UObject *)0x0) {
        pFVar2 = FNiagaraTypeRegistry::Get();
        iVar1 = FNiagaraTypeRegistry::RegisterTypeInternal
                          (pFVar2,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
      }
      (this->TypeDefHandle).RegisteredTypeIndex = iVar1;
    }
  }
  else {
    pFVar2 = FNiagaraTypeRegistry::Get();
    pFVar3 = FNiagaraTypeRegistry::GetRegisteredType
                       (pFVar2,(this->TypeDefHandle).RegisteredTypeIndex);
    local_28.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = pFVar3->UnderlyingType;
    local_1e = pFVar3->Flags;
    local_1c._0_2_ = pFVar3->Size;
    local_1c._2_2_ = pFVar3->Alignment;
    local_1c._4_4_ = pFVar3->RegisteredTypeDefIndex;
    local_14 = pFVar3->UnderlyingTypePathNameHash;
    UScriptStruct::SerializeItem(this_00,param_1,&local_28,(void *)0x0);
  }
  return true;
}

// StaticStruct @ 14940f620

UScriptStruct * __cdecl FNiagaraVariableBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableBase.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraVariableBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableBase,(UObject *)pUVar1,
                         L"NiagaraVariableBase");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraVariableBase.OuterSingleton;
}

// IsInExternalNamespace @ 149454070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FNiagaraVariableBase::IsInExternalNamespace(FNiagaraVariableBase *this)

{
  FName *pFVar1;
  uint uVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  FName *pFVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStackY_8e8 [32];
  FName local_8a8;
  int local_8a0;
  int local_89c;
  FName local_898;
  int local_890;
  int local_88c;
  FName local_888 [2];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  local_888[0] = this->Name;
  local_878.Base = local_858;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_878.CurPos = local_858;
  local_878.End = local_42;
  ::FName::AppendString(local_888,&local_878);
  pwVar5 = local_878.Base;
  FVar4 = FNiagaraConstants::UserNamespaceString.Data.AllocatorInstance;
  lVar11 = (longlong)FNiagaraConstants::UserNamespaceString.Data.ArrayNum;
  lVar14 = 2;
  lVar15 = (longlong)local_878.CurPos - (longlong)local_878.Base;
  local_8a8.ComparisonIndex.Value = 0;
  local_8a8.Number = 0;
  local_8a0 = FNiagaraConstants::UserNamespaceString.Data.ArrayNum;
  if (FNiagaraConstants::UserNamespaceString.Data.ArrayNum == 0) {
    local_89c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FNiagaraConstants::UserNamespaceString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_8a8,FNiagaraConstants::UserNamespaceString.Data.ArrayNum,
               &local_89c);
    memcpy((void *)local_8a8,FVar4.Data,lVar11 * 2);
  }
  FVar4.Data = FNiagaraConstants::ParameterCollectionNamespaceString.Data.AllocatorInstance.Data;
  lVar11 = (longlong)FNiagaraConstants::ParameterCollectionNamespaceString.Data.ArrayNum;
  local_898.ComparisonIndex.Value = 0;
  local_898.Number = 0;
  local_890 = FNiagaraConstants::ParameterCollectionNamespaceString.Data.ArrayNum;
  if (FNiagaraConstants::ParameterCollectionNamespaceString.Data.ArrayNum == 0) {
    local_88c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FNiagaraConstants::ParameterCollectionNamespaceString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_898,
               FNiagaraConstants::ParameterCollectionNamespaceString.Data.ArrayNum,&local_88c);
    memcpy((void *)local_898,FVar4.Data,lVar11 * 2);
  }
  pFVar12 = &local_8a8;
  do {
    uVar2 = pFVar12[1].ComparisonIndex.Value;
    uVar8 = uVar2;
    if (uVar2 == 0) {
      uVar8 = 1;
    }
    iVar9 = (int)(lVar15 >> 1);
    if ((int)uVar8 < iVar9) {
      iVar10 = 0;
      if ((((uVar2 != 0) && (iVar10 = uVar2 - 1, iVar10 < 0)) || (iVar9 <= iVar10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if (pwVar5[iVar10] == L'.') {
        uVar2 = pFVar12[1].ComparisonIndex.Value;
        iVar10 = uVar2 - 1;
        if (uVar2 == 0) {
          iVar10 = 0;
        }
        if (iVar10 < iVar9) {
          iVar9 = iVar10;
        }
        iVar13 = 0;
        if (0 < iVar9) {
          iVar13 = iVar9;
        }
        if (((iVar10 == iVar13) &&
            (((iVar10 == 0 || (iVar13 == 0)) ||
             (iVar9 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*pFVar12,pwVar5,(longlong)iVar13)
             , iVar9 == 0)))) && (iVar10 == iVar13)) {
          pFVar12 = local_888;
          do {
            pFVar1 = pFVar12 + -2;
            pFVar12 = pFVar12 + -2;
            lVar14 = lVar14 + -1;
            if (*pFVar1 != (FName)0x0) {
              FMemory::Free((void *)*pFVar1);
            }
          } while (lVar14 != 0);
          bVar6 = true;
          goto LAB_14945429c;
        }
      }
    }
    pFVar12 = pFVar12 + 2;
    if (pFVar12 == local_888) {
      pFVar12 = local_888;
      do {
        pFVar1 = pFVar12 + -2;
        pFVar12 = pFVar12 + -2;
        lVar14 = lVar14 + -1;
        if (*pFVar1 != (FName)0x0) {
          FMemory::Free((void *)*pFVar1);
        }
      } while (lVar14 != 0);
      bVar6 = false;
LAB_14945429c:
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
      return bVar6;
    }
  } while( true );
}

// RemoveRootNamespace @ 149463a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FNiagaraVariableBase::RemoveRootNamespace(FNiagaraVariableBase *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  void *pvVar6;
  FName *pFVar7;
  ulong64 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_1108 [32];
  int local_10e8;
  int local_10e0;
  FName local_10d8 [2];
  TStringBuilderBase<wchar_t> local_10c8;
  wchar_t local_10a8 [1035];
  wchar_t local_892 [5];
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149463a22;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1108;
  local_888.Base = local_868;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_888.CurPos = local_868;
  local_888.End = local_52;
  ::FName::ToString(&this->Name,&local_888);
  pwVar2 = local_888.Base;
  iVar5 = param_1->Size;
  iVar11 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
  if (iVar5 + 1 < iVar11) {
    if (((iVar5 < 0) || (iVar11 <= iVar5)) &&
       (local_10e8 = iVar5, local_10e0 = iVar11,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < Size",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                          ,0x234,
                          L"Index out of bounds on StringView: index %i on a view with a length of %i"
                         ), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (pwVar2[iVar5] == L'.') {
      iVar9 = (int)*(undefined8 *)&param_1->Size;
      iVar5 = iVar11;
      if (iVar9 < iVar11) {
        iVar5 = iVar9;
      }
      iVar10 = 0;
      if (0 < iVar5) {
        iVar10 = iVar5;
      }
      if (iVar9 == iVar10) {
        if ((iVar9 != 0) && (iVar10 != 0)) {
          iVar5 = iVar10;
          if (iVar9 < iVar10) {
            iVar5 = iVar9;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,pwVar2,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_149463c0b;
        }
        if (iVar9 == iVar10) {
          local_10c8.End = local_892;
          local_10c8.bIsDynamic = false;
          local_10c8.bIsExternal = false;
          local_10c8.Base = local_10a8;
          local_10c8.CurPos = local_10a8;
          iVar5 = param_1->Size + 1;
          iVar9 = 0x7fffffff;
          if (iVar5 < 0) {
            iVar5 = 0;
            iVar9 = param_1->Size + -0x80000000;
          }
          if (iVar11 < iVar5) {
            iVar5 = iVar11;
          }
          iVar10 = iVar11 - iVar5;
          if (iVar9 < iVar11 - iVar5) {
            iVar10 = iVar9;
          }
          iVar11 = 0;
          if (0 < iVar10) {
            iVar11 = iVar10;
          }
          uVar8 = (ulong64)iVar11;
          if (local_892 < local_10a8 + uVar8) {
            TStringBuilderBase<wchar_t>::Extend(&local_10c8,uVar8);
          }
          if (iVar11 != 0) {
            pvVar6 = FGenericPlatformString::Memcpy(local_10c8.CurPos,pwVar2 + iVar5,uVar8 * 2);
            local_10c8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
          }
          pFVar7 = ::FName::FName(local_10d8,
                                  (int)((longlong)local_10c8.CurPos - (longlong)local_10c8.Base >> 1
                                       ),local_10c8.Base,FNAME_Add);
          this->Name = *pFVar7;
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10c8);
          bVar3 = true;
          goto LAB_149463c0d;
        }
      }
    }
  }
LAB_149463c0b:
  bVar3 = false;
LAB_149463c0d:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  return bVar3;
}

// ReplaceRootNamespace @ 149463c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FNiagaraVariableBase::ReplaceRootNamespace
          (FNiagaraVariableBase *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  void *pvVar6;
  FName *pFVar7;
  ulong64 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_1118 [32];
  int local_10f8;
  int local_10f0;
  FNiagaraVariableBase *local_10e8;
  FName local_10e0;
  undefined4 local_10d8;
  undefined4 uStack_10d4;
  int iStack_10d0;
  undefined4 uStack_10cc;
  TStringBuilderBase<wchar_t> local_10c8;
  wchar_t local_10a8 [1035];
  wchar_t local_892 [5];
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149463c72;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1118;
  local_888.Base = local_868;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_888.CurPos = local_868;
  local_888.End = local_52;
  local_10e8 = this;
  ::FName::ToString(&this->Name,&local_888);
  pwVar2 = local_888.Base;
  iVar5 = param_1->Size;
  iVar10 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
  if (iVar5 + 1 < iVar10) {
    if ((iVar5 < 0) || (iVar10 <= iVar5)) {
      local_10f8 = iVar5;
      local_10f0 = iVar10;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    if (pwVar2[iVar5] == L'.') {
      iVar9 = (int)*(undefined8 *)&param_1->Size;
      iVar5 = iVar10;
      if (iVar9 < iVar10) {
        iVar5 = iVar9;
      }
      iVar11 = 0;
      if (0 < iVar5) {
        iVar11 = iVar5;
      }
      if (iVar9 == iVar11) {
        if ((iVar9 != 0) && (iVar11 != 0)) {
          iVar5 = iVar11;
          if (iVar9 < iVar11) {
            iVar5 = iVar9;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,pwVar2,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_149463eb1;
        }
        if (iVar9 == iVar11) {
          local_10c8.Base = local_10a8;
          local_10d8 = *(undefined4 *)&param_2->DataPtr;
          uStack_10d4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
          iStack_10d0 = param_2->Size;
          uStack_10cc = *(undefined4 *)&param_2->field_0xc;
          local_10c8.End = local_892;
          iVar5 = (int)*(undefined8 *)&param_2->Size;
          uVar8 = (ulong64)iVar5;
          local_10c8.CurPos = local_10a8;
          local_10c8.bIsDynamic = false;
          local_10c8.bIsExternal = false;
          if (local_892 < local_10a8 + uVar8) {
            TStringBuilderBase<wchar_t>::Extend(&local_10c8,uVar8);
          }
          if (iVar5 != 0) {
            pvVar6 = FGenericPlatformString::Memcpy
                               (local_10c8.CurPos,(void *)CONCAT44(uStack_10d4,local_10d8),uVar8 * 2
                               );
            local_10c8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
          }
          iVar5 = param_1->Size;
          iVar9 = 0;
          if (iVar5 < 0) {
            iVar9 = iVar5;
          }
          iVar11 = iVar5 - iVar9;
          if (iVar10 < iVar5 - iVar9) {
            iVar11 = iVar10;
          }
          iVar5 = iVar10 - iVar11;
          if (iVar9 + 0x7fffffff < iVar10 - iVar11) {
            iVar5 = iVar9 + 0x7fffffff;
          }
          iVar10 = 0;
          if (0 < iVar5) {
            iVar10 = iVar5;
          }
          uVar8 = (ulong64)iVar10;
          if (local_10c8.End < local_10c8.CurPos + uVar8) {
            TStringBuilderBase<wchar_t>::Extend(&local_10c8,uVar8);
          }
          if (iVar10 != 0) {
            pvVar6 = FGenericPlatformString::Memcpy(local_10c8.CurPos,pwVar2 + iVar11,uVar8 * 2);
            local_10c8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
          }
          pFVar7 = ::FName::FName(&local_10e0,
                                  (int)((longlong)local_10c8.CurPos - (longlong)local_10c8.Base >> 1
                                       ),local_10c8.Base,FNAME_Add);
          local_10e8->Name = *pFVar7;
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10c8);
          bVar3 = true;
          goto LAB_149463eb3;
        }
      }
    }
  }
LAB_149463eb1:
  bVar3 = false;
LAB_149463eb3:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  return bVar3;
}

// SerializeFromMismatchedTag @ 149465120

bool __thiscall
FNiagaraVariableBase::SerializeFromMismatchedTag
          (FNiagaraVariableBase *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  bool bVar1;
  UPackage *pUVar2;
  FPropertyTypeName local_res10 [2];
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  local_res10[0].Index = (param_1->TypeName).Index;
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariable,(UObject *)pUVar2,
                         L"NiagaraVariable");
  }
  bVar1 = UE::FPropertyTypeName::IsStruct
                    (local_res10,
                     (FName)(Z_Registration_Info_UScriptStruct_FNiagaraVariable.OuterSingleton)->
                            _padding_);
  if (bVar1) {
    local_28.ComparisonIndex.Value = 0;
    local_28.Number = 0;
    local_20[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::Vec4Def);
    local_18 = (void *)0x0;
    local_10 = 0;
    if (Z_Registration_Info_UScriptStruct_FNiagaraVariable.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraVariable.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariable,(UObject *)pUVar2,
                           L"NiagaraVariable");
    }
    UScriptStruct::SerializeItem
              (Z_Registration_Info_UScriptStruct_FNiagaraVariable.OuterSingleton,param_2,&local_28,
               (void *)0x0);
    this->Name = local_28;
    (this->TypeDefHandle).RegisteredTypeIndex = local_20[0].RegisteredTypeIndex;
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
    return true;
  }
  return false;
}

// SetNamespacedName @ 1494655a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraVariableBase::SetNamespacedName(FNiagaraVariableBase *this,FString *param_1,FName param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FName *pFVar4;
  ulong64 uVar5;
  int iVar6;
  FName local_res18;
  undefined1 auStack_178 [32];
  FName local_158 [2];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  local_148.Base = local_128;
  local_148.End = (wchar_t *)local_28;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  iVar1 = (param_1->Data).ArrayNum;
  local_148.CurPos = local_128;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  uVar5 = (ulong64)iVar6;
  local_res18 = param_2;
  if (local_28 < local_128 + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_148,uVar5);
  }
  if (iVar6 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(local_148.CurPos,pFVar2,uVar5 * 2);
    local_148.CurPos = (wchar_t *)((longlong)pvVar3 + uVar5 * 2);
  }
  if (local_148.End < local_148.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_148,1);
  }
  *local_148.CurPos = L'.';
  local_148.CurPos = local_148.CurPos + 1;
  ::FName::AppendString(&local_res18,&local_148);
  pFVar4 = ::FName::FName(local_158,
                          (int)((longlong)local_148.CurPos - (longlong)local_148.Base >> 1),
                          local_148.Base,FNAME_Add);
  this->Name = *pFVar4;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  return;
}

