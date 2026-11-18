// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 19

// StaticClass @ 14a0ac5f0

UClass * __cdecl URigVMMemoryStorageGeneratorClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMMemoryStorageGeneratorClass",
               &Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.InnerSingleton,
               StaticRegisterNativesURigVMMemoryStorageGeneratorClass,0x248,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URigVMMemoryStorageGeneratorClass>,
               InternalVTableHelperCtorCaller<URigVMMemoryStorageGeneratorClass>,local_res8,
               UClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.InnerSingleton;
}

// URigVMMemoryStorageGeneratorClass @ 14a0c2110

URigVMMemoryStorageGeneratorClass * __thiscall
URigVMMemoryStorageGeneratorClass::URigVMMemoryStorageGeneratorClass
          (URigVMMemoryStorageGeneratorClass *this,FVTableHelper *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  this->_padding_ = (longlong)&___7URigVMMemoryStorageGeneratorClass__6B_;
  (this->LinkedProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkedProperties).ArrayNum = 0;
  (this->LinkedProperties).ArrayMax = 0;
  (this->PropertyPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPaths).ArrayNum = 0;
  (this->PropertyPaths).ArrayMax = 0;
  (this->PropertyPathDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPathDescriptions).ArrayNum = 0;
  (this->PropertyPathDescriptions).ArrayMax = 0;
  return this;
}

// ~URigVMMemoryStorageGeneratorClass @ 14a0c3430

void __thiscall
URigVMMemoryStorageGeneratorClass::~URigVMMemoryStorageGeneratorClass
          (URigVMMemoryStorageGeneratorClass *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URigVMMemoryStorageGeneratorClass__6B_;
  DestructItems<FRigVMPropertyPathDescription,int>
            ((FRigVMPropertyPathDescription *)
             (this->PropertyPathDescriptions).AllocatorInstance.Data,
             (this->PropertyPathDescriptions).ArrayNum);
  pFVar1 = (this->PropertyPathDescriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMPropertyPath,int>
            ((FRigVMPropertyPath *)(this->PropertyPaths).AllocatorInstance.Data,
             (this->PropertyPaths).ArrayNum);
  pFVar1 = (this->PropertyPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LinkedProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UClass::~UClass((UClass *)this);
  return;
}

// AddProperty @ 14a0cb6d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FProperty * __cdecl
URigVMMemoryStorageGeneratorClass::AddProperty
          (URigVMMemoryStorageGeneratorClass *param_1,FRigVMPropertyDescription *param_2,
          TLinkedListBuilder<FField,TLinkedListBuilderNextLink<FField>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement FVar3;
  FName FVar4;
  UScriptStruct *pUVar5;
  code *pcVar6;
  UObject *pUVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  UClass *pUVar11;
  FProperty *pFVar12;
  ulonglong uVar13;
  FMapProperty *this;
  FFieldClass *pFVar14;
  FMapProperty *pFVar15;
  FArrayProperty *this_00;
  FByteProperty *this_01;
  FMapProperty *this_02;
  FStructProperty *pFVar16;
  UClass *pUVar17;
  size_t sVar18;
  FClassProperty *this_03;
  FObjectProperty *this_04;
  FBoolProperty *this_05;
  FIntProperty *this_06;
  FUInt32Property *this_07;
  FFloatProperty *this_08;
  FDoubleProperty *this_09;
  FStrProperty *this_10;
  FNameProperty *this_11;
  FString *pFVar19;
  longlong lVar20;
  byte bVar21;
  FMapProperty *pFVar22;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar23;
  FMapProperty *pFVar24;
  ForAnyElementType FVar25;
  FProperty **ppFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 local_res20 [8];
  FProperty **local_1a8;
  undefined1 local_1a0 [8];
  FString local_198;
  FProperty *local_188;
  UScriptStruct *local_180;
  UScriptStruct *local_178;
  UScriptStruct *local_170;
  UScriptStruct *local_168;
  UScriptStruct *local_160;
  UScriptStruct *local_158;
  uint local_150;
  FMapProperty *local_148;
  FMapProperty *local_140;
  FMapProperty *local_138;
  FMapProperty *local_130;
  FMapProperty *local_128;
  FMapProperty *local_120;
  FMapProperty *local_118;
  FMapProperty *local_110;
  FMapProperty *local_108;
  FMapProperty *local_100;
  FMapProperty *local_f8;
  FMapProperty *local_f0;
  FMapProperty *local_e8;
  FMapProperty *local_e0;
  FMapProperty *local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  this_02 = (FMapProperty *)0x0;
  pFVar24 = (FMapProperty *)0x0;
  pUVar11 = URigVMMemoryStorage::StaticClass();
  if ((param_1 == (URigVMMemoryStorageGeneratorClass *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x2b9,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FProperty *)(*pcVar6)();
    return pFVar12;
  }
  if (((UClass *)param_1->_padding_ != pUVar11) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClass->GetSuperClass() == SuperClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x2ba,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FProperty *)(*pcVar6)();
    return pFVar12;
  }
  for (lVar20 = **(longlong **)param_3; lVar20 != 0; lVar20 = *(longlong *)(lVar20 + 0x18)) {
    *(longlong **)&param_3->field_0x8 = (longlong *)(lVar20 + 0x18);
  }
  pFVar22 = (FMapProperty *)((ulonglong)param_1 | 1);
  local_188 = (FProperty *)0x0;
  pUVar7 = (UObject *)((ulonglong)param_1 & 0xfffffffffffffffe);
  if (param_2->Property != (FProperty *)0x0) {
    FVar4 = param_2->Name;
    local_d8 = pFVar22;
    if ((pUVar7 != (UObject *)0x0) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    pFVar12 = (FProperty *)
              FField::Duplicate((FField *)param_2->Property,(FFieldVariant)&local_d8,FVar4,
                                RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                                RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                                RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
                                RF_DuplicateTransient|RF_InheritableComponentTemplate|
                                RF_LoadCompleted|RF_TextExportTransient|RF_WasLoaded|
                                RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                                RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                                RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                                RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                                RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone
                                |RF_Public,
                                PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|
                                Native|ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|
                                LoaderImport|AutoRTFMConstructionAborted|ReachabilityFlag2|
                                ReachabilityFlag1|ReachabilityFlag0);
    if ((pFVar12 == (FProperty *)0x0) ||
       (((uint)(int)((FFieldClass *)pFVar12->_padding_)->CastFlags >> 0xf & 1) == 0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FProperty *)(*pcVar6)();
        return pFVar12;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x2c3,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FProperty *)(*pcVar6)();
        return pFVar12;
      }
      local_188 = (FProperty *)0x0;
      pFVar12 = local_188;
    }
    goto LAB_14a0cc157;
  }
  if ((pUVar7 != (UObject *)0x0) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_150 = (param_2->Containers).ArrayNum;
  uVar13 = (ulonglong)(int)local_150;
  ppFVar26 = &local_188;
  pFVar27 = (param_2->Containers).AllocatorInstance.Data;
  pFVar2 = pFVar27 + uVar13;
  local_1a8 = ppFVar26;
  while( true ) {
    if ((param_2->Containers).ArrayNum != (int)uVar13) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<enum_EPinContainerType_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar27 == pFVar2) break;
    FVar3 = *pFVar27;
    pFVar15 = this_02;
    if (FVar3 == (FScriptContainerElement)0x1) {
      this_00 = FMemory::Malloc(0x80,0);
      if (this_00 != (FArrayProperty *)0x0) {
        pFVar14 = FArrayProperty::StaticClass();
        FField::FField((FField *)this_00,EC_InternalUseOnlyConstructor,pFVar14);
        this_00->_padding_ = 0;
        this_00->_padding_ = (longlong)&___7FArrayProperty__6B_;
        this_00->_padding_ = 0;
        this_00->_padding_ = 0;
        this_00->_padding_ = 0;
        this_00->_padding_ = 0;
        bVar21 = 0;
        if ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0) {
          bVar21 = (byte)pFVar22 & 1;
        }
        local_140 = pFVar22;
        if ((bVar21 != 0) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
        }
        pFVar15 = (FMapProperty *)
                  FArrayProperty::FArrayProperty
                            (this_00,(FFieldVariant)&local_140,&param_2->Name,RF_Public,None);
      }
LAB_14a0cba50:
      pFVar22 = pFVar15;
      *ppFVar26 = (FProperty *)pFVar22;
      ppFVar26 = &pFVar22->ValueProp;
      if ((((ulonglong)pFVar22 & 1) != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsUObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x180,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FProperty *)(*pcVar6)();
        return pFVar12;
      }
      local_1a8 = ppFVar26;
      if (((((ulonglong)pFVar22 & 1) != 0) &&
          ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
         (UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
      }
    }
    else if (FVar3 == (FScriptContainerElement)0x2) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x2e6,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FProperty *)(*pcVar6)();
        return pFVar12;
      }
    }
    else if (FVar3 == (FScriptContainerElement)0x3) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x2dd,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FProperty *)(*pcVar6)();
        return pFVar12;
      }
      this = FMemory::Malloc(0xa0,0);
      if (this != (FMapProperty *)0x0) {
        pFVar14 = FMapProperty::StaticClass();
        FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar14);
        this->_padding_ = 0;
        this->_padding_ = (longlong)&___7FMapProperty__6B_;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        bVar21 = 0;
        if ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0) {
          bVar21 = (byte)pFVar22 & 1;
        }
        local_148 = pFVar22;
        if ((bVar21 != 0) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
        }
        pFVar15 = FMapProperty::FMapProperty
                            (this,(FFieldVariant)&local_148,&param_2->Name,RF_Public,None);
      }
      goto LAB_14a0cba50;
    }
    uVar13 = (ulonglong)local_150;
    pFVar27 = pFVar27 + 1;
  }
  pFVar12 = (FProperty *)param_2->CPPTypeObject;
  if (pFVar12 == (FProperty *)0x0) {
    uVar13 = (ulonglong)_tls_index;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FString::FString(&IntString,L"int");
      atexit(`URigVMMemoryStorageGeneratorClass::AddProperty'::__l89::
             _dynamic_atexit_destructor_for__IntString__);
      _Init_thread_footer(&::_TSS1);
    }
    FRigVMPropertyDescription::GetTailCPPType(param_2,&local_198);
    ::FString::FString(&local_d0,RigVMTypeUtils::BoolType);
    if (local_198.Data.ArrayNum == local_d0.Data.ArrayNum) {
      if (local_198.Data.ArrayNum < 2) {
        bVar8 = true;
      }
      else {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_198.Data.AllocatorInstance.Data,
                           (wchar_t *)local_d0.Data.AllocatorInstance.Data);
        bVar8 = iVar9 == 0;
      }
    }
    else {
      bVar8 = local_198.Data.ArrayNum + local_d0.Data.ArrayNum == 1;
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      this_05 = FMemory::Malloc(0x78,0);
      if (this_05 != (FBoolProperty *)0x0) {
        pFVar14 = FBoolProperty::StaticClass();
        FField::FField((FField *)this_05,EC_InternalUseOnlyConstructor,pFVar14);
        this_05->_padding_ = 0;
        this_05->_padding_ = (longlong)&___7FBoolProperty__6B_;
        this_05->_padding_ = 0;
        this_05->_padding_ = 0;
        this_05->_padding_ = 0;
        this_05->_padding_ = 0;
        local_118 = pFVar22;
        if (((((ulonglong)pFVar22 & 1) != 0) &&
            ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
           (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
        }
        this_02 = (FMapProperty *)
                  FBoolProperty::FBoolProperty
                            (this_05,(FFieldVariant)&local_118,&param_2->Name,RF_Public);
      }
      FBoolProperty::SetBoolSize((FBoolProperty *)this_02,1,true,0);
      pFVar24 = this_02;
LAB_14a0cc081:
      *local_1a8 = (FProperty *)pFVar24;
    }
    else {
      ::FString::FString(&local_c0,RigVMTypeUtils::Int32Type);
      if (local_198.Data.ArrayNum == local_c0.Data.ArrayNum) {
        if (1 < local_198.Data.ArrayNum) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_198.Data.AllocatorInstance.Data,
                             (wchar_t *)local_c0.Data.AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
          goto LAB_14a0cbfaf;
        }
LAB_14a0cbfeb:
        bVar8 = true;
      }
      else {
        bVar8 = local_c0.Data.ArrayNum + local_198.Data.ArrayNum == 1;
LAB_14a0cbfaf:
        if (bVar8) goto LAB_14a0cbfeb;
        if (local_198.Data.ArrayNum == IntString.Data.ArrayNum) {
          if (local_198.Data.ArrayNum < 2) goto LAB_14a0cbfeb;
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_198.Data.AllocatorInstance.Data,
                             (wchar_t *)IntString.Data.AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
        }
        else {
          bVar8 = IntString.Data.ArrayNum + local_198.Data.ArrayNum == 1;
        }
        if (bVar8) goto LAB_14a0cbfeb;
        bVar8 = false;
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        this_06 = FMemory::Malloc(0x70,0);
        pFVar24 = this_02;
        if (this_06 != (FIntProperty *)0x0) {
          pFVar14 = FIntProperty::StaticClass();
          FField::FField((FField *)this_06,EC_InternalUseOnlyConstructor,pFVar14);
          *(undefined8 *)&this_06->field_0x48 = 0;
          *(undefined ***)this_06 = &___7FIntProperty__6B_;
          *(undefined8 *)&this_06->field_0x50 = 0;
          *(undefined8 *)&this_06->field_0x58 = 0;
          *(undefined8 *)&this_06->field_0x60 = 0;
          *(undefined8 *)&this_06->field_0x68 = 0;
          local_110 = pFVar22;
          if (((((ulonglong)pFVar22 & 1) != 0) &&
              ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
             (UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
          }
          pFVar24 = (FMapProperty *)
                    FIntProperty::FIntProperty
                              (this_06,(FFieldVariant)&local_110,&param_2->Name,RF_Public);
        }
        goto LAB_14a0cc081;
      }
      ::FString::FString(&local_b0,RigVMTypeUtils::UInt32Type);
      if (local_198.Data.ArrayNum == local_b0.Data.ArrayNum) {
        if (local_198.Data.ArrayNum < 2) {
          bVar8 = true;
        }
        else {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_198.Data.AllocatorInstance.Data,
                             (wchar_t *)local_b0.Data.AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
        }
      }
      else {
        bVar8 = local_198.Data.ArrayNum + local_b0.Data.ArrayNum == 1;
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        this_07 = FMemory::Malloc(0x70,0);
        pFVar24 = this_02;
        if (this_07 != (FUInt32Property *)0x0) {
          pFVar14 = FUInt32Property::StaticClass();
          FField::FField((FField *)this_07,EC_InternalUseOnlyConstructor,pFVar14);
          *(undefined8 *)&this_07->field_0x48 = 0;
          *(undefined ***)this_07 = &___7FUInt32Property__6B_;
          *(undefined8 *)&this_07->field_0x50 = 0;
          *(undefined8 *)&this_07->field_0x58 = 0;
          *(undefined8 *)&this_07->field_0x60 = 0;
          *(undefined8 *)&this_07->field_0x68 = 0;
          local_108 = pFVar22;
          if (((((ulonglong)pFVar22 & 1) != 0) &&
              ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
             (UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
          }
          pFVar24 = (FMapProperty *)
                    FUInt32Property::FUInt32Property
                              (this_07,(FFieldVariant)&local_108,&param_2->Name,RF_Public);
        }
        goto LAB_14a0cc081;
      }
      ::FString::FString(&local_a0,RigVMTypeUtils::FloatType);
      if (local_198.Data.ArrayNum == local_a0.Data.ArrayNum) {
        if (local_198.Data.ArrayNum < 2) {
          bVar8 = true;
        }
        else {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_198.Data.AllocatorInstance.Data,
                             (wchar_t *)local_a0.Data.AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
        }
      }
      else {
        bVar8 = local_198.Data.ArrayNum + local_a0.Data.ArrayNum == 1;
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        this_08 = FMemory::Malloc(0x70,0);
        if (this_08 != (FFloatProperty *)0x0) {
          pFVar14 = FFloatProperty::StaticClass();
          FField::FField((FField *)this_08,EC_InternalUseOnlyConstructor,pFVar14);
          *(undefined8 *)&this_08->field_0x48 = 0;
          *(undefined ***)this_08 = &___7FFloatProperty__6B_;
          *(undefined8 *)&this_08->field_0x50 = 0;
          *(undefined8 *)&this_08->field_0x58 = 0;
          *(undefined8 *)&this_08->field_0x60 = 0;
          *(undefined8 *)&this_08->field_0x68 = 0;
          local_100 = pFVar22;
          if (((((ulonglong)pFVar22 & 1) != 0) &&
              ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
             (UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
          }
          pFVar24 = (FMapProperty *)
                    FFloatProperty::FFloatProperty
                              (this_08,(FFieldVariant)&local_100,&param_2->Name,RF_Public);
        }
        goto LAB_14a0cc081;
      }
      ::FString::FString(&local_90,RigVMTypeUtils::DoubleType);
      if (local_198.Data.ArrayNum == local_90.Data.ArrayNum) {
        if (local_198.Data.ArrayNum < 2) {
          bVar8 = true;
        }
        else {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_198.Data.AllocatorInstance.Data,
                             (wchar_t *)local_90.Data.AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
        }
      }
      else {
        bVar8 = local_198.Data.ArrayNum + local_90.Data.ArrayNum == 1;
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        this_09 = FMemory::Malloc(0x70,0);
        if (this_09 != (FDoubleProperty *)0x0) {
          pFVar14 = FDoubleProperty::StaticClass();
          FField::FField((FField *)this_09,EC_InternalUseOnlyConstructor,pFVar14);
          *(undefined8 *)&this_09->field_0x48 = 0;
          *(undefined ***)this_09 = &___7FDoubleProperty__6B_;
          *(undefined8 *)&this_09->field_0x50 = 0;
          *(undefined8 *)&this_09->field_0x58 = 0;
          *(undefined8 *)&this_09->field_0x60 = 0;
          *(undefined8 *)&this_09->field_0x68 = 0;
          local_f8 = pFVar22;
          if (((((ulonglong)pFVar22 & 1) != 0) &&
              ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
             (UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
          }
          pFVar24 = (FMapProperty *)
                    FDoubleProperty::FDoubleProperty
                              (this_09,(FFieldVariant)&local_f8,&param_2->Name,RF_Public);
        }
        goto LAB_14a0cc081;
      }
      ::FString::FString(&local_80,RigVMTypeUtils::FStringType);
      if (local_198.Data.ArrayNum == local_80.Data.ArrayNum) {
        if (local_198.Data.ArrayNum < 2) {
          bVar8 = true;
        }
        else {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_198.Data.AllocatorInstance.Data,
                             (wchar_t *)local_80.Data.AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
        }
      }
      else {
        bVar8 = local_198.Data.ArrayNum + local_80.Data.ArrayNum == 1;
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        this_10 = FMemory::Malloc(0x70,0);
        if (this_10 != (FStrProperty *)0x0) {
          pFVar14 = FStrProperty::StaticClass();
          FField::FField((FField *)this_10,EC_InternalUseOnlyConstructor,pFVar14);
          *(undefined8 *)&this_10->field_0x48 = 0;
          *(undefined ***)this_10 = &___7FStrProperty__6B_;
          *(undefined8 *)&this_10->field_0x50 = 0;
          *(undefined8 *)&this_10->field_0x58 = 0;
          *(undefined8 *)&this_10->field_0x60 = 0;
          *(undefined8 *)&this_10->field_0x68 = 0;
          local_f0 = pFVar22;
          if (((((ulonglong)pFVar22 & 1) != 0) &&
              ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
             (UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
          }
          pFVar24 = (FMapProperty *)
                    FStrProperty::FStrProperty
                              (this_10,(FFieldVariant)&local_f0,&param_2->Name,RF_Public);
        }
        goto LAB_14a0cc081;
      }
      ::FString::FString(&local_70,RigVMTypeUtils::FNameType);
      if (local_198.Data.ArrayNum == local_70.Data.ArrayNum) {
        if (local_198.Data.ArrayNum < 2) {
          bVar8 = true;
        }
        else {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_198.Data.AllocatorInstance.Data,
                             (wchar_t *)local_70.Data.AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
        }
      }
      else {
        bVar8 = local_198.Data.ArrayNum + local_70.Data.ArrayNum == 1;
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        this_11 = FMemory::Malloc(0x70,0);
        if (this_11 != (FNameProperty *)0x0) {
          pFVar14 = FNameProperty::StaticClass();
          FField::FField((FField *)this_11,EC_InternalUseOnlyConstructor,pFVar14);
          *(undefined8 *)&this_11->field_0x48 = 0;
          *(undefined ***)this_11 = &___7FNameProperty__6B_;
          *(undefined8 *)&this_11->field_0x50 = 0;
          *(undefined8 *)&this_11->field_0x58 = 0;
          *(undefined8 *)&this_11->field_0x60 = 0;
          *(undefined8 *)&this_11->field_0x68 = 0;
          local_e8 = pFVar22;
          if (((((ulonglong)pFVar22 & 1) != 0) &&
              ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
             (UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
          }
          pFVar24 = (FMapProperty *)
                    FNameProperty::FNameProperty
                              (this_11,(FFieldVariant)&local_e8,&param_2->Name,RF_Public);
        }
        goto LAB_14a0cc081;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x9d4c) <
           ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        atexit(`URigVMMemoryStorageGeneratorClass::AddProperty'::__l118::
               _dynamic_atexit_destructor_for__BaseStructures__);
        _Init_thread_footer(&::_TSS2);
      }
      if (BaseStructures.ArrayNum == 0) {
        local_180 = TBaseStructure<UE::Math::TVector<double>_>::Get();
        if (((BaseStructures.AllocatorInstance.Data <= (FScriptContainerElement *)&local_180) &&
            ((FScriptContainerElement *)&local_180 <
             BaseStructures.AllocatorInstance.Data + (longlong)BaseStructures.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FProperty *)(*pcVar6)();
          return pFVar12;
        }
        if (BaseStructures.ArrayNum == BaseStructures.ArrayMax) {
          BaseStructures.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&BaseStructures.AllocatorInstance,&BaseStructures.ArrayMax);
        }
        lVar20 = (longlong)BaseStructures.ArrayNum;
        BaseStructures.ArrayNum = BaseStructures.ArrayNum + 1;
        *(UScriptStruct **)(BaseStructures.AllocatorInstance.Data + lVar20 * 8) = local_180;
        local_178 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
        if (((BaseStructures.AllocatorInstance.Data <= (FScriptContainerElement *)&local_178) &&
            ((FScriptContainerElement *)&local_178 <
             BaseStructures.AllocatorInstance.Data + (longlong)BaseStructures.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FProperty *)(*pcVar6)();
          return pFVar12;
        }
        if (BaseStructures.ArrayNum == BaseStructures.ArrayMax) {
          BaseStructures.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&BaseStructures.AllocatorInstance,&BaseStructures.ArrayMax);
        }
        lVar20 = (longlong)BaseStructures.ArrayNum;
        BaseStructures.ArrayNum = BaseStructures.ArrayNum + 1;
        *(UScriptStruct **)(BaseStructures.AllocatorInstance.Data + lVar20 * 8) = local_178;
        local_170 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
        if (((BaseStructures.AllocatorInstance.Data <= (FScriptContainerElement *)&local_170) &&
            ((FScriptContainerElement *)&local_170 <
             BaseStructures.AllocatorInstance.Data + (longlong)BaseStructures.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FProperty *)(*pcVar6)();
          return pFVar12;
        }
        if (BaseStructures.ArrayNum == BaseStructures.ArrayMax) {
          BaseStructures.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&BaseStructures.AllocatorInstance,&BaseStructures.ArrayMax);
        }
        lVar20 = (longlong)BaseStructures.ArrayNum;
        BaseStructures.ArrayNum = BaseStructures.ArrayNum + 1;
        *(UScriptStruct **)(BaseStructures.AllocatorInstance.Data + lVar20 * 8) = local_170;
        local_168 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
        if (((BaseStructures.AllocatorInstance.Data <= (FScriptContainerElement *)&local_168) &&
            ((FScriptContainerElement *)&local_168 <
             BaseStructures.AllocatorInstance.Data + (longlong)BaseStructures.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FProperty *)(*pcVar6)();
          return pFVar12;
        }
        if (BaseStructures.ArrayNum == BaseStructures.ArrayMax) {
          BaseStructures.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&BaseStructures.AllocatorInstance,&BaseStructures.ArrayMax);
        }
        lVar20 = (longlong)BaseStructures.ArrayNum;
        BaseStructures.ArrayNum = BaseStructures.ArrayNum + 1;
        *(UScriptStruct **)(BaseStructures.AllocatorInstance.Data + lVar20 * 8) = local_168;
        local_160 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
        if (((BaseStructures.AllocatorInstance.Data <= (FScriptContainerElement *)&local_160) &&
            ((FScriptContainerElement *)&local_160 <
             BaseStructures.AllocatorInstance.Data + (longlong)BaseStructures.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FProperty *)(*pcVar6)();
          return pFVar12;
        }
        if (BaseStructures.ArrayNum == BaseStructures.ArrayMax) {
          BaseStructures.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&BaseStructures.AllocatorInstance,&BaseStructures.ArrayMax);
        }
        lVar20 = (longlong)BaseStructures.ArrayNum;
        BaseStructures.ArrayNum = BaseStructures.ArrayNum + 1;
        *(UScriptStruct **)(BaseStructures.AllocatorInstance.Data + lVar20 * 8) = local_160;
        local_158 = TBaseStructure<FLinearColor>::Get();
        if (((BaseStructures.AllocatorInstance.Data <= (FScriptContainerElement *)&local_158) &&
            ((FScriptContainerElement *)&local_158 <
             BaseStructures.AllocatorInstance.Data + (longlong)BaseStructures.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FProperty *)(*pcVar6)();
          return pFVar12;
        }
        if (BaseStructures.ArrayNum == BaseStructures.ArrayMax) {
          BaseStructures.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&BaseStructures.AllocatorInstance,&BaseStructures.ArrayMax);
        }
        lVar20 = (longlong)BaseStructures.ArrayNum;
        BaseStructures.ArrayNum = BaseStructures.ArrayNum + 1;
        *(UScriptStruct **)(BaseStructures.AllocatorInstance.Data + lVar20 * 8) = local_158;
      }
      iVar9 = BaseStructures.ArrayNum;
      pFVar2 = BaseStructures.AllocatorInstance.Data + (longlong)BaseStructures.ArrayNum * 8;
      FVar25.Data = BaseStructures.AllocatorInstance.Data;
      while( true ) {
        if (BaseStructures.ArrayNum != iVar9) {
          local_1a0[0] = 0;
          `TCheckedPointerIterator<UScriptStruct_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a0);
        }
        if (FVar25.Data == pFVar2) goto LAB_14a0ccbcf;
        pUVar5 = *(UScriptStruct **)FVar25.Data;
        pFVar19 = RigVMTypeUtils::GetUniqueStructTypeName(local_60,pUVar5);
        iVar10 = (pFVar19->Data).ArrayNum;
        if (iVar10 == local_198.Data.ArrayNum) {
          if (iVar10 < 2) {
            bVar8 = true;
          }
          else {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)(pFVar19->Data).AllocatorInstance.Data,
                                (wchar_t *)local_198.Data.AllocatorInstance.Data);
            bVar8 = iVar10 == 0;
          }
        }
        else {
          bVar8 = iVar10 + local_198.Data.ArrayNum == 1;
        }
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        if (bVar8) break;
        FVar25.Data = FVar25.Data + 8;
      }
      pFVar16 = FStructProperty::operator_new(0x78);
      if (pFVar16 != (FStructProperty *)0x0) {
        local_e0 = pFVar22;
        if (((((ulonglong)pFVar22 & 1) != 0) &&
            ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
           (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
        }
        this_02 = (FMapProperty *)
                  FStructProperty::FStructProperty
                            (pFVar16,(FFieldVariant)&local_e0,&param_2->Name,RF_Public);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      this_02->KeyProp = (FProperty *)pUVar5;
      *local_1a8 = (FProperty *)this_02;
LAB_14a0ccbcf:
      if (*local_1a8 == (FProperty *)0x0) {
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        return (FProperty *)0x0;
      }
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  else {
    pUVar11 = Z_Construct_UClass_UEnum_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((*(int *)(pFVar12->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pFVar12->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar11->_padding_)) {
      pFVar12 = (FProperty *)param_2->CPPTypeObject;
      if (pFVar12 != (FProperty *)0x0) {
        pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar9 = (int)pUVar11->_padding_;
        if ((iVar9 <= *(int *)(pFVar12->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pFVar12->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar11->_padding_)) {
          pFVar16 = FMemory::Malloc(0x78,0);
          if (pFVar16 != (FStructProperty *)0x0) {
            pFVar14 = FStructProperty::StaticClass();
            FField::FField((FField *)pFVar16,EC_InternalUseOnlyConstructor,pFVar14);
            pFVar16->_padding_ = 0;
            pFVar16->_padding_ = (longlong)&___7FStructProperty__6B_;
            pFVar16->_padding_ = 0;
            pFVar16->_padding_ = 0;
            pFVar16->_padding_ = 0;
            pFVar16->_padding_ = 0;
            (pFVar16->Struct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
            local_130 = pFVar22;
            if (((((ulonglong)pFVar22 & 1) != 0) &&
                ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
               (UE::GC::GIsIncrementalReachabilityPending != false)) {
              UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
            }
            this_02 = (FMapProperty *)
                      FStructProperty::FStructProperty
                                (pFVar16,(FFieldVariant)&local_130,&param_2->Name,RF_Public);
          }
          goto LAB_14a0cbc35;
        }
      }
      pUVar11 = (UClass *)param_2->CPPTypeObject;
      if (pUVar11 != (UClass *)0x0) {
        pUVar17 = Z_Construct_UClass_UClass_NoRegister();
        iVar9 = (int)pUVar17->_padding_;
        if ((iVar9 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar17->_padding_)) {
          bVar8 = RigVMCore::SupportsUObjects();
          if ((!bVar8) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("RigVMCore::SupportsUObjects()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                                 ,0x302,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            pFVar12 = (FProperty *)(*pcVar6)();
            return pFVar12;
          }
          sVar18 = wcslen(L"TSubclassOf<");
          bVar8 = ::FString::StartsWith(&param_2->CPPType,L"TSubclassOf<",(int)sVar18,IgnoreCase);
          if (bVar8) {
            this_03 = FMemory::Malloc(0x80,0);
            if (this_03 != (FClassProperty *)0x0) {
              pFVar14 = FClassProperty::StaticClass();
              FField::FField((FField *)this_03,EC_InternalUseOnlyConstructor,pFVar14);
              this_03->_padding_ = 0;
              this_03->_padding_ = (longlong)&___7FClassProperty__6B_;
              this_03->_padding_ = 0;
              this_03->_padding_ = 0;
              this_03->_padding_ = 0;
              this_03->_padding_ = 0;
              this_03->_padding_ = 0;
              (this_03->MetaClass).field0_0x0.DebugPtr = (UClass *)0x0;
              local_128 = pFVar22;
              if (((((ulonglong)pFVar22 & 1) != 0) &&
                  ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
                 (UE::GC::GIsIncrementalReachabilityPending != false)) {
                UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
              }
              this_02 = (FMapProperty *)
                        FClassProperty::FClassProperty
                                  (this_03,(FFieldVariant)&local_128,&param_2->Name,RF_Public);
            }
            FClassProperty::SetMetaClass((FClassProperty *)this_02,pUVar11);
            *local_1a8 = (FProperty *)this_02;
          }
          else {
            this_04 = FMemory::Malloc(0x78,0);
            if (this_04 != (FObjectProperty *)0x0) {
              pFVar14 = FObjectProperty::StaticClass();
              FField::FField((FField *)this_04,EC_InternalUseOnlyConstructor,pFVar14);
              *(undefined8 *)&this_04->field_0x48 = 0;
              *(undefined ***)this_04 = &___7FObjectProperty__6B_;
              *(undefined8 *)&this_04->field_0x50 = 0;
              *(undefined8 *)&this_04->field_0x58 = 0;
              *(undefined8 *)&this_04->field_0x60 = 0;
              *(undefined8 *)&this_04->field_0x68 = 0;
              *(undefined8 *)&this_04->field_0x70 = 0;
              local_120 = pFVar22;
              if (((((ulonglong)pFVar22 & 1) != 0) &&
                  ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
                 (UE::GC::GIsIncrementalReachabilityPending != false)) {
                UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
              }
              this_02 = (FMapProperty *)
                        FObjectProperty::FObjectProperty
                                  (this_04,(FFieldVariant)&local_120,&param_2->Name,RF_Public);
            }
            FObjectPropertyBase::SetPropertyClass((FObjectPropertyBase *)this_02,pUVar11);
            *local_1a8 = (FProperty *)this_02;
          }
          goto LAB_14a0cc098;
        }
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x314,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FProperty *)(*pcVar6)();
        return pFVar12;
      }
    }
    else {
      this_01 = FMemory::Malloc(0x78,0);
      if (this_01 != (FByteProperty *)0x0) {
        pFVar14 = FByteProperty::StaticClass();
        FField::FField((FField *)this_01,EC_InternalUseOnlyConstructor,pFVar14);
        this_01->_padding_ = 0;
        this_01->_padding_ = (longlong)&___7FByteProperty__6B_;
        this_01->_padding_ = 0;
        this_01->_padding_ = 0;
        this_01->_padding_ = 0;
        this_01->_padding_ = 0;
        (this_01->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
        local_138 = pFVar22;
        if (((((ulonglong)pFVar22 & 1) != 0) &&
            ((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
           (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar22 & 0xfffffffffffffffe));
        }
        this_02 = (FMapProperty *)
                  FByteProperty::FByteProperty
                            (this_01,(FFieldVariant)&local_138,&param_2->Name,RF_Public);
      }
LAB_14a0cbc35:
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pFVar12);
      }
      this_02->KeyProp = pFVar12;
      *local_1a8 = (FProperty *)this_02;
    }
  }
LAB_14a0cc098:
  pTVar23 = &param_1->LinkedProperties;
  local_188->PropertyFlags =
       local_188->PropertyFlags | (CPF_NonTransactional|CPF_EditConst|CPF_Edit);
  pFVar2 = (pTVar23->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_188) &&
      ((FScriptContainerElement *)&local_188 <
       pFVar2 + (longlong)(param_1->LinkedProperties).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FProperty *)(*pcVar6)();
    return pFVar12;
  }
  iVar9 = (param_1->LinkedProperties).ArrayNum;
  piVar1 = &(param_1->LinkedProperties).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar23->AllocatorInstance,piVar1);
  }
  (param_1->LinkedProperties).ArrayNum = iVar9 + 1;
  *(FProperty **)((pTVar23->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_188;
  pFVar12 = local_188;
LAB_14a0cc157:
  local_188 = pFVar12;
  if ((FProperty *)**(longlong **)&param_3->field_0x8 != local_188) {
    **(longlong **)&param_3->field_0x8 = (longlong)local_188;
  }
  *(longlong **)&param_3->field_0x8 = &local_188->_padding_;
  return local_188;
}

// CreateStorageClass @ 14a0d4740

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URigVMMemoryStorageGeneratorClass * __cdecl
URigVMMemoryStorageGeneratorClass::CreateStorageClass
          (UObject *param_1,ERigVMMemoryType param_2,
          TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_> *param_4)

{
  uint *puVar1;
  FRigVMPropertyDescription *pFVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  URigVMMemoryStorageGeneratorClass *pUVar10;
  UPackage *pUVar11;
  UClass *pUVar12;
  FString *pFVar13;
  FName *pFVar14;
  UObjectBaseUtility *pUVar15;
  UClass *pUVar16;
  UPackage *pUVar17;
  UObject *pUVar18;
  FString *pFVar19;
  FProperty *pFVar20;
  void *pvVar21;
  FRigVMPropertyDescription *pFVar22;
  wchar_t *pwVar23;
  ForAnyElementType FVar24;
  longlong lVar25;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar26;
  uint uVar27;
  longlong lVar28;
  UObject *local_res8;
  undefined1 local_res10 [8];
  TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_> *local_res20;
  FOutputDevice local_f8;
  undefined1 local_e8;
  int local_e4;
  longlong local_e0;
  FOutputDevice local_d8;
  undefined1 local_c8;
  int local_c4;
  FName local_c0;
  FName local_b8;
  URigVMMemoryStorageGeneratorClass *local_b0;
  FString local_a8;
  longlong *local_98;
  longlong *local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_1 == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOuter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x1ef,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pUVar10 = (URigVMMemoryStorageGeneratorClass *)(*pcVar5)();
    return pUVar10;
  }
  pUVar11 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  pUVar12 = URigVMMemoryStorage::StaticClass();
  pFVar13 = GetClassName(param_2);
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  pFVar14 = ::FName::FName(&local_88,pwVar23);
  pUVar15 = (UObjectBaseUtility *)
            StaticFindObjectFastInternal
                      ((UClass *)0x0,(UObject *)pUVar11,*pFVar14,ExactClass,RF_NoFlags,Borrowed);
  if (pUVar15 != (UObjectBaseUtility *)0x0) {
    UObject::ConditionalPostLoad((UObject *)pUVar15);
    pUVar16 = Z_Construct_UClass_UClass_NoRegister();
    pwVar23 = DiscardedMemoryClassTemplate;
    iVar9 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&((UObject *)pUVar15)->field_0x10 + 0x38) < iVar9) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&((UObject *)pUVar15)->field_0x10 + 0x30) + (longlong)iVar9 * 8
         ) != &pUVar16->_padding_)) {
      pUVar15 = (UObjectBaseUtility *)0x0;
    }
    do {
      iVar9 = DiscardedMemoryClassIndex;
      DiscardedMemoryClassIndex = DiscardedMemoryClassIndex + 1;
      pFVar14 = ::FName::FName(&local_80,pwVar23,iVar9);
      FVar3 = *pFVar14;
      pUVar17 = GetTransientPackage();
      pUVar18 = StaticFindObjectFast
                          ((UClass *)0x0,(UObject *)pUVar17,FVar3,None,RF_NoFlags,Borrowed);
      if (pUVar18 == (UObject *)0x0) break;
    } while (DiscardedMemoryClassIndex < 0x7fffffff);
    *(uint *)&pUVar15[5].field_0xc = *(uint *)&pUVar15[5].field_0xc | 0x80000000;
    pcVar5 = *(code **)(*(longlong *)pUVar15 + 0x170);
    local_c0 = FVar3;
    pUVar17 = GetTransientPackage();
    pFVar19 = ::FName::ToString(&local_c0,&local_68);
    if ((pFVar19->Data).ArrayNum == 0) {
      pwVar23 = L"";
    }
    else {
      pwVar23 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
    (*pcVar5)(pUVar15,pwVar23,pUVar17);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    UObjectBaseUtility::MarkAsGarbage(pUVar15);
    pwVar23 = DiscardedMemoryCDOTemplate;
    if (*(longlong *)&pUVar15[6].field_0x20 != 0) {
      do {
        iVar9 = DiscardedMemoryCDOIndex;
        DiscardedMemoryCDOIndex = DiscardedMemoryCDOIndex + 1;
        pFVar14 = ::FName::FName(&local_78,pwVar23,iVar9);
        FVar3 = *pFVar14;
        pUVar17 = GetTransientPackage();
        pUVar18 = StaticFindObjectFast
                            ((UClass *)0x0,(UObject *)pUVar17,FVar3,None,RF_NoFlags,Borrowed);
        if (pUVar18 == (UObject *)0x0) break;
      } while (DiscardedMemoryCDOIndex < 0x7fffffff);
      pUVar15 = *(UObjectBaseUtility **)&pUVar15[6].field_0x20;
      pcVar5 = *(code **)(*(longlong *)pUVar15 + 0x170);
      local_b8 = FVar3;
      pUVar17 = GetTransientPackage();
      pFVar19 = ::FName::ToString(&local_b8,&local_58);
      if ((pFVar19->Data).ArrayNum == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
      (*pcVar5)(pUVar15,pwVar23,pUVar17);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      UObjectBaseUtility::MarkAsGarbage(pUVar15);
    }
  }
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  pFVar14 = ::FName::FName(&local_70,pwVar23);
  pUVar10 = NewObject<URigVMMemoryStorageGeneratorClass>
                      ((UObject *)pUVar11,*pFVar14,RF_Standalone|RF_Public,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  local_b0 = pUVar10;
  (**(code **)(pUVar10->_padding_ + 0x3d0))(pUVar10,0);
  (**(code **)(pUVar10->_padding_ + 800))(pUVar10,pUVar12);
  pUVar10->_padding_ = pUVar12->_padding_;
  pUVar12 = Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  local_98 = &pUVar10->_padding_;
  pUVar10->_padding_ = (longlong)pUVar12;
  puVar1 = (uint *)((longlong)&pUVar10->_padding_ + 4);
  *puVar1 = *puVar1 | 0x1000000;
  pUVar10->MemoryType = param_2;
  local_90 = local_98;
  if ((local_98 == (longlong *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ListStartPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LinkedListBuilder.h"
                         ,0x3d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pUVar10 = (URigVMMemoryStorageGeneratorClass *)(*pcVar5)();
    return pUVar10;
  }
  iVar9 = local_res18->ArrayNum;
  pFVar22 = (FRigVMPropertyDescription *)(local_res18->AllocatorInstance).Data;
  pFVar2 = pFVar22 + iVar9;
  while( true ) {
    if (local_res18->ArrayNum != iVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRigVMPropertyDescription_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar22 == pFVar2) break;
    pFVar20 = AddProperty(pUVar10,pFVar22,
                          (TLinkedListBuilder<FField,TLinkedListBuilderNextLink<FField>_> *)
                          &local_98);
    if ((pFVar20 == (FProperty *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                           ,0x24a,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pUVar10 = (URigVMMemoryStorageGeneratorClass *)(*pcVar5)();
      return pUVar10;
    }
    pFVar22 = pFVar22 + 1;
  }
  TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>::operator=
            (&pUVar10->PropertyPathDescriptions,local_res20);
  (**(code **)(pUVar10->_padding_ + 0x2b8))(pUVar10);
  UStruct::StaticLink((UStruct *)pUVar10,true);
  if (pUVar10->_padding_ == 0) {
    UClass::InternalCreateDefaultObjectWrapper((UClass *)pUVar10);
  }
  local_res8 = (UObject *)pUVar10->_padding_;
  if (local_res8 == (UObject *)0x0) {
LAB_14a0d4b78:
    local_res8 = (UObject *)0x0;
  }
  else {
    pUVar12 = URigVMMemoryStorage::StaticClass();
    iVar9 = (int)pUVar12->_padding_;
    if ((*(int *)(*(longlong *)&local_res8->field_0x10 + 0x38) < iVar9) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res8->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
        &pUVar12->_padding_)) goto LAB_14a0d4b78;
  }
  lVar28 = *(longlong *)&local_res8->field_0x10;
  if (lVar28 != 0) {
    pUVar12 = StaticClass();
    iVar9 = (int)pUVar12->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)(lVar28 + 0x10) + 0x38)) &&
       (pTVar26 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(lVar28 + 0x210),
       (longlong *)
       *(undefined1 **)(*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) + (longlong)iVar9 * 8) ==
       &pUVar12->_padding_)) goto LAB_14a0d4bba;
  }
  pTVar26 = &URigVMMemoryStorage::EmptyProperties;
LAB_14a0d4bba:
  uVar27 = 0;
  if (0 < pTVar26->ArrayNum) {
    lVar28 = 0;
    local_e0 = 0;
    do {
      lVar25 = local_e0;
      pTVar6 = local_res18;
      uVar8 = 0;
      if ((int)uVar27 < local_res18->ArrayNum) {
        uVar8 = ~uVar27 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pUVar10 = (URigVMMemoryStorageGeneratorClass *)(*pcVar5)();
        return pUVar10;
      }
      pFVar4 = (pTVar6->AllocatorInstance).Data;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FString::FString(&EmptyBraces,L"()");
        atexit(`URigVMMemoryStorageGeneratorClass::CreateStorageClass'::__l28::
               _dynamic_atexit_destructor_for__EmptyBraces__);
        _Init_thread_footer(&::_TSS1);
      }
      iVar9 = *(int *)(pFVar4 + lVar25 + 0x40);
      if (1 < iVar9) {
        if (iVar9 == EmptyBraces.Data.ArrayNum) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar4 + lVar25 + 0x38),
                             (wchar_t *)EmptyBraces.Data.AllocatorInstance.Data);
          bVar7 = iVar9 == 0;
        }
        else {
          bVar7 = iVar9 + EmptyBraces.Data.ArrayNum == 1;
        }
        if (!bVar7) {
          uVar8 = 0;
          if ((int)uVar27 < pTVar26->ArrayNum) {
            uVar8 = ~uVar27 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pUVar10 = (URigVMMemoryStorageGeneratorClass *)(*pcVar5)();
            return pUVar10;
          }
          pFVar20 = *(FProperty **)((pTVar26->AllocatorInstance).Data + lVar28);
          pvVar21 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar20,local_res8,0);
          FOutputDevice::FOutputDevice(&local_f8);
          local_e8 = 0;
          local_f8._padding_ = (longlong)&___7FRigVMMemoryStorageImportErrorContext__6B_;
          local_e4 = 0;
          if (*(int *)(pFVar4 + lVar25 + 0x40) == 0) {
            pwVar23 = L"";
          }
          else {
            pwVar23 = *(wchar_t **)(pFVar4 + lVar25 + 0x38);
          }
          bVar7 = FProperty::ValidateImportFlags(pFVar20,0,&local_f8);
          if ((bVar7) && (pwVar23 != (wchar_t *)0x0)) {
            (**(code **)(pFVar20->_padding_ + 0xe8))
                      (pFVar20,pwVar23,pvVar21,0,0,0x8000000,&local_f8);
          }
          if (((0 < local_e4) && (pFVar20 != (FProperty *)0x0)) &&
             ((*(uint *)(pFVar20->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
            ::FString::PrintfImpl(&local_a8,L"(%s)");
            FOutputDevice::FOutputDevice(&local_d8);
            local_c8 = 0;
            local_d8._padding_ = (longlong)&___7FRigVMMemoryStorageImportErrorContext__6B_;
            local_c4 = 0;
            FOutputDevice::operator=(&local_f8,&local_d8);
            local_e8 = local_c8;
            local_e4 = local_c4;
            FOutputDevice::~FOutputDevice(&local_d8);
            FVar24.Data = (FScriptContainerElement *)L"";
            if (local_a8.Data.ArrayNum != 0) {
              FVar24.Data = local_a8.Data.AllocatorInstance.Data;
            }
            bVar7 = FProperty::ValidateImportFlags(pFVar20,0,&local_f8);
            if ((bVar7) && (FVar24.Data != (FScriptContainerElement *)0x0)) {
              (**(code **)(pFVar20->_padding_ + 0xe8))
                        (pFVar20,FVar24.Data,pvVar21,0,0,0x8000000,&local_f8);
            }
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          FOutputDevice::~FOutputDevice(&local_f8);
          lVar25 = local_e0;
        }
      }
      local_e0 = lVar25 + 0x48;
      uVar27 = uVar27 + 1;
      lVar28 = lVar28 + 8;
      pUVar10 = local_b0;
    } while ((int)uVar27 < pTVar26->ArrayNum);
  }
  return pUVar10;
}

// GetClassName @ 14a0e2000

/* WARNING: Removing unreachable block (ram,0x00014a0e2437) */
/* WARNING: Removing unreachable block (ram,0x00014a0e218d) */
/* WARNING: Removing unreachable block (ram,0x00014a0e22e2) */
/* WARNING: Removing unreachable block (ram,0x00014a0e2594) */

FString * __cdecl URigVMMemoryStorageGeneratorClass::GetClassName(ERigVMMemoryType param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  FText *pFVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FString local_28;
  FText local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`URigVMMemoryStorageGeneratorClass::GetClassName'::__l2::
           _dynamic_atexit_destructor_for__ClassNames__);
    _Init_thread_footer(&::_TSS0);
  }
  if (ClassNames.ArrayNum == 0) {
    if (Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton == (UEnum *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_RigVM();
      Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMMemoryType,(UObject *)pUVar3,
                         L"ERigVMMemoryType");
    }
    pFVar4 = UEnum::GetDisplayNameTextByValue
                       (Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton,&local_18,0);
    pFVar5 = FText::ToString(pFVar4);
    ::FString::ConcatCF(&local_28,L"RigVMMemory_",pFVar5);
    if (((ClassNames.AllocatorInstance.Data <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         ClassNames.AllocatorInstance.Data + (longlong)ClassNames.ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    if (ClassNames.ArrayNum == ClassNames.ArrayMax) {
      ClassNames.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&ClassNames.AllocatorInstance,&ClassNames.ArrayMax);
    }
    pFVar6 = ClassNames.AllocatorInstance.Data + (longlong)ClassNames.ArrayNum * 0x10;
    ClassNames.ArrayNum = ClassNames.ArrayNum + 1;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar6 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton == (UEnum *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_RigVM();
      Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMMemoryType,(UObject *)pUVar3,
                         L"ERigVMMemoryType");
    }
    pFVar4 = UEnum::GetDisplayNameTextByValue
                       (Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton,&local_18,1);
    pFVar5 = FText::ToString(pFVar4);
    ::FString::ConcatCF(&local_28,L"RigVMMemory_",pFVar5);
    if (((ClassNames.AllocatorInstance.Data <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         ClassNames.AllocatorInstance.Data + (longlong)ClassNames.ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    if (ClassNames.ArrayNum == ClassNames.ArrayMax) {
      ClassNames.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&ClassNames.AllocatorInstance,&ClassNames.ArrayMax);
    }
    pFVar6 = ClassNames.AllocatorInstance.Data + (longlong)ClassNames.ArrayNum * 0x10;
    ClassNames.ArrayNum = ClassNames.ArrayNum + 1;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar6 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton == (UEnum *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_RigVM();
      Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMMemoryType,(UObject *)pUVar3,
                         L"ERigVMMemoryType");
    }
    pFVar4 = UEnum::GetDisplayNameTextByValue
                       (Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton,&local_18,2);
    pFVar5 = FText::ToString(pFVar4);
    ::FString::ConcatCF(&local_28,L"RigVMMemory_",pFVar5);
    if (((ClassNames.AllocatorInstance.Data <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         ClassNames.AllocatorInstance.Data + (longlong)ClassNames.ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    if (ClassNames.ArrayNum == ClassNames.ArrayMax) {
      ClassNames.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&ClassNames.AllocatorInstance,&ClassNames.ArrayMax);
    }
    pFVar6 = ClassNames.AllocatorInstance.Data + (longlong)ClassNames.ArrayNum * 0x10;
    ClassNames.ArrayNum = ClassNames.ArrayNum + 1;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar6 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton == (UEnum *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_RigVM();
      Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMMemoryType,(UObject *)pUVar3,
                         L"ERigVMMemoryType");
    }
    pFVar4 = UEnum::GetDisplayNameTextByValue
                       (Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton,&local_18,3);
    pFVar5 = FText::ToString(pFVar4);
    ::FString::ConcatCF(&local_28,L"RigVMMemory_",pFVar5);
    if (((ClassNames.AllocatorInstance.Data <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         ClassNames.AllocatorInstance.Data + (longlong)ClassNames.ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    if (ClassNames.ArrayNum == ClassNames.ArrayMax) {
      ClassNames.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&ClassNames.AllocatorInstance,&ClassNames.ArrayMax);
    }
    pFVar6 = ClassNames.AllocatorInstance.Data + (longlong)ClassNames.ArrayNum * 0x10;
    ClassNames.ArrayNum = ClassNames.ArrayNum + 1;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar6 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  if ((ClassNames.ArrayNum <= (int)(uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  return (FString *)(ClassNames.AllocatorInstance.Data + (ulonglong)param_1 * 0x10);
}

// GetMemoryHash @ 14a0e7eb0

uint __thiscall
URigVMMemoryStorageGeneratorClass::GetMemoryHash(URigVMMemoryStorageGeneratorClass *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  uchar *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  UClass *pUVar10;
  int iVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_48;
  void *local_38 [2];
  
  uVar7 = this->CachedMemoryHash;
  if (uVar7 == 0) {
    this->CachedMemoryHash = 0;
    pFVar13 = (this->LinkedProperties).AllocatorInstance.Data;
    iVar2 = (this->LinkedProperties).ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->LinkedProperties).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar13 == pFVar1) break;
      plVar3 = *(longlong **)pFVar13;
      bVar5 = IsThisNotNull(plVar3,"FField::GetFName");
      if (bVar5) {
        local_res10 = *(FName *)(plVar3 + 4);
      }
      else {
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
      }
      pFVar8 = ::FName::ToString(&local_res10,&local_48);
      iVar11 = (pFVar8->Data).ArrayNum;
      if (iVar11 == 0) {
        pwVar12 = L"";
        iVar11 = 0;
      }
      else {
        pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        iVar11 = iVar11 + -1;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar12);
      uVar7 = this->CachedMemoryHash;
      this->CachedMemoryHash = uVar7 * 0x40 + uVar6 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar7;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar3 + 0x68))(plVar3,local_38,0,0);
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar12 = L"";
        iVar11 = 0;
      }
      else {
        pwVar12 = (wchar_t *)*puVar9;
        iVar11 = *(int *)(puVar9 + 1) + -1;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar12);
      uVar7 = this->CachedMemoryHash;
      this->CachedMemoryHash = (uVar7 >> 2) + 0x9e3779b9 + uVar6 + uVar7 * 0x40 ^ uVar7;
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      pFVar13 = pFVar13 + 8;
    }
    if (this->MemoryType == Literal) {
      if (this->_padding_ == 0) {
        UClass::InternalCreateDefaultObjectWrapper((UClass *)this);
      }
      puVar4 = (uchar *)this->_padding_;
      if (puVar4 != (uchar *)0x0) {
        pUVar10 = URigVMMemoryStorage::StaticClass();
        iVar2 = (int)pUVar10->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)(puVar4 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(puVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar10->_padding_)) {
          pFVar13 = (this->LinkedProperties).AllocatorInstance.Data;
          iVar2 = (this->LinkedProperties).ArrayNum;
          pFVar1 = pFVar13 + (longlong)iVar2 * 8;
          while( true ) {
            if ((this->LinkedProperties).ArrayNum != iVar2) {
              `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_res8);
            }
            if (pFVar13 == pFVar1) break;
            uVar6 = RigVMPropertyUtils::GetPropertyHashFast(*(FProperty **)pFVar13,puVar4,Container)
            ;
            uVar7 = this->CachedMemoryHash;
            this->CachedMemoryHash = (uVar7 >> 2) + 0x9e3779b9 + uVar6 + uVar7 * 0x40 ^ uVar7;
            pFVar13 = pFVar13 + 8;
          }
        }
      }
    }
    uVar7 = this->CachedMemoryHash;
  }
  return uVar7;
}

// GetPrivateStaticClass @ 14a0eac30

UClass * __cdecl URigVMMemoryStorageGeneratorClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMMemoryStorageGeneratorClass",
               &Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.InnerSingleton,
               StaticRegisterNativesURigVMMemoryStorageGeneratorClass,0x248,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URigVMMemoryStorageGeneratorClass>,
               InternalVTableHelperCtorCaller<URigVMMemoryStorageGeneratorClass>,local_res8,
               UClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.InnerSingleton;
}

// GetStatistics @ 14a0eb960

FRigVMMemoryStatistics * __thiscall
URigVMMemoryStorageGeneratorClass::GetStatistics
          (URigVMMemoryStorageGeneratorClass *this,FRigVMMemoryStatistics *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = (this->LinkedProperties).ArrayNum;
  __return_storage_ptr__->RegisterCount = iVar1;
  __return_storage_ptr__->DataBytes = 0;
  __return_storage_ptr__->TotalBytes = iVar1 * 0x70 + 0x28;
  return __return_storage_ptr__;
}

// GetStorageClass @ 14a0eb990

URigVMMemoryStorageGeneratorClass * __cdecl
URigVMMemoryStorageGeneratorClass::GetStorageClass(UObject *param_1,ERigVMMemoryType param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  URigVMMemoryStorageGeneratorClass *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  UPackage *pUVar10;
  size_t sVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  undefined1 local_res18 [8];
  longlong local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOuter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x1c7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (URigVMMemoryStorageGeneratorClass *)(*pcVar3)();
    return pUVar7;
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_48,(int *)((longlong)&local_40 + 4));
  *(UObject **)(local_48.Data + (longlong)(int)uVar5 * 8) = param_1;
  lVar2 = *(longlong *)&param_1->field_0x20;
  local_40._0_4_ = uVar5;
  while (local_40._0_4_ = (uint)local_40 + 1, local_58 = lVar2, lVar2 != 0) {
    pUVar8 = Z_Construct_UClass_UPackage_NoRegister();
    iVar6 = (int)pUVar8->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar8->_padding_)) break;
    if ((local_48.Data <= (FScriptContainerElement *)&local_58) &&
       (((FScriptContainerElement *)&local_58 < local_48.Data + (longlong)(int)local_40._4_4_ * 8 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (URigVMMemoryStorageGeneratorClass *)(*pcVar3)();
      return pUVar7;
    }
    if ((uint)local_40 == local_40._4_4_) {
      local_40._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_48,(int *)((longlong)&local_40 + 4));
    }
    uVar5 = (uint)local_40 + 1;
    *(longlong *)(local_48.Data + (longlong)(int)(uint)local_40 * 8) = local_58;
    local_50 = *(undefined8 *)(local_58 + 0x10);
    local_40._0_4_ = uVar5;
    if (((local_48.Data <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 < local_48.Data + (longlong)(int)local_40._4_4_ * 8))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (URigVMMemoryStorageGeneratorClass *)(*pcVar3)();
      return pUVar7;
    }
    if ((uint)local_40 == local_40._4_4_) {
      local_40._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_48,(int *)((longlong)&local_40 + 4));
    }
    *(undefined8 *)(local_48.Data + (longlong)(int)(uint)local_40 * 8) = local_50;
    lVar2 = *(longlong *)(local_58 + 0x20);
  }
  pFVar9 = GetClassName(param_2);
  uVar5 = (uint)local_40;
  uVar12 = (ulonglong)(int)(uint)local_40;
  pFVar1 = local_48.Data + uVar12 * 8;
  FVar13.Data = local_48.Data;
  while( true ) {
    if ((uint)uVar12 != uVar5) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar13.Data == pFVar1) break;
    pUVar10 = UObjectBaseUtility::GetOutermost(*(UObjectBaseUtility **)FVar13.Data);
    if ((pFVar9->Data).ArrayNum == 0) {
      local_38 = (FScriptContainerElement *)0x15060d16c;
LAB_14a0ebc05:
      sVar11 = wcslen((wchar_t *)local_38);
      iVar6 = (int)sVar11;
    }
    else {
      local_38 = (pFVar9->Data).AllocatorInstance.Data;
      iVar6 = 0;
      if (local_38 != (FScriptContainerElement *)0x0) goto LAB_14a0ebc05;
    }
    iStack_30 = iVar6;
    pUVar8 = StaticClass();
    local_28._12_4_ = uStack_2c;
    local_28.Size = iStack_30;
    local_28.DataPtr = (wchar_t *)local_38;
    pUVar7 = (URigVMMemoryStorageGeneratorClass *)
             StaticFindObject(pUVar8,(UObject *)pUVar10,&local_28,None);
    if (pUVar7 != (URigVMMemoryStorageGeneratorClass *)0x0) goto LAB_14a0ebc40;
    uVar12 = (ulonglong)(uint)local_40;
    FVar13.Data = FVar13.Data + 8;
  }
  pUVar7 = (URigVMMemoryStorageGeneratorClass *)0x0;
LAB_14a0ebc40:
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return pUVar7;
}

// Link @ 14a0faa10

void __thiscall
URigVMMemoryStorageGeneratorClass::Link
          (URigVMMemoryStorageGeneratorClass *this,FArchive *param_1,bool param_2)

{
  UClass::Link((UClass *)this,param_1,param_2);
  UClass::AssembleReferenceTokenStream((UClass *)this,true);
  RefreshLinkedProperties(this);
  RefreshPropertyPaths(this);
  return;
}

// PostLoad @ 14a101590

void __thiscall URigVMMemoryStorageGeneratorClass::PostLoad(URigVMMemoryStorageGeneratorClass *this)

{
  UClass::PostLoad((UClass *)this);
  RefreshLinkedProperties(this);
  RefreshPropertyPaths(this);
  return;
}

// PurgeClass @ 14a101a60

void __thiscall
URigVMMemoryStorageGeneratorClass::PurgeClass(URigVMMemoryStorageGeneratorClass *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FRigVMPropertyPath *pFVar3;
  FRigVMPropertyPathDescription *pFVar4;
  
  UClass::PurgeClass((UClass *)this,param_1);
  this->CachedMemoryHash = 0;
  piVar1 = &(this->LinkedProperties).ArrayMax;
  (this->LinkedProperties).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LinkedProperties).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PropertyPaths).ArrayMax;
  pFVar3 = (FRigVMPropertyPath *)(this->PropertyPaths).AllocatorInstance.Data;
  iVar2 = (this->PropertyPaths).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigVMPropertyPath,int>(pFVar3,iVar2);
    (this->PropertyPaths).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->PropertyPaths).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigVMPropertyPath,int>(pFVar3,iVar2);
    (this->PropertyPaths).ArrayNum = 0;
  }
  piVar1 = &(this->PropertyPathDescriptions).ArrayMax;
  pFVar4 = (FRigVMPropertyPathDescription *)(this->PropertyPathDescriptions).AllocatorInstance.Data;
  iVar2 = (this->PropertyPathDescriptions).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigVMPropertyPathDescription,int>(pFVar4,iVar2);
    (this->PropertyPathDescriptions).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->PropertyPathDescriptions).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigVMPropertyPathDescription,int>(pFVar4,iVar2);
    (this->PropertyPathDescriptions).ArrayNum = 0;
  }
  return;
}

// RefreshLinkedProperties @ 14a1036e0

void __thiscall
URigVMMemoryStorageGeneratorClass::RefreshLinkedProperties(URigVMMemoryStorageGeneratorClass *this)

{
  int *piVar1;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong local_18 [2];
  
  pTVar2 = &this->LinkedProperties;
  this->CachedMemoryHash = 0;
  piVar1 = &(this->LinkedProperties).ArrayMax;
  (this->LinkedProperties).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_18[0] = this->_padding_;
  if (local_18[0] != 0) {
    uVar3 = *(uint *)(*(longlong *)(local_18[0] + 8) + 0x18);
    while ((uVar3 >> 0xf & 1) != 0) {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->LinkedProperties).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->LinkedProperties).ArrayNum = iVar7 + 1;
      *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
      local_18[0] = *(longlong *)(local_18[0] + 0x18);
      if (local_18[0] == 0) {
        return;
      }
      uVar3 = *(uint *)(*(longlong *)(local_18[0] + 8) + 0x18);
    }
  }
  return;
}

// RefreshPropertyPaths @ 14a103c20

/* WARNING: Removing unreachable block (ram,0x00014a103dae) */
/* WARNING: Removing unreachable block (ram,0x00014a103dbb) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
URigVMMemoryStorageGeneratorClass::RefreshPropertyPaths(URigVMMemoryStorageGeneratorClass *this)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FRigVMPropertyPath *pFVar6;
  uint uVar7;
  TArray<FRigVMPropertyPathSegment,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FRigVMPropertyPath *pFVar12;
  TArray<FRigVMPropertyPathSegment,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong local_res18;
  longlong local_res20;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  FRigVMPropertyPath local_68;
  
  TArray<FRigVMPropertyPath,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->PropertyPaths,(this->PropertyPathDescriptions).ArrayNum,Default);
  uVar9 = 0;
  if (0 < (this->PropertyPaths).ArrayNum) {
    local_res18 = 0;
    local_res20 = 0;
    do {
      local_88 = 0;
      local_80 = 0;
      uVar7 = ~uVar9 >> 0x1f;
      local_78 = 0;
      local_70 = 0;
      uVar4 = 0;
      if ((int)uVar9 < (this->PropertyPaths).ArrayNum) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar10 = (this->PropertyPaths).AllocatorInstance.Data + local_res18;
      if (pFVar10 != (FScriptContainerElement *)&local_88) {
        if (*(void **)pFVar10 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar10);
        }
        *(undefined8 *)pFVar10 = 0;
        local_88 = 0;
        local_80 = 0;
        *(undefined4 *)(pFVar10 + 8) = 0;
        *(undefined4 *)(pFVar10 + 0xc) = 0;
      }
      pFVar11 = pFVar10 + 0x10;
      if (pFVar11 != (FScriptContainerElement *)&local_78) {
        if (*(void **)pFVar11 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar11);
        }
        uVar2 = local_70._4_4_;
        *(undefined8 *)pFVar11 = 0;
        *(undefined4 *)(pFVar10 + 0x18) = 0;
        local_70 = 0;
        local_78 = 0;
        *(undefined4 *)(pFVar10 + 0x1c) = uVar2;
      }
      uVar4 = 0;
      if ((int)uVar9 < (this->PropertyPathDescriptions).ArrayNum) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = *(uint *)((this->PropertyPathDescriptions).AllocatorInstance.Data + local_res20);
      if ((-1 < (int)uVar4) && ((int)uVar4 < (this->LinkedProperties).ArrayNum)) {
        uVar5 = 0;
        if ((int)uVar9 < (this->PropertyPathDescriptions).ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar10 = (this->PropertyPathDescriptions).AllocatorInstance.Data;
        uVar5 = 0;
        if ((int)uVar4 < (this->LinkedProperties).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar6 = FRigVMPropertyPath::FRigVMPropertyPath
                           (&local_68,
                            *(FProperty **)
                             ((this->LinkedProperties).AllocatorInstance.Data +
                             (longlong)(int)uVar4 * 8),(FString *)(pFVar10 + local_res20 + 0x18));
        uVar4 = 0;
        if ((int)uVar9 < (this->PropertyPaths).ArrayNum) {
          uVar4 = uVar7;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar12 = (FRigVMPropertyPath *)((this->PropertyPaths).AllocatorInstance.Data + local_res18)
        ;
        if (pFVar12 != pFVar6) {
          pFVar10 = (pFVar12->Path).Data.AllocatorInstance.Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (pFVar12->Path).Data.AllocatorInstance.Data = (pFVar6->Path).Data.AllocatorInstance.Data;
          (pFVar6->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->Path).Data.ArrayNum = (pFVar6->Path).Data.ArrayNum;
          (pFVar12->Path).Data.ArrayMax = (pFVar6->Path).Data.ArrayMax;
          (pFVar6->Path).Data.ArrayNum = 0;
          (pFVar6->Path).Data.ArrayMax = 0;
        }
        pTVar8 = &pFVar6->Segments;
        pTVar13 = &pFVar12->Segments;
        if (pTVar13 != pTVar8) {
          pFVar10 = (pTVar13->AllocatorInstance).Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (pTVar13->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
          (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (pFVar12->Segments).ArrayNum = (pFVar6->Segments).ArrayNum;
          (pFVar12->Segments).ArrayMax = (pFVar6->Segments).ArrayMax;
          (pFVar6->Segments).ArrayNum = 0;
          (pFVar6->Segments).ArrayMax = 0;
        }
        if (local_68.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Segments.AllocatorInstance.Data);
        }
        if (local_68.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Path.Data.AllocatorInstance.Data);
        }
      }
      local_res18 = local_res18 + 0x20;
      local_res20 = local_res20 + 0x28;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (this->PropertyPaths).ArrayNum);
  }
  return;
}

// RemoveStorageClass @ 14a108430

bool __cdecl
URigVMMemoryStorageGeneratorClass::RemoveStorageClass(UObject *param_1,ERigVMMemoryType param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  FString *pFVar5;
  size_t sVar6;
  UClass *pUVar7;
  UObject *this;
  longlong lVar8;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOuter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x27a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar4 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  pFVar5 = GetClassName(param_2);
  local_38.Data = (FScriptContainerElement *)0x0;
  iStack_20 = 0;
  local_30 = (pFVar5->Data).ArrayNum;
  lVar8 = (longlong)local_30;
  _Src = (pFVar5->Data).AllocatorInstance.Data;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar8 * 2);
  }
  if (local_30 == 0) {
    local_28 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_28 = local_38.Data;
    if (local_38.Data == (FScriptContainerElement *)0x0) goto LAB_14a108510;
  }
  sVar6 = wcslen((wchar_t *)local_28);
  iStack_20 = (int)sVar6;
LAB_14a108510:
  pUVar7 = StaticClass();
  local_18._12_4_ = uStack_1c;
  local_18.Size = iStack_20;
  local_18.DataPtr = (wchar_t *)local_28;
  this = StaticFindObject(pUVar7,(UObject *)pUVar4,&local_18,None);
  if (this != (UObject *)0x0) {
    *(uint *)&this[5].field_0xc = *(uint *)&this[5].field_0xc | 0x80000000;
    pcVar1 = *(code **)(*(longlong *)this + 0x170);
    pUVar4 = GetTransientPackage();
    (*pcVar1)(this,0,pUVar4,0x34);
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return this != (UObject *)0x0;
}

// Serialize @ 14a10eba0

void __thiscall
URigVMMemoryStorageGeneratorClass::Serialize
          (URigVMMemoryStorageGeneratorClass *this,FArchive *param_1)

{
  FName FVar1;
  ERigVMMemoryType *pEVar2;
  FName *pFVar3;
  UPackage *pUVar4;
  URigVMMemoryStorageGeneratorClass *pUVar5;
  FName local_res10 [3];
  
  if (((param_1->field_0x28 & 1) != 0) && (this->_padding_ != 0)) {
    pFVar3 = ::FName::FName(local_res10,L"URigVMMemoryStorageGeneratorClass_Auxiliary");
    FVar1 = *pFVar3;
    pUVar4 = GetTransientPackage();
    pUVar5 = NewObject<URigVMMemoryStorageGeneratorClass>
                       ((UObject *)pUVar4,FVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar5->_padding_ = (longlong)UClass::AddReferencedObjects;
    (**(code **)(pUVar5->_padding_ + 200))(pUVar5,param_1);
    return;
  }
  UClass::Serialize((UClass *)this,param_1);
  if ((param_1->field_0x28 & 5) != 0) {
    TArrayPrivateFriend::Serialize<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>
              (param_1,&this->PropertyPathDescriptions);
    pEVar2 = (ERigVMMemoryType *)**(undefined8 **)&param_1->field_0x8;
    if (pEVar2 + 1 <= (ERigVMMemoryType *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      this->MemoryType = *pEVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      return;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->MemoryType,1);
  }
  return;
}

// Serialize @ 14a10ec90

void __thiscall
URigVMMemoryStorageGeneratorClass::Serialize
          (URigVMMemoryStorageGeneratorClass *this,FStructuredArchiveRecord param_1)

{
  FName FVar1;
  ERigVMMemoryType *pEVar2;
  FArchive *pFVar3;
  FName *pFVar4;
  UPackage *pUVar5;
  URigVMMemoryStorageGeneratorClass *pUVar6;
  FSlotBase local_res10;
  FName local_res18 [2];
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if (((pFVar3->field_0x28 & 1) != 0) && (this->_padding_ != 0)) {
    pFVar4 = ::FName::FName(local_res18,L"URigVMMemoryStorageGeneratorClass_Auxiliary");
    FVar1 = *pFVar4;
    pUVar5 = GetTransientPackage();
    pUVar6 = NewObject<URigVMMemoryStorageGeneratorClass>
                       ((UObject *)pUVar5,FVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar6->_padding_ = (longlong)UClass::AddReferencedObjects;
    (**(code **)(pUVar6->_padding_ + 200))(pUVar6,pFVar3);
    return;
  }
  UClass::Serialize((UClass *)this,pFVar3);
  if ((pFVar3->field_0x28 & 5) != 0) {
    TArrayPrivateFriend::Serialize<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>
              (pFVar3,&this->PropertyPathDescriptions);
    pEVar2 = (ERigVMMemoryType *)**(undefined8 **)&pFVar3->field_0x8;
    if (pEVar2 + 1 <= (ERigVMMemoryType *)(*(undefined8 **)&pFVar3->field_0x8)[1]) {
      this->MemoryType = *pEVar2;
      **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 1;
      return;
    }
    (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,&this->MemoryType,1);
  }
  return;
}

// StaticRegisterNativesURigVMMemoryStorageGeneratorClass @ 14a1119b0

void __cdecl
URigVMMemoryStorageGeneratorClass::StaticRegisterNativesURigVMMemoryStorageGeneratorClass(void)

{
  return;
}

