// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticStruct @ 14d642250

UScriptStruct * __cdecl FInstancedOverridablePropertyBag::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInstancedOverridablePropertyBag,
                         (UObject *)pUVar1,L"InstancedOverridablePropertyBag");
  }
  return Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.OuterSingleton;
}

// IsPropertyOverriden @ 14d663180

bool __thiscall
FInstancedOverridablePropertyBag::IsPropertyOverriden
          (FInstancedOverridablePropertyBag *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->OverridenPropertyIDs).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->OverridenPropertyIDs).ArrayNum * 0x10;
  if (pFVar1 != pFVar2) {
    do {
      if (((param_1->D == *(uint *)(pFVar1 + 0xc) && param_1->C == *(uint *)(pFVar1 + 8)) &&
          param_1->B == *(uint *)(pFVar1 + 4)) && param_1->A == *(uint *)pFVar1) {
        return true;
      }
      pFVar1 = pFVar1 + 0x10;
    } while (pFVar1 != pFVar2);
  }
  return false;
}

// MigrateToNewBagInstanceWithOverrides @ 14d6631f0

void __thiscall
FInstancedOverridablePropertyBag::MigrateToNewBagInstanceWithOverrides
          (FInstancedOverridablePropertyBag *this,FInstancedPropertyBag *param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FGuid *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UPropertyBag *this_00;
  FPropertyBagPropertyDesc *pFVar10;
  uint uVar11;
  undefined4 uStack_4c;
  TArrayView<FGuid_const_,int> local_48;
  FGuid local_38;
  
  pFVar5 = (FGuid *)(this->OverridenPropertyIDs).AllocatorInstance.Data;
  pTVar1 = &this->OverridenPropertyIDs;
  iVar9 = (this->OverridenPropertyIDs).ArrayNum;
  if ((iVar9 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar9;
  local_48.DataPtr = pFVar5;
  FInstancedPropertyBag::MigrateToNewBagInstanceWithOverrides
            ((FInstancedPropertyBag *)this,param_1,&local_48);
  this_00 = FInstancedPropertyBag::GetPropertyBagStruct((FInstancedPropertyBag *)this);
  if (this_00 != (UPropertyBag *)0x0) {
    for (uVar11 = 0; (-1 < (int)uVar11 && ((int)uVar11 < (this->OverridenPropertyIDs).ArrayNum));
        uVar11 = uVar11 + 1) {
      if (((int)uVar11 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
      local_38._0_8_ = *(undefined8 *)pFVar3;
      local_38._8_8_ = *(undefined8 *)(pFVar3 + 8);
      pFVar10 = UPropertyBag::FindPropertyDescByID(this_00,&local_38);
      if (pFVar10 == (FPropertyBagPropertyDesc *)0x0) {
        uVar8 = 0;
        if ((int)uVar11 < (this->OverridenPropertyIDs).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar4 = (this->OverridenPropertyIDs).ArrayNum;
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        iVar9 = iVar4 + ~uVar11;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar11 * 0x10,pFVar3 + (longlong)(iVar4 - iVar9) * 0x10,
                  (longlong)iVar9 << 4);
        }
        piVar2 = &(this->OverridenPropertyIDs).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,&pTVar1->AllocatorInstance,(this->OverridenPropertyIDs).ArrayNum,
                   &(this->OverridenPropertyIDs).ArrayMax);
        uVar11 = uVar11 - 1;
      }
    }
  }
  return;
}

// Serialize @ 14d671980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FInstancedOverridablePropertyBag::Serialize
          (FInstancedOverridablePropertyBag *this,FArchive *param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar5;
  undefined1 auStack_1f8 [32];
  FInstancedOverridablePropertyBag *local_1d8;
  undefined8 local_1d0;
  FStructuredArchiveFromArchive local_1c0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FOverridablePropertyBagCustomVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar3 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FOverridablePropertyBagCustomVersion::GUID),
     iVar3 < 1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FInstancedStruct::FInstancedStruct((FInstancedStruct *)&ThisDefaults);
      ThisDefaults.OverridenPropertyIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ThisDefaults.OverridenPropertyIDs.ArrayNum = 0;
      ThisDefaults.OverridenPropertyIDs.ArrayMax = 0;
      atexit(`FInstancedOverridablePropertyBag::Serialize'::__l5::
             _dynamic_atexit_destructor_for__ThisDefaults__);
      _Init_thread_footer(&::_TSS0);
    }
    if (Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_GameplayCameras();
      Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FInstancedOverridablePropertyBag,
                           (UObject *)pUVar4,L"InstancedOverridablePropertyBag");
    }
    pUVar2 = Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.OuterSingleton;
    pcVar1 = *(code **)((Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.
                        OuterSingleton)->_padding_ + 0x2e0);
    this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1c0,param_1);
    FVar5 = FStructuredArchiveFromArchive::GetSlot(this_00);
    local_1d0 = 0;
    local_1d8 = &ThisDefaults;
    (*pcVar1)(pUVar2,*(undefined8 *)FVar5,this,pUVar2);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1c0);
    return true;
  }
  FInstancedPropertyBag::Serialize((FInstancedPropertyBag *)this,param_1);
  TArrayPrivateFriend::Serialize<FGuid,TSizedDefaultAllocator<32>_>
            (param_1,&this->OverridenPropertyIDs);
  return true;
}

// SerializeFromMismatchedTag @ 14d671b50

bool __thiscall
FInstancedOverridablePropertyBag::SerializeFromMismatchedTag
          (FInstancedOverridablePropertyBag *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2)

{
  bool bVar1;
  FArchive *pFVar2;
  UScriptStruct *pUVar3;
  FPropertyTypeName local_res10 [2];
  FSlotBase local_res18 [2];
  
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pUVar3 = FInstancedPropertyBag::StaticStruct();
      NAME_InstancedPropertyBag = (FName)pUVar3->_padding_;
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res10[0].Index = (param_1->TypeName).Index;
  bVar1 = UE::FPropertyTypeName::IsStruct(local_res10,NAME_InstancedPropertyBag);
  if (bVar1) {
    pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    FInstancedPropertyBag::Serialize((FInstancedPropertyBag *)this,pFVar2);
    return true;
  }
  return false;
}

// SetPropertyOverriden @ 14d671d30

void __thiscall
FInstancedOverridablePropertyBag::SetPropertyOverriden
          (FInstancedOverridablePropertyBag *this,FGuid *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FGuid *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *this_00;
  
  this_00 = &this->OverridenPropertyIDs;
  if (!param_2) {
    TArray<FGuid,TSizedDefaultAllocator<32>_>::Remove(this_00,param_1);
    return;
  }
  iVar7 = TArray<FGuid,TSizedDefaultAllocator<32>_>::Find(this_00,param_1);
  if (iVar7 == -1) {
    pFVar3 = (FGuid *)(this_00->AllocatorInstance).Data;
    if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->OverridenPropertyIDs).ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->OverridenPropertyIDs).ArrayNum;
    piVar1 = &(this->OverridenPropertyIDs).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&this_00->AllocatorInstance,piVar1);
    }
    (this->OverridenPropertyIDs).ArrayNum = iVar7 + 1;
    uVar5 = *(undefined8 *)&param_1->C;
    pFVar2 = (this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(pFVar2 + 8) = uVar5;
  }
  return;
}

