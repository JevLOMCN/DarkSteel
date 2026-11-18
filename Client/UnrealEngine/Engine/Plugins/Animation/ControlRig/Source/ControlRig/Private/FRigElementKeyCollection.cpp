// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 17

// StaticStruct @ 14a2bc760

UScriptStruct * __cdecl FRigElementKeyCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigElementKeyCollection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigElementKeyCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigElementKeyCollection,(UObject *)pUVar1,
                         L"RigElementKeyCollection");
  }
  return Z_Registration_Info_UScriptStruct_FRigElementKeyCollection.OuterSingleton;
}

// FRigElementKeyCollection @ 14a2da340

FRigElementKeyCollection * __thiscall
FRigElementKeyCollection::FRigElementKeyCollection
          (FRigElementKeyCollection *this,FRigElementKeyCollection *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Keys).ArrayMax;
  iVar2 = (param_1->Keys).ArrayNum;
  _Src = (param_1->Keys).AllocatorInstance.Data;
  (this->Keys).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Keys).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0xc);
  return this;
}

// FRigElementKeyCollection @ 14a2da3d0

FRigElementKeyCollection * __thiscall
FRigElementKeyCollection::FRigElementKeyCollection
          (FRigElementKeyCollection *this,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Keys).ArrayMax;
  iVar2 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  (this->Keys).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Keys).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0xc);
  return this;
}

// operator() @ 14a2e7170

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`FRigElementKeyCollection::MakeFromName'::__l2::<lambda_2>::operator()
          (void *this,FRigBaseElement *param_1)

{
  ERigElementType EVar1;
  int iVar2;
  FString *this_00;
  size_t sVar3;
  wchar_t *_Str;
  
  EVar1 = (param_1->Key).Type;
  if ((*(ERigElementType *)((longlong)this + 0x10) & EVar1) == EVar1) {
    this_00 = FRigBaseElement::GetName(param_1);
    if (*(int *)((longlong)this + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)this;
      if (_Str == (wchar_t *)0x0) {
        return false;
      }
    }
    sVar3 = wcslen(_Str);
    iVar2 = ::FString::Find(this_00,_Str,(int)sVar3,IgnoreCase,FromStart,-1);
    if (iVar2 != -1) {
      return true;
    }
  }
  return false;
}

// FilterByName @ 14a3044d0

FRigElementKeyCollection * __thiscall
FRigElementKeyCollection::FilterByName
          (FRigElementKeyCollection *this,FRigElementKeyCollection *__return_storage_ptr__,
          FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRigElementKeyCollection *pFVar7;
  FString *this_00;
  size_t sVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  
  ::FName::ToString(param_1,&local_58);
  (__return_storage_ptr__->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Keys).ArrayNum = 0;
  (__return_storage_ptr__->Keys).ArrayMax = 0;
  iVar2 = (this->Keys).ArrayNum;
  pFVar9 = (this->Keys).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0xc;
  do {
    while( true ) {
      if ((this->Keys).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar1) {
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      if (*(FName *)(pFVar9 + 4) != *param_1) break;
      pFVar3 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
      if ((pFVar3 <= pFVar9) &&
         (pFVar9 < pFVar3 + (longlong)(__return_storage_ptr__->Keys).ArrayMax * 0xc)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FRigElementKeyCollection *)(*pcVar4)();
          return pFVar7;
        }
      }
      iVar6 = (__return_storage_ptr__->Keys).ArrayNum;
      if (iVar6 == (__return_storage_ptr__->Keys).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->Keys).ArrayMax);
      }
      (__return_storage_ptr__->Keys).ArrayNum = iVar6 + 1;
      pFVar3 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0xc) = *(undefined8 *)pFVar9;
      *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = *(undefined4 *)(pFVar9 + 8);
      pFVar9 = pFVar9 + 0xc;
    }
    this_00 = ::FName::ToString((FName *)(pFVar9 + 4),&local_48);
    if (local_58.Data.ArrayNum == 0) {
      _Str = L"";
LAB_14a304634:
      sVar8 = wcslen(_Str);
      iVar6 = ::FString::Find(this_00,_Str,(int)sVar8,CaseSensitive,FromStart,-1);
    }
    else {
      _Str = (wchar_t *)local_58.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14a304634;
      iVar6 = -1;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (iVar6 != -1) {
      pFVar3 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
      if ((pFVar3 <= pFVar9) &&
         (pFVar9 < pFVar3 + (longlong)(__return_storage_ptr__->Keys).ArrayMax * 0xc)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FRigElementKeyCollection *)(*pcVar4)();
          return pFVar7;
        }
      }
      iVar6 = (__return_storage_ptr__->Keys).ArrayNum;
      if (iVar6 == (__return_storage_ptr__->Keys).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->Keys).ArrayMax);
      }
      (__return_storage_ptr__->Keys).ArrayNum = iVar6 + 1;
      pFVar3 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0xc) = *(undefined8 *)pFVar9;
      *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = *(undefined4 *)(pFVar9 + 8);
    }
    pFVar9 = pFVar9 + 0xc;
  } while( true );
}

// FilterByType @ 14a304780

FRigElementKeyCollection * __thiscall
FRigElementKeyCollection::FilterByType
          (FRigElementKeyCollection *this,FRigElementKeyCollection *__return_storage_ptr__,
          uchar param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRigElementKeyCollection *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Keys).ArrayNum = 0;
  (__return_storage_ptr__->Keys).ArrayMax = 0;
  pFVar8 = (this->Keys).AllocatorInstance.Data;
  iVar2 = (this->Keys).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->Keys).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if ((FScriptContainerElement)((byte)*pFVar8 & param_1) == *pFVar8) {
      pFVar3 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
      if ((pFVar3 <= pFVar8) &&
         (pFVar8 < pFVar3 + (longlong)(__return_storage_ptr__->Keys).ArrayMax * 0xc)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FRigElementKeyCollection *)(*pcVar4)();
          return pFVar7;
        }
      }
      iVar6 = (__return_storage_ptr__->Keys).ArrayNum;
      if (iVar6 == (__return_storage_ptr__->Keys).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->Keys).ArrayMax);
      }
      (__return_storage_ptr__->Keys).ArrayNum = iVar6 + 1;
      pFVar3 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0xc) = *(undefined8 *)pFVar8;
      *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = *(undefined4 *)(pFVar8 + 8);
    }
    pFVar8 = pFVar8 + 0xc;
  }
  return __return_storage_ptr__;
}

// MakeDifference @ 14a330300

FRigElementKeyCollection * __cdecl
FRigElementKeyCollection::MakeDifference
          (FRigElementKeyCollection *__return_storage_ptr__,FRigElementKeyCollection *param_1,
          FRigElementKeyCollection *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FRigElementKeyCollection *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Keys).ArrayNum = 0;
  (__return_storage_ptr__->Keys).ArrayMax = 0;
  iVar3 = (param_1->Keys).ArrayNum;
  pFVar9 = (param_1->Keys).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar3 * 0xc;
  do {
    if ((param_1->Keys).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) {
      return __return_storage_ptr__;
    }
    pFVar7 = (param_2->Keys).AllocatorInstance.Data;
    pFVar2 = pFVar7 + (longlong)(param_2->Keys).ArrayNum * 0xc;
    if (pFVar7 != pFVar2) {
      do {
        if ((*(longlong *)(pFVar7 + 4) == *(longlong *)(pFVar9 + 4)) && (*pFVar7 == *pFVar9))
        goto LAB_14a330435;
        pFVar7 = pFVar7 + 0xc;
      } while (pFVar7 != pFVar2);
    }
    pFVar2 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
    if ((pFVar2 <= pFVar9) &&
       (pFVar9 < pFVar2 + (longlong)(__return_storage_ptr__->Keys).ArrayMax * 0xc)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FRigElementKeyCollection *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar6 = (__return_storage_ptr__->Keys).ArrayNum;
    if (iVar6 == (__return_storage_ptr__->Keys).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)__return_storage_ptr__,
                         &(__return_storage_ptr__->Keys).ArrayMax);
    }
    (__return_storage_ptr__->Keys).ArrayNum = iVar6 + 1;
    pFVar2 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
    *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0xc) = *(undefined8 *)pFVar9;
    *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = *(undefined4 *)(pFVar9 + 8);
LAB_14a330435:
    pFVar9 = pFVar9 + 0xc;
  } while( true );
}

// MakeFromChain @ 14a330750

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyCollection * __cdecl
FRigElementKeyCollection::MakeFromChain
          (FRigElementKeyCollection *__return_storage_ptr__,URigHierarchy *param_1,
          FRigElementKey *param_2,FRigElementKey *param_3,bool param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  FRigBaseElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FRigElementKeyCollection *pFVar10;
  FRigBaseElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 local_58;
  FNameEntryId FStack_54;
  uint local_50;
  ulonglong local_48;
  uint local_40;
  FRigElementKey local_38;
  
  if ((param_1 == (URigHierarchy *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHierarchy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyDefines.cpp"
                         ,0x2be,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FRigElementKeyCollection *)(*pcVar5)();
    return pFVar10;
  }
  piVar1 = &(__return_storage_ptr__->Keys).ArrayMax;
  *piVar1 = 0;
  (__return_storage_ptr__->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Keys).ArrayNum = 0;
  iVar8 = URigHierarchy::GetIndex(param_1,param_2,true);
  iVar9 = URigHierarchy::GetIndex(param_1,param_3,true);
  if ((iVar8 != -1) && (iVar9 != -1)) {
    uVar15._0_1_ = param_3->Type;
    uVar15._1_3_ = *(undefined3 *)&param_3->field_0x1;
    uVar15._4_4_ = (param_3->Name).ComparisonIndex;
    local_50 = (param_3->Name).Number;
    while( true ) {
      local_58 = (undefined4)uVar15;
      FStack_54.Value = (uint)(uVar15 >> 0x20);
      bVar7 = ::FName::IsWithinBounds(FStack_54);
      FVar6.Number = local_50;
      FVar6.ComparisonIndex.Value = FStack_54.Value;
      if ((((!bVar7) || (FVar6 == (FName)0x0)) || (local_58._0_1_ == (FScriptContainerElement)0x0))
         || ((FVar6 == param_2->Name && (local_58._0_1_ == (FScriptContainerElement)param_2->Type)))
         ) break;
      pFVar13 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar13 + (longlong)*piVar1 * 0xc)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FRigElementKeyCollection *)(*pcVar5)();
        return pFVar10;
      }
      iVar8 = (__return_storage_ptr__->Keys).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)__return_storage_ptr__,piVar1);
      }
      (__return_storage_ptr__->Keys).ArrayNum = iVar8 + 1;
      pFVar13 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
      *(ulonglong *)(pFVar13 + (longlong)iVar8 * 0xc) = CONCAT44(FStack_54.Value,local_58);
      *(uint *)(pFVar13 + (longlong)iVar8 * 0xc + 8) = local_50;
      local_38.Name.ComparisonIndex.Value = FStack_54.Value;
      local_38._0_4_ = local_58;
      local_38.Name.Number = local_50;
      iVar8 = URigHierarchy::GetIndex(param_1,&local_38,true);
      pFVar11 = URigHierarchy::Get(param_1,iVar8);
      if (pFVar11 == (FRigBaseElement *)0x0) {
LAB_14a330972:
        local_48 = (local_48 >> 8 & 0xffffff) << 8;
        local_40 = 0;
        uVar15 = local_48;
        local_50 = 0;
      }
      else {
        bVar7 = FRigBaseElement::IsA<FRigSingleParentElement>(pFVar11);
        if (bVar7) {
          pFVar11 = pFVar11 + 3;
        }
        else {
          bVar7 = FRigBaseElement::IsA<FRigMultiParentElement>(pFVar11);
          if ((!bVar7) || (*(int *)&pFVar11[4].CachedNameString.Data.AllocatorInstance.Data < 1))
          goto LAB_14a330972;
          pFVar4 = (FRigBaseElement *)pFVar11[4].ComponentIndices.AllocatorInstance.Data;
          pFVar11 = pFVar11 + 3;
          if (pFVar4 != (FRigBaseElement *)0x0) {
            pFVar11 = pFVar4;
          }
        }
        lVar14 = pFVar11->_padding_;
        if (lVar14 == 0) goto LAB_14a330972;
        local_48 = *(ulonglong *)(lVar14 + 0x10);
        local_40 = *(uint *)(lVar14 + 0x18);
        uVar15 = local_48;
        local_50 = local_40;
      }
    }
    if ((FVar6 == param_2->Name) && (local_58._0_1_ == (FScriptContainerElement)param_2->Type)) {
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                (&__return_storage_ptr__->Keys,param_2);
    }
    else {
      (__return_storage_ptr__->Keys).ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
      }
    }
    if (!param_4) {
      iVar8 = (__return_storage_ptr__->Keys).ArrayNum;
      pFVar13 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
      iVar9 = iVar8 / 2;
      lVar14 = (longlong)iVar9;
      if (0 < iVar9) {
        pFVar12 = pFVar13 + (longlong)(iVar8 + -1) * 0xc;
        do {
          uVar2 = *(undefined8 *)pFVar13;
          uVar3 = *(undefined4 *)(pFVar13 + 8);
          *(undefined8 *)pFVar13 = *(undefined8 *)pFVar12;
          *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)(pFVar12 + 8);
          *(undefined8 *)pFVar12 = uVar2;
          *(undefined4 *)(pFVar12 + 8) = uVar3;
          lVar14 = lVar14 + -1;
          pFVar12 = pFVar12 + -0xc;
          pFVar13 = pFVar13 + 0xc;
        } while (lVar14 != 0);
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeFromChildren @ 14a330a60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyCollection * __cdecl
FRigElementKeyCollection::MakeFromChildren
          (FRigElementKeyCollection *__return_storage_ptr__,URigHierarchy *param_1,
          FRigElementKey *param_2,bool param_3,bool param_4,uchar param_5)

{
  FRigElementKey *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FRigElementKeyCollection *pFVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  URigHierarchy *local_res10;
  longlong local_78;
  FRigElementKey local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_48;
  
  uVar10 = 0;
  local_res10 = param_1;
  if ((param_1 == (URigHierarchy *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHierarchy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyDefines.cpp"
                         ,0x268,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FRigElementKeyCollection *)(*pcVar2)();
    return pFVar8;
  }
  (__return_storage_ptr__->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Keys).ArrayNum = 0;
  (__return_storage_ptr__->Keys).ArrayMax = 0;
  iVar4 = URigHierarchy::GetIndex(param_1,param_2,true);
  if (iVar4 != -1) {
    if (param_4) {
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                (&__return_storage_ptr__->Keys,param_2);
    }
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&local_58,(int *)((longlong)&local_50 + 4));
    iVar4 = iVar5 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar4);
    *(undefined8 *)(local_58.Data + (longlong)iVar5 * 0xc) = *(undefined8 *)param_2;
    *(uint *)(local_58.Data + (longlong)iVar5 * 0xc + 8) = (param_2->Name).Number;
    if (0 < iVar4) {
      local_78 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < iVar4) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FRigElementKeyCollection *)(*pcVar2)();
          return pFVar8;
        }
        local_68._0_8_ = *(undefined8 *)(local_58.Data + local_78);
        local_68.Name.Number = *(uint *)(local_58.Data + local_78 + 8);
        URigHierarchy::GetChildren(param_1,&local_48,&local_68,false);
        iVar4 = local_48.ArrayNum;
        pFVar1 = (FRigElementKey *)
                 (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0xc);
        FVar9.Data = local_48.AllocatorInstance.Data;
        while( true ) {
          if (local_48.ArrayNum != iVar4) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if ((FRigElementKey *)FVar9.Data == pFVar1) break;
          if ((((((FRigElementKey *)FVar9.Data)->Type & param_5) ==
                ((FRigElementKey *)FVar9.Data)->Type) &&
              (iVar5 = (__return_storage_ptr__->Keys).ArrayNum,
              iVar7 = TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::
                      AddUniqueImpl<FRigElementKey_const_&>
                                (&__return_storage_ptr__->Keys,(FRigElementKey *)FVar9.Data),
              iVar5 == iVar7)) && (param_3)) {
            if (((local_58.Data <= FVar9.Data) &&
                (FVar9.Data < (FRigElementKey *)(local_58.Data + (longlong)local_50._4_4_ * 0xc)))
               && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar3)) {
              pcVar2 = (code *)swi(3);
              pFVar8 = (FRigElementKeyCollection *)(*pcVar2)();
              return pFVar8;
            }
            iVar5 = (int)local_50;
            if ((int)local_50 == local_50._4_4_) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,&local_58,(int *)((longlong)&local_50 + 4));
            }
            local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
            *(undefined8 *)(local_58.Data + (longlong)iVar5 * 0xc) = *(undefined8 *)FVar9.Data;
            *(uint *)(local_58.Data + (longlong)iVar5 * 0xc + 8) =
                 (((FRigElementKey *)FVar9.Data)->Name).Number;
          }
          FVar9.Data = FVar9.Data + 0xc;
        }
        if ((FRigElementKey *)local_48.AllocatorInstance.Data != (FRigElementKey *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        uVar10 = uVar10 + 1;
        local_78 = local_78 + 0xc;
        param_1 = local_res10;
        iVar4 = (int)local_50;
      } while ((int)uVar10 < (int)local_50);
    }
    if ((FRigElementKey *)local_58.Data != (FRigElementKey *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  return __return_storage_ptr__;
}

// MakeFromCompleteHierarchy @ 14a330d30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyCollection * __cdecl
FRigElementKeyCollection::MakeFromCompleteHierarchy
          (FRigElementKeyCollection *__return_storage_ptr__,URigHierarchy *param_1,uchar param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  FRigElementKeyCollection *pFVar7;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_28;
  
  if (param_1 == (URigHierarchy *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHierarchy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyDefines.cpp"
                       ,0x2e7,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRigElementKeyCollection *)(*pcVar3)();
      return pFVar7;
    }
  }
  pTVar8 = URigHierarchy::GetAllKeys(param_1,&local_28,true,All);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = pTVar8->ArrayNum;
  lVar9 = (longlong)local_30;
  pFVar1 = (pTVar8->AllocatorInstance).Data;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,pFVar1,lVar9 * 0xc);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  iVar4 = local_30;
  (__return_storage_ptr__->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Keys).ArrayNum = 0;
  (__return_storage_ptr__->Keys).ArrayMax = 0;
  pFVar1 = local_38.Data + (longlong)local_30 * 0xc;
  FVar10.Data = local_38.Data;
  while( true ) {
    if (local_30 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar10.Data == pFVar1) break;
    if ((FScriptContainerElement)((byte)*FVar10.Data & param_2) == *FVar10.Data) {
      pFVar2 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
      if ((pFVar2 <= FVar10.Data) &&
         (FVar10.Data < pFVar2 + (longlong)(__return_storage_ptr__->Keys).ArrayMax * 0xc)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FRigElementKeyCollection *)(*pcVar3)();
          return pFVar7;
        }
      }
      iVar6 = (__return_storage_ptr__->Keys).ArrayNum;
      if (iVar6 == (__return_storage_ptr__->Keys).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->Keys).ArrayMax);
      }
      (__return_storage_ptr__->Keys).ArrayNum = iVar6 + 1;
      pFVar2 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
      *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0xc) = *(undefined8 *)FVar10.Data;
      *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = *(undefined4 *)(FVar10.Data + 8);
    }
    FVar10.Data = FVar10.Data + 0xc;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// MakeFromName @ 14a330f30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyCollection * __cdecl
FRigElementKeyCollection::MakeFromName
          (FRigElementKeyCollection *__return_storage_ptr__,URigHierarchy *param_1,FName *param_2,
          uchar param_3)

{
  code *pcVar1;
  ForAnyElementType _Src;
  int iVar2;
  bool bVar3;
  FRigElementKeyCollection *pFVar4;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType FVar6;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FString local_a8;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  uchar local_88;
  ForAnyElementType local_80;
  int local_74;
  uchar local_70;
  code *local_68;
  ForAnyElementType *local_60;
  code *local_58;
  ForAnyElementType *local_50;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_48;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_38;
  
  if (*param_2 == (FName)0x0) {
    MakeFromCompleteHierarchy(__return_storage_ptr__,param_1,param_3);
  }
  else {
    if ((param_1 == (URigHierarchy *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InHierarchy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyDefines.cpp"
                           ,0x2a1,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigElementKeyCollection *)(*pcVar1)();
      return pFVar4;
    }
    ::FName::ToString(param_2,&local_a8);
    iVar2 = local_a8.Data.ArrayNum;
    FVar6.Data = local_a8.Data.AllocatorInstance.Data;
    local_b0 = local_a8.Data.ArrayNum;
    local_b8.Data = (FScriptContainerElement *)0x0;
    if (local_a8.Data.ArrayNum == 0) {
      local_ac = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8.Data.ArrayNum,0,&local_b8,local_a8.Data.ArrayNum,&local_ac);
      memcpy(local_b8.Data,FVar6.Data,(longlong)iVar2 * 2);
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_b0 != 0) {
      FVar6.Data = local_b8.Data;
    }
    bVar3 = FWildcardString::ContainsWildcards((wchar_t *)FVar6.Data);
    _Src.Data = local_a8.Data.AllocatorInstance.Data;
    FVar6.Data = local_b8.Data;
    if (bVar3) {
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = local_b0;
      if (local_b0 == 0) {
        local_8c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_b0,0,&local_98,local_b0,&local_8c);
        memcpy(local_98.Data,FVar6.Data,(longlong)local_b0 * 2);
      }
      local_60 = &local_98;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FRigElementKeyCollection::MakeFromName'::__l15::<lambda_1>,bool,FRigBaseElement_const_&>
                 ::Call;
      local_88 = param_3;
      pTVar5 = URigHierarchy::GetKeysByPredicate
                         (param_1,&local_48,
                          (TFunctionRef<bool___cdecl(FRigBaseElement_const_&)> *)&local_68,true);
      FRigElementKeyCollection(__return_storage_ptr__,pTVar5);
      FVar6.Data = local_98.Data;
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
        FVar6.Data = local_98.Data;
      }
    }
    else {
      local_80.Data = (FScriptContainerElement *)0x0;
      if (local_a8.Data.ArrayNum == 0) {
        local_74 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a8.Data.ArrayNum,0,&local_80,local_a8.Data.ArrayNum,&local_74);
        memcpy(local_80.Data,_Src.Data,(longlong)local_a8.Data.ArrayNum * 2);
      }
      local_50 = &local_80;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FRigElementKeyCollection::MakeFromName'::__l2::<lambda_2>,bool,FRigBaseElement_const_&>
                 ::Call;
      local_70 = param_3;
      pTVar5 = URigHierarchy::GetKeysByPredicate
                         (param_1,&local_38,
                          (TFunctionRef<bool___cdecl(FRigBaseElement_const_&)> *)&local_58,true);
      FRigElementKeyCollection(__return_storage_ptr__,pTVar5);
      FVar6.Data = local_80.Data;
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
        FVar6.Data = local_80.Data;
      }
    }
    if (FVar6.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// MakeIntersection @ 14a3311d0

FRigElementKeyCollection * __cdecl
FRigElementKeyCollection::MakeIntersection
          (FRigElementKeyCollection *__return_storage_ptr__,FRigElementKeyCollection *param_1,
          FRigElementKeyCollection *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FRigElementKeyCollection *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Keys).ArrayNum = 0;
  (__return_storage_ptr__->Keys).ArrayMax = 0;
  iVar3 = (param_1->Keys).ArrayNum;
  pFVar9 = (param_1->Keys).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar3 * 0xc;
  do {
    while( true ) {
      if ((param_1->Keys).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar1) {
        return __return_storage_ptr__;
      }
      pFVar7 = (param_2->Keys).AllocatorInstance.Data;
      pFVar2 = pFVar7 + (longlong)(param_2->Keys).ArrayNum * 0xc;
      if (pFVar7 != pFVar2) break;
LAB_14a331307:
      pFVar9 = pFVar9 + 0xc;
    }
    do {
      if ((*(longlong *)(pFVar7 + 4) == *(longlong *)(pFVar9 + 4)) && (*pFVar7 == *pFVar9)) {
        pFVar2 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
        if ((pFVar2 <= pFVar9) &&
           (pFVar9 < pFVar2 + (longlong)(__return_storage_ptr__->Keys).ArrayMax * 0xc)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FRigElementKeyCollection *)(*pcVar4)();
            return pFVar8;
          }
        }
        iVar6 = (__return_storage_ptr__->Keys).ArrayNum;
        if (iVar6 == (__return_storage_ptr__->Keys).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,(ForAnyElementType *)__return_storage_ptr__,
                             &(__return_storage_ptr__->Keys).ArrayMax);
        }
        (__return_storage_ptr__->Keys).ArrayNum = iVar6 + 1;
        pFVar2 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
        *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0xc) = *(undefined8 *)pFVar9;
        *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = *(undefined4 *)(pFVar9 + 8);
        goto LAB_14a331307;
      }
      pFVar7 = pFVar7 + 0xc;
    } while (pFVar7 != pFVar2);
    pFVar9 = pFVar9 + 0xc;
  } while( true );
}

// MakeReversed @ 14a331430

FRigElementKeyCollection * __cdecl
FRigElementKeyCollection::MakeReversed
          (FRigElementKeyCollection *__return_storage_ptr__,FRigElementKeyCollection *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  FRigElementKeyCollection(__return_storage_ptr__,param_1);
  iVar2 = (__return_storage_ptr__->Keys).ArrayNum;
  pFVar6 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
  iVar4 = iVar2 / 2;
  lVar7 = (longlong)iVar4;
  if (0 < iVar4) {
    pFVar5 = pFVar6 + (longlong)(iVar2 + -1) * 0xc;
    do {
      uVar1 = *(undefined8 *)pFVar6;
      uVar3 = *(undefined4 *)(pFVar6 + 8);
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar5;
      *(undefined4 *)(pFVar6 + 8) = *(undefined4 *)(pFVar5 + 8);
      *(undefined8 *)pFVar5 = uVar1;
      *(undefined4 *)(pFVar5 + 8) = uVar3;
      lVar7 = lVar7 + -1;
      pFVar5 = pFVar5 + -0xc;
      pFVar6 = pFVar6 + 0xc;
    } while (lVar7 != 0);
  }
  return __return_storage_ptr__;
}

// MakeUnion @ 14a3314a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyCollection * __cdecl
FRigElementKeyCollection::MakeUnion
          (FRigElementKeyCollection *__return_storage_ptr__,FRigElementKeyCollection *param_1,
          FRigElementKeyCollection *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FRigElementKey *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FRigElementKey *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FRigElementKeyCollection *pFVar9;
  FScriptContainerElement *pFVar10;
  FRigElementKey *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  (__return_storage_ptr__->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Keys).ArrayNum = 0;
  (__return_storage_ptr__->Keys).ArrayMax = 0;
  iVar3 = (param_1->Keys).ArrayNum;
  pFVar10 = (param_1->Keys).AllocatorInstance.Data;
  pFVar1 = pFVar10 + (longlong)iVar3 * 0xc;
  while( true ) {
    if ((param_1->Keys).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    pFVar4 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
    if ((pFVar4 <= pFVar10) &&
       (pFVar10 < pFVar4 + (longlong)(__return_storage_ptr__->Keys).ArrayMax * 0xc)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FRigElementKeyCollection *)(*pcVar6)();
        return pFVar9;
      }
    }
    iVar8 = (__return_storage_ptr__->Keys).ArrayNum;
    if (iVar8 == (__return_storage_ptr__->Keys).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)__return_storage_ptr__,
                         &(__return_storage_ptr__->Keys).ArrayMax);
    }
    (__return_storage_ptr__->Keys).ArrayNum = iVar8 + 1;
    pFVar4 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0xc) = *(undefined8 *)pFVar10;
    *(undefined4 *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = *(undefined4 *)(pFVar10 + 8);
    pFVar10 = pFVar10 + 0xc;
  }
  iVar3 = (param_2->Keys).ArrayNum;
  pFVar11 = (FRigElementKey *)(param_2->Keys).AllocatorInstance.Data;
  pFVar2 = pFVar11 + iVar3;
  while( true ) {
    if ((param_2->Keys).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar11 == pFVar2) break;
    if (param_3) {
      pFVar5 = (FRigElementKey *)(__return_storage_ptr__->Keys).AllocatorInstance.Data;
      if ((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (__return_storage_ptr__->Keys).ArrayMax)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FRigElementKeyCollection *)(*pcVar6)();
          return pFVar9;
        }
      }
      iVar8 = (__return_storage_ptr__->Keys).ArrayNum;
      if (iVar8 == (__return_storage_ptr__->Keys).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->Keys).ArrayMax);
      }
      (__return_storage_ptr__->Keys).ArrayNum = iVar8 + 1;
      pFVar1 = (__return_storage_ptr__->Keys).AllocatorInstance.Data;
      *(undefined8 *)(pFVar1 + (longlong)iVar8 * 0xc) = *(undefined8 *)pFVar11;
      *(uint *)(pFVar1 + (longlong)iVar8 * 0xc + 8) = (pFVar11->Name).Number;
      pFVar11 = pFVar11 + 1;
    }
    else {
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                (&__return_storage_ptr__->Keys,pFVar11);
      pFVar11 = pFVar11 + 1;
    }
  }
  return __return_storage_ptr__;
}

// operator= @ 14a519ea0

FRigElementKeyCollection * __thiscall
FRigElementKeyCollection::operator=
          (FRigElementKeyCollection *this,FRigElementKeyCollection *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->Keys).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Keys).AllocatorInstance.Data = (param_1->Keys).AllocatorInstance.Data;
    (param_1->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Keys).ArrayNum = (param_1->Keys).ArrayNum;
    (this->Keys).ArrayMax = (param_1->Keys).ArrayMax;
    (param_1->Keys).ArrayNum = 0;
    (param_1->Keys).ArrayMax = 0;
  }
  return this;
}

// operator[] @ 14a51b230

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
FRigElementKeyCollection::operator[](FRigElementKeyCollection *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigElementKey *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Keys).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigElementKey *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRigElementKey *)((this->Keys).AllocatorInstance.Data + (longlong)param_1 * 0xc);
}

// Add @ 14a51e050

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigElementKeyCollection::Add(FRigElementKeyCollection *this,FRigElementKey *param_1)

{
  int *piVar1;
  FRigElementKey *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pFVar2 = (FRigElementKey *)(this->Keys).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Keys).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = (this->Keys).ArrayNum;
  piVar1 = &(this->Keys).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->Keys).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Keys).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0xc) = *(undefined8 *)param_1;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = (param_1->Name).Number;
  return iVar6;
}

