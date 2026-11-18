// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 38

// CategoryViews @ 14a0bc8e0

CategoryViews * __thiscall
FRigVMTemplateArgument::CategoryViews::CategoryViews
          (CategoryViews *this,
          TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *param_1,
          FRigVMRegistryHandle *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  CategoryViews *pCVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  piVar1 = &(this->Types).ArrayMax;
  (this->Types).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar3,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar2 = pFVar10 + iVar4;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<enum_FRigVMTemplateArgument::ETypeCategory_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar2) break;
    puVar8 = (undefined8 *)
             (**(code **)(param_2->Registry->_padding_ + 0x140))(param_2->Registry,*pFVar10);
    iVar7 = (this->Types).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->Types).ArrayNum = iVar7 + 1;
    pFVar11 = (this->Types).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar11 = *puVar8;
    iVar7 = *(int *)(puVar8 + 1);
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pCVar9 = (CategoryViews *)(*pcVar5)();
        return pCVar9;
      }
    }
    *(int *)(pFVar11 + 8) = iVar7;
    pFVar10 = pFVar10 + 1;
  }
  return this;
}

// FRigVMTemplateArgument @ 14a0c0890

FRigVMTemplateArgument * __thiscall
FRigVMTemplateArgument::FRigVMTemplateArgument
          (FRigVMTemplateArgument *this,FProperty *param_1,FRigVMRegistryHandle *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  FRigVMTemplateArgument *pFVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  UObject *pUVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  undefined8 local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined8 local_70;
  FString local_68;
  FName local_58;
  UObject *local_50;
  FString local_48;
  FString local_38;
  
  this->Index = -1;
  bVar5 = IsThisNotNull(param_1,"FField::GetFName");
  pUVar10 = (UObject *)0x0;
  if (bVar5) {
    uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    (this->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
    (this->Name).Number = uVar4;
  }
  else {
    (this->Name).ComparisonIndex = 0;
    (this->Name).Number = 0;
  }
  this->Direction = IO;
  pwVar12 = L"";
  (this->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeIndices).ArrayNum = 0;
  (this->TypeIndices).ArrayMax = 0;
  this->bUseCategories = false;
  (this->TypeCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeCategories).ArrayNum = 0;
  (this->TypeCategories).ArrayMax = 0;
  *(undefined8 *)&this->FilterType = 0;
  *(undefined8 *)&(this->FilterType).field_0x28 = 0;
  (this->CachedArrayType).bIsSet = false;
  if (param_1 == (FProperty *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMTypeUtils.h"
                       ,0x1ca,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRigVMTemplateArgument *)(*pcVar3)();
      return pFVar7;
    }
  }
  local_78 = (wchar_t *)0x0;
  local_70 = 0;
  (**(code **)(param_1->_padding_ + 0x68))(param_1,&local_68,&local_78);
  iVar6 = (int)local_70 + -1;
  if ((int)local_70 == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars(&local_68,local_78,iVar6);
  RigVMTypeUtils::CleanupCPPType(&local_68);
  if (local_78 != (wchar_t *)0x0) {
    FMemory::Free(local_78);
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar9.Data = local_68.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,(wchar_t *)FVar9.Data);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) != 0) {
    param_1 = (FProperty *)param_1[1]._padding_;
  }
  local_50 = (UObject *)0x0;
  if (param_1 == (FProperty *)0x0) goto LAB_14a0c0a0c;
  lVar1 = param_1->_padding_;
  if ((*(uint *)(lVar1 + 0x18) >> 0x14 & 1) == 0) {
    if (param_1 == (FProperty *)0x0) goto LAB_14a0c0a0c;
    if ((*(ulonglong *)(lVar1 + 0x18) & 0x1000000000000) != 0) {
      local_50 = (UObject *)param_1[1]._padding_;
      goto LAB_14a0c0a0c;
    }
    if ((*(byte *)(lVar1 + 0x18) & 0x40) == 0) {
      local_50 = pUVar10;
      if ((*(uint *)(lVar1 + 0x18) >> 10 & 1) != 0) {
        bVar5 = RigVMCore::SupportsUObjects();
        if (bVar5) {
          local_50 = (UObject *)param_1[1]._padding_;
        }
        goto LAB_14a0c0a0c;
      }
      if ((*(uint *)(lVar1 + 0x18) >> 0x10 & 1) == 0) goto LAB_14a0c0a0c;
      bVar5 = RigVMCore::SupportsUObjects();
      if (!bVar5) goto LAB_14a0c0a0c;
    }
  }
  local_50 = (UObject *)param_1[1]._padding_;
LAB_14a0c0a0c:
  local_58 = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_50);
  }
  ::FName::ToString(&local_58,&local_48);
  pFVar8 = RigVMTypeUtils::PostProcessCPPType
                     (&local_38,&local_48,local_50,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res18,pwVar12);
  local_58 = local_res18;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  (**(code **)(param_2->Registry->_padding_ + 0xc0))(param_2->Registry,&local_88,&local_58,1);
  pFVar2 = (this->TypeIndices).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)(this->TypeIndices).ArrayMax * 0xc))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRigVMTemplateArgument *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (this->TypeIndices).ArrayNum;
  if (iVar6 == (this->TypeIndices).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->TypeIndices).AllocatorInstance,&(this->TypeIndices).ArrayMax);
  }
  (this->TypeIndices).ArrayNum = iVar6 + 1;
  pFVar2 = (this->TypeIndices).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0xc) = local_88;
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_80;
  iVar6 = (this->TypeIndices).ArrayNum;
  pFVar11 = (this->TypeIndices).AllocatorInstance.Data;
  pFVar2 = pFVar11 + (longlong)iVar6 * 0xc;
  while( true ) {
    if ((this->TypeIndices).ArrayNum != iVar6) {
      `TCheckedPointerIterator<TRigVMTypeIndex,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar2) break;
    (**(code **)(param_2->Registry->_padding_ + 0x118))(param_2->Registry,pFVar11);
    pFVar11 = pFVar11 + 0xc;
  }
  return this;
}

// FRigVMTemplateArgument @ 14a0c0bb0

FRigVMTemplateArgument * __thiscall
FRigVMTemplateArgument::FRigVMTemplateArgument
          (FRigVMTemplateArgument *this,FRigVMTemplateArgument *param_1)

{
  ERigVMPinDirection EVar1;
  bool bVar2;
  undefined8 uVar3;
  
  this->Index = param_1->Index;
  this->Name = param_1->Name;
  EVar1 = param_1->Direction;
  (this->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Direction = EVar1;
  (this->TypeIndices).AllocatorInstance.Data = (param_1->TypeIndices).AllocatorInstance.Data;
  (param_1->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeIndices).ArrayNum = (param_1->TypeIndices).ArrayNum;
  (this->TypeIndices).ArrayMax = (param_1->TypeIndices).ArrayMax;
  (param_1->TypeIndices).ArrayNum = 0;
  (param_1->TypeIndices).ArrayMax = 0;
  bVar2 = param_1->bUseCategories;
  (this->TypeCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bUseCategories = bVar2;
  (this->TypeCategories).AllocatorInstance.Data = (param_1->TypeCategories).AllocatorInstance.Data;
  (param_1->TypeCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeCategories).ArrayNum = (param_1->TypeCategories).ArrayNum;
  (this->TypeCategories).ArrayMax = (param_1->TypeCategories).ArrayMax;
  (param_1->TypeCategories).ArrayNum = 0;
  (param_1->TypeCategories).ArrayMax = 0;
  *(undefined8 *)&this->FilterType = *(undefined8 *)&param_1->FilterType;
  *(undefined8 *)&(this->FilterType).field_0x28 = *(undefined8 *)&(param_1->FilterType).field_0x28;
  *(undefined8 *)&(param_1->FilterType).field_0x28 = 0;
  uVar3 = *(undefined8 *)&(param_1->FilterType).field_0x18;
  *(undefined8 *)&(this->FilterType).field_0x10 = *(undefined8 *)&(param_1->FilterType).field_0x10;
  *(undefined8 *)&(this->FilterType).field_0x18 = uVar3;
  *(undefined8 *)&(this->FilterType).field_0x20 = *(undefined8 *)&(param_1->FilterType).field_0x20;
  if (*(longlong *)&this->FilterType != 0) {
    *(undefined8 *)&param_1->FilterType = 0;
  }
  (this->CachedArrayType).bIsSet = false;
  bVar2 = (param_1->CachedArrayType).bIsSet;
  (this->CachedArrayType).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->CachedArrayType).TypedValue = (param_1->CachedArrayType).TypedValue;
  }
  return this;
}

// FRigVMTemplateArgument @ 14a0c0c60

FRigVMTemplateArgument * __thiscall
FRigVMTemplateArgument::FRigVMTemplateArgument
          (FRigVMTemplateArgument *this,FRigVMTemplateArgument *param_1)

{
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  pTVar1 = &this->TypeIndices;
  this->Index = param_1->Index;
  this->Name = param_1->Name;
  this->Direction = param_1->Direction;
  piVar2 = &(this->TypeIndices).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->TypeIndices).ArrayNum;
  pFVar6 = (param_1->TypeIndices).AllocatorInstance.Data;
  (this->TypeIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0xc);
  }
  pTVar3 = &this->TypeCategories;
  this->bUseCategories = param_1->bUseCategories;
  piVar2 = &(this->TypeCategories).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->TypeCategories).ArrayNum;
  pFVar6 = (param_1->TypeCategories).AllocatorInstance.Data;
  (this->TypeCategories).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5);
  }
  lVar7 = *(longlong *)&param_1->FilterType;
  *(longlong *)&this->FilterType = lVar7;
  *(undefined8 *)&(this->FilterType).field_0x28 = 0;
  if (lVar7 != 0) {
    puVar8 = *(undefined8 **)&(param_1->FilterType).field_0x28;
    puVar9 = (undefined8 *)&(param_1->FilterType).field_0x10;
    if (puVar8 != (undefined8 *)0x0) {
      puVar9 = puVar8;
    }
    (**(code **)*puVar9)();
  }
  (this->CachedArrayType).bIsSet = false;
  bVar4 = (param_1->CachedArrayType).bIsSet;
  (this->CachedArrayType).bIsSet = bVar4;
  if (bVar4 != false) {
    (this->CachedArrayType).TypedValue = (param_1->CachedArrayType).TypedValue;
  }
  return this;
}

// FRigVMTemplateArgument @ 14a0c0db0

FRigVMTemplateArgument * __thiscall
FRigVMTemplateArgument::FRigVMTemplateArgument
          (FRigVMTemplateArgument *this,FName *param_1,ERigVMPinDirection param_2)

{
  this->Index = -1;
  this->Name = *param_1;
  (this->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeIndices).ArrayNum = 0;
  (this->TypeIndices).ArrayMax = 0;
  this->bUseCategories = false;
  (this->TypeCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeCategories).ArrayNum = 0;
  (this->TypeCategories).ArrayMax = 0;
  *(undefined8 *)&this->FilterType = 0;
  *(undefined8 *)&(this->FilterType).field_0x28 = 0;
  (this->CachedArrayType).bIsSet = false;
  this->Direction = param_2;
  return this;
}

// FRigVMTemplateArgument @ 14a0c0df0

FRigVMTemplateArgument * __thiscall
FRigVMTemplateArgument::FRigVMTemplateArgument
          (FRigVMTemplateArgument *this,FName *param_1,ERigVMPinDirection param_2,
          TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *param_3,FRigVMRegistryHandle *param_4
          )

{
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRigVMTemplateArgument *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  
  this->Index = -1;
  pTVar1 = &this->TypeIndices;
  this->Name = *param_1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TypeIndices).ArrayMax;
  this->Direction = param_2;
  iVar3 = param_3->ArrayNum;
  pFVar4 = (param_3->AllocatorInstance).Data;
  (this->TypeIndices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0xc);
  }
  this->bUseCategories = false;
  (this->TypeCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeCategories).ArrayNum = 0;
  (this->TypeCategories).ArrayMax = 0;
  *(undefined8 *)&this->FilterType = 0;
  *(undefined8 *)&(this->FilterType).field_0x28 = 0;
  (this->CachedArrayType).bIsSet = false;
  if ((this->TypeIndices).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndices.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x89,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FRigVMTemplateArgument *)(*pcVar5)();
      return pFVar7;
    }
  }
  iVar3 = (this->TypeIndices).ArrayNum;
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  pFVar4 = pFVar8 + (longlong)iVar3 * 0xc;
  while( true ) {
    if ((this->TypeIndices).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TRigVMTypeIndex,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar8 == pFVar4) break;
    (**(code **)(param_4->Registry->_padding_ + 0x118))(param_4->Registry,pFVar8);
    pFVar8 = pFVar8 + 0xc;
  }
  return this;
}

// FRigVMTemplateArgument @ 14a0c0f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMTemplateArgument * __thiscall
FRigVMTemplateArgument::FRigVMTemplateArgument
          (FRigVMTemplateArgument *this,FName *param_1,ERigVMPinDirection param_2,
          TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *param_3,
          TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> *param_4,
          FRigVMRegistryHandle *param_5)

{
  TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  FRigVMTemplateArgument *pFVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  uint uVar14;
  undefined8 *puVar15;
  ForAnyElementType FVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar23;
  bool bVar24;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176;
  undefined1 local_175 [5];
  ForAnyElementType local_170;
  undefined8 local_168;
  undefined4 local_160;
  int local_15c;
  ForAnyElementType local_158;
  undefined8 local_150;
  ForAnyElementType local_148;
  undefined8 local_140;
  undefined1 local_138 [8];
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> local_130;
  int local_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_118;
  undefined4 local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  FRigVMTemplateArgument *local_100;
  FRigVMRegistryHandle *local_f8;
  undefined4 local_f0;
  int local_ec;
  undefined1 local_e8 [16];
  TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar23 = &this->TypeIndices;
  this->Index = -1;
  pTVar1 = &this->TypeCategories;
  this->Name = *param_1;
  piVar2 = &(this->TypeCategories).ArrayMax;
  this->Direction = param_2;
  (pTVar23->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->TypeIndices).ArrayNum = 0;
  (this->TypeIndices).ArrayMax = 0;
  this->bUseCategories = false;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar17 = param_3->ArrayNum;
  pFVar3 = (param_3->AllocatorInstance).Data;
  local_d8 = param_4;
  local_f8 = param_5;
  (this->TypeCategories).ArrayNum = iVar17;
  local_100 = this;
  local_e8._8_8_ = pTVar23;
  if (iVar17 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar17,0,&pTVar1->AllocatorInstance,iVar17,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar3,(longlong)iVar17);
  }
  uVar14 = 0;
  lVar7 = *(longlong *)param_4;
  *(longlong *)&this->FilterType = lVar7;
  *(undefined8 *)&(this->FilterType).field_0x28 = 0;
  if (lVar7 != 0) {
    puVar12 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar12 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar12)();
  }
  iVar17 = (this->TypeCategories).ArrayNum;
  (this->CachedArrayType).bIsSet = false;
  if (iVar17 < 1) goto LAB_14a0c1846;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar17,&local_158,0,(int *)((longlong)&local_150 + 4));
  if (local_168._4_4_ < iVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar17,&local_170,(int)local_168,(int *)((longlong)&local_168 + 4));
  }
  bVar24 = iVar17 == 1;
  this->bUseCategories = bVar24;
  if (!bVar24) {
    iVar17 = (this->TypeCategories).ArrayNum;
    pFVar18 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar18 + iVar17;
    while( true ) {
      if ((this->TypeCategories).ArrayNum != iVar17) {
        local_178 = 0;
        `TCheckedPointerIterator<enum_FRigVMTemplateArgument::ETypeCategory,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_178);
      }
      if (pFVar18 == pFVar3) break;
      lVar7 = (**(code **)(param_5->Registry->_padding_ + 0x140))(param_5->Registry,*pFVar18);
      uVar14 = uVar14 + *(int *)(lVar7 + 8);
      pFVar18 = pFVar18 + 1;
    }
    if ((uint)(local_98._8_4_ - local_64) < uVar14) {
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
      }
      TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_98,uVar14);
      if (uVar14 < 4) {
        uVar14 = 1;
      }
      else {
        uVar20 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_f0 = (undefined4)lVar7;
        uVar14 = 1 << ((byte)lVar7 & 0x1f);
      }
      if ((local_50 == 0) || ((int)local_50 < (int)uVar14)) {
        local_50 = uVar14;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar14 != 0) {
          uVar19 = uVar14;
          if (uVar14 < 2) {
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              uVar19 = 0;
              goto LAB_14a0c1198;
            }
          }
          else {
LAB_14a0c1198:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar19,4);
          }
          if (0 < (int)uVar14) {
            uVar20 = 0;
            uVar21 = (ulonglong)uVar14;
            do {
              FVar16.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar16.Data = local_58.Data;
              }
              uVar8 = (longlong)(int)uVar14 - 1U & uVar20;
              uVar20 = uVar20 + 1;
              *(undefined4 *)(FVar16.Data + uVar8 * 4) = 0xffffffff;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
        }
        if (local_50 != 0) {
          pTStack_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          uStack_11c = 1;
          local_120 = 0;
          iStack_10c = 0;
          iStack_108 = 0;
          if (local_70 != 0) {
            FVar22 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar22 = local_78;
            }
            uVar14 = *(uint *)FVar22;
            local_120 = 0;
            while (uVar14 == 0) {
              iStack_108 = iStack_108 + 0x20;
              lVar7 = (longlong)local_120;
              local_120 = local_120 + 1;
              if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_120)
              goto LAB_14a0c129d;
              uVar14 = ((uint *)((longlong)FVar22 + 4))[lVar7];
            }
            uStack_11c = -uVar14 & uVar14;
            uVar20 = (ulonglong)uStack_11c * 2 + 1;
            lVar7 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            local_ec = (int)lVar7;
            iStack_10c = local_ec + -1 + iStack_108;
            if (local_70 < iStack_10c) {
LAB_14a0c129d:
              iStack_10c = local_70;
            }
          }
          local_110 = 0xffffffff;
          local_c0 = (longlong *)local_98;
          local_b8._padding_ = CONCAT44(uStack_11c,local_120);
          local_b8.CurrentBitIndex = iStack_10c;
          local_b8.UnvisitedBitMask = 0xffffffff;
          local_b8._28_4_ = uStack_104;
          local_b8.BaseBitIndex = iStack_108;
          iVar17 = iStack_10c;
          local_b8.Array = pTStack_118;
          if (iStack_10c < local_70) {
            do {
              uVar14 = local_50 - 1 & *(uint *)(*local_c0 + 8 + (longlong)iVar17 * 0x14);
              lVar7 = *local_c0 + (longlong)iVar17 * 0x14;
              *(uint *)(lVar7 + 0x10) = uVar14;
              FVar16.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar16.Data = local_58.Data;
              }
              uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar14;
              *(undefined4 *)(lVar7 + 0xc) = *(undefined4 *)(FVar16.Data + uVar20 * 4);
              *(int *)(FVar16.Data + uVar20 * 4) = iVar17;
              local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
              iVar17 = local_b8.CurrentBitIndex;
            } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
          }
        }
      }
    }
    pFVar18 = (pTVar1->AllocatorInstance).Data;
    iVar17 = (this->TypeCategories).ArrayNum;
    pFVar3 = pFVar18 + iVar17;
    while( true ) {
      if ((local_100->TypeCategories).ArrayNum != iVar17) {
        local_177 = 0;
        `TCheckedPointerIterator<enum_FRigVMTemplateArgument::ETypeCategory,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_177);
      }
      if (pFVar18 == pFVar3) break;
      puVar9 = (undefined8 *)
               (**(code **)(local_f8->Registry->_padding_ + 0x140))(local_f8->Registry,*pFVar18);
      iVar6 = *(int *)(puVar9 + 1);
      puVar15 = (undefined8 *)*puVar9;
      puVar12 = (undefined8 *)((longlong)puVar15 + (longlong)iVar6 * 0xc);
      while( true ) {
        if (*(int *)(puVar9 + 1) != iVar6) {
          local_176 = 0;
          `TCheckedPointerIterator<TRigVMTypeIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_176);
        }
        if (puVar15 == puVar12) break;
        local_d0 = *puVar15;
        local_c8 = *(undefined4 *)(puVar15 + 1);
        TSet<TRigVMTypeIndex,DefaultKeyFuncs<TRigVMTypeIndex,0>,FDefaultSetAllocator>::
        Emplace<TRigVMTypeIndex_const_&>
                  ((TSet<TRigVMTypeIndex,DefaultKeyFuncs<TRigVMTypeIndex,0>,FDefaultSetAllocator> *)
                   local_98,(TRigVMTypeIndex *)local_e8,(bool *)&local_d0);
        puVar15 = (undefined8 *)((longlong)puVar15 + 0xc);
      }
      local_160 = *(undefined4 *)(puVar9 + 1);
      if (((local_170.Data <= (FScriptContainerElement *)&local_160) &&
          ((FScriptContainerElement *)&local_160 < local_170.Data + (longlong)local_168._4_4_ * 4))
         && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar24)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FRigVMTemplateArgument *)(*pcVar4)();
        return pFVar10;
      }
      iVar6 = (int)local_168;
      if ((int)local_168 == local_168._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_170,(int *)((longlong)&local_168 + 4));
      }
      local_168 = CONCAT44(local_168._4_4_,iVar6 + 1);
      *(undefined4 *)(local_170.Data + (longlong)iVar6 * 4) = local_160;
      local_15c = local_98._8_4_ - local_64;
      if (((local_158.Data <= (FScriptContainerElement *)&local_15c) &&
          ((FScriptContainerElement *)&local_15c < local_158.Data + (longlong)local_150._4_4_ * 4))
         && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar24)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FRigVMTemplateArgument *)(*pcVar4)();
        return pFVar10;
      }
      iVar6 = (int)local_150;
      if ((int)local_150 == local_150._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_158,(int *)((longlong)&local_150 + 4));
      }
      pFVar18 = pFVar18 + 1;
      local_150 = CONCAT44(local_150._4_4_,iVar6 + 1);
      *(int *)(local_158.Data + (longlong)iVar6 * 4) = local_15c;
    }
    iVar17 = 0;
    if (((int)local_150 < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FRigVMTemplateArgument *)(*pcVar4)();
      return pFVar10;
    }
    FVar16.Data = local_158.Data;
    uVar20 = (ulonglong)(int)local_168;
    if ((int)local_168 < 1) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar24) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FRigVMTemplateArgument *)(*pcVar4)();
        return pFVar10;
      }
      uVar20 = local_168 & 0xffffffff;
    }
    if (*(int *)local_170.Data == *(int *)FVar16.Data) {
      iVar6 = (int)uVar20;
      pFVar3 = local_170.Data + (longlong)iVar6 * 4;
      FVar16.Data = local_170.Data;
      while( true ) {
        if ((int)uVar20 != iVar6) {
          local_175[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_175);
          uVar20 = local_168 & 0xffffffff;
        }
        if (FVar16.Data == pFVar3) break;
        iVar17 = iVar17 + *(int *)FVar16.Data;
        FVar16.Data = FVar16.Data + 4;
      }
      if (iVar17 != local_98._8_4_ - local_64) goto LAB_14a0c15f4;
      bVar24 = true;
    }
    else {
LAB_14a0c15f4:
      bVar24 = false;
    }
    local_100->bUseCategories = bVar24;
    param_5 = local_f8;
    pTVar23 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)local_e8._8_8_;
    this = local_100;
  }
  if (bVar24 == false) {
    TSet<TRigVMTypeIndex,DefaultKeyFuncs<TRigVMTypeIndex,0>,FDefaultSetAllocator>::Array
              ((TSet<TRigVMTypeIndex,DefaultKeyFuncs<TRigVMTypeIndex,0>,FDefaultSetAllocator> *)
               local_98,&local_130);
    if (*(longlong *)&this->FilterType != 0) {
      local_148.Data = (FScriptContainerElement *)0x0;
      local_140._0_4_ = 0;
      local_140._4_4_ = 0;
      pFVar3 = local_130.AllocatorInstance.Data + (longlong)local_130.ArrayNum * 0xc;
      if (local_130.AllocatorInstance.Data != pFVar3) {
        FVar16.Data = local_130.AllocatorInstance.Data;
        do {
          UE::Core::Private::Function::CheckCallable(*(void **)&this->FilterType);
          plVar13 = *(longlong **)&(this->FilterType).field_0x28;
          pcVar4 = *(code **)&this->FilterType;
          if (plVar13 == (longlong *)0x0) {
            plVar13 = (longlong *)&(this->FilterType).field_0x10;
          }
          uVar11 = (**(code **)(*plVar13 + 8))();
          cVar5 = (*pcVar4)(uVar11,FVar16.Data,param_5);
          if (cVar5 != '\0') {
            if (((local_148.Data <= FVar16.Data) &&
                (FVar16.Data < local_148.Data + (longlong)local_140._4_4_ * 0xc)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar24)) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FRigVMTemplateArgument *)(*pcVar4)();
              return pFVar10;
            }
            iVar17 = (int)local_140;
            if ((int)local_140 == local_140._4_4_) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&local_148,(int *)((longlong)&local_140 + 4));
            }
            local_140._0_4_ = iVar17 + 1;
            *(undefined8 *)(local_148.Data + (longlong)iVar17 * 0xc) = *(undefined8 *)FVar16.Data;
            *(undefined4 *)(local_148.Data + (longlong)iVar17 * 0xc + 8) =
                 *(undefined4 *)(FVar16.Data + 8);
          }
          FVar16.Data = FVar16.Data + 0xc;
        } while (FVar16.Data != pFVar3);
        pTVar23 = &this->TypeIndices;
      }
      if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.AllocatorInstance.Data);
      }
      local_130.AllocatorInstance.Data = local_148.Data;
      local_130.ArrayNum = (int)local_140;
      local_130.ArrayMax = local_140._4_4_;
    }
    if (pTVar23 != &local_130) {
      pFVar3 = (pTVar23->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar23->AllocatorInstance).Data = local_130.AllocatorInstance.Data;
      pTVar23->ArrayNum = local_130.ArrayNum;
      pTVar23->ArrayMax = local_130.ArrayMax;
      local_130.ArrayNum = 0;
      local_130.ArrayMax = 0;
      local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    iVar17 = pTVar23->ArrayNum;
    pFVar18 = (pTVar23->AllocatorInstance).Data;
    pFVar3 = pFVar18 + (longlong)iVar17 * 0xc;
    while( true ) {
      if (pTVar23->ArrayNum != iVar17) {
        `TCheckedPointerIterator<TRigVMTypeIndex,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_138);
      }
      if (pFVar18 == pFVar3) break;
      (**(code **)(param_5->Registry->_padding_ + 0x118))(param_5->Registry,pFVar18);
      pFVar18 = pFVar18 + 0xc;
    }
    if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
  }
  else {
    pTVar23->ArrayNum = 0;
    if (pTVar23->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&pTVar23->AllocatorInstance,0,&pTVar23->ArrayMax);
    }
  }
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  if (local_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TRigVMTypeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TRigVMTypeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TRigVMTypeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  param_4 = local_d8;
LAB_14a0c1846:
  if (*(longlong *)param_4 != 0) {
    plVar13 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return this;
}

// FRigVMTemplateArgument @ 14a0c18a0

FRigVMTemplateArgument * __thiscall
FRigVMTemplateArgument::FRigVMTemplateArgument
          (FRigVMTemplateArgument *this,FName *param_1,ERigVMPinDirection param_2,
          TRigVMTypeIndex *param_3,FRigVMRegistryHandle *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res18 [8];
  TRigVMTypeIndex local_38;
  undefined1 local_2c [4];
  initializer_list<TRigVMTypeIndex> local_28;
  
  local_38.Name = param_3->Name;
  this->Index = -1;
  this->Name = *param_1;
  local_38.Index = param_3->Index;
  local_28._First = &local_38;
  local_28._Last = (TRigVMTypeIndex *)local_2c;
  this->Direction = param_2;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>
            (&this->TypeIndices,(initializer_list<TRigVMTypeIndex> *)(local_2c + 4));
  (this->TypeCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeCategories).ArrayNum = 0;
  (this->TypeCategories).ArrayMax = 0;
  *(undefined8 *)&this->FilterType = 0;
  *(undefined8 *)&(this->FilterType).field_0x28 = 0;
  (this->CachedArrayType).bIsSet = false;
  this->bUseCategories = false;
  iVar2 = (this->TypeIndices).ArrayNum;
  pFVar3 = (this->TypeIndices).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->TypeIndices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRigVMTypeIndex,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(param_4->Registry->_padding_ + 0x118))(param_4->Registry,pFVar3);
    pFVar3 = pFVar3 + 0xc;
  }
  return this;
}

// FRigVMTemplateArgument @ 14a0c1980

FRigVMTemplateArgument * __thiscall
FRigVMTemplateArgument::FRigVMTemplateArgument(FRigVMTemplateArgument *this)

{
  this->Index = -1;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeIndices).ArrayNum = 0;
  (this->TypeIndices).ArrayMax = 0;
  this->bUseCategories = false;
  (this->TypeCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeCategories).ArrayNum = 0;
  (this->TypeCategories).ArrayMax = 0;
  *(undefined8 *)&this->FilterType = 0;
  *(undefined8 *)&(this->FilterType).field_0x28 = 0;
  (this->CachedArrayType).bIsSet = false;
  this->Direction = IO;
  return this;
}

// operator() @ 14a0c9170

bool __thiscall
`FRigVMTemplateArgument::GetNumTypes'::__l8::<lambda_1>::operator()
          (void *this,TRigVMTypeIndex *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)this;
  uVar2 = *(undefined8 *)((longlong)this + 0x10);
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x40));
  pcVar3 = *(code **)(lVar1 + 0x40);
  plVar6 = (longlong *)(lVar1 + 0x50);
  if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar1 + 0x68);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar4 = (*pcVar3)(uVar5,param_1,uVar2);
  if (cVar4 != '\0') {
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  }
  return true;
}

// operator() @ 14a0c9200

bool __thiscall
`FRigVMTemplateArgument::GetNumTypes_NoLock'::__l8::<lambda_1>::operator()
          (void *this,TRigVMTypeIndex *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)this;
  uVar2 = *(undefined8 *)((longlong)this + 0x10);
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x40));
  pcVar3 = *(code **)(lVar1 + 0x40);
  plVar6 = (longlong *)(lVar1 + 0x50);
  if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar1 + 0x68);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar4 = (*pcVar3)(uVar5,param_1,uVar2);
  if (cVar4 != '\0') {
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  }
  return true;
}

// operator() @ 14a0c9480

bool __thiscall
`FRigVMTemplateArgument::GetTypeIndex_NoLock'::__l11::<lambda_1>::operator()
          (void *this,TRigVMTypeIndex *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  FName *pFVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  lVar2 = *(longlong *)this;
  uVar3 = *(undefined8 *)((longlong)this + 0x20);
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar2 + 0x40));
  pcVar4 = *(code **)(lVar2 + 0x40);
  plVar8 = (longlong *)(lVar2 + 0x50);
  if (*(longlong **)(lVar2 + 0x68) != (longlong *)0x0) {
    plVar8 = *(longlong **)(lVar2 + 0x68);
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  cVar6 = (*pcVar4)(uVar7,param_1,uVar3);
  if (cVar6 != '\0') {
    iVar1 = **(int **)((longlong)this + 8);
    if (iVar1 == *(int *)((longlong)this + 0x10)) {
      pFVar5 = *(FName **)((longlong)this + 0x18);
      *pFVar5 = param_1->Name;
      pFVar5[1].ComparisonIndex.Value = param_1->Index;
      return false;
    }
    **(int **)((longlong)this + 8) = iVar1 + 1;
  }
  return true;
}

// AddTypeIndex @ 14a0cd950

void __thiscall
FRigVMTemplateArgument::AddTypeIndex(FRigVMTemplateArgument *this,TRigVMTypeIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->TypeCategories).ArrayNum != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5992154289080894052>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x264,"TypeCategories.IsEmpty()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TRigVMTypeIndex_const_&>
            (&this->TypeIndices,param_1);
  return;
}

// EnsureValidExecuteType_NoLock @ 14a0d6ef0

void __thiscall
FRigVMTemplateArgument::EnsureValidExecuteType_NoLock
          (FRigVMTemplateArgument *this,FRigVMRegistryHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->TypeIndices).ArrayNum;
  pFVar3 = (this->TypeIndices).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->TypeIndices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRigVMTypeIndex,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(param_1->Registry->_padding_ + 0x118))(param_1->Registry,pFVar3);
    pFVar3 = pFVar3 + 0xc;
  }
  return;
}

// FindIndex @ 14a0da660

int __thiscall
FRigVMTemplateArgument::CategoryViews::FindIndex(CategoryViews *this,TRigVMTypeIndex *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Types).ArrayNum;
  iVar9 = 0;
  pFVar7 = (this->Types).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x10;
  do {
    while( true ) {
      if ((this->Types).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TArrayView<TRigVMTypeIndex_const_,int>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar8) {
        return -1;
      }
      lVar4 = *(longlong *)pFVar7;
      iVar3 = *(int *)(pFVar7 + 8);
      lVar1 = lVar4 + (longlong)iVar3 * 0xc;
      if (lVar4 != lVar1) break;
LAB_14a0da702:
      iVar9 = iVar9 + iVar3;
      pFVar7 = pFVar7 + 0x10;
    }
    lVar5 = lVar4;
    do {
      if (*(int *)(lVar5 + 8) == param_1->Index) {
        iVar6 = (int)((lVar5 - lVar4) / 0xc);
        if (iVar6 != -1) {
          return iVar6 + iVar9;
        }
        goto LAB_14a0da702;
      }
      lVar5 = lVar5 + 0xc;
    } while (lVar5 != lVar1);
    iVar9 = iVar9 + iVar3;
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// FindTypeIndex @ 14a0de5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FRigVMTemplateArgument::FindTypeIndex
          (FRigVMTemplateArgument *this,TRigVMTypeIndex *param_1,FRigVMRegistryHandle *param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  CategoryViews *pCVar6;
  code **ppcVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_e8 [32];
  char local_c8 [4];
  int local_c4 [3];
  CategoryViews local_b8;
  FRigVMTemplateArgument *local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  int local_88;
  undefined4 uStack_84;
  FRigVMRegistryHandle *pFStack_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (this->bUseCategories == false) {
    pFVar11 = (this->TypeIndices).AllocatorInstance.Data;
    if (pFVar11 != pFVar11 + (longlong)(this->TypeIndices).ArrayNum * 0xc) {
      pFVar13 = pFVar11;
      do {
        if (*(int *)(pFVar13 + 8) == param_1->Index) {
          lVar9 = ((longlong)pFVar13 - (longlong)pFVar11) / 6 +
                  ((longlong)pFVar13 - (longlong)pFVar11 >> 0x3f);
          return (int)(lVar9 >> 1) - (int)(lVar9 >> 0x3f);
        }
        pFVar13 = pFVar13 + 0xc;
      } while (pFVar13 != pFVar11 + (longlong)(this->TypeIndices).ArrayNum * 0xc);
    }
    iVar10 = -1;
  }
  else {
    iVar12 = 0;
    if (*(longlong *)&this->FilterType == 0) {
      local_b8.Types.AllocatorInstance.Data = *(FScriptContainerElement **)&param_1->Name;
      iVar2 = param_1->Index;
      pCVar6 = CategoryViews::CategoryViews(&local_b8,&this->TypeCategories,param_2);
      iVar3 = (pCVar6->Types).ArrayNum;
      pFVar11 = (pCVar6->Types).AllocatorInstance.Data;
      pFVar13 = pFVar11 + (longlong)iVar3 * 0x10;
      while( true ) {
        if ((pCVar6->Types).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TArrayView<TRigVMTypeIndex_const_,int>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_c8);
        }
        if (pFVar11 == pFVar13) break;
        lVar5 = *(longlong *)pFVar11;
        iVar4 = *(int *)(pFVar11 + 8);
        lVar9 = lVar5 + (longlong)iVar4 * 0xc;
        lVar8 = lVar5;
        if (lVar5 == lVar9) {
LAB_14a0de7d4:
          iVar12 = iVar12 + iVar4;
          pFVar11 = pFVar11 + 0x10;
        }
        else {
          do {
            if (*(int *)(lVar8 + 8) == iVar2) {
              iVar10 = (int)((lVar8 - lVar5) / 0xc);
              if (iVar10 == -1) goto LAB_14a0de7d4;
              iVar10 = iVar10 + iVar12;
              goto LAB_14a0de7e7;
            }
            lVar8 = lVar8 + 0xc;
          } while (lVar8 != lVar9);
          iVar12 = iVar12 + iVar4;
          pFVar11 = pFVar11 + 0x10;
        }
      }
      iVar10 = -1;
LAB_14a0de7e7:
      if ((FName)local_b8.Types.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_b8.Types.AllocatorInstance.Data);
      }
    }
    else {
      local_c8[0] = '\0';
      local_c4[0] = 0;
      pCVar6 = CategoryViews::CategoryViews(&local_b8,&this->TypeCategories,param_2);
      local_88 = param_1->Index;
      pcStack_a0 = (code *)local_c4;
      local_98 = local_c8;
      local_78[0] = (code *)0x0;
      local_a8 = this;
      pFStack_80 = param_2;
      local_50 = FMemory::Malloc(0x38,8);
      *local_50 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRigVMTemplateArgument::FindTypeIndex'::`8'::<lambda_1>,0,1>
                           ::_vftable_;
      FVar1 = param_1->Name;
      local_50[1] = (code *)local_a8;
      local_50[2] = pcStack_a0;
      *(undefined4 *)(local_50 + 3) = (undefined4)local_98;
      *(undefined4 *)((longlong)local_50 + 0x1c) = local_98._4_4_;
      *(uint *)(local_50 + 4) = FVar1.ComparisonIndex.Value.Value;
      *(uint *)((longlong)local_50 + 0x24) = FVar1.Number;
      local_50[5] = (code *)CONCAT44(uStack_84,local_88);
      local_50[6] = (code *)pFStack_80;
      if (local_50 + 1 != (code **)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRigVMTemplateArgument::FindTypeIndex'::__l8::<lambda_1>,bool,TRigVMTypeIndex>
                      ::Call;
      }
      CategoryViews::ForEachType(pCVar6,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_78);
      if (local_78[0] != (code *)0x0) {
        ppcVar7 = local_78 + 2;
        if (local_50 != (code **)0x0) {
          ppcVar7 = local_50;
        }
        (**(code **)(*ppcVar7 + 0x10))();
      }
      if (local_b8.Types.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Types.AllocatorInstance.Data);
      }
      iVar10 = -1;
      if (local_c8[0] != '\0') {
        iVar10 = local_c4[0];
      }
    }
  }
  return iVar10;
}

// ForEachType @ 14a0de8d0

void __thiscall
FRigVMTemplateArgument::CategoryViews::ForEachType
          (CategoryViews *this,TFunction<bool___cdecl(TRigVMTypeIndex)> *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined4 local_40;
  
  uVar2 = (this->Types).ArrayNum;
  uVar5 = (ulonglong)(int)uVar2;
  pFVar10 = (this->Types).AllocatorInstance.Data;
  pFVar9 = pFVar10 + uVar5 * 0x10;
  do {
    if ((this->Types).ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<TArrayView<TRigVMTypeIndex_const_,int>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar9) {
      return;
    }
    puVar8 = *(undefined8 **)pFVar10;
    puVar1 = (undefined8 *)((longlong)puVar8 + (longlong)*(int *)(pFVar10 + 8) * 0xc);
    if (puVar8 != puVar1) {
      do {
        local_48 = *puVar8;
        local_40 = *(undefined4 *)(puVar8 + 1);
        UE::Core::Private::Function::CheckCallable(*(void **)param_1);
        pcVar3 = *(code **)param_1;
        plVar7 = *(longlong **)&param_1->field_0x28;
        if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
          plVar7 = (longlong *)&param_1->field_0x10;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar4 = (*pcVar3)(uVar6,&local_48);
        if (cVar4 == '\0') {
          return;
        }
        puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
      } while (puVar8 != puVar1);
    }
    uVar5 = (ulonglong)uVar2;
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// ForEachType @ 14a0de9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMTemplateArgument::ForEachType
          (FRigVMTemplateArgument *this,TFunction<bool___cdecl(TRigVMTypeIndex)> *param_1,
          FRigVMRegistryHandle *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  CategoryViews *pCVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  CategoryViews local_c8;
  code *local_b8 [2];
  longlong local_a8 [3];
  longlong *local_90;
  FRigVMTemplateArgument *local_88;
  longlong local_78;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong *local_50;
  FRigVMRegistryHandle *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (this->bUseCategories == false) {
    local_b8[0] = *(code **)param_1;
    local_90 = (longlong *)0x0;
    if (local_b8[0] != (code *)0x0) {
      puVar6 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar6 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar6)(puVar6,local_a8);
    }
    iVar2 = (this->TypeIndices).ArrayNum;
    pFVar8 = (this->TypeIndices).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 0xc;
    while( true ) {
      if ((this->TypeIndices).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TRigVMTypeIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (pFVar8 == pFVar1) break;
                    /* WARNING: Load size is inaccurate */
      local_c8.Types.AllocatorInstance.Data = *pFVar8;
      local_c8.Types.ArrayNum = *(int *)(pFVar8 + 8);
      UE::Core::Private::Function::CheckCallable(local_b8[0]);
      pcVar3 = local_b8[0];
      plVar7 = local_a8;
      if (local_90 != (longlong *)0x0) {
        plVar7 = local_90;
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(uVar4,&local_c8);
      pFVar8 = pFVar8 + 0xc;
    }
    if (local_b8[0] != (code *)0x0) {
      plVar7 = local_a8;
      if (local_90 != (longlong *)0x0) {
        plVar7 = local_90;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  else {
    if (*(longlong *)&this->FilterType == 0) {
      pCVar5 = CategoryViews::CategoryViews(&local_c8,&this->TypeCategories,param_2);
      CategoryViews::ForEachType(pCVar5,param_1);
    }
    else {
      pCVar5 = CategoryViews::CategoryViews(&local_c8,&this->TypeCategories,param_2);
      local_78 = *(longlong *)param_1;
      local_50 = (longlong *)0x0;
      local_88 = this;
      if (local_78 != 0) {
        puVar6 = (undefined8 *)&param_1->field_0x10;
        if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
          puVar6 = *(undefined8 **)&param_1->field_0x28;
        }
        (**(code **)*puVar6)(puVar6,&local_68);
      }
      local_b8[0] = (code *)0x0;
      local_48 = param_2;
      local_90 = FMemory::Malloc(0x60,0x10);
      *local_90 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FRigVMTemplateArgument::ForEachType'::`8'::<lambda_1>,0,1>
                   ::_vftable_;
      local_90[2] = (longlong)local_88;
      local_90[4] = local_78;
      local_90[9] = (longlong)local_50;
      local_50 = (longlong *)0x0;
      local_90[6] = local_68;
      local_90[7] = lStack_60;
      local_90[8] = local_58;
      if (local_90[4] != 0) {
        local_78 = 0;
      }
      local_90[10] = (longlong)local_48;
      if (local_90 + 2 != (longlong *)0x0) {
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRigVMTemplateArgument::ForEachType'::__l8::<lambda_1>,bool,TRigVMTypeIndex>
                      ::Call;
      }
      CategoryViews::ForEachType(pCVar5,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_b8);
      if (local_b8[0] != (code *)0x0) {
        plVar7 = local_a8;
        if (local_90 != (longlong *)0x0) {
          plVar7 = local_90;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_78 != 0) {
        plVar7 = &local_68;
        if (local_50 != (longlong *)0x0) {
          plVar7 = local_50;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    if (local_c8.Types.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Types.AllocatorInstance.Data);
    }
  }
  return;
}

// GetAllTypes @ 14a0df310

void __thiscall
FRigVMTemplateArgument::GetAllTypes
          (FRigVMTemplateArgument *this,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *param_1
          )

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  GetAllTypes_NoLock(this,param_1,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if ((int)aVar2 + -1 < 0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x26a,"CurrentLockCount >= 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if (aVar2 != (atomic<int>)0x1) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return;
}

// GetAllTypes_NoLock @ 14a0df4e0

void __thiscall
FRigVMTemplateArgument::GetAllTypes_NoLock
          (FRigVMTemplateArgument *this,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *param_1
          ,FRigVMRegistryHandle *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  ulonglong uVar13;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  if (this->bUseCategories == false) {
    TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->TypeIndices);
    return;
  }
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  *piVar2 = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  uVar5 = (this->TypeCategories).ArrayNum;
  uVar13 = (ulonglong)(int)uVar5;
  pFVar18 = (this->TypeCategories).AllocatorInstance.Data;
  pFVar3 = pFVar18 + uVar13;
  do {
    while( true ) {
      if ((this->TypeCategories).ArrayNum != (int)uVar13) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<enum_FRigVMTemplateArgument::ETypeCategory_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar18 == pFVar3) {
        return;
      }
      pcVar7 = *(code **)(param_2->Registry->_padding_ + 0x140);
      if (*(longlong *)&this->FilterType == 0) break;
      puVar15 = (undefined8 *)(*pcVar7)(param_2->Registry,*pFVar18);
      iVar6 = *(int *)(puVar15 + 1);
      pFVar19 = (FScriptContainerElement *)*puVar15;
      pFVar4 = pFVar19 + (longlong)iVar6 * 0xc;
      while( true ) {
        if (*(int *)(puVar15 + 1) != iVar6) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TRigVMTypeIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar19 == pFVar4) break;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->FilterType);
        plVar8 = *(longlong **)&(this->FilterType).field_0x28;
        pcVar7 = *(code **)&this->FilterType;
        plVar17 = (longlong *)&(this->FilterType).field_0x10;
        if (plVar8 != (longlong *)0x0) {
          plVar17 = plVar8;
        }
        uVar16 = (**(code **)(*plVar17 + 8))();
        cVar11 = (*pcVar7)(uVar16,pFVar19,param_2);
        if (cVar11 != '\0') {
          pFVar9 = (param_1->AllocatorInstance).Data;
          if (((pFVar9 <= pFVar19) && (pFVar19 < pFVar9 + (longlong)*piVar1 * 0xc)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = *piVar2;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&param_1->AllocatorInstance,piVar1);
          }
          *piVar2 = iVar12 + 1;
          pFVar9 = (param_1->AllocatorInstance).Data;
          *(undefined8 *)(pFVar9 + (longlong)iVar12 * 0xc) = *(undefined8 *)pFVar19;
          *(undefined4 *)(pFVar9 + (longlong)iVar12 * 0xc + 8) = *(undefined4 *)(pFVar19 + 8);
        }
        pFVar19 = pFVar19 + 0xc;
      }
LAB_14a0df77d:
      pFVar18 = pFVar18 + 1;
      uVar13 = (ulonglong)uVar5;
    }
    pTVar14 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
    if ((param_1 == pTVar14) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar6 = pTVar14->ArrayNum;
    if (iVar6 == 0) goto LAB_14a0df77d;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,iVar6,&param_1->AllocatorInstance,piVar2,piVar1);
    memcpy((param_1->AllocatorInstance).Data + (longlong)iVar12 * 0xc,
           (pTVar14->AllocatorInstance).Data,(longlong)iVar6 * 0xc);
    pFVar18 = pFVar18 + 1;
    uVar13 = (ulonglong)uVar5;
  } while( true );
}

// GetArrayType @ 14a0e14f0

EArrayType __thiscall FRigVMTemplateArgument::GetArrayType(FRigVMTemplateArgument *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  EArrayType EVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar7 = (*pcVar4)();
    return EVar7;
  }
  EVar7 = GetArrayType_NoLock(this,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return EVar7;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return EVar7;
}

// GetArrayType_NoLock @ 14a0e19f0

EArrayType __thiscall
FRigVMTemplateArgument::GetArrayType_NoLock
          (FRigVMTemplateArgument *this,FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  EArrayType EVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_88 [4];
  undefined4 local_84 [3];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> local_48;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  if ((this->CachedArrayType).bIsSet != false) {
    return (this->CachedArrayType).TypedValue;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  GetAllTypes_NoLock(this,&local_48,param_1);
  iVar2 = local_48.ArrayNum;
  lVar10 = (longlong)local_48.ArrayNum;
  if (local_48.ArrayNum < 1) {
    EVar7 = EArrayType_Invalid;
  }
  else {
    local_78 = *(undefined8 *)local_48.AllocatorInstance.Data;
    local_70 = *(undefined4 *)(local_48.AllocatorInstance.Data + 8);
    cVar3 = (**(code **)(param_1->Registry->_padding_ + 0x108))(param_1->Registry,&local_78);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    bVar4 = IsSingleton_NoLock(this,&local_38,param_1);
    if ((!bVar4) && (uVar8 = 1, 1 < iVar2)) {
      lVar9 = 0xc;
      lVar11 = 1;
      do {
        uVar6 = 0;
        if ((int)uVar8 < local_48.ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            EVar7 = (*pcVar1)();
            return EVar7;
          }
        }
        local_58 = *(undefined8 *)(local_48.AllocatorInstance.Data + lVar9);
        if (*(int *)(local_48.AllocatorInstance.Data + lVar9 + 8) != -1) {
          local_60 = *(undefined4 *)(local_48.AllocatorInstance.Data + lVar9 + 8);
          local_68 = local_58;
          cVar5 = (**(code **)(param_1->Registry->_padding_ + 0x108))(param_1->Registry,&local_68);
          if ((uint)(cVar5 != '\0') != (uint)(cVar3 != '\0')) {
            if ((TOptional<FRigVMTemplateArgument::EArrayType> *)local_84 != &this->CachedArrayType)
            {
              (this->CachedArrayType).TypedValue = EArrayType_Mixed;
              (this->CachedArrayType).bIsSet = true;
            }
            goto LAB_14a0e1b95;
          }
        }
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 1;
        lVar9 = lVar9 + 0xc;
      } while (lVar11 < lVar10);
    }
    if ((TOptional<FRigVMTemplateArgument::EArrayType> *)local_88 != &this->CachedArrayType) {
      (this->CachedArrayType).bIsSet = true;
      (this->CachedArrayType).TypedValue = (uint)(cVar3 != '\0');
    }
LAB_14a0e1b95:
    if ((this->CachedArrayType).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        EVar7 = (*pcVar1)();
        return EVar7;
      }
    }
    EVar7 = (this->CachedArrayType).TypedValue;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return EVar7;
}

// GetNumTypes @ 14a0e85d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FRigVMTemplateArgument::GetNumTypes(FRigVMTemplateArgument *this,FRigVMRegistryHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  CategoryViews *this_00;
  longlong lVar3;
  code **ppcVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  int local_84;
  CategoryViews local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->bUseCategories == false) {
    local_84 = (this->TypeIndices).ArrayNum;
  }
  else {
    iVar6 = 0;
    if (*(longlong *)&this->FilterType == 0) {
      pFVar5 = (this->TypeCategories).AllocatorInstance.Data;
      iVar2 = (this->TypeCategories).ArrayNum;
      pFVar1 = pFVar5 + iVar2;
      while( true ) {
        if ((this->TypeCategories).ArrayNum != iVar2) {
          `TCheckedPointerIterator<enum_FRigVMTemplateArgument::ETypeCategory_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_88);
        }
        local_84 = iVar6;
        if (pFVar5 == pFVar1) break;
        lVar3 = (**(code **)(param_1->Registry->_padding_ + 0x140))(param_1->Registry,*pFVar5);
        iVar6 = iVar6 + *(int *)(lVar3 + 8);
        pFVar5 = pFVar5 + 1;
      }
    }
    else {
      local_84 = 0;
      this_00 = CategoryViews::CategoryViews(&local_80,&this->TypeCategories,param_1);
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x20,8);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes'::`8'::<lambda_1>,0,1>
                           ::_vftable_;
      local_40[1] = (code *)this;
      local_40[2] = (code *)&local_84;
      local_40[3] = (code *)param_1;
      if (local_40 + 1 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRigVMTemplateArgument::GetNumTypes'::__l8::<lambda_1>,bool,TRigVMTypeIndex>
                      ::Call;
      }
      CategoryViews::ForEachType(this_00,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_68);
      if (local_68[0] != (code *)0x0) {
        ppcVar4 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar4 = local_40;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      if (local_80.Types.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Types.AllocatorInstance.Data);
      }
    }
  }
  return local_84;
}

// GetNumTypes_NoLock @ 14a0e8750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FRigVMTemplateArgument::GetNumTypes_NoLock
          (FRigVMTemplateArgument *this,FRigVMRegistryHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  CategoryViews *this_00;
  longlong lVar3;
  code **ppcVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  int local_84;
  CategoryViews local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->bUseCategories == false) {
    local_84 = (this->TypeIndices).ArrayNum;
  }
  else {
    iVar6 = 0;
    if (*(longlong *)&this->FilterType == 0) {
      pFVar5 = (this->TypeCategories).AllocatorInstance.Data;
      iVar2 = (this->TypeCategories).ArrayNum;
      pFVar1 = pFVar5 + iVar2;
      while( true ) {
        if ((this->TypeCategories).ArrayNum != iVar2) {
          `TCheckedPointerIterator<enum_FRigVMTemplateArgument::ETypeCategory_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_88);
        }
        local_84 = iVar6;
        if (pFVar5 == pFVar1) break;
        lVar3 = (**(code **)(param_1->Registry->_padding_ + 0x140))(param_1->Registry,*pFVar5);
        iVar6 = iVar6 + *(int *)(lVar3 + 8);
        pFVar5 = pFVar5 + 1;
      }
    }
    else {
      local_84 = 0;
      this_00 = CategoryViews::CategoryViews(&local_80,&this->TypeCategories,param_1);
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x20,8);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRigVMTemplateArgument::GetNumTypes_NoLock'::`8'::<lambda_1>,0,1>
                           ::_vftable_;
      local_40[1] = (code *)this;
      local_40[2] = (code *)&local_84;
      local_40[3] = (code *)param_1;
      if (local_40 + 1 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRigVMTemplateArgument::GetNumTypes_NoLock'::__l8::<lambda_1>,bool,TRigVMTypeIndex>
                      ::Call;
      }
      CategoryViews::ForEachType(this_00,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_68);
      if (local_68[0] != (code *)0x0) {
        ppcVar4 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar4 = local_40;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
      if (local_80.Types.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Types.AllocatorInstance.Data);
      }
    }
  }
  return local_84;
}

// GetSupportedTypeIndices @ 14a0ec3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMTemplateArgument::GetSupportedTypeIndices
          (FRigVMTemplateArgument *this,
          TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FRigVMRegistry_NoLock *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  atomic<unsigned_int> aVar10;
  undefined8 uVar11;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined ***pppuVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  FRigVMRegistryHandle local_e0;
  char local_d8;
  FRigVMRegistry_RWLock *local_d0;
  atomic<FRigVMRegistry_NoLock::ELockType> local_c8;
  TRigVMTypeIndex local_c0;
  FRigVMRegistryHandle *local_b0;
  TRigVMTypeIndex local_a8;
  FRigVMTemplateArgument *local_98;
  FName local_88;
  int local_80;
  code *local_78 [2];
  undefined **local_68;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *local_60;
  FRigVMRegistryHandle **local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_98 = this;
  local_e0.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_d8 = '\x01';
  local_c8 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar4 = ((FRigVMRegistry_RWLock *)local_e0.Registry)->WriteLockOwnerThread;
  local_d0 = (FRigVMRegistry_RWLock *)local_e0.Registry;
  aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar4 != aVar10) {
    AcquireSRWLockShared((PSRWLOCK)&local_d0->Lock);
  }
  LOCK();
  paVar1 = &local_d0->LockCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar3 == (atomic<int>)0x0) {
    LOCK();
    local_d0->LockType = local_c8;
    UNLOCK();
  }
  else if ((local_c8 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar12 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
    return pTVar12;
  }
  local_b0 = &local_e0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar5 = param_1->ArrayNum;
  if (iVar5 == 0) {
    local_50 = (undefined ***)0x0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::`5'::<lambda_2>,0,0>
                ::_vftable_;
    local_58 = &local_b0;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::__l5::<lambda_2>,bool,TRigVMTypeIndex>
                  ::Call;
    local_60 = __return_storage_ptr__;
    ForEachType(this,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_78,&local_e0);
    if (local_78[0] != (code *)0x0) {
      pppuVar13 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar13 = local_50;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  else {
    pFVar14 = (param_1->AllocatorInstance).Data;
    pFVar2 = pFVar14 + (longlong)iVar5 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar5) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_e8);
      }
      if (pFVar14 == pFVar2) break;
      GetTypeIndex_NoLock(this,&local_c0,*(int *)pFVar14,&local_e0);
      if (local_c0.Index != -1) {
        if (local_c0.Name == (FName)0x0) {
          local_80 = local_c0.Index;
          local_88 = local_c0.Name;
          pFVar6 = local_b0->Registry;
          lVar7 = pFVar6->_padding_;
          uVar11 = (**(code **)(lVar7 + 0xe8))(pFVar6,&local_88);
          (**(code **)(lVar7 + 0xe0))(pFVar6,&local_a8,uVar11);
          this = local_98;
        }
        else {
          local_a8.Name = local_c0.Name;
          local_a8.Index = local_c0.Index;
        }
        TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TRigVMTypeIndex>
                  (__return_storage_ptr__,&local_a8);
      }
      pFVar14 = pFVar14 + 4;
    }
  }
  if (local_d8 != '\0') {
    LOCK();
    paVar1 = &local_d0->LockCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      LOCK();
      local_d0->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_c8 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar3 + -1 < 0) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar12 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar12;
      }
      aVar4 = local_d0->WriteLockOwnerThread;
      aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar4 != aVar10) {
        ReleaseSRWLockShared((PSRWLOCK)&local_d0->Lock);
      }
    }
    else if (local_c8 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar3 != (atomic<int>)0x1) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar12 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar12;
      }
      LOCK();
      local_d0->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_d0->Lock);
    }
  }
  return __return_storage_ptr__;
}

// GetSupportedTypeIndices_NoLock @ 14a0ec6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock
          (FRigVMTemplateArgument *this,
          TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,FRigVMRegistryHandle *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FRigVMRegistry_NoLock *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  TRigVMTypeIndex local_c0;
  FRigVMRegistryHandle *local_b0;
  FRigVMRegistryHandle *local_a8;
  FRigVMTemplateArgument *local_a0;
  TRigVMTypeIndex local_98;
  FName local_88;
  int local_80;
  code *local_78 [2];
  undefined **local_68;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *local_60;
  FRigVMRegistryHandle **local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = param_1->ArrayNum;
  local_b0 = param_2;
  local_a8 = param_2;
  local_a0 = this;
  if (iVar2 == 0) {
    local_50 = (undefined ***)0x0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::`5'::<lambda_2>,0,0>
                ::_vftable_;
    local_58 = &local_b0;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRigVMTemplateArgument::GetSupportedTypeIndices_NoLock'::__l5::<lambda_2>,bool,TRigVMTypeIndex>
                  ::Call;
    local_60 = __return_storage_ptr__;
    ForEachType(this,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_78,param_2);
    if (local_78[0] != (code *)0x0) {
      pppuVar6 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar6 = local_50;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  else {
    pFVar7 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_c8);
      }
      if (pFVar7 == pFVar1) break;
      GetTypeIndex_NoLock(local_a0,&local_c0,*(int *)pFVar7,local_a8);
      if (local_c0.Index != -1) {
        if (local_c0.Name == (FName)0x0) {
          local_80 = local_c0.Index;
          local_88 = local_c0.Name;
          pFVar3 = local_b0->Registry;
          lVar4 = pFVar3->_padding_;
          uVar5 = (**(code **)(lVar4 + 0xe8))(pFVar3,&local_88);
          (**(code **)(lVar4 + 0xe0))(pFVar3,&local_98,uVar5);
        }
        else {
          local_98.Name = local_c0.Name;
          local_98.Index = local_c0.Index;
        }
        TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TRigVMTypeIndex>
                  (__return_storage_ptr__,&local_98);
      }
      pFVar7 = pFVar7 + 4;
    }
  }
  return __return_storage_ptr__;
}

// GetTypeIndex @ 14a0f00c0

TRigVMTypeIndex * __thiscall
FRigVMTemplateArgument::CategoryViews::GetTypeIndex
          (CategoryViews *this,TRigVMTypeIndex *__return_storage_ptr__,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TRigVMTypeIndex *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Types).ArrayNum;
  pFVar6 = (this->Types).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Types).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArrayView<TRigVMTypeIndex_const_,int>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if ((-1 < param_1) && (param_1 < *(int *)(pFVar6 + 8))) {
      if ((param_1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TRigVMTypeIndex *)(*pcVar3)();
        return pTVar5;
      }
      lVar2 = *(longlong *)pFVar6;
      __return_storage_ptr__->Name = *(FName *)(lVar2 + (longlong)param_1 * 0xc);
      __return_storage_ptr__->Index = *(int *)(lVar2 + 8 + (longlong)param_1 * 0xc);
      return __return_storage_ptr__;
    }
    param_1 = param_1 - *(int *)(pFVar6 + 8);
    pFVar6 = pFVar6 + 0x10;
  }
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  __return_storage_ptr__->Index = -1;
  return __return_storage_ptr__;
}

// GetTypeIndex @ 14a0f01b0

TRigVMTypeIndex * __thiscall
FRigVMTemplateArgument::GetTypeIndex
          (FRigVMTemplateArgument *this,TRigVMTypeIndex *__return_storage_ptr__,int param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  TRigVMTypeIndex *pTVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TRigVMTypeIndex *)(*pcVar4)();
      return pTVar7;
    }
  }
  GetTypeIndex_NoLock(this,__return_storage_ptr__,param_1,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if ((int)aVar2 + -1 < 0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x26a,"CurrentLockCount >= 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TRigVMTypeIndex *)(*pcVar4)();
          return pTVar7;
        }
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if (aVar2 != (atomic<int>)0x1) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TRigVMTypeIndex *)(*pcVar4)();
          return pTVar7;
        }
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return __return_storage_ptr__;
}

// GetTypeIndex_NoLock @ 14a0f0cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRigVMTypeIndex * __thiscall
FRigVMTemplateArgument::GetTypeIndex_NoLock
          (FRigVMTemplateArgument *this,TRigVMTypeIndex *__return_storage_ptr__,int param_1,
          FRigVMRegistryHandle *param_2)

{
  int iVar1;
  FName *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TRigVMTypeIndex *pTVar6;
  CategoryViews *pCVar7;
  code **ppcVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  longlong local_e0;
  undefined1 local_d8 [4];
  undefined4 local_d4;
  FName local_d0;
  int local_c8;
  FRigVMTemplateArgument *local_c0;
  code *pcStack_b8;
  int local_b0;
  undefined4 uStack_ac;
  FName *pFStack_a8;
  FRigVMRegistryHandle *local_a0;
  CategoryViews local_98;
  CategoryViews local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  uVar11 = (ulonglong)param_1;
  if (this->bUseCategories == false) {
    iVar1 = (this->TypeIndices).ArrayNum;
    local_e0 = (longlong)iVar1;
    if (iVar1 == 0) {
      (__return_storage_ptr__->Name).ComparisonIndex = 0;
      (__return_storage_ptr__->Name).Number = 0;
      __return_storage_ptr__->Index = -1;
    }
    else if ((param_1 < 0) || (iVar1 <= param_1)) {
      if (iVar1 < 1) {
        local_e8 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar6 = (TRigVMTypeIndex *)(*pcVar4)();
          return pTVar6;
        }
      }
      pFVar2 = (FName *)(this->TypeIndices).AllocatorInstance.Data;
      __return_storage_ptr__->Name = *pFVar2;
      __return_storage_ptr__->Index = pFVar2[1].ComparisonIndex.Value;
    }
    else {
      if ((param_1 < 0) &&
         (local_e8 = uVar11,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TRigVMTypeIndex *)(*pcVar4)();
        return pTVar6;
      }
      pFVar9 = (this->TypeIndices).AllocatorInstance.Data;
      __return_storage_ptr__->Name = *(FName *)(pFVar9 + uVar11 * 0xc);
      __return_storage_ptr__->Index = *(int *)(pFVar9 + uVar11 * 0xc + 8);
    }
  }
  else if (*(longlong *)&this->FilterType == 0) {
    pCVar7 = CategoryViews::CategoryViews(&local_88,&this->TypeCategories,param_2);
    iVar1 = (pCVar7->Types).ArrayNum;
    pFVar9 = (pCVar7->Types).AllocatorInstance.Data;
    pFVar12 = pFVar9 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pCVar7->Types).ArrayNum != iVar1) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<TArrayView<TRigVMTypeIndex_const_,int>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_d8);
      }
      if (pFVar9 == pFVar12) {
        (__return_storage_ptr__->Name).ComparisonIndex = 0;
        (__return_storage_ptr__->Name).Number = 0;
        __return_storage_ptr__->Index = -1;
        goto LAB_14a0f0f64;
      }
      iVar10 = (int)uVar11;
      if ((-1 < iVar10) && (iVar10 < *(int *)(pFVar9 + 8))) break;
      uVar11 = (ulonglong)(uint)(iVar10 - *(int *)(pFVar9 + 8));
      pFVar9 = pFVar9 + 0x10;
    }
    if (iVar10 < 0) {
      local_e8 = (ulonglong)iVar10;
      local_e0 = (longlong)*(int *)(pFVar9 + 8);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TRigVMTypeIndex *)(*pcVar4)();
        return pTVar6;
      }
    }
    lVar3 = *(longlong *)pFVar9;
    __return_storage_ptr__->Name = *(FName *)(lVar3 + (longlong)iVar10 * 0xc);
    __return_storage_ptr__->Index = *(int *)(lVar3 + 8 + (longlong)iVar10 * 0xc);
LAB_14a0f0f64:
    if (local_88.Types.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Types.AllocatorInstance.Data);
    }
  }
  else {
    local_c8 = -1;
    local_d0.ComparisonIndex.Value = 0;
    local_d0.Number = 0;
    local_d4 = 0;
    pCVar7 = CategoryViews::CategoryViews(&local_98,&this->TypeCategories,param_2);
    pcStack_b8 = (code *)&local_d4;
    pFStack_a8 = &local_d0;
    local_78[0] = (code *)0x0;
    local_c0 = this;
    local_b0 = param_1;
    local_a0 = param_2;
    local_50 = FMemory::Malloc(0x30,8);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FRigVMTemplateArgument::GetTypeIndex_NoLock'::`11'::<lambda_1>,0,1>
                         ::_vftable_;
    local_50[1] = (code *)local_c0;
    local_50[2] = pcStack_b8;
    local_50[3] = (code *)CONCAT44(uStack_ac,local_b0);
    local_50[4] = (code *)pFStack_a8;
    local_50[5] = (code *)local_a0;
    if (local_50 + 1 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FRigVMTemplateArgument::GetTypeIndex_NoLock'::__l11::<lambda_1>,bool,TRigVMTypeIndex>
                    ::Call;
    }
    CategoryViews::ForEachType(pCVar7,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_78);
    if (local_78[0] != (code *)0x0) {
      ppcVar8 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar8 = local_50;
      }
      (**(code **)(*ppcVar8 + 0x10))();
    }
    if (local_98.Types.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Types.AllocatorInstance.Data);
    }
    __return_storage_ptr__->Name = local_d0;
    __return_storage_ptr__->Index = local_c8;
  }
  return __return_storage_ptr__;
}

// IsExecute @ 14a0f90a0

bool __thiscall FRigVMTemplateArgument::IsExecute(FRigVMTemplateArgument *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  atomic<unsigned_int> aVar7;
  int iVar8;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar7) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar8 = IndexOfByPredicate<_FRigVMTemplateArgument::IsExecute_NoLock_::__l2::<lambda_1>_>
                    (this,&local_28,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if ((int)aVar2 + -1 < 0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x26a,"CurrentLockCount >= 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar7) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return iVar8 == -1;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if (aVar2 != (atomic<int>)0x1) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return iVar8 == -1;
}

// IsExecute_NoLock @ 14a0f94e0

bool __thiscall
FRigVMTemplateArgument::IsExecute_NoLock(FRigVMTemplateArgument *this,FRigVMRegistryHandle *param_1)

{
  int iVar1;
  
  iVar1 = IndexOfByPredicate<_FRigVMTemplateArgument::IsExecute_NoLock_::__l2::<lambda_1>_>
                    (this,(<lambda_1>)param_1,param_1);
  return iVar1 == -1;
}

// IsSingleton @ 14a0f9af0

bool __thiscall
FRigVMTemplateArgument::IsSingleton
          (FRigVMTemplateArgument *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<unsigned_int> aVar8;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar8) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  bVar5 = IsSingleton_NoLock(this,param_1,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar8) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return bVar5;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return bVar5;
}

// IsSingleton_NoLock @ 14a0f9cd0

bool __thiscall
FRigVMTemplateArgument::IsSingleton_NoLock
          (FRigVMTemplateArgument *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          FRigVMRegistryHandle *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  TRigVMTypeIndex *pTVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  TRigVMTypeIndex local_38;
  TRigVMTypeIndex local_28;
  
  if (this->bUseCategories == false) {
    iVar1 = param_1->ArrayNum;
    if (iVar1 == 0) {
      iVar5 = GetNumTypes_NoLock(this,param_2);
      iVar10 = 0;
    }
    else {
      if ((iVar1 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar10 = *(int *)(param_1->AllocatorInstance).Data;
      iVar5 = iVar1;
    }
    GetTypeIndex_NoLock(this,&local_38,iVar10,param_2);
    uVar8 = 1;
    if (1 < (longlong)iVar5) {
      lVar9 = 1;
      do {
        uVar6 = uVar8;
        if (iVar1 != 0) {
          uVar6 = 0;
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          uVar6 = *(uint *)((param_1->AllocatorInstance).Data + lVar9 * 4);
        }
        pTVar7 = GetTypeIndex_NoLock(this,&local_28,uVar6,param_2);
        if (pTVar7->Index != local_38.Index) goto LAB_14a0f9df5;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar5);
    }
    bVar3 = true;
  }
  else {
LAB_14a0f9df5:
    bVar3 = false;
  }
  return bVar3;
}

// Make @ 14a0fc320

FRigVMTemplateArgument * __cdecl
FRigVMTemplateArgument::Make(FRigVMTemplateArgument *__return_storage_ptr__,FProperty *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FRigVMRegistry_RWLock *pFVar7;
  FRigVMTemplateArgument *pFVar8;
  FRigVMRegistryHandle local_28;
  undefined1 local_20;
  FRigVMRegistry_RWLock *local_18;
  undefined1 local_10;
  
  pFVar7 = FRigVMRegistry_RWLock::Get();
  local_20 = 1;
  aVar3 = pFVar7->WriteLockOwnerThread;
  local_10 = 0;
  local_28.Registry = (FRigVMRegistry_NoLock *)pFVar7;
  local_18 = pFVar7;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar7->Lock);
  }
  LOCK();
  paVar1 = &pFVar7->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    pFVar7->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    UNLOCK();
  }
  FRigVMTemplateArgument(__return_storage_ptr__,param_1,&local_28);
  LOCK();
  paVar1 = &pFVar7->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    pFVar7->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else if ((int)aVar2 + -1 < 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x26a,"CurrentLockCount >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FRigVMTemplateArgument *)(*pcVar4)();
      return pFVar8;
    }
  }
  aVar3 = pFVar7->WriteLockOwnerThread;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar7->Lock);
  }
  return __return_storage_ptr__;
}

// Make_NoLock @ 14a0fd290

FRigVMTemplateArgument * __cdecl
FRigVMTemplateArgument::Make_NoLock
          (FRigVMTemplateArgument *__return_storage_ptr__,FProperty *param_1,
          FRigVMRegistryHandle *param_2)

{
  FRigVMTemplateArgument(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// RemoveType @ 14a108830

void __thiscall FRigVMTemplateArgument::RemoveType(FRigVMTemplateArgument *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  if ((this->TypeCategories).ArrayNum != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5992154289080894058>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x26a,"TypeCategories.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->TypeIndices).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
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
  _Dst = (this->TypeIndices).AllocatorInstance.Data + (longlong)param_1 * 0xc;
  iVar5 = (this->TypeIndices).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0xc,(longlong)iVar5 * 0xc);
  }
  piVar1 = &(this->TypeIndices).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,&(this->TypeIndices).AllocatorInstance,(this->TypeIndices).ArrayNum,
             &(this->TypeIndices).ArrayMax);
  return;
}

// TryToGetTypeIndex @ 14a112750

TOptional<TRigVMTypeIndex> * __thiscall
FRigVMTemplateArgument::TryToGetTypeIndex
          (FRigVMTemplateArgument *this,TOptional<TRigVMTypeIndex> *__return_storage_ptr__,
          int param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  TOptional<TRigVMTypeIndex> *pTVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TOptional<TRigVMTypeIndex> *)(*pcVar4)();
      return pTVar7;
    }
  }
  TryToGetTypeIndex_NoLock(this,__return_storage_ptr__,param_1,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if ((int)aVar2 + -1 < 0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x26a,"CurrentLockCount >= 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TOptional<TRigVMTypeIndex> *)(*pcVar4)();
          return pTVar7;
        }
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if (aVar2 != (atomic<int>)0x1) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TOptional<TRigVMTypeIndex> *)(*pcVar4)();
          return pTVar7;
        }
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return __return_storage_ptr__;
}

// TryToGetTypeIndex_NoLock @ 14a112930

TOptional<TRigVMTypeIndex> * __thiscall
FRigVMTemplateArgument::TryToGetTypeIndex_NoLock
          (FRigVMTemplateArgument *this,TOptional<TRigVMTypeIndex> *__return_storage_ptr__,
          int param_1,FRigVMRegistryHandle *param_2)

{
  bool bVar1;
  TRigVMTypeIndex *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  bVar1 = IsSingleton_NoLock(this,&local_18,param_2);
  if (bVar1) {
    pTVar2 = GetTypeIndex_NoLock(this,(TRigVMTypeIndex *)&local_18,0,param_2);
    local_18.AllocatorInstance.Data = *(FScriptContainerElement **)&pTVar2->Name;
    local_18.ArrayNum = pTVar2->Index;
  }
  else {
    GetTypeIndex_NoLock(this,(TRigVMTypeIndex *)&local_18,param_1,param_2);
    __return_storage_ptr__->bIsSet = false;
    if (local_18.ArrayNum == -1) {
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->TypedValue).Name = (FName)local_18.AllocatorInstance.Data;
  (__return_storage_ptr__->TypedValue).Index = local_18.ArrayNum;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

