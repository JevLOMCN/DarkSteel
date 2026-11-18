// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// FRigVMPropertyDescription @ 14a0bddd0

FRigVMPropertyDescription * __thiscall
FRigVMPropertyDescription::FRigVMPropertyDescription
          (FRigVMPropertyDescription *this,FName *param_1,FString *param_2,UObject *param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  FRigVMPropertyDescription *pFVar9;
  FName FVar10;
  size_t sVar11;
  FString *pFVar12;
  UObject *pUVar13;
  longlong lVar14;
  FName local_res8;
  FScriptContainerElement local_68;
  FScriptContainerElement local_67 [7];
  FString local_60;
  FString local_50;
  FString local_40;
  
  this->Name = *param_1;
  this->Property = (FProperty *)0x0;
  ::FString::FString(&this->CPPType,param_2);
  this->CPPTypeObject = param_3;
  (this->Containers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Containers).ArrayNum = 0;
  (this->Containers).ArrayMax = 0;
  ::FString::FString(&this->DefaultValue,param_4);
  pUVar13 = this->CPPTypeObject;
  if (pUVar13 == (UObject *)0x0) goto LAB_14a0bdef3;
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  lVar14 = *(longlong *)&pUVar13->field_0x10;
  iVar6 = (int)pUVar8->_padding_;
  if ((*(int *)(lVar14 + 0x38) < iVar6) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar8->_padding_)) goto LAB_14a0bdef3;
  bVar5 = RigVMCore::SupportsUInterfaces();
  if (bVar5) {
    pUVar13 = this->CPPTypeObject;
    if (pUVar13 == (UObject *)0x0) {
LAB_14a0bde93:
      pUVar13 = (UObject *)0x0;
    }
    else {
      pUVar8 = Z_Construct_UClass_UClass_NoRegister();
      iVar6 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar8->_padding_)) goto LAB_14a0bde93;
    }
    pUVar8 = Z_Construct_UClass_UInterface_NoRegister();
    if (pUVar8 != (UClass *)0x0) {
      iVar6 = (int)pUVar8->_padding_;
      if ((*(int *)&pUVar13[1].field_0x10 < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar13[1].field_0x8 + (longlong)iVar6 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_14a0bdef3;
    }
  }
  bVar5 = RigVMCore::SupportsUObjects();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RigVMCore::SupportsUObjects()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x10e,L"UClass types are not supported."), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FRigVMPropertyDescription *)(*pcVar3)();
    return pFVar9;
  }
LAB_14a0bdef3:
  FVar10 = SanitizeName(&local_res8);
  this->Name = *(FName *)FVar10;
  local_60.Data.ArrayNum = (this->CPPType).Data.ArrayNum;
  lVar14 = (longlong)local_60.Data.ArrayNum;
  pFVar1 = (this->CPPType).Data.AllocatorInstance.Data;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_60.Data.ArrayNum == 0) {
    local_60.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_60.Data.ArrayNum,0,(ForAnyElementType *)&local_60,local_60.Data.ArrayNum,
               &local_60.Data.ArrayMax);
    memcpy(local_60.Data.AllocatorInstance.Data,pFVar1,lVar14 * 2);
  }
  do {
    pwVar4 = ArrayPrefix;
    iVar6 = 0;
    if (ArrayPrefix != (wchar_t *)0x0) {
      sVar11 = wcslen(ArrayPrefix);
      iVar6 = (int)sVar11;
    }
    bVar5 = ::FString::RemoveFromStart(&local_60,pwVar4,iVar6,IgnoreCase);
    pwVar4 = MapPrefix;
    if (bVar5) {
      pFVar1 = (this->Containers).AllocatorInstance.Data;
      local_68 = (FScriptContainerElement)0x1;
      if ((pFVar1 <= &local_68) &&
         ((&local_68 < pFVar1 + (this->Containers).ArrayMax &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FRigVMPropertyDescription *)(*pcVar3)();
        return pFVar9;
      }
      iVar6 = (this->Containers).ArrayNum;
      if (iVar6 == (this->Containers).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&(this->Containers).AllocatorInstance,&(this->Containers).ArrayMax)
        ;
      }
      (this->Containers).ArrayNum = iVar6 + 1;
      (this->Containers).AllocatorInstance.Data[iVar6] = local_68;
      pwVar4 = ContainerSuffix;
      iVar6 = 0;
      if (ContainerSuffix != (wchar_t *)0x0) {
        sVar11 = wcslen(ContainerSuffix);
        iVar6 = (int)sVar11;
      }
      bVar5 = ::FString::RemoveFromEnd(&local_60,pwVar4,iVar6,IgnoreCase);
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TailCPPType.RemoveFromEnd(ContainerSuffix)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                             ,0x11f,L""), bVar5)) {
code_r0x00014a0be1ba:
        pcVar3 = (code *)swi(3);
        pFVar9 = (FRigVMPropertyDescription *)(*pcVar3)();
        return pFVar9;
      }
    }
    else {
      iVar7 = 0;
      iVar6 = iVar7;
      if (MapPrefix != (wchar_t *)0x0) {
        sVar11 = wcslen(MapPrefix);
        iVar6 = (int)sVar11;
      }
      bVar5 = ::FString::RemoveFromStart(&local_60,pwVar4,iVar6,IgnoreCase);
      if (!bVar5) break;
      pFVar1 = (this->Containers).AllocatorInstance.Data;
      local_67[0] = (FScriptContainerElement)0x3;
      if (((pFVar1 <= local_67) && (local_67 < pFVar1 + (this->Containers).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FRigVMPropertyDescription *)(*pcVar3)();
        return pFVar9;
      }
      iVar6 = (this->Containers).ArrayNum;
      if (iVar6 == (this->Containers).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&(this->Containers).AllocatorInstance,&(this->Containers).ArrayMax)
        ;
      }
      (this->Containers).ArrayNum = iVar6 + 1;
      (this->Containers).AllocatorInstance.Data[iVar6] = local_67[0];
      pwVar4 = ContainerSuffix;
      if (ContainerSuffix != (wchar_t *)0x0) {
        sVar11 = wcslen(ContainerSuffix);
        iVar7 = (int)sVar11;
      }
      bVar5 = ::FString::RemoveFromEnd(&local_60,pwVar4,iVar7,IgnoreCase);
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TailCPPType.RemoveFromEnd(ContainerSuffix)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                             ,0x124,L""), bVar5)) goto code_r0x00014a0be1ba;
    }
  } while (1 < local_60.Data.ArrayNum);
  pUVar2 = (UScriptStruct *)this->CPPTypeObject;
  if (pUVar2 != (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar6 = (int)pUVar8->_padding_;
    if ((iVar6 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar8->_padding_)) {
      pFVar12 = RigVMTypeUtils::GetUniqueStructTypeName(&local_50,pUVar2);
      iVar6 = (pFVar12->Data).ArrayNum;
      if (local_60.Data.ArrayNum == iVar6) {
        if (local_60.Data.ArrayNum < 2) {
          bVar5 = false;
        }
        else {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_60.Data.AllocatorInstance.Data,
                             (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
          bVar5 = iVar6 != 0;
        }
      }
      else {
        bVar5 = local_60.Data.ArrayNum + iVar6 != 1;
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        RigVMTypeUtils::GetUniqueStructTypeName(&local_40,pUVar2);
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TailCPPType == RigVMTypeUtils::GetUniqueStructTypeName(ScriptStruct)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                           ,0x131,L"CPPType \'%s\' doesn\'t match provided Struct \'%s\'");
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FRigVMPropertyDescription *)(*pcVar3)();
          return pFVar9;
        }
      }
    }
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return this;
}

// FRigVMPropertyDescription @ 14a0be2f0

FRigVMPropertyDescription * __thiscall
FRigVMPropertyDescription::FRigVMPropertyDescription
          (FRigVMPropertyDescription *this,FProperty *param_1,FString *param_2,FName *param_3)

{
  FString *this_00;
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement FVar7;
  int iVar8;
  FName FVar9;
  UObject *pUVar10;
  FName FVar11;
  FRigVMPropertyDescription *pFVar12;
  wchar_t *pwVar13;
  FProperty *pFVar14;
  FName local_res8;
  FScriptContainerElement local_48;
  FScriptContainerElement local_47 [7];
  FString local_40;
  wchar_t *local_30;
  undefined8 local_28;
  
  FVar11 = *param_3;
  this_00 = &this->CPPType;
  this->Property = param_1;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  this->Name = FVar11;
  (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CPPType).Data.ArrayNum = 0;
  (this->CPPType).Data.ArrayMax = 0;
  this->CPPTypeObject = (UObject *)0x0;
  (this->Containers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Containers).ArrayNum = 0;
  (this->Containers).ArrayMax = 0;
  ::FString::FString(&this->DefaultValue,param_2);
  if ((*param_3 == (FName)0x0) && (pFVar14 = this->Property, pFVar14 != (FProperty *)0x0)) {
    bVar6 = IsThisNotNull(pFVar14,"FField::GetFName");
    if (bVar6) {
      FVar9 = (FName)pFVar14->_padding_;
    }
    this->Name = FVar9;
  }
  if (((this->CPPType).Data.ArrayNum < 2) && (pFVar14 = this->Property, pFVar14 != (FProperty *)0x0)
     ) {
    local_30 = (wchar_t *)0x0;
    local_28 = 0;
    (**(code **)(pFVar14->_padding_ + 0x68))(pFVar14,&local_40,&local_30,0);
    iVar8 = (int)local_28 + -1;
    if ((int)local_28 == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_40,local_30,iVar8);
    RigVMTypeUtils::CleanupCPPType(&local_40);
    if (local_30 != (wchar_t *)0x0) {
      FMemory::Free(local_30);
    }
    if (this_00 != &local_40) {
      pFVar2 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this_00->Data).AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
      (this->CPPType).Data.ArrayNum = local_40.Data.ArrayNum;
      (this->CPPType).Data.ArrayMax = local_40.Data.ArrayMax;
      local_40.Data.ArrayNum = 0;
      local_40.Data.ArrayMax = 0;
      local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if ((this->CPPType).Data.ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(this_00->Data).AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp(pwVar13,RigVMTypeUtils::UInt8Type);
    if (iVar8 == 0) {
      if (this->Property != (FProperty *)0x0) {
        uVar1 = *(uint *)(this->Property->_padding_ + 0x18);
        pwVar13 = RigVMTypeUtils::BoolType;
joined_r0x00014a0be4ab:
        if ((uVar1 >> 0x11 & 1) != 0) {
          ::FString::operator=(this_00,pwVar13);
        }
      }
    }
    else {
      if ((this->CPPType).Data.ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(this->CPPType).Data.AllocatorInstance.Data;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar13,RigVMTypeUtils::UInt8ArrayType);
      if ((((iVar8 == 0) && (pFVar14 = this->Property, pFVar14 != (FProperty *)0x0)) &&
          ((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x15 & 1) != 0)) && (pFVar14[1]._padding_ != 0))
      {
        uVar1 = *(uint *)(*(longlong *)(pFVar14[1]._padding_ + 8) + 0x18);
        pwVar13 = RigVMTypeUtils::BoolArrayType;
        goto joined_r0x00014a0be4ab;
      }
    }
  }
  if ((this->CPPTypeObject != (UObject *)0x0) ||
     (pFVar14 = this->Property, pFVar14 == (FProperty *)0x0)) {
LAB_14a0be52b:
    FVar11 = SanitizeName(&local_res8);
    this->Name = *(FName *)FVar11;
    do {
      uVar4 = *(ulonglong *)(param_1->_padding_ + 0x18);
      if (((((uVar4 >> 0x10 & 1) != 0) || ((uVar4 >> 0x1d & 1) != 0)) &&
          (bVar6 = RigVMCore::SupportsUObjects(), !bVar6)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("RigVMCore::SupportsUObjects()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                             ,0xe2,L"UClass types are not supported."), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FRigVMPropertyDescription *)(*pcVar5)();
        return pFVar12;
      }
      if ((((*(uint *)(param_1->_padding_ + 0x18) >> 0xc & 1) != 0) &&
          (bVar6 = RigVMCore::SupportsUInterfaces(), !bVar6)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("RigVMCore::SupportsUInterfaces()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                             ,0xe7,L"UInterface types are not supported."), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FRigVMPropertyDescription *)(*pcVar5)();
        return pFVar12;
      }
      uVar4 = *(ulonglong *)(param_1->_padding_ + 0x18);
      if ((uVar4 >> 0x15 & 1) == 0) {
        if ((uVar4 >> 0x2f & 1) == 0) {
          if ((uVar4 >> 0x2e & 1) == 0) {
            return this;
          }
          pFVar2 = (this->Containers).AllocatorInstance.Data;
          local_47[0] = (FScriptContainerElement)0x3;
          if (((pFVar2 <= local_47) && (local_47 < pFVar2 + (this->Containers).ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar12 = (FRigVMPropertyDescription *)(*pcVar5)();
            return pFVar12;
          }
          iVar8 = (this->Containers).ArrayNum;
          FVar7 = local_47[0];
          if (iVar8 == (this->Containers).ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&(this->Containers).AllocatorInstance,
                               &(this->Containers).ArrayMax);
            FVar7 = local_47[0];
          }
          goto LAB_14a0be74a;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                           ,0xf1,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FRigVMPropertyDescription *)(*pcVar5)();
          return pFVar12;
        }
      }
      else {
        pFVar2 = (this->Containers).AllocatorInstance.Data;
        local_48 = (FScriptContainerElement)0x1;
        if (((pFVar2 <= &local_48) && (&local_48 < pFVar2 + (this->Containers).ArrayMax)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FRigVMPropertyDescription *)(*pcVar5)();
          return pFVar12;
        }
        iVar8 = (this->Containers).ArrayNum;
        FVar7 = local_48;
        if (iVar8 == (this->Containers).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&(this->Containers).AllocatorInstance,
                             &(this->Containers).ArrayMax);
          FVar7 = local_48;
        }
LAB_14a0be74a:
        (this->Containers).ArrayNum = iVar8 + 1;
        (this->Containers).AllocatorInstance.Data[iVar8] = FVar7;
        param_1 = (FProperty *)param_1[1]._padding_;
      }
      if (param_1 == (FProperty *)0x0) {
        return this;
      }
    } while( true );
  }
  while( true ) {
    if (pFVar14 == (FProperty *)0x0) goto LAB_14a0be52b;
    lVar3 = pFVar14->_padding_;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((uVar1 >> 0x15 & 1) == 0) break;
    pFVar14 = (FProperty *)pFVar14[1]._padding_;
  }
  if ((uVar1 >> 0x14 & 1) == 0) {
    if ((uVar1 >> 10 & 1) != 0) {
LAB_14a0be66d:
      pUVar10 = (UObject *)pFVar14[1]._padding_;
      goto LAB_14a0be527;
    }
    if (((uVar1 >> 0x10 & 1) == 0) && ((uVar1 >> 0xc & 1) == 0)) {
      if ((*(ulonglong *)(lVar3 + 0x18) & 0x1000000000000) != 0) goto LAB_14a0be66d;
      if ((*(byte *)(lVar3 + 0x18) & 0x40) != 0) goto LAB_14a0be523;
      goto LAB_14a0be52b;
    }
  }
LAB_14a0be523:
  pUVar10 = (UObject *)pFVar14[1]._padding_;
LAB_14a0be527:
  this->CPPTypeObject = pUVar10;
  goto LAB_14a0be52b;
}

// GetTailCPPType @ 14a0ec860

FString * __thiscall
FRigVMPropertyDescription::GetTailCPPType
          (FRigVMPropertyDescription *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  size_t sVar8;
  
  ::FString::FString(__return_storage_ptr__,&this->CPPType);
  pFVar10 = (this->Containers).AllocatorInstance.Data;
  iVar2 = (this->Containers).ArrayNum;
  pFVar1 = pFVar10 + iVar2;
LAB_14a0ec896:
  do {
    if ((this->Containers).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<enum_EPinContainerType_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    pwVar5 = MapPrefix;
    pwVar4 = ArrayPrefix;
    if (pFVar10 == pFVar1) {
      return __return_storage_ptr__;
    }
    if (*pFVar10 == (FScriptContainerElement)0x1) {
      if (ArrayPrefix == (wchar_t *)0x0) {
        iVar7 = 0;
      }
      else {
        sVar8 = wcslen(ArrayPrefix);
        iVar7 = (int)sVar8;
      }
      bVar6 = ::FString::RemoveFromStart(__return_storage_ptr__,pwVar4,iVar7,IgnoreCase);
      if (!bVar6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TailCPPType.RemoveFromStart(ArrayPrefix)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                           ,0x166,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar3)();
          return pFVar9;
        }
      }
      pwVar4 = ContainerSuffix;
      if (ContainerSuffix == (wchar_t *)0x0) {
        iVar7 = 0;
      }
      else {
        sVar8 = wcslen(ContainerSuffix);
        iVar7 = (int)sVar8;
      }
      bVar6 = ::FString::RemoveFromEnd(__return_storage_ptr__,pwVar4,iVar7,IgnoreCase);
      if (!bVar6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TailCPPType.RemoveFromEnd(ContainerSuffix)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                           ,0x167,L"");
        if (bVar6) goto code_r0x00014a0eca2e;
      }
    }
    else if (*pFVar10 == (FScriptContainerElement)0x3) {
      if (MapPrefix == (wchar_t *)0x0) {
        iVar7 = 0;
      }
      else {
        sVar8 = wcslen(MapPrefix);
        iVar7 = (int)sVar8;
      }
      bVar6 = ::FString::RemoveFromStart(__return_storage_ptr__,pwVar5,iVar7,IgnoreCase);
      if (!bVar6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TailCPPType.RemoveFromStart(MapPrefix)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                           ,0x16c,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar3)();
          return pFVar9;
        }
      }
      pwVar4 = ContainerSuffix;
      if (ContainerSuffix == (wchar_t *)0x0) {
        iVar7 = 0;
      }
      else {
        sVar8 = wcslen(ContainerSuffix);
        iVar7 = (int)sVar8;
      }
      bVar6 = ::FString::RemoveFromEnd(__return_storage_ptr__,pwVar4,iVar7,IgnoreCase);
      if (!bVar6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TailCPPType.RemoveFromEnd(ContainerSuffix)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                           ,0x16d,L"");
        if (bVar6) {
code_r0x00014a0eca2e:
          pcVar3 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar3)();
          return pFVar9;
        }
        pFVar10 = pFVar10 + 1;
        goto LAB_14a0ec896;
      }
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// SanitizeName @ 14a10d820

void __thiscall FRigVMPropertyDescription::SanitizeName(FRigVMPropertyDescription *this)

{
  FName FVar1;
  FName local_res8 [4];
  
  FVar1 = SanitizeName(local_res8);
  this->Name = *(FName *)FVar1;
  return;
}

// SanitizeName @ 14a10d850

FName __cdecl FRigVMPropertyDescription::SanitizeName(FName *param_1)

{
  wint_t _C;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName FVar4;
  FString *pFVar5;
  FName *in_RDX;
  ForAnyElementType FVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FString local_38;
  FString local_28;
  
  ::FName::ToString(in_RDX,&local_38);
  uVar9 = 0;
  uVar8 = uVar9;
  uVar10 = uVar9;
  while( true ) {
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    iVar7 = (int)uVar8;
    if (iVar3 <= iVar7) break;
    if ((((iVar7 < 0) || (local_38.Data.ArrayNum == 0)) || (local_38.Data.ArrayNum + -1 <= iVar7))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                              ,0x107,
                              L"String index out of bounds: Index %i from a string with a length of %i"
                             ), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
    iVar3 = iswalpha(*(wint_t *)(local_38.Data.AllocatorInstance.Data + uVar10));
    if (((iVar3 == 0) && (_C = *(wint_t *)(FVar6.Data + uVar10), _C != 0x5f)) &&
       ((iVar7 < 1 || (iVar3 = iswdigit(_C), iVar3 == 0)))) {
      *(undefined2 *)(FVar6.Data + uVar10) = 0x5f;
    }
    uVar8 = (ulonglong)(iVar7 + 1);
    uVar10 = uVar10 + 2;
  }
  pFVar5 = ::FName::ToString(in_RDX,&local_28);
  iVar3 = (pFVar5->Data).ArrayNum;
  if (local_38.Data.ArrayNum == iVar3) {
    if (local_38.Data.ArrayNum < 2) goto LAB_14a10d984;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                       (wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = local_38.Data.ArrayNum + iVar3 == 1;
  }
  uVar9 = (ulonglong)!bVar2;
LAB_14a10d984:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((char)uVar9 == '\0') {
    *param_1 = *in_RDX;
  }
  else {
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar6.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(param_1,(wchar_t *)FVar6.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// SanitizeName @ 14a10d9f0

void __cdecl FRigVMPropertyDescription::SanitizeName(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  lVar7 = 0;
  do {
    iVar1 = (param_1->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    if (iVar5 <= iVar6) {
      return;
    }
    if (iVar6 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    iVar5 = iswalpha(*(wint_t *)(pFVar2 + lVar7));
    if ((iVar5 == 0) && (*(wint_t *)(pFVar2 + lVar7) != 0x5f)) {
      if (0 < iVar6) {
        iVar5 = iswdigit(*(wint_t *)(pFVar2 + lVar7));
        if (iVar5 != 0) goto LAB_14a10da82;
      }
      *(undefined2 *)(pFVar2 + lVar7) = 0x5f;
    }
LAB_14a10da82:
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + 2;
  } while( true );
}

