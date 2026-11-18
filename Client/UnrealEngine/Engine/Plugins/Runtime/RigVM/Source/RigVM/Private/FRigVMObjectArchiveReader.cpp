// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// FRigVMObjectArchiveReader @ 14a0bd840

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

FRigVMObjectArchiveReader * __thiscall
FRigVMObjectArchiveReader::FRigVMObjectArchiveReader
          (FRigVMObjectArchiveReader *this,FRigVMObjectArchive *param_1,UObject *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  ForAnyElementType FVar7;
  FNameEntryId FVar8;
  FString *pFVar9;
  undefined4 extraout_var;
  bool bVar10;
  uint local_res8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  local_res8[0] = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FRigVMObjectArchiveWriter__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_2;
  bVar10 = param_2 == (UObject *)0x0;
  if (bVar10) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9 = &local_48;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  else {
    pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0)
    ;
  }
  this->_padding_ = 0;
  this->_padding_ = (longlong)(pFVar9->Data).AllocatorInstance.Data;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&this->_padding_ = (pFVar9->Data).ArrayNum;
  *(int *)((longlong)&this->_padding_ + 4) = (pFVar9->Data).ArrayMax;
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  if ((bVar10) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((!bVar10) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  (**(code **)(this->_padding_ + 200))(this,0);
  FArchive::UsingCustomVersion((FArchive *)this,&FUE5MainStreamObjectVersion::GUID);
  FArchive::UsingCustomVersion((FArchive *)this,&FRigVMObjectVersion::GUID);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x10;
  this->_padding_ = (longlong)&___7FRigVMObjectArchiveReader__6B_;
  *(undefined8 *)&this->ReadClasses = 0;
  *(undefined8 *)&(this->ReadClasses).field_0x8 = 0;
  *(undefined8 *)&(this->ReadClasses).field_0x20 = 0;
  *(undefined4 *)&(this->ReadClasses).field_0x28 = 0;
  *(undefined4 *)&(this->ReadClasses).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReadClasses).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReadClasses).field_0x34 = 0;
  *(undefined8 *)&(this->ReadClasses).field_0x40 = 0;
  *(undefined4 *)&(this->ReadClasses).field_0x48 = 0;
  *(undefined8 *)&this->ReadObjects = 0;
  *(undefined8 *)&(this->ReadObjects).field_0x8 = 0;
  *(undefined8 *)&(this->ReadObjects).field_0x20 = 0;
  *(undefined4 *)&(this->ReadObjects).field_0x28 = 0;
  *(undefined4 *)&(this->ReadObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReadObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReadObjects).field_0x34 = 0;
  *(undefined8 *)&(this->ReadObjects).field_0x40 = 0;
  *(undefined4 *)&(this->ReadObjects).field_0x48 = 0;
  (this->DeserializedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeserializedObjects).ArrayNum = 0;
  (this->DeserializedObjects).ArrayMax = 0;
  *(undefined8 *)&this->OffsetToName = 0;
  *(undefined8 *)&(this->OffsetToName).field_0x8 = 0;
  *(undefined8 *)&(this->OffsetToName).field_0x20 = 0;
  *(undefined4 *)&(this->OffsetToName).field_0x28 = 0;
  *(undefined4 *)&(this->OffsetToName).field_0x2c = 0x80;
  *(undefined4 *)&(this->OffsetToName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OffsetToName).field_0x34 = 0;
  *(undefined8 *)&(this->OffsetToName).field_0x40 = 0;
  *(undefined4 *)&(this->OffsetToName).field_0x48 = 0;
  (**(code **)(this->_padding_ + 0xd8))(this,0);
  (**(code **)(this->_padding_ + 200))(this,1);
  pTVar4 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)this->_padding_;
  if ((char)pTVar4[1].ArrayNum != '\0') {
    iVar2 = *(int *)&pTVar4[1].AllocatorInstance.Data;
    *(int *)((longlong)&pTVar4[1].AllocatorInstance.Data + 4) = pTVar4->ArrayNum;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_58,iVar2,Default);
    FVar7.Data = local_58.AllocatorInstance.Data;
    iVar2 = pTVar4->ArrayNum;
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    iVar3 = *(int *)&pTVar4[1].AllocatorInstance.Data;
    FVar8 = FNameEntryId::FromValidEName((EName)local_res8);
    local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar8.Value);
    local_res8[1] = 0;
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = local_res8[0];
    bVar10 = FCompression::UncompressMemory
                       (FVar6,FVar7.Data,(longlong)iVar3,pFVar5,(longlong)iVar2,COMPRESS_NoFlags,0);
    if (bVar10) {
      if (pTVar4 == &local_58) {
        *(undefined1 *)&pTVar4[1].ArrayNum = 0;
      }
      else {
        pFVar5 = (pTVar4->AllocatorInstance).Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pTVar4->AllocatorInstance).Data = local_58.AllocatorInstance.Data;
        pTVar4->ArrayNum = local_58.ArrayNum;
        pTVar4->ArrayMax = local_58.ArrayMax;
        *(undefined1 *)&pTVar4[1].ArrayNum = 0;
        local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.ArrayNum = 0;
        local_58.ArrayMax = 0;
      }
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return this;
}

// operator<< @ 14a0c7200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FArchive * __thiscall
FRigVMObjectArchiveReader::operator<<(FRigVMObjectArchiveReader *this,UObject **param_1)

{
  int *piVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UObjectBase *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FArchive *pFVar10;
  TTuple<FName,UObject_*> *pTVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  FString *pFVar15;
  size_t sVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  ForAnyElementType FVar19;
  undefined1 *puVar20;
  FScriptContainerElement *pFVar21;
  EObjectFlags EVar22;
  undefined1 auStackY_1c8 [32];
  char local_178;
  undefined1 local_177 [7];
  FName local_170;
  FString local_168;
  FString local_158;
  FName local_148;
  FObjectHeader local_140;
  undefined1 local_120 [8];
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FName *local_108;
  UObject **local_100;
  FName *local_f8;
  UObject **local_f0;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_178 = -1;
  plVar17 = (longlong *)this->_padding_;
  if ((char *)plVar17[1] < (char *)*plVar17 + 1) {
    (**(code **)(this->_padding_ + 0x188))(this,&local_178,1);
  }
  else {
    local_178 = *(char *)*plVar17;
    *plVar17 = *plVar17 + 1;
  }
  if (local_178 == '\0') {
    *param_1 = (UObject *)0x0;
    goto LAB_14a0c7825;
  }
  if (local_178 == '\x01') {
    ReadObjectHeader(this,&local_140,-1);
    if (((local_140.Class == (UClass *)0x0) || (local_140.Name == (FName)0x0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                           ,0x116,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FArchive *)(*pcVar6)();
      return pFVar10;
    }
    pUVar14 = (UObject *)this->_padding_;
    EVar22 = local_140.Flags | RF_NeedPostLoad;
    pUVar12 = *param_1;
    iVar9 = 0;
    if (pUVar12 == pUVar14) {
      if (((pUVar12 == (UObject *)0x0) || ((*(uint *)&pUVar12->field_0x8 >> 0x1e & 1) != 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Obj)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                             ,0x12e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FArchive *)(*pcVar6)();
        return pFVar10;
      }
    }
    else {
      if (local_140.OuterPathName != (FName)0x0) {
        pTVar11 = TSet<TTuple<FName,UObject_*>,TDefaultMapHashableKeyFuncs<FName,UObject_*,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,UObject_*>,TDefaultMapHashableKeyFuncs<FName,UObject_*,0>,FDefaultSetAllocator>
                          *)&this->ReadObjects,local_140.OuterPathName);
        if ((pTVar11 == (TTuple<FName,UObject_*> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FArchive *)(*pcVar6)();
          return pFVar10;
        }
        pUVar14 = *(UObject **)&pTVar11->field_0x8;
      }
      pUVar12 = StaticFindObjectFast
                          (local_140.Class,pUVar14,local_140.Name,None,RF_NoFlags,Borrowed);
      *param_1 = pUVar12;
      if ((pUVar12 == (UObject *)0x0) || ((*(uint *)&pUVar12->field_0x8 >> 0x1e & 1) != 0)) {
        if (local_140.Name == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    (pUVar14,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar13 = Z_Construct_UClass_UObject_NoRegister();
        CheckIsClassChildOf_Internal(pUVar13,local_140.Class);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,local_140.Class);
        local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_c8._56_8_ = (UPackage *)0x0;
        local_c8._16_4_ = local_140.Name.ComparisonIndex.Value;
        local_c8._20_4_ = local_140.Name.Number;
        local_c8._40_8_ = (UObject *)0x0;
        local_c8[0x20] = false;
        local_c8._8_8_ = pUVar14;
        local_c8._24_4_ = EVar22;
        pUVar14 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar17 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar17 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        *param_1 = pUVar14;
      }
      else {
        pUVar5 = (UObjectBase *)*param_1;
        if ((((local_140.Flags & RF_MirroredGarbage) != RF_NoFlags) &&
            ((pUVar5->ObjectFlags & EVar22 & RF_MirroredGarbage) !=
             (local_140.Flags & RF_MirroredGarbage))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!(NewFlags & RF_MirroredGarbage) || (GetFlags() & (NewFlags & RF_MirroredGarbage)) == (NewFlags & RF_MirroredGarbage)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                               ,0x4b,
                               L"RF_MirroredGarbage can not be set through SetFlags function. Use MarkAsGarbage() instead"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FArchive *)(*pcVar6)();
          return pFVar10;
        }
        UObjectBase::AtomicallySetFlags(pUVar5,EVar22);
      }
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*param_1,&local_168,(UObject *)0x0);
    iVar3 = (int)this->_padding_;
    if (iVar3 == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)this->_padding_;
      iVar9 = iVar3 + -1;
    }
    bVar7 = ::FString::StartsWith(&local_168,pwVar18,iVar9,CaseSensitive);
    if (bVar7) {
      iVar3 = (int)this->_padding_;
      iVar9 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar9 = 0;
      }
      ::FString::RightChop(&local_168,&local_158,iVar9);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      local_168.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.Data.ArrayNum = local_158.Data.ArrayNum;
      local_168.Data.ArrayMax = local_158.Data.ArrayMax;
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
    }
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_168.Data.ArrayNum != 0) {
      FVar19.Data = local_168.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_148,(wchar_t *)FVar19.Data);
    uVar8 = ::GetTypeHash(local_148.ComparisonIndex.Value);
    if (*(int *)&(this->ReadObjects).field_0x8 != *(int *)&(this->ReadObjects).field_0x34) {
      puVar20 = *(undefined1 **)&(this->ReadObjects).field_0x40;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = &(this->ReadObjects).field_0x38;
      }
      iVar9 = *(int *)(puVar20 +
                      (ulonglong)
                      (*(int *)&(this->ReadObjects).field_0x48 - 1U & local_148.Number + uVar8) * 4)
      ;
      if (iVar9 != -1) {
        do {
          if (*(FName *)(*(longlong *)&this->ReadObjects + (longlong)iVar9 * 0x18) == local_148) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!ReadObjects.Contains(PathName)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                               ,0x138,L"");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              pFVar10 = (FArchive *)(*pcVar6)();
              return pFVar10;
            }
            break;
          }
          iVar9 = *(int *)(*(longlong *)&this->ReadObjects + 0x10 + (longlong)iVar9 * 0x18);
        } while (iVar9 != -1);
      }
    }
    local_108 = &local_148;
    local_100 = param_1;
    TSet<TTuple<FName,UObject_*>,TDefaultMapHashableKeyFuncs<FName,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,UObject_*_const_&>_>
              ((TSet<TTuple<FName,UObject_*>,TDefaultMapHashableKeyFuncs<FName,UObject_*,0>,FDefaultSetAllocator>
                *)&this->ReadObjects,(TPairInitializer<FName_const_&,UObject_*_const_&> *)local_120,
               (bool *)&local_108);
    (**(code **)(*(longlong *)*param_1 + 200))(*param_1,this);
    pTVar2 = &this->DeserializedObjects;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= param_1) &&
        (param_1 < pFVar4 + (longlong)(this->DeserializedObjects).ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FArchive *)(*pcVar6)();
      return pFVar10;
    }
    iVar9 = (this->DeserializedObjects).ArrayNum;
    piVar1 = &(this->DeserializedObjects).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DeserializedObjects).ArrayNum = iVar9 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = *param_1;
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    goto LAB_14a0c7825;
  }
  if (local_178 != '\x02') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                       ,0x151,L"");
    if (bVar7) {
code_r0x00014a0c7824:
      pcVar6 = (code *)swi(3);
      pFVar10 = (FArchive *)(*pcVar6)();
      return pFVar10;
    }
    goto LAB_14a0c7825;
  }
  iVar9 = 0;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  (**(code **)(this->_padding_ + 0x178))(this,&local_170);
  pTVar11 = TSet<TTuple<FName,UObject_*>,TDefaultMapHashableKeyFuncs<FName,UObject_*,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,UObject_*>,TDefaultMapHashableKeyFuncs<FName,UObject_*,0>,FDefaultSetAllocator>
                    *)&this->ReadObjects,local_170);
  plVar17 = (longlong *)&pTVar11->field_0x8;
  if (pTVar11 == (TTuple<FName,UObject_*> *)0x0) {
    plVar17 = (longlong *)0x0;
  }
  if (plVar17 != (longlong *)0x0) {
    pUVar14 = (UObject *)*plVar17;
    *param_1 = pUVar14;
    if ((pUVar14 == (UObject *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Obj",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                           ,0x146,L""), bVar7)) goto code_r0x00014a0c7824;
    goto LAB_14a0c7825;
  }
  pFVar15 = ::FName::ToString(&local_170,&local_d8);
  if ((pFVar15->Data).ArrayNum == 0) {
    local_118 = (FScriptContainerElement *)0x15060d16c;
LAB_14a0c7771:
    sVar16 = wcslen((wchar_t *)local_118);
    iVar9 = (int)sVar16;
  }
  else {
    local_118 = (pFVar15->Data).AllocatorInstance.Data;
    if (local_118 != (FScriptContainerElement *)0x0) goto LAB_14a0c7771;
  }
  iStack_110 = iVar9;
  pUVar13 = Z_Construct_UClass_UObject_NoRegister();
  local_e8._12_4_ = uStack_10c;
  local_e8.Size = iStack_110;
  local_e8.DataPtr = (wchar_t *)local_118;
  pUVar14 = StaticFindObject(pUVar13,(UObject *)0x0,&local_e8,None);
  *param_1 = pUVar14;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if ((*param_1 == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Obj",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                         ,0x14b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FArchive *)(*pcVar6)();
    return pFVar10;
  }
  local_f8 = &local_170;
  local_f0 = param_1;
  TSet<TTuple<FName,UObject_*>,TDefaultMapHashableKeyFuncs<FName,UObject_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,UObject_*_const_&>_>
            ((TSet<TTuple<FName,UObject_*>,TDefaultMapHashableKeyFuncs<FName,UObject_*,0>,FDefaultSetAllocator>
              *)&this->ReadObjects,
             (TPairInitializer<FName_const_&,UObject_*_const_&> *)(local_120 + 4),(bool *)&local_f8)
  ;
LAB_14a0c7825:
  if (*param_1 == (UObject *)this->_padding_) {
    pFVar21 = (this->DeserializedObjects).AllocatorInstance.Data;
    iVar9 = (this->DeserializedObjects).ArrayNum;
    pFVar4 = pFVar21 + (longlong)iVar9 * 8;
    while( true ) {
      if ((this->DeserializedObjects).ArrayNum != iVar9) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_177);
      }
      if (pFVar21 == pFVar4) break;
      pUVar5 = *(UObjectBase **)pFVar21;
      (**(code **)(pUVar5->_padding_ + 0x98))(pUVar5);
      UObjectBase::AtomicallyClearFlags(pUVar5,RF_NeedPostLoad);
      pFVar21 = pFVar21 + 8;
    }
  }
  return (FArchive *)this;
}

// operator<< @ 14a0c78c0

FArchive * __thiscall
FRigVMObjectArchiveReader::operator<<(FRigVMObjectArchiveReader *this,FName *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  FName *pFVar6;
  undefined1 *puVar7;
  int iVar8;
  char local_res8 [8];
  ulong64 local_res10;
  FRigVMObjectArchiveReader *local_28;
  FName *local_20;
  
  local_res8[0] = -1;
  plVar1 = (longlong *)this->_padding_;
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  local_28 = this;
  local_20 = param_1;
  if (local_res8[0] == '\0') {
    `FRigVMObjectArchiveReader::operator<<'::__l2::<lambda_1>::operator()(&local_28);
    return (FArchive *)this;
  }
  if (local_res8[0] == '\x01') {
    plVar1 = (longlong *)this->_padding_;
    local_res10 = 0xffffffffffffffff;
    if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,&local_res10,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_res10);
      }
    }
    else {
      local_res10 = *(ulong64 *)*plVar1;
      *plVar1 = *plVar1 + 8;
    }
    lVar2 = this->_padding_;
    iVar8 = (int)local_res10;
    if ((local_res10 != (longlong)iVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar3)();
      return pFVar5;
    }
    if (((iVar8 < 0) || (*(int *)(lVar2 + 8) <= iVar8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Archive.Buffer.IsValidIndex(IntCastChecked<int32, int64>(OffsetOfString))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                           ,0x180,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar3)();
      return pFVar5;
    }
    if (*(int *)&(this->OffsetToName).field_0x8 != *(int *)&(this->OffsetToName).field_0x34) {
      puVar7 = *(undefined1 **)&(this->OffsetToName).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->OffsetToName).field_0x38;
      }
      iVar8 = *(int *)(puVar7 + (((longlong)local_res10 >> 0x20) * 0x17 + local_res10 &
                                (ulonglong)(*(int *)&(this->OffsetToName).field_0x48 - 1)) * 4);
      if (iVar8 != -1) {
        do {
          lVar2 = *(longlong *)&this->OffsetToName + (longlong)iVar8 * 0x18;
          if (*(ulong64 *)(*(longlong *)&this->OffsetToName + (longlong)iVar8 * 0x18) == local_res10
             ) {
            pFVar6 = (FName *)(lVar2 + 8);
            if (lVar2 == 0) {
              pFVar6 = (FName *)0x0;
            }
            if (pFVar6 != (FName *)0x0) {
              *param_1 = *pFVar6;
              return (FArchive *)this;
            }
            break;
          }
          iVar8 = *(int *)(lVar2 + 0x10);
        } while (iVar8 != -1);
      }
    }
    lVar2 = this->_padding_;
    this->_padding_ = lVar2;
    (**(code **)(this->_padding_ + 0x1b8))(this,local_res10);
    `FRigVMObjectArchiveReader::operator<<'::__l2::<lambda_1>::operator()(&local_28);
    this->_padding_ = lVar2;
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                       ,399,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar3)();
      return pFVar5;
    }
  }
  return (FArchive *)this;
}

// operator<< @ 14a0c7b20

FArchive * __thiscall
FRigVMObjectArchiveReader::operator<<(FRigVMObjectArchiveReader *this,FText *param_1)

{
  FText *pFVar1;
  FString local_28;
  FText local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::operator<<((FArchive *)this,&local_28);
  pFVar1 = FText::FromString(&local_18,&local_28);
  FText::operator=(param_1,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// operator() @ 14a0c8a50

void __thiscall `FRigVMObjectArchiveReader::operator<<'::__l2::<lambda_1>::operator()(void *this)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  TSet<TTuple<__int64,FName>,TDefaultMapHashableKeyFuncs<__int64,FName,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar5;
  FName local_res8;
  longlong local_res10;
  longlong *local_res18 [2];
  FString local_28;
  
  local_res10 = (**(code **)(**(longlong **)this + 0x28))();
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::operator<<(*(FArchive **)this,&local_28);
  if (local_28.Data.ArrayNum < 2) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
  }
  else {
    ::FName::FName(&local_res8,(wchar_t *)local_28.Data.AllocatorInstance.Data);
  }
  **(FName **)((longlong)this + 8) = local_res8;
  lVar3 = *(longlong *)this;
  this_00 = (TSet<TTuple<__int64,FName>,TDefaultMapHashableKeyFuncs<__int64,FName,0>,FDefaultSetAllocator>
             *)(lVar3 + 0x208);
  uVar1 = **(undefined8 **)((longlong)this + 8);
  uVar5 = (int)((ulonglong)local_res10 >> 0x20) * 0x17 + (int)local_res10;
  if (*(int *)(lVar3 + 0x210) != *(int *)(lVar3 + 0x23c)) {
    lVar4 = *(longlong *)(lVar3 + 0x248);
    if (*(longlong *)(lVar3 + 0x248) == 0) {
      lVar4 = lVar3 + 0x240;
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar3 + 0x250) - 1U & uVar5) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)&this_00->Elements + (longlong)iVar2 * 0x18;
        if (*(longlong *)(*(longlong *)&this_00->Elements + (longlong)iVar2 * 0x18) == local_res10)
        {
          if (lVar3 != 0) goto LAB_14a0c8b53;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res18[0] = &local_res10;
  TSet<TTuple<__int64,FName>,TDefaultMapHashableKeyFuncs<__int64,FName,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<__int64_const_&>_>
            (this_00,(uint)&local_res8,(TKeyInitializer<__int64_const_&> *)(ulonglong)uVar5,
             (bool *)local_res18);
  lVar3 = *(longlong *)&this_00->Elements + (longlong)(int)local_res8.ComparisonIndex.Value * 0x18;
LAB_14a0c8b53:
  *(undefined8 *)(lVar3 + 8) = uVar1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetRootObjectHeader @ 14a0eb660

FObjectHeader * __thiscall
FRigVMObjectArchiveReader::GetRootObjectHeader
          (FRigVMObjectArchiveReader *this,FObjectHeader *__return_storage_ptr__)

{
  longlong lVar1;
  longlong *plVar2;
  char local_res8 [8];
  
  lVar1 = this->_padding_;
  this->_padding_ = lVar1;
  (**(code **)(this->_padding_ + 0x1b8))(this,0);
  plVar2 = (longlong *)this->_padding_;
  local_res8[0] = -1;
  if ((char *)plVar2[1] < (char *)*plVar2 + 1) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  if (local_res8[0] == '\x01') {
    ReadObjectHeader(this,__return_storage_ptr__,-1);
  }
  else {
    __return_storage_ptr__->Class = (UClass *)0x0;
    (__return_storage_ptr__->OuterPathName).ComparisonIndex = 0;
    (__return_storage_ptr__->OuterPathName).Number = 0;
    (__return_storage_ptr__->Name).ComparisonIndex = 0;
    (__return_storage_ptr__->Name).Number = 0;
    __return_storage_ptr__->Flags = RF_NoFlags;
  }
  this->_padding_ = lVar1;
  return __return_storage_ptr__;
}

// ReadObjectHeader @ 14a101b60

FObjectHeader * __thiscall
FRigVMObjectArchiveReader::ReadObjectHeader
          (FRigVMObjectArchiveReader *this,FObjectHeader *__return_storage_ptr__,long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  UClass **ppUVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  FString *pFVar8;
  size_t sVar9;
  UClass *pUVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  EObjectFlags local_res8 [2];
  TPairInitializer<FName_const_&,UClass_*_const_&> local_res10;
  undefined1 local_58 [16];
  FString local_48;
  
  uVar7 = (**(code **)(this->_padding_ + 0x28))();
  if (param_1 != -1) {
    (**(code **)(this->_padding_ + 0x1b8))(this,param_1);
  }
  __return_storage_ptr__->Class = (UClass *)0x0;
  (__return_storage_ptr__->OuterPathName).ComparisonIndex = 0;
  (__return_storage_ptr__->OuterPathName).Number = 0;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  iVar13 = 0;
  __return_storage_ptr__->Flags = RF_NoFlags;
  local_res10.Value = (UClass **)0x0;
  (**(code **)(this->_padding_ + 0x178))(this,&local_res10.Value);
  ppUVar4 = local_res10.Value;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)local_res10.Value);
  if (*(int *)&(this->ReadClasses).field_0x8 != *(int *)&(this->ReadClasses).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ReadClasses).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ReadClasses).field_0x38;
    }
    iVar6 = *(int *)(puVar12 +
                    (ulonglong)
                    (*(int *)&(this->ReadClasses).field_0x48 - 1U &
                    (int)((ulonglong)ppUVar4 >> 0x20) + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->ReadClasses).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(UClass ***)(lVar2 + (longlong)iVar6 * 0x18) == ppUVar4) {
          puVar11 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          if (puVar11 != (undefined8 *)0x0) {
            __return_storage_ptr__->Class = (UClass *)*puVar11;
            goto LAB_14a101ceb;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  pFVar8 = ::FName::ToString((FName *)&local_res10.Value,&local_48);
  if ((pFVar8->Data).ArrayNum == 0) {
    local_58._0_8_ = L"";
  }
  else {
    local_58._0_8_ = (pFVar8->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_58._0_8_ == (FScriptContainerElement *)0x0)
    goto LAB_14a101c89;
  }
  sVar9 = wcslen((wchar_t *)local_58._0_8_);
  iVar13 = (int)sVar9;
LAB_14a101c89:
  local_58._8_4_ = iVar13;
  pUVar10 = Z_Construct_UClass_UClass_NoRegister();
  pUVar10 = (UClass *)StaticFindObject(pUVar10,(UObject *)0x0,(TStringView<wchar_t> *)local_58,None)
  ;
  __return_storage_ptr__->Class = pUVar10;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_58._0_8_ = &local_res10.Value;
  local_58._8_8_ = __return_storage_ptr__;
  TSet<TTuple<FName,UClass_*>,TDefaultMapHashableKeyFuncs<FName,UClass_*,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,UClass_*_const_&>_>
            ((TSet<TTuple<FName,UClass_*>,TDefaultMapHashableKeyFuncs<FName,UClass_*,0>,FDefaultSetAllocator>
              *)&this->ReadClasses,&local_res10,(bool *)local_58);
LAB_14a101ceb:
  (**(code **)(this->_padding_ + 0x178))(this,&__return_storage_ptr__->Name);
  plVar3 = (longlong *)this->_padding_;
  local_res8[0] = __return_storage_ptr__->Flags;
  if ((EObjectFlags *)plVar3[1] < (EObjectFlags *)*plVar3 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(EObjectFlags *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  __return_storage_ptr__->Flags = local_res8[0];
  (**(code **)(this->_padding_ + 0x178))(this,&__return_storage_ptr__->OuterPathName);
  if (param_1 != -1) {
    (**(code **)(this->_padding_ + 0x1b8))(this,uVar7);
  }
  return __return_storage_ptr__;
}

// Serialize @ 14a10e1a0

void __thiscall
FRigVMObjectArchiveReader::Serialize(FRigVMObjectArchiveReader *this,void *param_1,long64 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    if (param_1 != (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("V == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                         ,0xfd,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    if (param_1 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("V",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                         ,0x101,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((longlong)*(int *)(this->_padding_ + 8) < this->_padding_ + param_2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Archive.Buffer.Num() >= Offset + Length",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                         ,0x102,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar1 = (longlong *)this->_padding_;
    uVar5 = (uint)this->_padding_;
    if (this->_padding_ != (longlong)(int)uVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar4 = 0;
    if ((int)uVar5 < (int)plVar1[1]) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    memcpy(param_1,(void *)(*plVar1 + (longlong)(int)uVar5),param_2);
    this->_padding_ = this->_padding_ + param_2;
  }
  return;
}

