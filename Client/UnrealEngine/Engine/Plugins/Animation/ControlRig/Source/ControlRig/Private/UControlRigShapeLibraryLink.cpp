// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 13

// StaticClass @ 14a2055e0

UClass * __cdecl UControlRigShapeLibraryLink::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigShapeLibraryLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigShapeLibraryLink",
               &Z_Registration_Info_UClass_UControlRigShapeLibraryLink.InnerSingleton,
               StaticRegisterNativesUControlRigShapeLibraryLink,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigShapeLibraryLink>,
               InternalVTableHelperCtorCaller<UControlRigShapeLibraryLink>,local_res8,
               UNameSpacedUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigShapeLibraryLink.InnerSingleton;
}

// UControlRigShapeLibraryLink @ 14a222e00

UControlRigShapeLibraryLink * __thiscall
UControlRigShapeLibraryLink::UControlRigShapeLibraryLink
          (UControlRigShapeLibraryLink *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UNameSpacedUserData::UNameSpacedUserData((UNameSpacedUserData *)this,param_1);
  this_00 = &(this->ShapeLibrary).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UControlRigShapeLibraryLink__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ShapeLibrary).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ShapeLibrary).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ShapeLibrary).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ShapeLibrary).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ShapeNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShapeNames).ArrayNum = 0;
  (this->ShapeNames).ArrayMax = 0;
  (this->ShapeLibraryCached).field0_0x0.DebugPtr = (UControlRigShapeLibrary *)0x0;
  return this;
}

// UControlRigShapeLibraryLink @ 14a222e80

UControlRigShapeLibraryLink * __thiscall
UControlRigShapeLibraryLink::UControlRigShapeLibraryLink
          (UControlRigShapeLibraryLink *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UNameSpacedUserData::UNameSpacedUserData((UNameSpacedUserData *)this,param_1);
  this_00 = &(this->ShapeLibrary).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UControlRigShapeLibraryLink__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ShapeLibrary).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ShapeLibrary).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ShapeLibrary).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ShapeLibrary).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ShapeNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShapeNames).ArrayNum = 0;
  (this->ShapeNames).ArrayMax = 0;
  (this->ShapeLibraryCached).field0_0x0.DebugPtr = (UControlRigShapeLibrary *)0x0;
  return this;
}

// ~UControlRigShapeLibraryLink @ 14a226d80

void __thiscall
UControlRigShapeLibraryLink::~UControlRigShapeLibraryLink(UControlRigShapeLibraryLink *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UControlRigShapeLibraryLink__6B_;
  pFVar1 = (this->ShapeNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->ShapeLibrary).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UNameSpacedUserData::~UNameSpacedUserData((UNameSpacedUserData *)this);
  return;
}

// GetPrivateStaticClass @ 14a267f60

UClass * __cdecl UControlRigShapeLibraryLink::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigShapeLibraryLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigShapeLibraryLink",
               &Z_Registration_Info_UClass_UControlRigShapeLibraryLink.InnerSingleton,
               StaticRegisterNativesUControlRigShapeLibraryLink,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigShapeLibraryLink>,
               InternalVTableHelperCtorCaller<UControlRigShapeLibraryLink>,local_res8,
               UNameSpacedUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigShapeLibraryLink.InnerSingleton;
}

// GetUserData @ 14a26cfc0

/* WARNING: Type propagation algorithm not settling */

FUserData * __thiscall
UControlRigShapeLibraryLink::GetUserData
          (UControlRigShapeLibraryLink *this,FString *param_1,FString *param_2)

{
  TObjectPtr<UControlRigShapeLibrary>_u_0 TVar1;
  FScriptContainerElement *pFVar2;
  FProperty *pFVar3;
  int iVar4;
  FUserData *pFVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FName *pFVar8;
  UPackage *pUVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  FName local_res20;
  FString local_88;
  FString local_78;
  FString local_68;
  FUserData local_58;
  
  pFVar5 = UNameSpacedUserData::GetUserData((UNameSpacedUserData *)this,param_1,(FString *)0x0);
  if (pFVar5 != (FUserData *)0x0) {
    return pFVar5;
  }
  pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ShapeLibrary);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = UControlRigShapeLibrary::StaticClass();
    iVar4 = (int)pUVar7->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar7->_padding_)) {
      ::FString::FString(&local_88,L"ShapeLibrary");
      FVar10.Data = local_88.Data.AllocatorInstance.Data;
      iVar4 = (param_1->Data).ArrayNum;
      if (iVar4 == local_88.Data.ArrayNum) {
        if (iVar4 < 2) {
          bVar11 = true;
        }
        else {
          iVar4 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_88.Data.AllocatorInstance.Data);
          bVar11 = iVar4 == 0;
        }
      }
      else {
        bVar11 = iVar4 + local_88.Data.ArrayNum == 1;
      }
      if ((FName)FVar10.Data != (FName)0x0) {
        FMemory::Free(FVar10.Data);
      }
      if (bVar11) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          pFVar8 = ::FName::FName((FName *)&local_88,0x12,L"ShapeLibraryCached",FNAME_Add);
          local_res20 = *pFVar8;
          pUVar7 = StaticClass();
          ShapeLibraryProperty =
               UNameSpacedUserData::FindPropertyByName((UStruct *)pUVar7,&local_res20);
          _Init_thread_footer(&::_TSS0);
        }
        pFVar3 = ShapeLibraryProperty;
        TVar1 = (this->ShapeLibraryCached).field0_0x0;
        ::FString::FString(&local_58.Path,param_1);
        local_58.Property = pFVar3;
        local_58.Memory = (uchar *)TVar1;
        goto LAB_14a26d26f;
      }
      ::FString::FString(&local_88,L"DefaultShape");
      FVar10.Data = local_88.Data.AllocatorInstance.Data;
      iVar4 = (param_1->Data).ArrayNum;
      if (iVar4 == local_88.Data.ArrayNum) {
        if (iVar4 < 2) {
          bVar11 = true;
        }
        else {
          iVar4 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_88.Data.AllocatorInstance.Data);
          bVar11 = iVar4 == 0;
        }
      }
      else {
        bVar11 = iVar4 + local_88.Data.ArrayNum == 1;
      }
      if ((FName)FVar10.Data != (FName)0x0) {
        FMemory::Free(FVar10.Data);
      }
      if (!bVar11) {
        ::FString::FString(&local_88,L"ShapeNames");
        iVar4 = (param_1->Data).ArrayNum;
        if (iVar4 == local_88.Data.ArrayNum) {
          if (iVar4 < 2) {
            bVar11 = true;
          }
          else {
            iVar4 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                           (wchar_t *)local_88.Data.AllocatorInstance.Data);
            bVar11 = iVar4 == 0;
          }
        }
        else {
          bVar11 = iVar4 + local_88.Data.ArrayNum == 1;
        }
        if ((FName)local_88.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (bVar11) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
            pFVar8 = ::FName::FName((FName *)&local_88,10,L"ShapeNames",FNAME_Add);
            local_res20 = *pFVar8;
            pUVar7 = StaticClass();
            ShapeNamesProperty =
                 UNameSpacedUserData::FindPropertyByName((UStruct *)pUVar7,&local_res20);
            _Init_thread_footer(&::_TSS2);
          }
          pFVar3 = ShapeNamesProperty;
          ::FString::FString(&local_58.Path,param_1);
          local_58.Property = pFVar3;
          local_58.Memory = (uchar *)&this->ShapeNames;
          goto LAB_14a26d26f;
        }
        if (param_2 == (FString *)0x0) {
          return (FUserData *)0x0;
        }
        if (1 < (param_2->Data).ArrayNum) {
          return (FUserData *)0x0;
        }
        ::FString::PrintfImpl(&local_78,L"UserData path \'%s\' could not be found.");
        FVar10.Data = local_78.Data.AllocatorInstance.Data;
        if (param_2 != &local_78) {
          pFVar2 = (param_2->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (param_2->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
          (param_2->Data).ArrayNum = local_78.Data.ArrayNum;
          (param_2->Data).ArrayMax = local_78.Data.ArrayMax;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar10.Data = (FScriptContainerElement *)0x0;
        }
        goto LAB_14a26d370;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        pFVar8 = ::FName::FName((FName *)&local_88,9,L"ShapeName",FNAME_Add);
        local_res20 = *pFVar8;
        if (Z_Registration_Info_UScriptStruct_FControlRigShapeDefinition.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar9 = Z_Construct_UPackage__Script_ControlRig();
          Z_Registration_Info_UScriptStruct_FControlRigShapeDefinition.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FControlRigShapeDefinition,
                               (UObject *)pUVar9,L"ControlRigShapeDefinition");
        }
        DefaultShapeProperty =
             UNameSpacedUserData::FindPropertyByName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FControlRigShapeDefinition.OuterSingleton,
                        &local_res20);
        _Init_thread_footer(&::_TSS1);
      }
      pFVar3 = DefaultShapeProperty;
      pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ShapeLibrary);
      if (pUVar6 == (UObject *)0x0) {
LAB_14a26d1b1:
        pUVar6 = (UObject *)0x0;
      }
      else {
        pUVar7 = UControlRigShapeLibrary::StaticClass();
        iVar4 = (int)pUVar7->_padding_;
        if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar4) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar7->_padding_)) goto LAB_14a26d1b1;
      }
      ::FString::FString(&local_58.Path,param_1);
      local_58.Memory = &pUVar6[1].field_0x8;
      local_58.Property = pFVar3;
LAB_14a26d26f:
      local_58.CPPType.ComparisonIndex.Value = 0;
      local_58.CPPType.Number = 0;
      pFVar5 = UNameSpacedUserData::StoreCacheForUserData((UNameSpacedUserData *)this,&local_58);
      if (local_58.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Path.Data.AllocatorInstance.Data);
        return pFVar5;
      }
      return pFVar5;
    }
  }
  if (param_2 == (FString *)0x0) {
    return (FUserData *)0x0;
  }
  if (1 < (param_2->Data).ArrayNum) {
    return (FUserData *)0x0;
  }
  ::FString::PrintfImpl
            (&local_68,L"User data path \'%s\' could not be found (ShapeLibrary not provided)");
  FVar10.Data = local_68.Data.AllocatorInstance.Data;
  if (param_2 != &local_68) {
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_2->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    (param_2->Data).ArrayNum = local_68.Data.ArrayNum;
    (param_2->Data).ArrayMax = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar10.Data = (FScriptContainerElement *)0x0;
  }
LAB_14a26d370:
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  return (FUserData *)0x0;
}

// GetUserDataArray @ 14a26d500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UControlRigShapeLibraryLink::GetUserDataArray
          (UControlRigShapeLibraryLink *this,FString *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStackY_e8 [32];
  FString local_a8;
  TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pTVar5 = UNameSpacedUserData::GetUserDataArray((UNameSpacedUserData *)this,param_1,(FString *)0x0)
  ;
  if (pTVar5->ArrayNum != 0) {
    return pTVar5;
  }
  pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ShapeLibrary);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = UControlRigShapeLibrary::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      if ((param_1->Data).ArrayNum < 2) {
        pcVar2 = *(code **)(this->_padding_ + 0x2d0);
        ::FString::FString(&local_88,L"ShapeLibrary");
        lVar8 = (*pcVar2)(this,&local_88,param_2);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        pcVar2 = *(code **)(this->_padding_ + 0x2d0);
        ::FString::FString(&local_78,L"DefaultShape");
        lVar9 = (*pcVar2)(this,&local_78,param_2);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        pcVar2 = *(code **)(this->_padding_ + 0x2d0);
        ::FString::FString(&local_68,L"ShapeNames");
        lVar10 = (*pcVar2)(this,&local_68,param_2);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if ((lVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ShapeLibraryUserData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigAssetUserData.cpp"
                               ,0x4e,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar5;
        }
        if ((lVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("DefaultShapeUserData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigAssetUserData.cpp"
                               ,0x4f,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar5;
        }
        if ((lVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ShapeNamesUserData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigAssetUserData.cpp"
                               ,0x50,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar5;
        }
        local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.ArrayNum = 3;
        local_58 = lVar8;
        lStack_50 = lVar9;
        local_48 = lVar10;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,3,0,&local_98.AllocatorInstance,3,&local_98.ArrayMax);
        *(longlong *)local_98.AllocatorInstance.Data = local_58;
        *(longlong *)(local_98.AllocatorInstance.Data + 8) = lStack_50;
        *(longlong *)(local_98.AllocatorInstance.Data + 0x10) = local_48;
        pTVar5 = UNameSpacedUserData::StoreCacheForUserDataArray
                           ((UNameSpacedUserData *)this,param_1,&local_98);
        if (local_98.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return pTVar5;
        }
        FMemory::Free(local_98.AllocatorInstance.Data);
        return pTVar5;
      }
      goto LAB_14a26d7c8;
    }
  }
  if ((param_2 != (FString *)0x0) && ((param_2->Data).ArrayNum < 2)) {
    ::FString::PrintfImpl
              (&local_a8,L"User data path \'%s\' could not be found (ShapeLibrary not provided)");
    if (param_2 != &local_a8) {
      pFVar3 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_2->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_a8.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
LAB_14a26d7c8:
  return &UNameSpacedUserData::EmptyUserDatas;
}

// Serialize @ 14a28ed90

void __thiscall
UControlRigShapeLibraryLink::Serialize(UControlRigShapeLibraryLink *this,FArchive *param_1)

{
  UControlRigShapeLibrary *pUVar1;
  
  if ((((param_1->field_0x28 & 4) != 0) && ((param_1->field_0x29 & 1) != 0)) &&
     ((*(longlong *)&param_1->field_0x68 == 0 ||
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) {
    pUVar1 = (this->ShapeLibraryCached).field0_0x0.DebugPtr;
    (this->ShapeLibraryCached).field0_0x0.DebugPtr = (UControlRigShapeLibrary *)0x0;
    UNameSpacedUserData::Serialize((UNameSpacedUserData *)this,param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UControlRigShapeLibrary *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ShapeLibraryCached).field0_0x0.DebugPtr = pUVar1;
    return;
  }
  UNameSpacedUserData::Serialize((UNameSpacedUserData *)this,param_1);
  return;
}

// Serialize @ 14a28ee10

void __thiscall
UControlRigShapeLibraryLink::Serialize
          (UControlRigShapeLibraryLink *this,FStructuredArchiveRecord param_1)

{
  UControlRigShapeLibrary *pUVar1;
  FArchive *pFVar2;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if ((((pFVar2->field_0x28 & 4) != 0) && ((pFVar2->field_0x29 & 1) != 0)) &&
     ((*(longlong *)&pFVar2->field_0x68 == 0 ||
      (*(longlong *)(*(longlong *)&pFVar2->field_0x68 + 0x10) == 0)))) {
    pUVar1 = (this->ShapeLibraryCached).field0_0x0.DebugPtr;
    (this->ShapeLibraryCached).field0_0x0.DebugPtr = (UControlRigShapeLibrary *)0x0;
    UNameSpacedUserData::Serialize((UNameSpacedUserData *)this,pFVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UControlRigShapeLibrary *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ShapeLibraryCached).field0_0x0.DebugPtr = pUVar1;
    return;
  }
  UNameSpacedUserData::Serialize((UNameSpacedUserData *)this,pFVar2);
  return;
}

// SetShapeLibrary @ 14a295910

void __thiscall
UControlRigShapeLibraryLink::SetShapeLibrary
          (UControlRigShapeLibraryLink *this,TSoftObjectPtr<UControlRigShapeLibrary> *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UControlRigShapeLibrary *pUVar10;
  UClass *pUVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  UNameSpacedUserData::InvalidateCache((UNameSpacedUserData *)this);
  *(undefined8 *)&(this->ShapeLibrary).SoftObjectPtr = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->ShapeLibrary).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  pUVar10 = (UControlRigShapeLibrary *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar10 != (UControlRigShapeLibrary *)0x0) {
    pUVar11 = UControlRigShapeLibrary::StaticClass();
    iVar3 = (int)pUVar11->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar11->_padding_)) goto LAB_14a295988;
  }
  pUVar10 = (UControlRigShapeLibrary *)0x0;
LAB_14a295988:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UControlRigShapeLibrary *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->ShapeLibraryCached).field0_0x0.DebugPtr = pUVar10;
  pTVar2 = &this->ShapeNames;
  piVar1 = &(this->ShapeNames).ArrayMax;
  (this->ShapeNames).ArrayNum = 0;
  if ((this->ShapeNames).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pUVar10 = (this->ShapeLibraryCached).field0_0x0.DebugPtr;
  if (pUVar10 != (UControlRigShapeLibrary *)0x0) {
    pFVar12 = (pUVar10->Shapes).AllocatorInstance.Data;
    iVar3 = (pUVar10->Shapes).ArrayNum;
    pFVar13 = pFVar12 + (longlong)iVar3 * 0xa0;
    while( true ) {
      if ((pUVar10->Shapes).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FControlRigShapeDefinition,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar12 == pFVar13) break;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar12) && (pFVar12 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->ShapeNames).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ShapeNames).ArrayNum = iVar9 + 1;
      uVar5 = *(undefined8 *)pFVar12;
      pFVar12 = pFVar12 + 0xa0;
      *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = uVar5;
    }
  }
  pvVar6 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar6 == (void *)0x0) {
    return;
  }
  FMemory::Free(pvVar6);
  return;
}

// StaticRegisterNativesUControlRigShapeLibraryLink @ 14a298070

void __cdecl UControlRigShapeLibraryLink::StaticRegisterNativesUControlRigShapeLibraryLink(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetShapeLibrary @ 14a2b3860

void __cdecl
UControlRigShapeLibraryLink::execGetShapeLibrary(UObject *param_1,FFrame *param_2,void *param_3)

{
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.WeakPtr.ObjectIndex = *(int *)&param_1[6].field_0x10;
  local_38.WeakPtr.ObjectSerialNumber = *(int *)&param_1[6].field_0x14;
  FSoftObjectPath::FSoftObjectPath(&local_38.ObjectID,(FSoftObjectPath *)&param_1[6].field_0x18);
  TPersistentObjectPtr<FSoftObjectPath>::operator=(param_3,&local_38);
  if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetShapeLibrary @ 14a2b7830

void __cdecl
UControlRigShapeLibraryLink::execSetShapeLibrary(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType _Src;
  size_t _Size;
  undefined1 local_58 [24];
  FUtf8String local_40;
  undefined1 local_30 [24];
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  local_58._0_8_ = 0;
  local_58._16_8_ = 0;
  local_58._8_8_ = 0;
  FUtf8String::Reset(&local_40,0);
  FSoftObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  _Src.Data = local_40.Data.AllocatorInstance.Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_40.Data.ArrayNum;
  local_30._0_8_ = local_58._0_8_;
  local_10 = local_40.Data.ArrayNum;
  local_30._8_8_ = local_58._8_8_;
  local_30._16_8_ = local_58._16_8_;
  if (local_40.Data.ArrayNum == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_40.Data.ArrayNum,0,&local_18,local_40.Data.ArrayNum,&local_c);
    memcpy(local_18.Data,_Src.Data,_Size);
  }
  SetShapeLibrary((UControlRigShapeLibraryLink *)param_1,
                  (TSoftObjectPtr<UControlRigShapeLibrary> *)local_30);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return;
}

